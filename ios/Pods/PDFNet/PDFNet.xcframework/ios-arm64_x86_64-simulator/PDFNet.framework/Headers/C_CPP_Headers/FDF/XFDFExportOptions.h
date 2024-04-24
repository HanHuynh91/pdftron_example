// This file is autogenerated: please see the codegen template "Options"
#ifndef PDFTRON_H_CPPPDFXFDFExportOptions
#define PDFTRON_H_CPPPDFXFDFExportOptions

#include <PDF/OptionsBase.h>

namespace pdftron{ namespace FDF{ 

class XFDFExportOptions
{
public:
	XFDFExportOptions();
	~XFDFExportOptions();

	
	/**
	* Gets the value WriteAnnotationAppearance from the options object
	* When the option is enabled, the appearance wil be written for the annotations with custom appearance (i.e. different from that generated by RefreshAppearance()). Note, that if WriteImagedata is enabled, appearance will not be written for the annotations that support imagedata. In order to preserve vector information, WriteImagedata needs to be disabled
	* @return a bool, the current value for WriteAnnotationAppearance.
	*/
	bool GetWriteAnnotationAppearance();

	/**
	* Sets the value for WriteAnnotationAppearance in the options object
	* When the option is enabled, the appearance wil be written for the annotations with custom appearance (i.e. different from that generated by RefreshAppearance()). Note, that if WriteImagedata is enabled, appearance will not be written for the annotations that support imagedata. In order to preserve vector information, WriteImagedata needs to be disabled
	* @param value: the new value for WriteAnnotationAppearance
	* @return this object, for call chaining
	*/
	XFDFExportOptions& SetWriteAnnotationAppearance(bool value);

	
	/**
	* Gets the value WriteImagedata from the options object
	* If true, rasterized appearance will be written for the image-based annotations (stamps and signature fields) to xfdf
	* @return a bool, the current value for WriteImagedata.
	*/
	bool GetWriteImagedata();

	/**
	* Sets the value for WriteImagedata in the options object
	* If true, rasterized appearance will be written for the image-based annotations (stamps and signature fields) to xfdf
	* @param value: the new value for WriteImagedata
	* @return this object, for call chaining
	*/
	XFDFExportOptions& SetWriteImagedata(bool value);

	
	// @cond PRIVATE_DOC
	#ifndef SWIGHIDDEN
	const SDF::Obj& GetInternalObj() const;
	SDF::Obj& GetInternalObj();

private:
	
	SDF::ObjSet m_obj_set;
	SDF::Obj m_dict;
	#endif
	// @endcond
};

}
}

#include "../Impl/XFDFExportOptions.inl"
#endif // PDFTRON_H_CPPPDFXFDFExportOptions