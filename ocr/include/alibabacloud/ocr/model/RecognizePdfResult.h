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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZEPDFRESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZEPDFRESULT_H_

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
			class ALIBABACLOUD_OCR_EXPORT RecognizePdfResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct WordsInfoItem
					{
						struct PositionsItem
						{
							long x;
							long y;
						};
						std::string word;
						long angle;
						std::vector<WordsInfoItem::PositionsItem> positions;
						long x;
						long y;
						long height;
						long width;
					};
					std::vector<WordsInfoItem> wordsInfo;
					long orgWidth;
					long angle;
					long orgHeight;
					long height;
					long pageIndex;
					long width;
				};


				RecognizePdfResult();
				explicit RecognizePdfResult(const std::string &payload);
				~RecognizePdfResult();
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
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZEPDFRESULT_H_