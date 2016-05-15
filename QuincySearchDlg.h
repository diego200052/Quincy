/*  Quincy IDE for the Pawn scripting language
 *
 *  Copyright ITB CompuPhase, 2014-2016
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may not
 *  use this file except in compliance with the License. You may obtain a copy
 *  of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *  License for the specific language governing permissions and limitations
 *  under the License.
 *
 *  Version: $Id: QuincySearchDlg.h 5504 2016-05-15 13:42:30Z  $
 */
#ifndef _QUINCYSEARCHDLG_H
#define _QUINCYSEARCHDLG_H

/**
@file
Subclass of SearchDlg, which is generated by wxFormBuilder.
*/

#include "QuincyDialogs.h"

//// end generated include

/** Implementing SearchDlg */
class QuincySearchDlg : public SearchDlg
{
public:
	QuincySearchDlg(wxWindow* parent);
	void SetFlags(unsigned flags);
	unsigned GetFlags() const;
	void SetScope(int scope);
	int GetScope() const;
    void SetSearchText(const wxString& text);
	wxString GetSearchText() const;
	void SetRecentList(const wxArrayString& choices);
};

#endif /* _QUINCYSEARCHDLG_H */