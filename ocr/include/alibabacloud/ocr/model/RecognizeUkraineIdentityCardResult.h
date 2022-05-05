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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZEUKRAINEIDENTITYCARDRESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZEUKRAINEIDENTITYCARDRESULT_H_

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
			class ALIBABACLOUD_OCR_EXPORT RecognizeUkraineIdentityCardResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct BirthDate
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
					struct CardBox
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
					struct DocumentNumber
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
					struct ExpiryDate
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
					struct NameEnglish
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
					struct NameUkraine
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
					struct Nationality
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
					struct Patronymic
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
					struct PortraitBox
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
					struct RecordNumber
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
					struct Sex
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
					struct SurnameEnglish
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
					struct SurnameUkraine
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
					ExpiryDate expiryDate;
					CardBox cardBox;
					Sex sex;
					NameUkraine nameUkraine;
					PortraitBox portraitBox;
					DocumentNumber documentNumber;
					SurnameEnglish surnameEnglish;
					Nationality nationality;
					SurnameUkraine surnameUkraine;
					NameEnglish nameEnglish;
					Patronymic patronymic;
					RecordNumber recordNumber;
					BirthDate birthDate;
				};


				RecognizeUkraineIdentityCardResult();
				explicit RecognizeUkraineIdentityCardResult(const std::string &payload);
				~RecognizeUkraineIdentityCardResult();
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
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZEUKRAINEIDENTITYCARDRESULT_H_