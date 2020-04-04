//! \file RzChromaBroadcastAPIDefines.h
//! \brief Definitions of global and static variables.

#ifndef _RZCHROMABROADCASTAPIDEFINES_H_
#define _RZCHROMABROADCASTAPIDEFINES_H_

#pragma once

#ifndef GUID_DEFINED
#include <Guiddef.h>
#endif

namespace RzChromaBroadcastAPI
{
	//! Chroma Broadcast Sample Application
	// {8FB61199-44F5-4C53-A706-747373A21796}
	static const GUID CHROMA_BROADCAST_SAMPLE_APPLICATION =
	{ 0x8fb61199, 0x44f5, 0x4c53, { 0xa7, 0x06, 0x74, 0x73, 0x73, 0xa2, 0x17, 0x96 } };

	//! ASUS
	// {4C24AD2B-D0A6-409F-B895-EC7632F3BEE6}
	static const GUID ASUS =
	{ 0x4c24ad2b, 0xd0a6, 0x409f, { 0xb8, 0x95, 0xec, 0x76, 0x32, 0xf3, 0xbe, 0xe6 } };

	//! NZXT CAM
	// {961E436A-C2BC-420E-9884-258D0DB42A87}
	static const GUID NZXT_CAM =
	{ 0x961e436a, 0xc2bc, 0x420e, { 0x98, 0x84, 0x25, 0x8d, 0x0d, 0xb4, 0x2a, 0x87 } };

	//! Ducky RGB Software
	// {EA0ABF8C-807E-45FA-85DE-CC533A3DADA6}
	static const GUID DUCKY_RGB_SOFTWARE =
	{ 0xea0abf8c, 0x807e, 0x45fa, { 0x85, 0xde, 0xcc, 0x53, 0x3a, 0x3d, 0xad, 0xa6 } };

	//! JBOG Spectrum Server
	// {368EFB31-B894-41F3-8781-05F10F479519}
	static const GUID JBOG_SPECTRUM_SERVER =
	{ 0x368efb31, 0xb894, 0x41f3, { 0x87, 0x81, 0x5, 0xf1, 0x0f, 0x47, 0x95, 0x19 } };

	//! AMD
	// {80C92AAF-DD75-4381-8D61-326DFB87711F}
	static const GUID AMD =
	{ 0x80c92aaf, 0xdd75, 0x4381, { 0x8d, 0x61, 0x32, 0x6d, 0xfb, 0x87, 0x71, 0x1f } };

	//! MSI Mystic Light
	// {4E3B9618-DB98-4E59-B65E-E842C047F7C7}
	static const GUID MSI_MYSTIC_LIGHT =
	{ 0x4e3b9618, 0xdb98, 0x4e59, { 0xb6, 0x5e, 0xe8, 0x42, 0xc0, 0x47, 0xf7, 0xc7 } };

	//! Thermaltake
	// {58EB64CE-46F0-441C-B226-3FD3F9DAECB0}
	static const GUID THERMALTAKE =
	{ 0x58eb64ce, 0x46f0, 0x441c, { 0xb2, 0x26, 0x3f, 0xd3, 0xf9, 0xda, 0xec, 0xb0 } };

	//! Lian Li
	// {891D9CE3-2764-460A-A9BF-7643D4544021}
	static const GUID LIAN_LI =
	{ 0x891d9ce3, 0x2764, 0x460a, { 0xa9, 0xbf, 0x76, 0x43, 0xd4, 0x54, 0x40, 0x21 } };

	//! Vertagear
	// {D6927055-4E61-48FB-B83F-2227E3E27381}
	static const GUID VERTAGEAR =
	{ 0xd6927055, 0x4e61, 0x48fb, { 0xb8, 0x3f, 0x22, 0x27, 0xe3, 0xe2, 0x73, 0x81 } };

	//! Chroma Broadcast Test Application 01
	// {9DD054C8-2956-4296-B2FF-023DA9E6F0F9}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_01 =
	{ 0x9dd054c8, 0x2956, 0x4296, { 0xb2, 0xff, 0x2, 0x3d, 0xa9, 0xe6, 0xf0, 0xf9 } };

	//! Chroma Broadcast Test Application 02
	// {060F613C-27C6-46A7-B23D-52A4A3CA4458}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_02 =
	{ 0x060f613c, 0x27c6, 0x46a7, { 0xb2, 0x3d, 0x52, 0xa4, 0xa3, 0xca, 0x44, 0x58 } };

	//! Chroma Broadcast Test Application 03
	// {EAE1BC0C-2508-43BD-B802-2F5CAFDA9FAE}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_03 =
	{ 0xeae1bc0c, 0x2508, 0x43bd, { 0xb8, 0x02, 0x2f, 0x5c, 0xaf, 0xda, 0x9f, 0xae } };

	//! Chroma Broadcast Test Application 04
	// {D17290C3-29A2-4F27-BD1B-BD35530C1A56}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_04 =
	{ 0xd17290c3, 0x29a2, 0x4f27, { 0xbd, 0x1b, 0xbd, 0x35, 0x53, 0x0c, 0x1a, 0x56 } };

	//! Chroma Broadcast Test Application 05
	// {1C4661C9-541A-4948-A969-AAF3FC085DA2}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_05 =
	{ 0x1c4661c9, 0x541a, 0x4948, { 0xa9, 0x69, 0xaa, 0xf3, 0xfc, 0x08, 0x5d, 0xa2 } };

	//! Chroma Broadcast Test Application 06
	// {1F018A4A-B6AB-4438-B3D1-18D29F969AEB}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_06 =
	{ 0x1f018a4a, 0xb6ab, 0x4438, { 0xb3, 0xd1, 0x18, 0xd2, 0x9f, 0x96, 0x9a, 0xeb } };

	//! Chroma Broadcast Test Application 07
	// {0253BEB5-45F8-464B-84A1-A11E3BD5CD3D}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_07 =
	{ 0x0253beb5, 0x45f8, 0x464b, { 0x84, 0xa1, 0xa1, 0x1e, 0x3b, 0xd5, 0xcd, 0x3d } };

	//! Chroma Broadcast Test Application 08
	// {662E9E25-A605-4CDF-8F7A-09F4010B63F8}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_08 =
	{ 0x662e9e25, 0xa605, 0x4cdf, { 0x8f, 0x7a, 0x9, 0xf4, 0x01, 0x0b, 0x63, 0xf8 } };

	//! Chroma Broadcast Test Application 09
	// {3C30484A-FE85-454F-903E-6DCE2201DA9C}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_09 =
	{ 0x3c30484a, 0xfe85, 0x454f, { 0x90, 0x3e, 0x6d, 0xce, 0x22, 0x01, 0xda, 0x9c } };

	//! Chroma Broadcast Test Application 10
	// {19F05CAC-FF8D-4F02-B76D-F86346F0A4A9}
	static const GUID CHROMA_BROADCAST_TEST_APPLICATION_10 =
	{ 0x19f05cac, 0xff8d, 0x4f02, { 0xb7, 0x6d, 0xf8, 0x63, 0x46, 0xf0, 0xa4, 0xa9 } };

	//! BKSTEC
	// {5DEA07A2-46E9-468B-A0DA-EA2DF532FCA1}
	static const GUID BKSTEC =
	{ 0x5dea07a2, 0x46e9, 0x468b, { 0xa0, 0xda, 0xea, 0x2d, 0xf5, 0x32, 0xfc, 0xa1 } };

	//! Chroma Control - Corsair
	// {33D8F7B0-FB49-4705-B343-AE536033AFC3}
	static const GUID CHROMA_CONTROL_CORSAIR =
	{ 0x33d8f7b0, 0xfb49, 0x4705, { 0xb3, 0x43, 0xae, 0x53, 0x60, 0x33, 0xaf, 0xc3 } };

	//! Chroma Control - ASUS
	// {DEF05DCE-1662-4D9A-A312-A31028651915}
	static const GUID CHROMA_CONTROL_ASUS =
	{ 0xdef05dce, 0x1662, 0x4d9a, { 0xa3, 0x12, 0xa3, 0x10, 0x28, 0x65, 0x19, 0x15 } };

	//! Chroma Control - Gigabyte
	// {04774911-95C2-4F41-8FC6-6A1FC1A683D8}
	static const GUID CHROMA_CONTROL_GIGABYTE =
	{ 0x04774911, 0x95c2, 0x4f41, { 0x8f, 0xc6, 0x6a, 0x1f, 0xc1, 0xa6, 0x83, 0xd8 } };

	//! Title 24
	// {82A87B65-BB63-4EEC-B79C-2F6EAB053C8A}
	static const GUID TITLE_24 =
	{ 0x82a87b65, 0xbb63, 0x4eec, { 0xb7, 0x9c, 0x2f, 0x6e, 0xab, 0x05, 0x3c, 0x8a } };

	//! Creative
	// {367B4411-2E2A-4ABB-9F50-FB07640F28EC}
	static const GUID CREATIVE =
	{ 0x367b4411, 0x2e2a, 0x4abb, { 0x9f, 0x50, 0xfb, 0x07, 0x64, 0x0f, 0x28, 0xec } };

	//! A4Tech
	// {04479F96-EF9C-4C97-866C-7773CC963A86}
	static const GUID A4TECH =
	{ 0x04479f96, 0xef9c, 0x4c97, { 0x86, 0x6c, 0x77, 0x73, 0xcc, 0x96, 0x3a, 0x86 } };

	//! ASROCK
	// {D59DFF8D-E319-48FC-BDF3-04AF2E0148D3}
	static const GUID ASROCK =
	{ 0xd59dff8d, 0xe319, 0x48fc, { 0xbd, 0xf3, 0x4, 0xaf, 0x2e, 0x01, 0x48, 0xd3 } };

	//! Biostar
	// {3AAA5EC1-084C-4470-BD3C-DCA00F10805F}
	static const GUID BIOSTAR =
	{ 0x3aaa5ec1, 0x084c, 0x4470, { 0xbd, 0x3c, 0xdc, 0xa0, 0x0f, 0x10, 0x80, 0x5f } };

	//! Colorful
	// {60B3EEFD-6A95-4DE7-8541-7F2EC6E89893}
	static const GUID COLORFUL =
	{ 0x60b3eefd, 0x6a95, 0x4de7, { 0x85, 0x41, 0x7f, 0x2e, 0xc6, 0xe8, 0x98, 0x93 } };

	//! Cougar
	// {C8DAE01D-961B-44DB-BA87-9454ACD49E02}
	static const GUID COUGAR =
	{ 0xc8dae01d, 0x961b, 0x44db, { 0xba, 0x87, 0x94, 0x54, 0xac, 0xd4, 0x9e, 0x02 } };

	//! Primax
	// {230FD850-AD96-478A-9691-1F1D57537437}
	static const GUID PRIMAX =
	{ 0x230fd850, 0xad96, 0x478a, { 0x96, 0x91, 0x1f, 0x1d, 0x57, 0x53, 0x74, 0x37 } };

	//! TEAMGROUP
	// {A4167AD8-48B5-49C4-945B-8F87D55E6FBA}
	static const GUID TEAMGROUP =
	{ 0xa4167ad8, 0x48b5, 0x49c4, { 0x94, 0x5b, 0x8f, 0x87, 0xd5, 0x5e, 0x6f, 0xba } };

	//! ViewSonic
	// {C368F5A2-37D7-44CA-85B5-0EBC81D21ED6}
	static const GUID VIEWSONIC =
	{ 0xc368f5a2, 0x37d7, 0x44ca, { 0x85, 0xb5, 0xe, 0xbc, 0x81, 0xd2, 0x1e, 0xd6 } };

	//! Wooting
	// {08377A3B-7800-4705-9FFF-D1E980DD0FDC}
	static const GUID WOOTING =
	{ 0x08377a3b, 0x7800, 0x4705, { 0x9f, 0xff, 0xd1, 0xe9, 0x80, 0xdd, 0x0f, 0xdc } };

	//! Zotac
	// {E0CC986E-3615-420D-B7DD-DC8D90988423}
	static const GUID ZOTAC =
	{ 0xe0cc986e, 0x3615, 0x420d, { 0xb7, 0xdd, 0xdc, 0x8d, 0x90, 0x98, 0x84, 0x23 } };

	//! AOC
	// {ED976557-71AA-4785-A398-2710CA981AF8}
	static const GUID AOC =
	{ 0xed976557, 0x71aa, 0x4785, { 0xa3, 0x98, 0x27, 0x10, 0xca, 0x98, 0x1a, 0xf8 } };

	//! ACER
	// {F4C150EB-7871-41B5-B0B6-B732D3DEA727}
	static const GUID ACER =
	{ 0xf4c150eb, 0x7871, 0x41b5, { 0xb0, 0xb6, 0xb7, 0x32, 0xd3, 0xde, 0xa7, 0x27 } };

	//! Bitspower
	// {533A3A39-E6D6-4C77-B2D6-EFE7B88611FD}
	static const GUID BITSPOWER =
	{ 0x533a3a39, 0xe6d6, 0x4c77, { 0xb2, 0xd6, 0xef, 0xe7, 0xb8, 0x86, 0x11, 0xfd } };

	//! G-SPY
	// {1093D529-07D3-493C-A2DA-C197F310AAD7}
	static const GUID G_SPY =
	{ 0x1093d529, 0x07d3, 0x493c, { 0xa2, 0xda, 0xc1, 0x97, 0xf3, 0x10, 0xaa, 0xd7 } };

	//! XSplit
	// {92C68BF6-7814-4BFE-9634-3124A42AE2E9}
	static const GUID XSPLIT =
	{ 0x92c68bf6, 0x7814, 0x4bfe, { 0x96, 0x34, 0x31, 0x24, 0xa4, 0x2a, 0xe2, 0xe9 } };

	//! XSplit 2
	// {06737B8F-0F79-4787-89DD-132139E8A92D}
	static const GUID XSPLIT_2 =
	{ 0x06737b8f, 0x0f79, 0x4787, { 0x89, 0xdd, 0x13, 0x21, 0x39, 0xe8, 0xa9, 0x2d } };

	//! THUNDERX3
	// {776775F5-0E6E-4E19-9D67-F4E25E2DCF0E}
	static const GUID THUNDERX3 =
	{ 0x776775f5, 0x0e6e, 0x4e19, { 0x9d, 0x67, 0xf4, 0xe2, 0x5e, 0x2d, 0xcf, 0x0e } };

	//! XSplit 3
	// {BC335ED7-5EE2-421F-8463-83E84C2EAEFD}
	static const GUID XSPLIT_3 =
	{ 0xbc335ed7, 0x5ee2, 0x421f, { 0x84, 0x63, 0x83, 0xe8, 0x4c, 0x2e, 0xae, 0xfd } };

	//! Ning Mei
	// {1D50582D-C7EB-4B98-B455-C8545695AA31}
	static const GUID NING_MEI =
	{ 0x1d50582d, 0xc7eb, 0x4b98, { 0xb4, 0x55, 0xc8, 0x54, 0x56, 0x95, 0xaa, 0x31 } };

	//! PATRIOT VIPER KEYBOARD V770
	// {2716ADD7-EA1C-4A4D-A54C-8AF1A1000A01}
	static const GUID PATRIOT_VIPER_KEYBOARD_V770 =
	{ 0x2716add7, 0xea1c, 0x4a4d, { 0xa5, 0x4c, 0x8a, 0xf1, 0xa1, 0x00, 0x0a, 0x01 } };

	//! VIPER V570 SOFTWARE
	// {0B9E1BCF-01B6-4F3E-A7A6-292D28E6FDFF}
	static const GUID VIPER_V570_SOFTWARE =
	{ 0x0b9e1bcf, 0x01b6, 0x4f3e, { 0xa7, 0xa6, 0x29, 0x2d, 0x28, 0xe6, 0xfd, 0xff } };

	//! PATRIOT VIPER HEADSET V370
	// {EBD1070F-1749-4350-B5CC-54C7AE5315B2}
	static const GUID PATRIOT_VIPER_HEADSET_V370 =
	{ 0xebd1070f, 0x1749, 0x4350, { 0xb5, 0xcc, 0x54, 0xc7, 0xae, 0x53, 0x15, 0xb2 } };

	//! daskeyboard
	// {BD11684E-A074-46A5-86AF-8B8DA45A509C}
	static const GUID DASKEYBOARD =
	{ 0xbd11684e, 0xa074, 0x46a5, { 0x86, 0xaf, 0x8b, 0x8d, 0xa4, 0x5a, 0x50, 0x9c } };

	//! GeIL
	// {F31BCA74-5A17-4D5D-9021-8F73B776D188}
	static const GUID GEIL =
	{ 0xf31bca74, 0x5a17, 0x4d5d, { 0x90, 0x21, 0x8f, 0x73, 0xb7, 0x76, 0xd1, 0x88 } };

	//! Aquatuning
	// {A1988817-8A95-43D6-9FC5-36EB7966144D}
	static const GUID AQUATUNING =
	{ 0xa1988817, 0x8a95, 0x43d6, { 0x9f, 0xc5, 0x36, 0xeb, 0x79, 0x66, 0x14, 0x4d } };

	//! LIFX
	// {C009F863-3664-4DF9-9DA7-F4AAD53BF7B7}
	static const GUID LIFX =
	{ 0xc009f863, 0x3664, 0x4df9, { 0x9d, 0xa7, 0xf4, 0xaa, 0xd5, 0x3b, 0xf7, 0xb7 } };

	//! Yeelight
	// {22F3B1AE-241A-40B2-AEDD-10EA03E58F84}
	static const GUID YEELIGHT =
	{ 0x22f3b1ae, 0x241a, 0x40b2, { 0xae, 0xdd, 0x10, 0xea, 0x03, 0xe5, 0x8f, 0x84 } };

	//! G.SKILL
	// {6660BCDE-7C78-4F45-A40F-31FDCB70624A}
	static const GUID G_SKILL =
	{ 0x6660bcde, 0x7c78, 0x4f45, { 0xa4, 0x0f, 0x31, 0xfd, 0xcb, 0x70, 0x62, 0x4a } };

	//! Nike
	// {E034A449-772D-4790-9E5C-BAC544C0C453}
	static const GUID NIKE =
	{ 0xe034a449, 0x772d, 0x4790, { 0x9e, 0x5c, 0xba, 0xc5, 0x44, 0xc0, 0xc4, 0x53 } };

	//! DURGOD
	// {71AC5147-A913-413F-BE92-211ED7BE6CB1}
	static const GUID DURGOD =
	{ 0x71ac5147, 0xa913, 0x413f, { 0xbe, 0x92, 0x21, 0x1e, 0xd7, 0xbe, 0x6c, 0xb1 } };

	//! Logitech
	// {CC07B98B-948D-46AE-85BE-90B0E0F33936}
	static const GUID LOGITECH =
	{ 0xcc07b98b, 0x948d, 0x46ae, { 0x85, 0xbe, 0x90, 0xb0, 0xe0, 0xf3, 0x39, 0x36 } };

	//! GALAX
	// {CA707873-DFB3-44B9-96DC-C639AC52872D}
	static const GUID GALAX =
	{ 0xca707873, 0xdfb3, 0x44b9, { 0x96, 0xdc, 0xc6, 0x39, 0xac, 0x52, 0x87, 0x2d } };

	//! PCCOOLER
	// {154AA774-E2BF-447B-A48F-92C31E699098}
	static const GUID PCCOOLER =
	{ 0x154aa774, 0xe2bf, 0x447b, { 0xa4, 0x8f, 0x92, 0xc3, 0x1e, 0x69, 0x90, 0x98 } };

	//! Apacer_ZADAK
	// {04FDA7CE-C282-4EE4-AB04-0E66205288FD}
	static const GUID APACER_ZADAK =
	{ 0x04fda7ce, 0xc282, 0x4ee4, { 0xab, 0x04, 0xe, 0x66, 0x20, 0x52, 0x88, 0xfd } };

	//! Tuya
	// {0EED12EE-E807-4546-9F2A-BE9FC1DF5BD6}
	static const GUID TUYA =
	{ 0x0eed12ee, 0xe807, 0x4546, { 0x9f, 0x2a, 0xbe, 0x9f, 0xc1, 0xdf, 0x5b, 0xd6 } };

	//! Wiz
	// {51AF0D69-52A4-4E69-A330-F10BED22633C}
	static const GUID WIZ =
	{ 0x51af0d69, 0x52a4, 0x4e69, { 0xa3, 0x30, 0xf1, 0x0b, 0xed, 0x22, 0x63, 0x3c } };

	//! Zalman
	// {FF8B7D7A-B080-4D19-BCB8-1EB9B5919F2D}
	static const GUID ZALMAN =
	{ 0xff8b7d7a, 0xb080, 0x4d19, { 0xbc, 0xb8, 0x1e, 0xb9, 0xb5, 0x91, 0x9f, 0x2d } };

	//! XPG
	// {9A9730FB-C655-4843-8F31-4C938062E209}
	static const GUID XPG =
	{ 0x9a9730fb, 0xc655, 0x4843, { 0x8f, 0x31, 0x4c, 0x93, 0x80, 0x62, 0xe2, 0x09 } };
}

#endif