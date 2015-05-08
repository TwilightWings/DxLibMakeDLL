// -------------------------------------------------------------------------------
// 
// 		�c�w���C�u����		Windows�p�X���b�h�֌W�v���O�����w�b�_�t�@�C��
// 
// 				Ver 3.12a
// 
// -------------------------------------------------------------------------------

#ifndef __DXTHREADWIN_H__
#define __DXTHREADWIN_H__

// �C���N���[�h ------------------------------------------------------------------
#include "../DxCompileConfig.h"

#include <windows.h>

namespace DxLib
{

// �}�N����` --------------------------------------------------------------------

// �\���̒�` --------------------------------------------------------------------

// �N���e�B�J���Z�N�V����
struct DX_CRITICAL_SECTION
{
	CRITICAL_SECTION		CriticalSection ;
#if !defined( __BCC ) || defined( _DEBUG )
	char					FilePath[ 256 ] ;
	int						LineNo ;
	DWORD					ThreadID ;
#endif
} ;

// ��̃X���b�h�̏��
struct THREAD_INFO
{
	void					( *pFunction )( THREAD_INFO *, void * ) ;
	void					*pParam ;
	void					*LocalValueAddr ;
	HANDLE					ThreadHandle ;
	DWORD					ThreadID ;
} ;

// �e�[�u��-----------------------------------------------------------------------

// �������ϐ��錾 --------------------------------------------------------------

// �֐��v���g�^�C�v�錾-----------------------------------------------------------

}

#endif // __DXTHREADWIN_H__