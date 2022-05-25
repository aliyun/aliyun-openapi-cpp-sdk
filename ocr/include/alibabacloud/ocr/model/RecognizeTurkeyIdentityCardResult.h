/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZETURKEYIDENTITYCARDRESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZETURKEYIDENTITYCARDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ocr/OcrExport.h>

namespace AlibabaCloud
{
	namespace Ocr
	{
		namespace Model
		{
			class ALIBABACLOUD_OCR_EXPORT RecognizeTurkeyIdentityCardResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AuxiliaryTools
					{
						struct KeyPointsItem
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem> keyPoints;
						std::string text;
					};
					struct BirthDate
					{
						struct KeyPointsItem2
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem2> keyPoints1;
						std::string text;
					};
					struct BirthPlace
					{
						struct KeyPointsItem4
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem4> keyPoints3;
						std::string text;
					};
					struct BloodType
					{
						struct KeyPointsItem6
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem6> keyPoints5;
						std::string text;
					};
					struct CardBox
					{
						struct KeyPointsItem8
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem8> keyPoints7;
					};
					struct Cilt
					{
						struct KeyPointsItem10
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem10> keyPoints9;
					};
					struct DocumentNumber
					{
						struct KeyPointsItem12
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem12> keyPoints11;
						std::string text;
					};
					struct DriveClass
					{
						struct KeyPointsItem14
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem14> keyPoints13;
						float score;
						std::string text;
					};
					struct DueDate
					{
						struct KeyPointsItem16
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem16> keyPoints15;
						std::string text;
					};
					struct Duzenleyen
					{
						struct KeyPointsItem18
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem18> keyPoints17;
					};
					struct EntryNumber
					{
						struct KeyPointsItem20
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem20> keyPoints19;
					};
					struct ExpiryDate
					{
						struct KeyPointsItem22
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem22> keyPoints21;
						std::string text;
					};
					struct FatherName
					{
						struct KeyPointsItem24
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem24> keyPoints23;
						std::string text;
					};
					struct ForeignersId
					{
						struct KeyPointsItem26
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem26> keyPoints25;
						float score;
						std::string text;
					};
					struct Gender
					{
						struct KeyPointsItem28
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem28> keyPoints27;
						float score;
						std::string text;
					};
					struct GivenName
					{
						struct KeyPointsItem30
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem30> keyPoints29;
					};
					struct IdNumber
					{
						struct KeyPointsItem32
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem32> keyPoints31;
						std::string text;
					};
					struct IssueBy
					{
						struct KeyPointsItem34
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem34> keyPoints33;
						std::string text;
					};
					struct IssueCounty
					{
						struct KeyPointsItem36
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem36> keyPoints35;
						float score;
						std::string text;
					};
					struct IssueDate
					{
						struct KeyPointsItem38
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem38> keyPoints37;
						std::string text;
					};
					struct IssuePlace
					{
						struct KeyPointsItem40
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem40> keyPoints39;
					};
					struct Kutuk
					{
						struct KeyPointsItem42
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem42> keyPoints41;
						std::string text;
					};
					struct LicenseNumber
					{
						struct KeyPointsItem44
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem44> keyPoints43;
						std::string text;
					};
					struct MaritalStatus
					{
						struct KeyPointsItem46
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem46> keyPoints45;
						std::string text;
					};
					struct MotherName
					{
						struct KeyPointsItem48
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem48> keyPoints47;
						float score;
						std::string text;
					};
					struct Name
					{
						struct KeyPointsItem50
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem50> keyPoints49;
						float score;
						std::string text;
					};
					struct Nationality
					{
						struct KeyPointsItem52
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem52> keyPoints51;
					};
					struct NeighborhoodVillage
					{
						struct KeyPointsItem54
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem54> keyPoints53;
						std::string text;
					};
					struct PageNumber
					{
						struct KeyPointsItem56
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem56> keyPoints55;
						std::string text;
					};
					struct PassportNumber
					{
						struct KeyPointsItem58
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem58> keyPoints57;
						float score;
						std::string text;
					};
					struct PortraitBox
					{
						struct KeyPointsItem60
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem60> keyPoints59;
						std::string text;
					};
					struct Province
					{
						struct KeyPointsItem62
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem62> keyPoints61;
						std::string text;
					};
					struct ProvinceOfResidence
					{
						struct KeyPointsItem64
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem64> keyPoints63;
						std::string text;
					};
					struct ReasonOfIssue
					{
						struct KeyPointsItem66
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem66> keyPoints65;
						std::string text;
					};
					struct RegisterNumber
					{
						struct KeyPointsItem68
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem68> keyPoints67;
						std::string text;
					};
					struct Religion
					{
						struct KeyPointsItem70
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem70> keyPoints69;
						float score;
						std::string text;
					};
					struct Sayfa
					{
						struct KeyPointsItem72
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem72> keyPoints71;
						std::string text;
					};
					struct Seri
					{
						struct KeyPointsItem74
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem74> keyPoints73;
					};
					struct Surname
					{
						struct KeyPointsItem76
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem76> keyPoints75;
						std::string text;
					};
					struct TypeOfResidencePermit
					{
						struct KeyPointsItem78
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem78> keyPoints77;
						std::string text;
					};
					struct ValidUntil
					{
						struct KeyPointsItem80
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem80> keyPoints79;
						float score;
						std::string text;
					};
					struct Village
					{
						struct KeyPointsItem82
						{
							float x;
							float y;
						};
						float score;
						std::string text;
						std::vector<KeyPointsItem82> keyPoints81;
					};
					struct VolumeNumber
					{
						struct KeyPointsItem84
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem84> keyPoints83;
						std::string text;
					};
					struct Sex
					{
						struct KeyPointsItem86
						{
							float x;
							float y;
						};
						float score;
						std::vector<KeyPointsItem86> keyPoints85;
						std::string text;
					};
					ExpiryDate expiryDate;
					BirthPlace birthPlace;
					ForeignersId foreignersId;
					LicenseNumber licenseNumber;
					IdNumber idNumber;
					CardBox cardBox;
					Sex sex;
					ReasonOfIssue reasonOfIssue;
					GivenName givenName;
					Gender gender;
					NeighborhoodVillage neighborhoodVillage;
					PortraitBox portraitBox;
					IssuePlace issuePlace;
					TypeOfResidencePermit typeOfResidencePermit;
					Seri seri;
					Name name;
					PageNumber pageNumber;
					MotherName motherName;
					Kutuk kutuk;
					DriveClass driveClass;
					DueDate dueDate;
					IssueBy issueBy;
					Village village;
					Religion religion;
					IssueDate issueDate;
					DocumentNumber documentNumber;
					AuxiliaryTools auxiliaryTools;
					Cilt cilt;
					Nationality nationality;
					Province province;
					ValidUntil validUntil;
					VolumeNumber volumeNumber;
					EntryNumber entryNumber;
					MaritalStatus maritalStatus;
					RegisterNumber registerNumber;
					Duzenleyen duzenleyen;
					ProvinceOfResidence provinceOfResidence;
					PassportNumber passportNumber;
					Sayfa sayfa;
					IssueCounty issueCounty;
					Surname surname;
					BloodType bloodType;
					BirthDate birthDate;
					FatherName fatherName;
				};


				RecognizeTurkeyIdentityCardResult();
				explicit RecognizeTurkeyIdentityCardResult(const std::string &payload);
				~RecognizeTurkeyIdentityCardResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZETURKEYIDENTITYCARDRESULT_H_