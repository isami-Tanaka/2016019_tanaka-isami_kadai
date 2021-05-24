#include  <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE , LPSTR, int)
{
    SetWindowText(L"2016019_田中矯");

    ChangeWindowMode(true);

    if (DxLib_Init())
    {
        return-1;
    }

    SetDrawScreen(DX_SCREEN_BACK);                      // ﾊﾞｯｸﾊﾞﾌｧに設定

    // ゲームループ
    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {
        ClsDrawScreen();  // 画面消去
        ScreenFlip();     // 裏の画面を表画面に瞬間ｺﾋﾟ-
    }

    DxLib_End();    // DXﾗｲﾌﾞﾗﾘの終了処理
    return 0;       // このﾌﾟﾛｸﾞﾗﾑの終了
}
