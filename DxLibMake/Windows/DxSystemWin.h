// -------------------------------------------------------------------------------
// 
// 		ＤＸライブラリ		Windows用システムプログラムヘッダファイル
// 
// 				Ver 3.12a
// 
// -------------------------------------------------------------------------------

#ifndef __DXSYSTEMWIN_H__
#define __DXSYSTEMWIN_H__

// インクルード ------------------------------------------------------------------
#include "../DxCompileConfig.h"
#include "DxWindow.h"

namespace DxLib
{

// マクロ定義 --------------------------------------------------------------------

// ソフトがアクティブかどうかをチェックする
#define CheckActiveState()				\
	if( WinData.ActiveFlag == FALSE )	\
		DxActiveWait() ;

// 構造体定義 --------------------------------------------------------------------

// テーブル-----------------------------------------------------------------------

// 内部大域変数宣言 --------------------------------------------------------------

// 関数プロトタイプ宣言-----------------------------------------------------------

}

#endif // __DXSYSTEMWIN_H__
