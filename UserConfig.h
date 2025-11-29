//*************************************************************************
// Copyright(c) 2024 Dad Design.
// Display configuration for Emerald Guitar Pedal
// Corrected for Emerald 125B Hardware + ST7735
// This is likely GoolgleAI's generation
//*************************************************************************
#pragma once  

// 1. Screen Dimensions (ST7735 Standard)
#define TFT_WIDTH       128       
#define TFT_HEIGHT      160       

// 2. Display Controller
#define TFT_CONTROLEUR_TFT  7735 

// 3. Color Depth
#define TFT_COLOR 16
// #define INV_COLOR              // Uncomment if colors are inverted              

// Screen Offset (adjust if display has borders)
#define XSCREEN_OFFSET 0
#define YSCREEN_OFFSET 0

// 4. SPI Configuration
#define TFT_SPI_PORT SPI_1        
#define TFT_SPI_MODE Mode0 //could be mode 0 or 3        
#define TFT_SPI_BaudPrescaler PS_8 

// 5. Pin Configuration (MATCHING EMERALD HARDWARE)
#define TFT_MOSI D10              
#define TFT_SCLK D8               
#define TFT_DC   D9   // Emerald uses D9 for DC
#define TFT_RST  D11  // Emerald uses D11 for Reset

// 6. Block Sizing (Must divide evenly into 128x160)
#define NB_BLOC_WIDTH   8               
#define NB_BLOC_HEIGHT  10               
#define NB_BLOCS        NB_BLOC_WIDTH * NB_BLOC_HEIGHT 
#define BLOC_WIDTH      TFT_WIDTH / NB_BLOC_WIDTH      
#define BLOC_HEIGHT     TFT_HEIGHT / NB_BLOC_HEIGHT    

// 7. FIFO Size
#define SIZE_FIFO 5