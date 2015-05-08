// -------------------------------------------------------------------------------
// 
// 		�c�w���C�u����		�c�����������w����̂f�t�h�c��`
// 
// 				Ver 3.12a
// 
// -------------------------------------------------------------------------------

// �c�w���C�u�����쐬���p��`
#define __DX_MAKE

#include "DxGuid.h"

namespace DxLib
{

GUID IID_IUNKNOWN =						{ 0x00000000, 0x0000, 0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } ;
GUID _GUID_NULL =						{ 0x00000000, 0x0000, 0x0000,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 } ;
GUID IID_ISTREAM =						{ 0x0000000c, 0x0000, 0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } ;
GUID IID_IDIRECT3D9EX =					{ 0x02177241, 0x69FC, 0x400C,0x8F,0xF1,0x93,0xA4,0x4D,0xF6,0x86,0x1D } ;
GUID IID_IDIRECT3DDEVICE9EX =			{ 0xB18B10CE, 0x2649, 0x405a,0x87,0x0F,0x95,0xF7,0x77,0xD4,0x31,0x3A } ;
GUID IID_IDIRECT3DSWAPCHAIN9EX =		{ 0x91886CAF, 0x1C3D, 0x4d2e,0xA0,0xAB,0x3E,0x4C,0x7D,0x8D,0x33,0x03 } ;

GUID IID_IDIRECT3D9 =					{ 0x81bdcbca, 0x64d4, 0x426d,0xae,0x8d,0xad,0x01,0x47,0xf4,0x27,0x5c } ;
GUID IID_IDIRECT3DDEVICE9 =				{ 0xd0223b96, 0xbf7a, 0x43fd,0x92,0xbd,0xa4,0x3b,0x0d,0x82,0xb9,0xeb } ;
GUID IID_IDIRECT3DRESOURCE9 =			{ 0x05eec05d, 0x8f7d, 0x4362,0xb9,0x99,0xd1,0xba,0xf3,0x57,0xc7,0x04 } ;
GUID IID_IDIRECT3DBASETEXTURE9 =		{ 0x580ca87e, 0x1d3c, 0x4d54,0x99,0x1d,0xb7,0xd3,0xe3,0xc2,0x98,0xce } ;
GUID IID_IDIRECT3DTEXTURE9 =			{ 0x85c31227, 0x3de5, 0x4f00,0x9b,0x3a,0xf1,0x1a,0xc3,0x8c,0x18,0xb5 } ;
GUID IID_IDIRECT3DCUBETEXTURE9 =		{ 0xfff32f81, 0xd953, 0x473a,0x92,0x23,0x93,0xd6,0x52,0xab,0xa9,0x3f } ;
GUID IID_IDIRECT3DVOLUMETEXTURE9 =		{ 0x2518526c, 0xe789, 0x4111,0xa7,0xb9,0x47,0xef,0x32,0x8d,0x13,0xe6 } ;
GUID IID_IDIRECT3DVERTEXBUFFER9 =		{ 0xb64bb1b5, 0xfd70, 0x4df6,0xbf,0x91,0x19,0xd0,0xa1,0x24,0x55,0xe3 } ;
GUID IID_IDIRECT3DINDEXBUFFER9 =		{ 0x7c9dd65e, 0xd3f7, 0x4529,0xac,0xee,0x78,0x58,0x30,0xac,0xde,0x35 } ;
GUID IID_IDIRECT3DSURFACE9 =			{ 0x0cfbaf3a, 0x9ff6, 0x429a,0x99,0xb3,0xa2,0x79,0x6a,0xf8,0xb8,0x9b } ;
GUID IID_IDIRECT3DVOLUME9 =				{ 0x24f416e6, 0x1f67, 0x4aa7,0xb8,0x8e,0xd3,0x3f,0x6f,0x31,0x28,0xa1 } ;
GUID IID_IDIRECT3DSWAPCHAIN9 =			{ 0x794950f2, 0xadfc, 0x458a,0x90,0x5e,0x10,0xa1,0x0b,0x0b,0x50,0x3b } ;
GUID IID_IDIRECT3DVERTEXDECLARTION9 =	{ 0xdd13c59c, 0x36fa, 0x4098,0xa8,0xfb,0xc7,0xed,0x39,0xdc,0x85,0x46 } ;
GUID IID_IDIRECT3DVERTEXSHADER9 =		{ 0xefc5557e, 0x6265, 0x4613,0x8a,0x94,0x43,0x85,0x78,0x89,0xeb,0x36 } ;
GUID IID_IDIRECT3DPIXELSHADER9 =		{ 0x6d3bdbdc, 0x5b02, 0x4415,0xb8,0x52,0xce,0x5e,0x8b,0xcc,0xb2,0x89 } ;
GUID IID_IDIRECT3DSTATEBLOCK9 =			{ 0xb07c4fe5, 0x310d, 0x4ba8,0xa2,0x3c,0x4f,0x0f,0x20,0x6f,0x21,0x8b } ;
GUID IID_IDIRECT3DQUERY9 =				{ 0xd9771460, 0xa695, 0x4f26,0xbb,0xd3,0x27,0xb8,0x40,0xb5,0x41,0xcc } ;

GUID IID_IDIRECT3DHALDEVICE =			{ 0x84E63dE0, 0x46AA, 0x11CF,0x81,0x6F,0x00,0x00,0xC0,0x20,0x15,0x6E } ;
GUID IID_IDIRECT3DVERTEXBUFFER7 =		{ 0xf5049e7d, 0x4861, 0x11d2,0xa4,0x07,0x00,0xa0,0xc9,0x06,0x29,0xa8 } ;
GUID IID_IDIRECT3DTNLHALDEVICE =		{ 0xf5049e78, 0x4861, 0x11d2,0xa4,0x07,0x00,0xa0,0xc9,0x06,0x29,0xa8 } ;
GUID IID_IDIRECT3D7 =					{ 0xf5049e77, 0x4861, 0x11d2,0xa4,0x07,0x00,0xa0,0xc9,0x06,0x29,0xa8 } ;

GUID CLSID_DIRECTDRAW7 =				{ 0x3c305196, 0x50db, 0x11d3,0x9c,0xfe,0x00,0xc0,0x4f,0xd9,0x30,0xc5 } ;
GUID IID_IDIRECTDRAWSURFACE3 =			{ 0xDA044E00, 0x69B2, 0x11D0,0xA1,0xD5,0x00,0xAA,0x00,0xB8,0xDF,0xBB } ;
GUID IID_IDIRECTDRAWSURFACE4 =			{ 0x0B2B8630, 0xAD35, 0x11D0,0x8E,0xA6,0x00,0x60,0x97,0x97,0xEA,0x5B } ;
GUID IID_IDIRECTDRAWSURFACE7 =			{ 0x06675a80, 0x3b9b, 0x11d2,0xb9,0x2f,0x00,0x60,0x97,0x97,0xea,0x5b } ;
GUID IID_IDIRECTDRAW =					{ 0x6C14DB80, 0xA733, 0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60 } ;
GUID IID_IDIRECTDRAW2 =					{ 0xB3A6F3E0, 0x2B43, 0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xB9,0x33,0x56 } ;
GUID IID_IDIRECTDRAW4 =					{ 0x9c59509a, 0x39bd, 0x11d1,0x8c,0x4a,0x00,0xc0,0x4f,0xd9,0x30,0xc5 } ;
GUID IID_IDIRECTDRAW7 =					{ 0x15e65ec0, 0x3b9c, 0x11d2,0xb9,0x2f,0x00,0x60,0x97,0x97,0xea,0x5b } ;

GUID CLSID_FILTERMAPPER =				{ 0xe436ebb2, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID CLSID_FILTERGRAPH =				{ 0xe436ebb3, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID CLSID_AMMULTIMEDIASTREAM =			{ 0x49c47ce5, 0x9ba4, 0x11d0,0x82,0x12,0x00,0xc0,0x4f,0xc3,0x2c,0x45 } ;
GUID CLSID_VIDEOMIXINGRENDERER9 =		{ 0x51b4abf3, 0x748f, 0x4e3b,0xa2,0x76,0xc8,0x28,0x33,0x0e,0x92,0x6a } ;
GUID CLSID_MEMORYALLOCATOR =			{ 0x1e651cc0, 0xb199, 0x11d0,0x82,0x12,0x00,0xc0,0x4f,0xc3,0x2c,0x45 } ;
GUID CLSID_FILEWRITER =					{ 0x8596e5f0, 0x0da5, 0x11d0,0xbd,0x21,0x00,0xa0,0xc9,0x11,0xce,0x86 } ;
GUID CLSID_NULLRENDERER =				{ 0xC1F400A4, 0x3F08, 0x11d3,0x9F,0x0B,0x00,0x60,0x08,0x03,0x9E,0x37 } ;
GUID CLSID_WAVDEST =					{ 0x3c78b8e2, 0x6c4d, 0x11d1,0xad,0xe2,0x00,0x00,0xf8,0x75,0x4b,0x99 } ;
GUID CLSID_SAMPLEGRABBER =				{ 0xC1F400A0, 0x3F08, 0x11d3,0x9F,0x0B,0x00,0x60,0x08,0x03,0x9E,0x37 } ;
GUID CLSID_SEEKINGPASSTHRU =			{ 0x060af76c, 0x68dd, 0x11d0,0x8f,0xc1,0x00,0xc0,0x4f,0xd9,0x18,0x9d } ;
GUID CLSID_GRABBERSAMPLE =				{ 0x2fa4f053, 0x6d60, 0x4cb0,0x95,0x03,0x8e,0x89,0x23,0x4f,0x3f,0x73 } ;
GUID IID_IGRABBERSAMPLE =				{ 0x6b652fff, 0x11fe, 0x4fce,0x92,0xad,0x02,0x66,0xb5,0xd7,0xc7,0x8f } ;
GUID IID_ISEEKINGPASSTHRU =				{ 0x36b73883, 0xc2c8, 0x11cf,0x8b,0x46,0x00,0x80,0x5f,0x6c,0xef,0x60 } ;
GUID IID_IMEMALLOCATOR =				{ 0x56a8689c, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEMALLOCATORCALLBACKTEMP =	{ 0x379a0cf0, 0xc1de, 0x11d2,0xab,0xf5,0x00,0xa0,0xc9,0x05,0xf3,0x75 } ;
GUID IID_IMEDIASAMPLE =					{ 0x56a8689a, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEDIASAMPLE2 =				{ 0x36b73884, 0xc2c8, 0x11cf,0x8b,0x46,0x00,0x80,0x5f,0x6c,0xef,0x60 } ;
GUID IID_IPIN =							{ 0x56a86891, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_ISAMPLEGRABBER =				{ 0x6B652FFF, 0x11FE, 0x4fce,0x92,0xAD,0x02,0x66,0xB5,0xD7,0xC7,0x8F } ;
GUID IID_FILESINKFILTER =				{ 0xa2104830, 0x7c70, 0x11cf,0x8b,0xce,0x00,0xaa,0x00,0xa3,0xf1,0xa6 } ;
GUID IID_FILESINKFILTER2 =				{ 0x00855B90, 0xCE1B, 0x11d0,0xBD,0x4F,0x00,0xA0,0xC9,0x11,0xCE,0x86 } ;
GUID IID_IASYNCREADER =					{ 0x56a868aa, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;

GUID IID_IENUMPINS =					{ 0x56a86892, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IENUMMEDIATYPES =				{ 0x89c31040, 0x846b, 0x11ce,0x97,0xd3,0x00,0xaa,0x00,0x55,0x59,0x5a } ;
GUID IID_IAMOVIESETUP =					{ 0xa3d8cec0, 0x7e5a, 0x11cf,0xbb,0xc5,0x00,0x80,0x5f,0x6c,0xef,0x20 } ;
GUID IID_IBASICAUDIO =					{ 0x56a868b3, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEDIASEEKING =				{ 0x36b73880, 0xc2c8, 0x11cf,0x8b,0x46,0x00,0x80,0x5f,0x6c,0xef,0x60 } ;
GUID IID_IMEDIAEVENT =					{ 0x56a868b6, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEDIAEVENTEX =				{ 0x56a868c0, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEDIACONTROL =				{ 0x56a868b1, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEDIAPOSITION =				{ 0x56a868b2, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEDIAEVENTSINK =				{ 0x56a868a2, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IQUALITYCONTROL =				{ 0x56a868a5, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IQUALPROP =					{ 0x1bd0ecb0, 0xf8e2, 0x11ce,0xaa,0xc6,0x00,0x20,0xaf,0x0b,0x99,0xa3 } ;
GUID IID_IMEDIAFILTER =					{ 0x56a86899, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IPERSIST =						{ 0x0000010c, 0x0000, 0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } ;

GUID IID_IGRAPHBUILDER =				{ 0x56a868a9, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IDIRECTDRAWMEDIASTREAM =		{ 0xF4104FCE, 0x9A70, 0x11d0,0x8F,0xDE,0x00,0xC0,0x4F,0xD9,0x18,0x9D } ;
GUID IID_IAMMEDIASTREAM =				{ 0xBEBE595D, 0x9A6F, 0x11d0,0x8F,0xDE,0x00,0xC0,0x4F,0xD9,0x18,0x9D } ;
GUID IID_IAMMULTIMEDIASTREAM =			{ 0xBEBE595C, 0x9A6F, 0x11d0,0x8F,0xDE,0x00,0xC0,0x4F,0xD9,0x18,0x9D } ;

GUID IID_IFILTERMAPPER =				{ 0x56a868a3, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID LIBID_QUARTZTYPELIB =				{ 0x56a868b0, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IMEMINPUTPIN =					{ 0x56a8689d, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_ISAMPLEGRABBERCB =				{ 0x0579154A, 0x2B53, 0x4994,0xB0,0xD0,0xE7,0x73,0x14,0x8E,0xFF,0x85 } ;

GUID IID_IFILTERGRAPH =					{ 0x56a8689f, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IFILTERGRAPH2 =				{ 0x36b73882, 0xc2c8, 0x11cf,0x8b,0x46,0x00,0x80,0x5f,0x6c,0xef,0x60 } ;
GUID IID_IBASEFILTER =					{ 0x56a86895, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID IID_IVMRSURFACEALLOCATOR9 =		{ 0x8d5148ea, 0x3f5d, 0x46cf,0x9d,0xf1,0xd1,0xb8,0x96,0xee,0xdb,0x1f } ;
GUID IID_IVMRSURFACEALLOCATORNOTIFY9 =	{ 0xdca3f5df, 0xbb3a, 0x4d03,0xbd,0x81,0x84,0x61,0x4b,0xfb,0xfa,0x0c } ;
GUID IID_IVMRIMAGEPRESENTER9 =			{ 0x69188c61, 0x12a3, 0x40f0,0x8f,0xfc,0x34,0x2e,0x7b,0x43,0x3f,0xd7 } ;
GUID IID_IVMRFILTERCONFIG9 =			{ 0x5a804648, 0x4f66, 0x4867,0x9c,0x43,0x4f,0x5c,0x82,0x2c,0xf1,0xb8 } ;
GUID IID_IREFERENCECLOCK =				{ 0x56a86897, 0x0ad4, 0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;

GUID FORMAT_VIDEOINFO =					{ 0x05589f80, 0xc356, 0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a } ;
GUID FORMAT_WAVEFORMATEX =				{ 0x05589f81, 0xc356, 0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a } ;
GUID MEDIATYPE_VIDEO =					{ 0x73646976, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID MEDIATYPE_AUDIO =					{ 0x73647561, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID MEDIATYPE_STREAM =					{ 0xe436eb83, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_YVYU =				{ 0x55595659, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_YUYV =				{ 0x56595559, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_UYVY =				{ 0x59565955, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_NV11 =				{ 0x3131564e, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_NV12 =				{ 0x3231564e, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_YV12 =				{ 0x32315659, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_YUY2 =				{ 0x32595559, 0x0000, 0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71 } ;
GUID D_MEDIASUBTYPE_RGB24 =				{ 0xe436eb7d, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_RGB32 =				{ 0xe436eb7e, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_PCM =				{ 0x00000001, 0x0000, 0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71 } ;
GUID D_MEDIASUBTYPE_WAVE =				{ 0xe436eb8b, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_MPEG1SYSTEM =		{ 0xe436eb84, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_MPEG1AUDIO =		{ 0xe436eb87, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_MPEG1VIDEO =		{ 0xe436eb86, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_MPEG1VIDEOCD =		{ 0xe436eb85, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_AVI =				{ 0xe436eb88, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;
GUID D_MEDIASUBTYPE_QTMOVIE =			{ 0xe436eb89, 0x524f, 0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70 } ;

GUID D_TIME_FORMAT_NONE =				{ 0x00000000, 0x0000, 0x0000,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 } ;
GUID D_TIME_FORMAT_FRAME =				{ 0x7b785570, 0x8c82, 0x11cf,0xbc,0x0c,0x00,0xaa,0x00,0xac,0x74,0xf6 } ;
GUID D_TIME_FORMAT_BYTE =				{ 0x7b785571, 0x8c82, 0x11cf,0xbc,0x0c,0x00,0xaa,0x00,0xac,0x74,0xf6 } ;
GUID D_TIME_FORMAT_SAMPLE =				{ 0x7b785572, 0x8c82, 0x11cf,0xbc,0x0c,0x00,0xaa,0x00,0xac,0x74,0xf6 } ;
GUID D_TIME_FORMAT_FIELD =				{ 0x7b785573, 0x8c82, 0x11cf,0xbc,0x0c,0x00,0xaa,0x00,0xac,0x74,0xf6 } ;
GUID D_TIME_FORMAT_MEDIA_TIME =			{ 0x7b785574, 0x8c82, 0x11cf,0xbc,0x0c,0x00,0xaa,0x00,0xac,0x74,0xf6 } ;

GUID MSPID_PRIMARYAUDIO =				{ 0xa35ff56b, 0x9fda, 0x11d0,0x8f,0xdf,0x00,0xc0,0x4f,0xd9,0x18,0x9d } ;
GUID MSPID_PRIMARYVIDEO =				{ 0xa35ff56a, 0x9fda, 0x11d0,0x8f,0xdf,0x00,0xc0,0x4f,0xd9,0x18,0x9d } ;

GUID CLSID_DIRECTINPUT =				{ 0x25E609E0, 0xB259, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID CLSID_DIRECTINPUT_ =				{ 0x25E609E0, 0xB259, 0x11CF,0xBF,0xC7,0x44,0x45,0x35,0x54,0x00,0x00 } ;
GUID CLSID_DIRECTINPUT8 =				{ 0x25E609E4, 0xB259, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID GUID_SYSMOUSE =					{ 0x6F1D2B60, 0xD5A0, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID GUID_SYSKEYBOARD =					{ 0x6F1D2B61, 0xD5A0, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID GUID_SINE =						{ 0x13541C23, 0x8E33, 0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35 } ;
GUID GUID_CONSTANTFORCE =				{ 0x13541C20, 0x8E33, 0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35 } ;
#ifdef UNICODE
GUID IID_IDIRECTINPUTDEVICE8 =			{ 0x54D41081, 0xDC15, 0x4833,0xA4,0x1B,0x74,0x8F,0x73,0xA3,0x81,0x79 } ; // W
GUID IID_IDIRECTINPUTDEVICE7 =			{ 0x57D7C6BD, 0x2356, 0x11D3,0x8E,0x9D,0x00,0xC0,0x4F,0x68,0x44,0xAE } ;
GUID IID_IDIRECTINPUTDEVICE2 =			{ 0x5944E683, 0xC92E, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID IID_IDIRECTINPUTDEVICE =			{ 0x5944E681, 0xC92E, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID IID_IDIRECTINPUT8 =				{ 0xBF798031, 0x483A, 0x4DA2,0xAA,0x99,0x5D,0x64,0xED,0x36,0x97,0x00 } ;
GUID IID_IDIRECTINPUT7 =				{ 0x9A4CB685, 0x236D, 0x11D3,0x8E,0x9D,0x00,0xC0,0x4F,0x68,0x44,0xAE } ;
GUID IID_IDIRECTINPUT2 =				{ 0x5944E663, 0xAA8A, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID IID_IDIRECTINPUT =					{ 0x89521361, 0xAA8A, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
#else
GUID IID_IDIRECTINPUTDEVICE8 =			{ 0x54D41080, 0xDC15, 0x4833,0xA4,0x1B,0x74,0x8F,0x73,0xA3,0x81,0x79 } ; // A
GUID IID_IDIRECTINPUTDEVICE7 =			{ 0x57D7C6BC, 0x2356, 0x11D3,0x8E,0x9D,0x00,0xC0,0x4F,0x68,0x44,0xAE } ;
GUID IID_IDIRECTINPUTDEVICE2 =			{ 0x5944E682, 0xC92E, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID IID_IDIRECTINPUTDEVICE =			{ 0x5944E680, 0xC92E, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID IID_IDIRECTINPUT8 =				{ 0xBF798030, 0x483A, 0x4DA2,0xAA,0x99,0x5D,0x64,0xED,0x36,0x97,0x00 } ;
GUID IID_IDIRECTINPUT7 =				{ 0x9A4CB684, 0x236D, 0x11D3,0x8E,0x9D,0x00,0xC0,0x4F,0x68,0x44,0xAE } ;
GUID IID_IDIRECTINPUT2 =				{ 0x5944E662, 0xAA8A, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID IID_IDIRECTINPUT =					{ 0x89521360, 0xAA8A, 0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00 } ;
#endif

GUID IID_IMMDEVICEENUMERATOR =			{ 0xA95664D2, 0x9614, 0x4F35,0xA7,0x46,0xDE,0x8D,0xB6,0x36,0x17,0xE6 } ;
GUID CLSID_MMDEVICEENUMERATOR =			{ 0xBCDE0395, 0xE52F, 0x467C,0x8E,0x3D,0xC4,0x57,0x92,0x91,0x69,0x2E } ;

GUID GUID_PERFMASTERVOLUME =			{ 0xd2ac28b1, 0xb39b, 0x11d1,0x87,0x04,0x00,0x60,0x08,0x93,0xb1,0xbd } ;
GUID GUID_STANDARDMIDIFILE =			{ 0x06621075, 0xe92e, 0x11d1,0xa8,0xc5,0x00,0xc0,0x4f,0xa3,0x72,0x6e } ;
GUID GUID_DIRECTMUSICALLTYPES =			{ 0xd2ac2893, 0xb39b, 0x11d1,0x87,0x04,0x00,0x60,0x08,0x93,0xb1,0xbd } ;
GUID CLSID_DIRECTSOUND =				{ 0x47d4d946, 0x62e8, 0x11cf,0x93,0xbc,0x44,0x45,0x53,0x54,0x00,0x00 } ;
GUID CLSID_DIRECTMUSIC =				{ 0x636b9f10, 0x0c7d, 0x11d1,0x95,0xb2,0x00,0x20,0xaf,0xdc,0x74,0x21 } ;
GUID CLSID_DIRECTMUSICPERFORMANCE =		{ 0xd2ac2881, 0xb39b, 0x11d1,0x87,0x04,0x00,0x60,0x08,0x93,0xb1,0xbd } ;
GUID CLSID_DIRECTMUSICLOADER =			{ 0xd2ac2892, 0xb39b, 0x11d1,0x87,0x04,0x00,0x60,0x08,0x93,0xb1,0xbd } ;
GUID CLSID_DIRECTMUSICSEGMENT =			{ 0xd2ac2882, 0xb39b, 0x11d1,0x87,0x04,0x00,0x60,0x08,0x93,0xb1,0xbd } ;
GUID IID_IDIRECTSOUND =					{ 0x279AFA83, 0x4981, 0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60 } ;
GUID IID_IDIRECTMUSIC =					{ 0x6536115a, 0x7b2d, 0x11d2,0xba,0x18,0x00,0x00,0xf8,0x75,0xac,0x12 } ;
GUID IID_IDIRECTMUSICLOADER8 =			{ 0x19e7c08c, 0x0a44, 0x4e6a,0xa1,0x16,0x59,0x5a,0x7c,0xd5,0xde,0x8c } ;
GUID IID_IDIRECTMUSICPERFORMANCE8 =		{ 0x679c4137, 0xc62e, 0x4147,0xb2,0xb4,0x9d,0x56,0x9a,0xcb,0x25,0x4c } ;
GUID IID_IDIRECTMUSIC8 =				{ 0x2d3629f7, 0x813d, 0x4939,0x85,0x08,0xf0,0x5c,0x6b,0x75,0xfd,0x97 } ;
GUID IID_IDIRECTMUSICSEGMENT8 =			{ 0xc6784488, 0x41a3, 0x418f,0xaa,0x15,0xb3,0x50,0x93,0xba,0x42,0xd4 } ;

GUID CLSID_XAUDIO2_0 =					{ 0xfac23f48, 0x31f5, 0x45a8,0xb4,0x9b,0x52,0x25,0xd6,0x14,0x01,0xaa } ;
GUID CLSID_XAUDIO2_0_DEBUG =            { 0Xfac23f48, 0X31f5, 0x45a8,0xb4,0x9b,0x52,0x25,0xd6,0x14,0x01,0xdb } ;
GUID CLSID_XAUDIO2_1 =					{ 0xe21a7345, 0xeb21, 0x468e,0xbe,0x50,0x80,0x4d,0xb9,0x7c,0xf7,0x08 } ;
GUID CLSID_XAUDIO2_1_DEBUG =            { 0xf7a76c21, 0x53d4, 0x46bb,0xac,0x53,0x8b,0x45,0x9c,0xae,0x46,0xbd } ;
GUID CLSID_XAUDIO2_2 =					{ 0xb802058a, 0x464a, 0x42db,0xbc,0x10,0xb6,0x50,0xd6,0xf2,0x58,0x6a } ;
GUID CLSID_XAUDIO2_2_DEBUG =            { 0x97dfb7e7, 0x5161, 0x4015,0x87,0xa9,0xc7,0x9e,0x6a,0x19,0x52,0xcc } ;
GUID CLSID_XAUDIO2_3 =					{ 0x4c5e637a, 0x16c7, 0x4de3,0x9c,0x46,0x5e,0xd2,0x21,0x81,0x96,0x2d } ;
GUID CLSID_XAUDIO2_3_DEBUG =            { 0xef0aa05d, 0x8075, 0x4e5d,0xbe,0xad,0x45,0xbe,0x0c,0x3c,0xcb,0xb3 } ;
GUID CLSID_XAUDIO2_4 =					{ 0x03219e78, 0x5bc3, 0x44d1,0xb9,0x2e,0xf6,0x3d,0x89,0xcc,0x65,0x26 } ;
GUID CLSID_XAUDIO2_4_DEBUG =            { 0x4256535c, 0x1ea4, 0x4d4b,0x8a,0xd5,0xf9,0xdb,0x76,0x2e,0xca,0x9e } ;
GUID CLSID_XAUDIO2_5 =					{ 0x4c9b6dde, 0x6809, 0x46e6,0xa2,0x78,0x9b,0x6a,0x97,0x58,0x86,0x70 } ;
GUID CLSID_XAUDIO2_5_DEBUG =            { 0x715bdd1a, 0xaa82, 0x436b,0xb0,0xfa,0x6a,0xce,0xa3,0x9b,0xd0,0xa1 } ;
GUID CLSID_XAUDIO2_6 =					{ 0x3eda9b49, 0x2085, 0x498b,0x9b,0xb2,0x39,0xa6,0x77,0x84,0x93,0xde } ;
GUID CLSID_XAUDIO2_6_DEBUG =            { 0x47199894, 0x7cc2, 0x444d,0x98,0x73,0xce,0xd2,0x56,0x2c,0xc6,0x0e } ;
GUID CLSID_XAUDIO2_7 =					{ 0x5a508685, 0xa254, 0x4fba,0x9b,0x82,0x9a,0x24,0xb0,0x03,0x06,0xaf } ;
GUID CLSID_XAUDIO2_7_DEBUG =            { 0xdb05ea35, 0x0329, 0x4d4b,0xa5,0x3a,0x6d,0xea,0xd0,0x3d,0x38,0x52 } ;
GUID IID_IXAUDIO2 =						{ 0x8bcf1f58, 0x9fe7, 0x4583,0x8a,0xc6,0xe2,0xad,0xc4,0x65,0xc8,0xbb } ;

GUID CLSID_AUDIOVOLUMEMeter2_0 =		{ 0xC0C56F46, 0x29B1, 0x44E9,0x99,0x39,0xA3,0x2C,0xE8,0x68,0x67,0xE2 } ;
GUID CLSID_AUDIOVOLUMEMeter2_0_DEBUG =	{ 0xC0C56F46, 0x29B1, 0x44E9,0x99,0x39,0xA3,0x2C,0xE8,0x68,0x67,0xDB } ;
GUID CLSID_AUDIOREVERB2_0 =				{ 0x6F6EA3A9, 0x2CF5, 0x41CF,0x91,0xC1,0x21,0x70,0xB1,0x54,0x00,0x63 } ;
GUID CLSID_AUDIOREVERB2_0_DEBUG =		{ 0x6F6EA3A9, 0x2CF5, 0x41CF,0x91,0xC1,0x21,0x70,0xB1,0x54,0x00,0xDB } ;
GUID CLSID_AUDIOVOLUMEMeter2_1 =		{ 0xc1e3f122, 0xa2ea, 0x442c,0x85,0x4f,0x20,0xd9,0x8f,0x83,0x57,0xa1 } ;
GUID CLSID_AUDIOVOLUMEMeter2_1_DEBUG =	{ 0x6d97a461, 0xb02d, 0x48ae,0xb5,0x43,0x82,0xbc,0x35,0xfd,0xfa,0xe2 } ;
GUID CLSID_AUDIOREVERB2_1 =				{ 0xf4769300, 0xb949, 0x4df9,0xb3,0x33,0x00,0xd3,0x39,0x32,0xe9,0xa6 } ;
GUID CLSID_AUDIOREVERB2_1_DEBUG =		{ 0xaea2cabc, 0x8c7c, 0x46aa,0xba,0x44,0x0e,0x6d,0x75,0x88,0xa1,0xf2 } ;
GUID CLSID_AUDIOVOLUMEMeter2_2 =		{ 0xf5ca7b34, 0x8055, 0x42c0,0xb8,0x36,0x21,0x61,0x29,0xeb,0x7e,0x30 } ;
GUID CLSID_AUDIOVOLUMEMeter2_2_DEBUG =	{ 0xf796f5f7, 0x6059, 0x4a9f,0x98,0x2d,0x61,0xee,0xc2,0xed,0x67,0xca } ;
GUID CLSID_AUDIOREVERB2_2 =				{ 0x629cf0de, 0x3ecc, 0x41e7,0x99,0x26,0xf7,0xe4,0x3e,0xeb,0xec,0x51 } ;
GUID CLSID_AUDIOREVERB2_2_DEBUG =		{ 0x4aae4299, 0x3260, 0x46d4,0x97,0xcc,0x6c,0xc7,0x60,0xc8,0x53,0x29 } ;
GUID CLSID_AUDIOVOLUMEMeter2_3 =		{ 0xe180344b, 0xac83, 0x4483,0x95,0x9e,0x18,0xa5,0xc5,0x6a,0x5e,0x19 } ;
GUID CLSID_AUDIOVOLUMEMeter2_3_DEBUG =	{ 0x922a0a56, 0x7d13, 0x40ae,0xa4,0x81,0x3c,0x6c,0x60,0xf1,0x14,0x01 } ;
GUID CLSID_AUDIOREVERB2_3 =				{ 0x9cab402c, 0x1d37, 0x44b4,0x88,0x6d,0xfa,0x4f,0x36,0x17,0x0a,0x4c } ;
GUID CLSID_AUDIOREVERB2_3_DEBUG =		{ 0xeadda998, 0x3be6, 0x4505,0x84,0xbe,0xea,0x06,0x36,0x5d,0xb9,0x6b } ;
GUID CLSID_AUDIOVOLUMEMeter2_4 =		{ 0xc7338b95, 0x52b8, 0x4542,0xaa,0x79,0x42,0xeb,0x01,0x6c,0x8c,0x1c } ;
GUID CLSID_AUDIOVOLUMEMeter2_4_DEBUG =	{ 0x524bd872, 0x5c0b, 0x4217,0xbd,0xb8,0x0a,0x86,0x81,0x83,0x0b,0xa5 } ;
GUID CLSID_AUDIOREVERB2_4 =				{ 0x8bb7778b, 0x645b, 0x4475,0x9a,0x73,0x1d,0xe3,0x17,0x0b,0xd3,0xaf } ;
GUID CLSID_AUDIOREVERB2_4_DEBUG =		{ 0xda7738a2, 0xcd0c, 0x4367,0x9a,0xac,0xd7,0xea,0xd7,0xc6,0x4f,0x98 } ;
GUID CLSID_AUDIOVOLUMEMeter2_5 =		{ 0x2139e6da, 0xc341, 0x4774,0x9a,0xc3,0xb4,0xe0,0x26,0x34,0x7f,0x64 } ;
GUID CLSID_AUDIOVOLUMEMeter2_5_DEBUG =	{ 0xa5cc4e13, 0xca00, 0x416b,0xa6,0xee,0x49,0xfe,0xe7,0xb5,0x43,0xd0 } ;
GUID CLSID_AUDIOREVERB2_5 =				{ 0xd06df0d0, 0x8518, 0x441e,0x82,0x2f,0x54,0x51,0xd5,0xc5,0x95,0xb8 } ;
GUID CLSID_AUDIOREVERB2_5_DEBUG =		{ 0x613604ec, 0x304c, 0x45ec,0xa4,0xed,0x7a,0x1c,0x61,0x2e,0x9e,0x72 } ;
GUID CLSID_AUDIOVOLUMEMeter2_6 =		{ 0xe48c5a3f, 0x93ef, 0x43bb,0xa0,0x92,0x2c,0x7c,0xeb,0x94,0x6f,0x27 } ;
GUID CLSID_AUDIOVOLUMEMeter2_6_DEBUG =	{ 0x9a9eaef7, 0xa9e0, 0x4088,0x9b,0x1b,0x9c,0xa0,0x3a,0x1a,0xec,0xd4 } ;
GUID CLSID_AUDIOREVERB2_6 =				{ 0xcecec95a, 0xd894, 0x491a,0xbe,0xe3,0x5e,0x10,0x6f,0xb5,0x9f,0x2d } ;
GUID CLSID_AUDIOREVERB2_6_DEBUG =		{ 0x99a1c72e, 0x364c, 0x4c1b,0x96,0x23,0xfd,0x5c,0x8a,0xbd,0x90,0xc7 } ;
GUID CLSID_AUDIOVOLUMEMeter2_7 =		{ 0xcac1105f, 0x619b, 0x4d04,0x83,0x1a,0x44,0xe1,0xcb,0xf1,0x2d,0x57 } ;
GUID CLSID_AUDIOVOLUMEMeter2_7_DEBUG =	{ 0x2d9a0f9c, 0xe67b, 0x4b24,0xab,0x44,0x92,0xb3,0xe7,0x70,0xc0,0x20 } ;
GUID CLSID_AUDIOREVERB2_7 =				{ 0x6a93130e, 0x1d53, 0x41d1,0xa9,0xcf,0xe7,0x58,0x80,0x0b,0xb1,0x79 } ;
GUID CLSID_AUDIOREVERB2_7_DEBUG =		{ 0xc4f82dd4, 0xcb4e, 0x4ce1,0x8b,0xdb,0xee,0x32,0xd4,0x19,0x82,0x69 } ;

GUID CLSID_XACTENGINE =                 { 0xbcc782bc, 0x6492, 0x4c22,0x8c,0x35,0xf5,0xd7,0x2f,0xe7,0x3c,0x6e } ;
GUID CLSID_XACTAUDIOENGINE =            { 0x9ecdd80d, 0x0e81, 0x40d8,0x89,0x03,0x2b,0xf7,0xb1,0x31,0xac,0x43 } ;
GUID CLSID_XACTDEBUGENGINE =            { 0x02860630, 0xbf3b, 0x42a8,0xb1,0x4e,0x91,0xed,0xa2,0xf5,0x1e,0xa5 } ;
GUID IID_IXACTENGINE =                  { 0xb1ee676a, 0xd9cd, 0x4d2a,0x89,0xa8,0xfa,0x53,0xeb,0x9e,0x48,0x0b } ;

}



