// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� NHQ_CORE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// NHQ_CORE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef NHQ_CORE_EXPORTS
#define NHQ_CORE_API __declspec(dllexport)
#else
#define NHQ_CORE_API __declspec(dllimport)
#endif

// �����Ǵ� nhq_core.dll ������
class NHQ_CORE_API Cnhq_core {
public:
	Cnhq_core(void);
	// TODO:  �ڴ�������ķ�����
};

extern NHQ_CORE_API int nnhq_core;

NHQ_CORE_API int fnnhq_core(void);



/*****************************---------nai he qiao client-----------*********************************************/

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>


// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"

 struct NHQ_CLIENT{
	SOCKET ConnectSocket;
};
extern  NHQ_CLIENT nhq_client;
bool init_NHQ_client();