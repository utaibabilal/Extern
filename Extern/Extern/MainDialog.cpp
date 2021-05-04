#include "StdAfx.h"
#include "MainDialog.h"

extern MainDialog *g_appFormView = NULL;
MainDialog::MainDialog(void)
{
   g_appFormView = this;

   squareObj.height = 32;
   squareObj.width = 42;
}


MainDialog::~MainDialog(void)
{
}
