#include  <DxLib.h>
#include  <time.h>

#define SCREEN_SIZE_X (1280)      // ��ʂ̉��T�C�Y
#define SCREEN_SIZE_Y (720)      // ��ʂ̏c�T�C�Y

bool System(void);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCMdLine, int nCmdShow)
{


    if (!System())
    {
        return false;
    }

    // �O���t�B�b�N�̓o�^
    // -------------------------------------------

    // �ϐ��̏�����
    // -------------------------------------------


    // �Q�[�����[�v
    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {

        SetWindowText("2016019_�c����");

        SetDrawScreen(DX_SCREEN_BACK);                      // �ޯ���̧�ɐݒ�
        ClsDrawScreen();                                    // ��ʏ���
        ScreenFlip(); // ���̉�ʂ�\��ʂɏu�Ժ��-
    }

    DxLib_End();    // DXײ���؂̏I������
    return 0;       // ������۸��т̏I��
}

bool System(void)
{
    //    ----------- ���я���
    SetWindowText("2016019_�c����");
    //     ���я���
    SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);         // 640�~480�ޯ�65536�FӰ�ނɐݒ�
    ChangeWindowMode(true);                                 // true:window  false:�ٽ�ذ�

    if (DxLib_Init() == -1)
    {
        return -1;                     // DXײ���؏���������
    }

    _dbgSetup(SCREEN_SIZE_X, SCREEN_SIZE_Y, 255);

    srand((unsigned int)time(NULL));

    return true;

}