class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class TabletItem: InventoryItem_Base_F
    {
        type = 620;
    };
    class A3CN_Tablet: ItemCore
    {
        scope = 2;
        scopeArsenal=2;
        displayName = "Tablet de Combate";
        picture = "\a3cn_combat_tablet\data\UI\a3cn_tablet_item.paa";
        model = "\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
        simulation = "itemMineDetector";
        detectRange = -1;
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {"\a3cn_combat_tablet\data\a3cn_tablet_screen.paa"};
        hiddenSelectionsMaterials[] = {"\A3\Data_F\Lights\Lamp_lcd.rvmat"};
        descriptionShort = "Tablet de combate para uso dos operadores em campo";
        airFriction2[] = {0.01,0.01,0.01};
        airFriction1[] = {0.01,0.01,0.01};
        airFriction0[] = {0.01,0.01,0.01};
        airRotation = 0;
        gravityFactor = 1;
        
        class ItemInfo: TabletItem
        {
            mass = 8;
        };
    };
};
