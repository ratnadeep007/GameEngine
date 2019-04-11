#include <Hazel.h>

class ExmapleLayer : public Hazel::Layer
{
public:
	ExmapleLayer()
		: Layer("Example")
	{

	}

	void OnUpdate() override
	{
		HZ_INFO("ExampleLayer::Update");
	}

	void OnEvent(Hazel::Event& event) override
	{
		HZ_TRACE("{0}", event);
	}
};

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExmapleLayer());
		PushOverlay(new Hazel::ImGuiLayer());
	}
	~Sandbox()
	{

	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}