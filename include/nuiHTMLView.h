/*
 NUI3 - C++ cross-platform GUI framework for OpenGL based applications
 Copyright (C) 2002-2003 Sebastien Metrot
 
 licence: see nui3/LICENCE.TXT
 */

#pragma once

#include "nui.h"
#include "nuiHTML.h"

class nuiHTMLContext;

class nuiHTMLView : public nuiSimpleContainer
{
public:
  nuiHTMLView(float IdealWidth);
  ~nuiHTMLView();
  
  virtual nuiRect CalcIdealSize();
  virtual bool SetRect(const nuiRect& rRect);
  virtual bool Draw(nuiDrawContext* pContext);
  
  void SetIdealWidth(float IdealWidth);
  float GetIdealWidth() const;
  float GetVSpace() const;
  float GetHSpace() const;
  void SetVSpace(float interline);
  void SetHSpace(float InterWidget);
  
  bool SetText(const nglString& rHTMLText);
  bool SetURL(const nglString& rURL);
protected:
  void WalkTree(nuiHTMLNode* pNode, const nuiHTMLContext& rContext);
  bool InterpretTree(nuiHTMLNode* pNode, nuiHTMLContext& rContext);
  nuiRect Layout(nuiHTMLNode* pNode, bool setLayout, float IdealWidth);
  void LayoutLine(nuiWidgetList& line, float& x, float &y, float& w, float& h, float& HSpace, float &VSpace, bool setLayout);
  float mIdealWidth;
  float mVSpace;
  float mHSpace;
  
  nuiHTML* mpHTML;
  std::stack<nuiWidgetList> mFrameStack;
};