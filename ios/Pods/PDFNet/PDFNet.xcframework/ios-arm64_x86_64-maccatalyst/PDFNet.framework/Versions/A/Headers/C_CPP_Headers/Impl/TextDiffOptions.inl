// This file is autogenerated: please see the codegen template "Options"
namespace pdftron{ namespace PDF{ 

inline TextDiffOptions::TextDiffOptions()
	: m_obj_set()
	, m_dict()
{
	m_dict = m_obj_set.CreateDict();
}

inline TextDiffOptions::~TextDiffOptions()
{
}


inline ColorPt TextDiffOptions::GetColorA()
{
	SDF::Obj found = m_dict.FindObj("ColorA");
	if (!found.IsNull())
	{
		return OptionsBase::ColorPtFromNumber(found.GetNumber());
	}
	return OptionsBase::ColorPtFromNumber(0x80E65247);
}

inline TextDiffOptions& TextDiffOptions::SetColorA(ColorPt value)
{
	m_dict.PutNumber("ColorA", OptionsBase::ColorPtToNumber(value));
	return *this;
}

inline double TextDiffOptions::GetOpacityA()
{
	SDF::Obj found = m_dict.FindObj("OpacityA");
	if (!found.IsNull())
	{
		return found.GetNumber();
	}
	return 0.5;
}

inline TextDiffOptions& TextDiffOptions::SetOpacityA(double value)
{
	m_dict.PutNumber("OpacityA", value);
	return *this;
}


inline ColorPt TextDiffOptions::GetColorB()
{
	SDF::Obj found = m_dict.FindObj("ColorB");
	if (!found.IsNull())
	{
		return OptionsBase::ColorPtFromNumber(found.GetNumber());
	}
	return OptionsBase::ColorPtFromNumber(0x805CE632);
}

inline TextDiffOptions& TextDiffOptions::SetColorB(ColorPt value)
{
	m_dict.PutNumber("ColorB", OptionsBase::ColorPtToNumber(value));
	return *this;
}

inline double TextDiffOptions::GetOpacityB()
{
	SDF::Obj found = m_dict.FindObj("OpacityB");
	if (!found.IsNull())
	{
		return found.GetNumber();
	}
	return 0.5;
}

inline TextDiffOptions& TextDiffOptions::SetOpacityB(double value)
{
	m_dict.PutNumber("OpacityB", value);
	return *this;
}


inline ColorPt TextDiffOptions::GetExtraMoveColor()
{
	SDF::Obj found = m_dict.FindObj("ExtraMoveColor");
	if (!found.IsNull())
	{
		return OptionsBase::ColorPtFromNumber(found.GetNumber());
	}
	return OptionsBase::ColorPtFromNumber(0x80fef250);
}

inline TextDiffOptions& TextDiffOptions::SetExtraMoveColor(ColorPt value)
{
	m_dict.PutNumber("ExtraMoveColor", OptionsBase::ColorPtToNumber(value));
	return *this;
}

inline double TextDiffOptions::GetExtraMoveOpacity()
{
	SDF::Obj found = m_dict.FindObj("ExtraMoveOpacity");
	if (!found.IsNull())
	{
		return found.GetNumber();
	}
	return 0.8;
}

inline TextDiffOptions& TextDiffOptions::SetExtraMoveOpacity(double value)
{
	m_dict.PutNumber("ExtraMoveOpacity", value);
	return *this;
}


inline bool TextDiffOptions::GetCompareUsingZOrder()
{
	SDF::Obj found = m_dict.FindObj("CompareUsingZOrder");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (false);
}

inline TextDiffOptions& TextDiffOptions::SetCompareUsingZOrder(bool value)
{
	PDF::OptionsBase::PutBool(m_dict, "CompareUsingZOrder", (value));
	return *this;
}


inline bool TextDiffOptions::GetExtraMoveHighlight()
{
	SDF::Obj found = m_dict.FindObj("ExtraMoveHighlight");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (false);
}

inline TextDiffOptions& TextDiffOptions::SetExtraMoveHighlight(bool value)
{
	PDF::OptionsBase::PutBool(m_dict, "ExtraMoveHighlight", (value));
	return *this;
}


inline bool TextDiffOptions::GetShowPlaceholders()
{
	SDF::Obj found = m_dict.FindObj("ShowPlaceholders");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (true);
}

inline TextDiffOptions& TextDiffOptions::SetShowPlaceholders(bool value)
{
	PDF::OptionsBase::PutBool(m_dict, "ShowPlaceholders", (value));
	return *this;
}


inline bool TextDiffOptions::GetCompareStyles()
{
	SDF::Obj found = m_dict.FindObj("CompareStyles");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (false);
}

inline TextDiffOptions& TextDiffOptions::SetCompareStyles(bool value)
{
	PDF::OptionsBase::PutBool(m_dict, "CompareStyles", (value));
	return *this;
}


inline TextDiffOptions& TextDiffOptions::AddIgnoreZonesForPage(const RectCollection& regions, int page_num)
{
	OptionsBase::InsertRectCollection(m_dict, "IgnoreZones", regions, page_num - 1);
	return *this;
}


inline const SDF::Obj& TextDiffOptions::GetInternalObj() const
{
	return m_dict;
}

inline SDF::Obj& TextDiffOptions::GetInternalObj()
{
	return m_dict;
}

}
}
