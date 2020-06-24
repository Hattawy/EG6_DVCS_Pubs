{
//=========Macro generated from canvas: c1/
//=========  (Fri Dec 18 09:59:46 2015) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "",0,0,700,500);
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
   gre->SetPoint(0,10,0.2173649);
   gre->SetPointError(0,0,0.01684412);
   gre->SetPoint(1,30,0.2118398);
   gre->SetPointError(1,0,0.01619167);
   gre->SetPoint(2,50,0.1866126);
   gre->SetPointError(2,0,0.01970022);
   gre->SetPoint(3,70,0.1717172);
   gre->SetPointError(3,0,0.01472644);
   gre->SetPoint(4,90,0.2051282);
   gre->SetPointError(4,0,0.01781088);
   gre->SetPoint(5,110,0.1922428);
   gre->SetPointError(5,0,0.02589966);
   gre->SetPoint(6,130,0.1504132);
   gre->SetPointError(6,0,0.02188276);
   gre->SetPoint(7,150,0.2006221);
   gre->SetPointError(7,0,0.02557555);
   gre->SetPoint(8,170,0.180602);
   gre->SetPointError(8,0,0.03502131);
   gre->SetPoint(9,190,0.2097458);
   gre->SetPointError(9,0,0.03073457);
   gre->SetPoint(10,210,0.1735849);
   gre->SetPointError(10,0,0.02563752);
   gre->SetPoint(11,230,0.2235872);
   gre->SetPointError(11,0,0.03452112);
   gre->SetPoint(12,250,0.1931494);
   gre->SetPointError(12,0,0.01951431);
   gre->SetPoint(13,270,0.1789243);
   gre->SetPointError(13,0,0.01994245);
   gre->SetPoint(14,290,0.2316785);
   gre->SetPointError(14,0,0.02001538);
   gre->SetPoint(15,310,0.2032691);
   gre->SetPointError(15,0,0.01339134);
   gre->SetPoint(16,330,0.2052092);
   gre->SetPointError(16,0,0.01849165);
   gre->SetPoint(17,350,0.2186421);
   gre->SetPointError(17,0,0.02327889);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,384);
   Graph_Graph1->SetMinimum(0.1);
   Graph_Graph1->SetMaximum(0.5);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph1->GetXaxis()->SetLabelFont(22);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleFont(22);
   Graph_Graph1->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph1->GetYaxis()->SetLabelFont(22);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(22);
   Graph_Graph1->GetZaxis()->SetLabelFont(22);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1);
   
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
