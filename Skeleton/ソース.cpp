#include  <DxLib.h>
#include  <time.h>

#define SCREEN_SIZE_X (1280)      // 画面の横サイズ
#define SCREEN_SIZE_Y (720)      // 画面の縦サイズ

bool System(void);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCMdLine, int nCmdShow)
{


    if (!System())
    {
        return false;
    }

    // グラフィックの登録
    // -------------------------------------------

    // 変数の初期化
    // -------------------------------------------


    // ゲームループ
    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {

        SetWindowText("2016019_田中矯");

        SetDrawScreen(DX_SCREEN_BACK);                      // ﾊﾞｯｸﾊﾞﾌｧに設定
        ClsDrawScreen();                                    // 画面消去
        ScreenFlip(); // 裏の画面を表画面に瞬間ｺﾋﾟ-
    }

    DxLib_End();    // DXﾗｲﾌﾞﾗﾘの終了処理
    return 0;       // このﾌﾟﾛｸﾞﾗﾑの終了
}

bool System(void)
{
    //    ----------- ｼｽﾃﾑ処理
    SetWindowText("2016019_田中矯");
    //     ｼｽﾃﾑ処理
    SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);         // 640×480ﾄﾞｯﾄ65536色ﾓｰﾄﾞに設定
    ChangeWindowMode(true);                                 // true:window  false:ﾌﾙｽｸﾘｰﾝ

    if (DxLib_Init() == -1)
    {
        return -1;                     // DXﾗｲﾌﾞﾗﾘ初期化処理
    }

    _dbgSetup(SCREEN_SIZE_X, SCREEN_SIZE_Y, 255);

    srand((unsigned int)time(NULL));

    return true;

}