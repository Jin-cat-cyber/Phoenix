#pragma once

#ifdef PN_PLATFORM_WINDOWS

extern Phoenix::Application* Phoenix::CreateApplication();   // ��������Ӧ�ó���ĺ�������һ��Դ�ļ�

int main(int argc, char** argv)
{
	auto app = Phoenix::CreateApplication(); // ����Ӧ�ó���ʵ��
	app->Run();
	delete app;
}

#endif