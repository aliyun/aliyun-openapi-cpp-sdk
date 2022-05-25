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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZEMALAYSIAIDENTITYCARDRESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZEMALAYSIAIDENTITYCARDRESULT_H_

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
			class ALIBABACLOUD_OCR_EXPORT RecognizeMalaysiaIdentityCardResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AddressFirstLine
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
					struct AddressSecondLine
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
					struct AddressThirdLine
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
					struct AddressFourthLine
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
					struct AddressFifthLine
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
					struct CardBox
					{
						struct KeyPointsItem10
						{
							float x;
							float y;
						};
						std::string score;
						std::string text;
						std::vector<KeyPointsItem10> keyPoints9;
					};
					struct DriveClass
					{
						struct KeyPointsItem12
						{
							float x;
							float y;
						};
						std::string score;
						std::vector<KeyPointsItem12> keyPoints11;
						std::string text;
					};
					struct ExpiryDate
					{
						struct KeyPointsItem14
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem14> keyPoints13;
						std::string score;
						std::string text;
					};
					struct IdNumber
					{
						struct KeyPointsItem16
						{
							float x;
							float y;
						};
						std::string score;
						std::vector<KeyPointsItem16> keyPoints15;
						std::string text;
					};
					struct IssueDate
					{
						struct KeyPointsItem18
						{
							float x;
							float y;
						};
						std::string score;
						std::string text;
						std::vector<KeyPointsItem18> keyPoints17;
					};
					struct NameFirstLine
					{
						struct KeyPointsItem20
						{
							float x;
							float y;
						};
						std::string score;
						std::string text;
						std::vector<KeyPointsItem20> keyPoints19;
					};
					struct NameSecondLine
					{
						struct KeyPointsItem22
						{
							float x;
							float y;
						};
						std::string score;
						std::vector<KeyPointsItem22> keyPoints21;
						std::string text;
					};
					struct Nationality
					{
						struct KeyPointsItem24
						{
							float x;
							float y;
						};
						std::string score;
						std::vector<KeyPointsItem24> keyPoints23;
						std::string text;
					};
					struct PortraitBox
					{
						struct KeyPointsItem26
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem26> keyPoints25;
						std::string score;
						std::string text;
					};
					struct Sex
					{
						struct KeyPointsItem28
						{
							float x;
							float y;
						};
						std::vector<KeyPointsItem28> keyPoints27;
						std::string score;
						std::string text;
					};
					ExpiryDate expiryDate;
					IdNumber idNumber;
					CardBox cardBox;
					Sex sex;
					NameFirstLine nameFirstLine;
					IssueDate issueDate;
					PortraitBox portraitBox;
					Nationality nationality;
					AddressThirdLine addressThirdLine;
					AddressFourthLine addressFourthLine;
					AddressFirstLine addressFirstLine;
					NameSecondLine nameSecondLine;
					DriveClass driveClass;
					AddressSecondLine addressSecondLine;
					AddressFifthLine addressFifthLine;
				};


				RecognizeMalaysiaIdentityCardResult();
				explicit RecognizeMalaysiaIdentityCardResult(const std::string &payload);
				~RecognizeMalaysiaIdentityCardResult();
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
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZEMALAYSIAIDENTITYCARDRESULT_H_