#include  <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE , LPSTR, int)
{
    SetWindowText(L"2016019_�c����");

    ChangeWindowMode(true);

    if (DxLib_Init())
    {
        return-1;
    }

    SetDrawScreen(DX_SCREEN_BACK);                      // �ޯ���̧�ɐݒ�

    // �Q�[�����[�v
    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {
        ClsDrawScreen();  // ��ʏ���
        ScreenFlip();     // ���̉�ʂ�\��ʂɏu�Ժ��-
    }

    DxLib_End();    // DXײ���؂̏I������
    return 0;       // ������۸��т̏I��
}
