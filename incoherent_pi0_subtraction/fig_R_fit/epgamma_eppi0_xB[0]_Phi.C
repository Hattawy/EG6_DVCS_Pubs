{
//=========Macro generated from canvas: c1/
//=========  (Fri Dec 18 09:59:46 2015) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "",1,1,700,476);
   c1->Range(-80.8421,0.01578948,424.421,0.5421053);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(18);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,10,0.1918736);
   gre->SetPointError(0,0,0.01727882);
   gre->SetPoint(1,30,0.1835967);
   gre->SetPointError(1,0,0.01678977);
   gre->SetPoint(2,50,0.1408935);
   gre->SetPointError(2,0,0.01747246);
   gre->SetPoint(3,70,0.1540388);
   gre->SetPointError(3,0,0.01367574);
   gre->SetPoint(4,90,0.1745058);
   gre->SetPointError(4,0,0.01546273);
   gre->SetPoint(5,110,0.1646707);
   gre->SetPointError(5,0,0.02207203);
   gre->SetPoint(6,130,0.1486111);
   gre->SetPointError(6,0,0.01990519);
   gre->SetPoint(7,150,0.1757656);
   gre->SetPointError(7,0,0.02171222);
   gre->SetPoint(8,170,0.1626667);
   gre->SetPointError(8,0,0.0292274);
   gre->SetPoint(9,190,0.1964912);
   gre->SetPointError(9,0,0.02679679);
   gre->SetPoint(10,210,0.1677116);
   gre->SetPointError(10,0,0.02285306);
   gre->SetPoint(11,230,0.2068966);
   gre->SetPointError(11,0,0.02980396);
   gre->SetPoint(12,250,0.1676446);
   gre->SetPointError(12,0,0.01670792);
   gre->SetPoint(13,270,0.1572927);
   gre->SetPointError(13,0,0.01710169);
   gre->SetPoint(14,290,0.1865242);
   gre->SetPointError(14,0,0.0177268);
   gre->SetPoint(15,310,0.1673152);
   gre->SetPointError(15,0,0.01271101);
   gre->SetPoint(16,330,0.1910112);
   gre->SetPointError(16,0,0.01921831);
   gre->SetPoint(17,350,0.1943662);
   gre->SetPointError(17,0,0.02383998);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,384);
   Graph_Graph2->SetMinimum(0.1);
   Graph_Graph2->SetMaximum(0.5);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph2->GetXaxis()->SetLabelFont(22);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleFont(22);
   Graph_Graph2->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph2->GetYaxis()->SetLabelFont(22);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(22);
   Graph_Graph2->GetZaxis()->SetLabelFont(22);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4397126,0.9339831,0.5602874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
