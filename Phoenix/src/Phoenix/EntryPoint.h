#pragma once

#ifdef PN_PLATFORM_WINDOWS

extern Phoenix::Application* Phoenix::CreateApplication();   // 声明创建应用程序的函数在另一个源文件

int main(int argc, char** argv)
{
	auto app = Phoenix::CreateApplication(); // 创建应用程序实例
	app->Run();
	delete app;
}

#endif