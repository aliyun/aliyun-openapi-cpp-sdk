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

#ifndef ALIBABACLOUD_ANYTRANS_MODEL_BATCHTRANSLATEFORHTMLRESULT_H_
#define ALIBABACLOUD_ANYTRANS_MODEL_BATCHTRANSLATEFORHTMLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/anytrans/AnyTransExport.h>

namespace AlibabaCloud
{
	namespace AnyTrans
	{
		namespace Model
		{
			class ALIBABACLOUD_ANYTRANS_EXPORT BatchTranslateForHtmlResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TranslationListItem
					{
						struct Usage
						{
							long inputTokens;
							long totalTokens;
							long outputTokens;
						};
						Usage usage;
						std::string translation;
						std::string message;
						std::string index;
						long code;
					};
					std::vector<TranslationListItem> translationList;
				};


				BatchTranslateForHtmlResult();
				explicit BatchTranslateForHtmlResult(const std::string &payload);
				~BatchTranslateForHtmlResult();
				std::string getMessage()const;
				std::string getRequestId()const;
				std::string getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string requestId_;
				std::string httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ANYTRANS_MODEL_BATCHTRANSLATEFORHTMLRESULT_H_