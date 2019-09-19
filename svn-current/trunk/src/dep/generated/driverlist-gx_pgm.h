// This file was generated by src/dep/scripts/gamelist.pl (perl 5.024001)

// Declaration of all drivers
#define DRV extern struct BurnDriver
DRV		BurnDrvDdp3b;
DRV		BurnDrvDdp3a;
DRV		BurnDrvDdp3;
DRV		BurnDrvDdp3blka;
DRV		BurnDrvDdp3blk;
DRV		BurnDrvDdp2100c;
DRV		BurnDrvDdp2100hk;
DRV		BurnDrvDdp2100j;
DRV		BurnDrvDdp2100k;
DRV		BurnDrvDdp2100t;
DRV		BurnDrvDdp2100;
DRV		BurnDrvDdp2101c;
DRV		BurnDrvDdp2101hk;
DRV		BurnDrvDdp2101j;
DRV		BurnDrvDdp2101k;
DRV		BurnDrvDdp2101t;
DRV		BurnDrvDdp2101;
DRV		BurnDrvDdp2c;
DRV		BurnDrvDdp2hk;
DRV		BurnDrvDdp2j;
DRV		BurnDrvDdp2k;
DRV		BurnDrvDdp2t;
DRV		BurnDrvDdp2;
DRV		BurnDrvdmnfrnta;
DRV		BurnDrvdmnfrntb;
DRV		BurnDrvDmnfrnt;
DRV		BurnDrvDrgw2x;
DRV		BurnDrvDrgw2;
DRV		BurnDrvDrgw2j;
DRV		BurnDrvDrgw2c;
DRV		BurnDrvEspgal;
DRV		BurnDrvketarr;
DRV		BurnDrvketarr15;
DRV		BurnDrvketarr151;
DRV		BurnDrvketstoicu;
DRV		BurnDrvKetb;
DRV		BurnDrvKeta;
DRV		BurnDrvKet;
DRV		BurnDrvKillbld104;
DRV		BurnDrvKillbld;
DRV		BurnDrvKov100;
DRV		BurnDrvKov115;
DRV		BurnDrvKov;
DRV		BurnDrvKov2100;
DRV		BurnDrvKov2101;
DRV		BurnDrvKov2102;
DRV		BurnDrvKov2103;
DRV		BurnDrvKov2106;
DRV		BurnDrvKov2;
DRV		BurnDrvKov2p202;
DRV		BurnDrvKov2p204;
DRV		BurnDrvKov2p;
DRV		BurnDrvKovplusa;
DRV		BurnDrvKovplus;
DRV		BurnDrvkovshpa;
DRV		BurnDrvkovshp;
DRV		BurnDrvKovshb;
DRV		BurnDrvKovsh101;
DRV		BurnDrvKovsh102;
DRV		BurnDrvKovsh103;
DRV		BurnDrvKovsh;
DRV		BurnDrvkovshxas;
DRV		BurnDrvmartmastc102;
DRV		BurnDrvmartmastc;
DRV		BurnDrvMartmast;
DRV		BurnDrvOrlegend105k;
DRV		BurnDrvOrlegend111c;
DRV		BurnDrvOrlegend112ca;
DRV		BurnDrvOrlegend112e;
DRV		BurnDrvOrlegend112c;
DRV		BurnDrvOrlegend;
DRV		BurnDrvOlds100a;
DRV		BurnDrvOlds100;
DRV		BurnDrvOlds103t;
DRV		BurnDrvoldsplus;
DRV		BurnDrvOlds;
DRV		BurnDrvPhotoy2k104;
DRV		BurnDrvPhotoy2k;
DRV		BurnDrvphotoy2k102;
DRV		BurnDrvPuzzli2;
DRV		BurnDrvPuzzli2s;
DRV		BurnDrvPuzlstar;
DRV		BurnDrvPgmdemo;
DRV		BurnDrvPgmfrog;
DRV		BurnDrvPgemeni;
#undef DRV

// Structure containing addresses of all drivers
// Needs to be kept sorted (using the full game name as the key) to prevent problems with the gamelist in Kaillera
static struct BurnDriver* pDriver[] = {
	&BurnDrvDdp3b,				// DoDonPachi Dai-Ou-Jou (V100 (first version), Japan)
	&BurnDrvDdp3a,				// DoDonPachi Dai-Ou-Jou (V100 (second version), Japan)
	&BurnDrvDdp3,				// DoDonPachi Dai-Ou-Jou (V101, Japan)
	&BurnDrvDdp3blka,			// DoDonPachi Dai-Ou-Jou Black Label (V100 (2002.10.07 Black Ver), Japan)
	&BurnDrvDdp3blk,			// DoDonPachi Dai-Ou-Jou Black Label (V100, (2002.10.07.Black Ver), Japan)
	&BurnDrvdmnfrnta,			// Demon Front (V102, China)
	&BurnDrvdmnfrntb,			// Demon Front (V103)
	&BurnDrvDmnfrnt,			// Demon Front (V105)
	&BurnDrvDdp2100c,			// Bee Storm - DoDonPachi II (V100, China)
	&BurnDrvDdp2100hk,			// Bee Storm - DoDonPachi II (V100, Hong Kong)
	&BurnDrvDdp2100j,			// Bee Storm - DoDonPachi II (V100, Japan)
	&BurnDrvDdp2100k,			// Bee Storm - DoDonPachi II (V100, Korea)
	&BurnDrvDdp2100t,			// Bee Storm - DoDonPachi II (V100, Taiwan)
	&BurnDrvDdp2100,			// Bee Storm - DoDonPachi II (V100, World)
	&BurnDrvDdp2101c,			// Bee Storm - DoDonPachi II (V101, China)
	&BurnDrvDdp2101hk,			// Bee Storm - DoDonPachi II (V101, Hong Kong)
	&BurnDrvDdp2101j,			// Bee Storm - DoDonPachi II (V101, Japan)
	&BurnDrvDdp2101k,			// Bee Storm - DoDonPachi II (V101, Korea)
	&BurnDrvDdp2101t,			// Bee Storm - DoDonPachi II (V101, Taiwan)
	&BurnDrvDdp2101,			// Bee Storm - DoDonPachi II (V101, World)
	&BurnDrvDdp2c,				// Bee Storm - DoDonPachi II (V102, China)
	&BurnDrvDdp2hk,				// Bee Storm - DoDonPachi II (V102, Hong Kong)
	&BurnDrvDdp2j,				// Bee Storm - DoDonPachi II (V102, Japan)
	&BurnDrvDdp2k,				// Bee Storm - DoDonPachi II (V102, Korea)
	&BurnDrvDdp2t,				// Bee Storm - DoDonPachi II (V102, Taiwan)
	&BurnDrvDdp2,				// Bee Storm - DoDonPachi II (V102, World)
	&BurnDrvDrgw2x,				// Dragon World II (V100X, World)
	&BurnDrvDrgw2,				// Dragon World II (V110X, World)
	&BurnDrvDrgw2j,				// Chuugokuryuu II (V100J, Japan)
	&BurnDrvDrgw2c,				// Zhong Guo Long II (V100C, China)
	&BurnDrvEspgal,				// Espgaluda (V100, Japan)
	&BurnDrvketarr,				// Ketsui Kizuna Jigoku Tachi (Arrange Mode version 1.0, hack by Trap15)
	&BurnDrvketarr15,			// Ketsui Kizuna Jigoku Tachi (Arrange Mode version 1.5, hack by Trap15)
	&BurnDrvketarr151,			// Ketsui Kizuna Jigoku Tachi (Arrange Mode version 1.51, hack by Trap15)
	&BurnDrvketstoicu,			// Ketsui Kizuna Jigoku Tachi (MR. Stoic version, hack by Trap15)
	&BurnDrvKetb,				// Ketsui Kizuna Jigoku Tachi (Original?, Japan)
	&BurnDrvKeta,				// Ketsui Kizuna Jigoku Tachi (Revision 1?, Japan)
	&BurnDrvKet,				// Ketsui Kizuna Jigoku Tachi (Revision 2?, Japan)
	&BurnDrvKillbld104,			// The Killing Blade (V104)
	&BurnDrvKillbld,			// The Killing Blade (V109, China)
	&BurnDrvKov100,				// Knights of Valour - Sangoku Senki (V100, Japan)
	&BurnDrvKov115,				// Knights of Valour - Sangoku Senki (V115)
	&BurnDrvKov,				// Knights of Valour - Sangoku Senki (V117)
	&BurnDrvKov2100,			// Knights of Valour 2 (V100, 100, 100, Hong Kong)
	&BurnDrvKov2101,			// Knights of Valour 2 (V101, 101, 100, Hong Kong)
	&BurnDrvKov2102,			// Knights of Valour 2 (V102, 101, 100, Hong Kong)
	&BurnDrvKov2103,			// Knights of Valour 2 (V103, 101, 100, Hong Kong)
	&BurnDrvKov2106,			// Knights of Valour 2 (V106, 102, 100 Hong Kong)
	&BurnDrvKov2,				// Knights of Valour 2 (V107, 102, 100, Hong Kong)
	&BurnDrvKov2p202,			// Knights of Valour 2 Plus - Nine Dragons (VM202XX)
	&BurnDrvKov2p204,			// Knights of Valour 2 Plus - Nine Dragons (VM204XX)
	&BurnDrvKov2p,				// Knights of Valour 2 Plus - Nine Dragons (VM205XX, China)
	&BurnDrvKovplusa,			// Knights of Valour Plus - Sangoku Senki Plus (V119 alt)
	&BurnDrvKovplus,			// Knights of Valour Plus - Sangoku Senki Plus (V119)
	&BurnDrvkovshpa,			// Knights of Valour Super Heroes Plus / Sangoku Senki Super Heroes Plus (ver. 100)
	&BurnDrvkovshp,				// Knights of Valour Super Heroes Plus / Sangoku Senki Super Heroes Plus (ver. 101)
	&BurnDrvKovshb,				// Knights of Valour Superheroes / Sangoku Senki Superheroes (bootleg, V104, China)
	&BurnDrvKovsh101,			// Knights of Valour Superheroes / Sangoku Senki Superheroes (V101)
	&BurnDrvKovsh102,			// Knights of Valour Superheroes / Sangoku Senki Superheroes (V102)
	&BurnDrvKovsh103,			// Knights of Valour Superheroes / Sangoku Senki Superheroes (V103)
	&BurnDrvKovsh,				// Knights of Valour Superheroes / Sangoku Senki Superheroes (V104, China)
	&BurnDrvkovshxas,			// Knights of Valour: Ao Shi San Guo / Sangoku Senki: Ao shi San Guo (ver. 202CN)
	&BurnDrvmartmastc102,		// Martial Masters (V102, 101, 101, China)
	&BurnDrvmartmastc,			// Martial Masters (V104, 102, 101, China)
	&BurnDrvMartmast,			// Martial Masters (V104, 102, 102, USA)
	&BurnDrvOrlegend105k,		// Oriental Legend (V105, Korea)
	&BurnDrvOrlegend111c,		// Oriental Legend - Xi Yo Gi Shi Re Zuang (V111, China)
	&BurnDrvOrlegend112ca,		// Oriental Legend - Xi Yo Gi Shi Re Zuang (V112 alt, China)
	&BurnDrvOrlegend112e,		// Oriental Legend - Xi Yo Gi Shi Re Zuang (V112)
	&BurnDrvOrlegend112c,		// Oriental Legend - Xi Yo Gi Shi Re Zuang (V112, China)
	&BurnDrvOrlegend,			// Oriental Legend - Xi Yo Gi Shi Re Zuang (V126)
	&BurnDrvOlds100a,			// Oriental Legend Special - Xi Yo Gi Shi Re Zuang Super (V100 alt)
	&BurnDrvOlds100,			// Oriental Legend Special - Xi Yo Gi Shi Re Zuang Super (V100)
	&BurnDrvOlds103t,			// Oriental Legend Special - Xi Yo Gi Shi Re Zuang Super (V103, China, Tencent) (unprotected)
	&BurnDrvoldsplus,			// Oriental Legend Special Plus / Xi You Shi E Zhuan Super Plus (ver. 205)
	&BurnDrvOlds,				// Oriental Legend Super (V101, Korea)	&BurnDrvPhotoy2k104,		// Photo Y2K / Real and Fake (V104)
	&BurnDrvPhotoy2k,			// Photo Y2K / Real and Fake (V105)
	&BurnDrvphotoy2k102,		// Real and Fake\0Photo Y2K (V102, Japan)
	&BurnDrvPuzzli2,			// Puzzli 2 (V100)
	&BurnDrvPuzzli2s,			// Puzzli 2 Super (V200)
	&BurnDrvPuzlstar,			// Puzzle Star (V100MG)
	&BurnDrvPgmdemo,			// Chaos (PGM Demo)
	&BurnDrvPgmfrog,			// Frog Feast (PGM)
	&BurnDrvPgemeni,			// P-GeMeni (060123)

};