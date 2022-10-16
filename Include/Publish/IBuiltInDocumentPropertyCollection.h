#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "Aspose.Cells.Systems/Double.h"
#include "IDocumentPropertyCollection.h"

namespace Aspose {
	namespace Cells {
		namespace Properties {
			class IDocumentProperty;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			/// A collection of built-in document properties.
			/// </summary>
			/// <remarks><p>Provides access to <see cref="IDocumentProperty" />
			///  objects by their names (using an indexer) and
			/// via a set of typed properties that return values of appropriate types.</p>
			/// </remarks>
	class ASPOSE_CELLS_API IBuiltInDocumentPropertyCollection : virtual public Aspose::Cells::Properties::IDocumentPropertyCollection
	{
		public:
			/// <overloads>Returns an <see cref="IDocumentProperty" />
			///  object.</overloads>
			/// <summary>
			/// Returns an <see cref="IDocumentProperty" />
			///  object by the name of the property.
			/// </summary>
			/// <remarks><p>The string names of the properties correspond to the names of the typed
			/// properties available from <see cref="IBuiltInDocumentPropertyCollection" />
			/// .</p>
			/// 
			/// 
			/// <p>If you request a property that is not present in the document, but the name
			/// of the property is recognized as a valid built-in name, a new <see cref="IDocumentProperty" />
			///  
			/// is created, added to the collection and returned. The newly created property is assigned
			/// a default value (empty string, zero, false or DateTime.MinValue depending on the type
			/// of the built-in property).</p>
			/// 
			/// 
			/// <p>If you request a property that is not present in the document and the name
			/// is not recognized as a built-in name, a null is returned.</p>
			/// </remarks>
			/// <param name="name" >The case-insensitive name of the property to retrieve.</param>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Gets the document's language.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetLanguage()=0;
			/// <summary>
			/// Sets the document's language.
			/// </summary>
			 virtual void SetLanguage(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the name of the document's author.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAuthor()=0;
			/// <summary>
			/// Sets the name of the document's author.
			/// </summary>
			 virtual void SetAuthor(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents an estimate of the number of bytes in the document.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetBytes()=0;
			/// <summary>
			/// Represents an estimate of the number of bytes in the document.
			/// </summary>
			 virtual void SetBytes(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents an estimate of the number of characters in the document.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCharacters()=0;
			/// <summary>
			/// Represents an estimate of the number of characters in the document.
			/// </summary>
			 virtual void SetCharacters(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents an estimate of the number of characters (including spaces) in the document.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCharactersWithSpaces()=0;
			/// <summary>
			/// Represents an estimate of the number of characters (including spaces) in the document.
			/// </summary>
			 virtual void SetCharactersWithSpaces(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the document comments.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetComments()=0;
			/// <summary>
			/// Gets the document comments.
			/// </summary>
			 virtual void SetComments(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Sets the category of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCategory()=0;
			/// <summary>
			/// Gets or sets the category of the document.
			/// </summary>
			 virtual void SetCategory(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the content type of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetContentType()=0;
			/// <summary>
			/// Sets the content type of the document.
			/// </summary>
			 virtual void SetContentType(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets the content status of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetContentStatus()=0;
			/// <summary>
			/// Gets the content status of the document.
			/// </summary>
			 virtual void SetContentStatus(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Sets the company property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCompany()=0;
			/// <summary>
			/// Sets the company property.
			/// </summary>
			 virtual void SetCompany(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the hyperlinkbase property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetHyperlinkBase()=0;
			/// <summary>
			/// Sets the hyperlinkbase property.
			/// </summary>
			 virtual void SetHyperlinkBase(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets date of the document creation in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetCreatedTime()=0;
			/// <summary>
			/// Sets date of the document creation in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetCreatedTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets the Universal time of the document creation.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetCreatedUniversalTime()=0;
			/// <summary>
			/// Sets the Universal time of the document creation.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetCreatedUniversalTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets the document keywords.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetKeywords()=0;
			/// <summary>
			/// Sets the document keywords.
			/// </summary>
			 virtual void SetKeywords(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the date when the document was last printed in UTC.
			/// </summary>
			/// <remarks><p>If the document was never printed, this property will return DateTime.MinValue.</p>
			/// <p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetLastPrinted()=0;
			/// <summary>
			/// Sets the date when the document was last printed in UTC.
			/// </summary>
			/// <remarks><p>If the document was never printed, this property will return DateTime.MinValue.</p>
			/// <p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastPrinted(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets the Universal time when the document was last printed.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetLastPrintedUniversalTime()=0;
			/// <summary>
			/// Sets the Universal time when the document was last printed.
			/// </summary>
			 virtual void SetLastPrintedUniversalTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets the name of the last author.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetLastSavedBy()=0;
			/// <summary>
			/// Sets the name of the last author.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastSavedBy(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the time of the last save in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetLastSavedTime()=0;
			/// <summary>
			/// Sets the time of the last save in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastSavedTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets the universal time of the last save.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetLastSavedUniversalTime()=0;
			/// <summary>
			/// Sets the universal time of the last save.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastSavedUniversalTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Represents an estimate of the number of lines in the document.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetLines()=0;
			/// <summary>
			/// Represents an estimate of the number of lines in the document.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLines(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the manager property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetManager()=0;
			/// <summary>
			/// Sets the manager property.
			/// </summary>
			 virtual void SetManager(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the name of the application.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetNameOfApplication()=0;
			/// <summary>
			/// Sets the name of the application.
			/// </summary>
			 virtual void SetNameOfApplication(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents an estimate of the number of pages in the document.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPages()=0;
			/// <summary>
			/// Represents an estimate of the number of pages in the document.
			/// </summary>
			 virtual void SetPages(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents an estimate of the number of paragraphs in the document.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetParagraphs()=0;
			/// <summary>
			/// Represents an estimate of the number of paragraphs in the document.
			/// </summary>
			 virtual void SetParagraphs(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the document revision number. 
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetRevisionNumber()=0;
			/// <summary>
			/// Sets the document revision number. 
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetRevisionNumber(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the subject of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSubject()=0;
			/// <summary>
			/// Sets the subject of the document.
			/// </summary>
			 virtual void SetSubject(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the informational name of the document template.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetTemplate()=0;
			/// <summary>
			/// Sets the informational name of the document template.
			/// </summary>
			 virtual void SetTemplate(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the title of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetTitle()=0;
			/// <summary>
			/// Sets the title of the document.
			/// </summary>
			 virtual void SetTitle(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the total editing time in minutes.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTotalEditingTime()=0;
			/// <summary>
			/// Sets the total editing time in minutes.
			/// </summary>
			 virtual void SetTotalEditingTime(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the version number of the application that created the document.
			/// </summary>
			/// <remarks>
			/// It's format is "00.0000",for example : 12.0000
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetVersion()=0;
			/// <summary>
			/// Represents the version number of the application that created the document.
			/// </summary>
			/// <remarks>
			/// It's format is "00.0000",for example : 12.0000
			/// </remarks>
			 virtual void SetVersion(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the version of the file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDocumentVersion()=0;
			/// <summary>
			/// Sets the version of the file.
			/// </summary>
			 virtual void SetDocumentVersion(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates the display mode of the document thumbnail.
			/// </summary>
			 virtual bool GetScaleCrop()=0;
			/// <summary>
			/// Indicates the display mode of the document thumbnail.
			/// </summary>
			 virtual void SetScaleCrop(bool value)=0;
			/// <summary>
			/// Indicates whether hyperlinks in a document are up-to-date.
			/// </summary>
			 virtual bool GetLinksUpToDate()=0;
			/// <summary>
			/// Indicates whether hyperlinks in a document are up-to-date.
			/// </summary>
			 virtual void SetLinksUpToDate(bool value)=0;
			/// <summary>
			/// Represents an estimate of the number of words in the document.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetWords()=0;
			/// <summary>
			/// Represents an estimate of the number of words in the document.
			/// </summary>
			 virtual void SetWords(Aspose::Cells::Systems::Int32 value)=0;
public:

			static  bool 		AutoInit_Static_BuiltInDocumentPropertyCollection();

	};
}
}
}
