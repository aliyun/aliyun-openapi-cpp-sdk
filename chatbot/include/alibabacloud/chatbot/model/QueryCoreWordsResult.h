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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_QUERYCOREWORDSRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_QUERYCOREWORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT QueryCoreWordsResult : public ServiceResult
			{
			public:
				struct CoreWord
				{
					std::string coreWordName;
					std::vector<std::string> synonyms;
					std::string modifyTime;
					std::string createTime;
					std::string coreWordCode;
				};


				QueryCoreWordsResult();
				explicit QueryCoreWordsResult(const std::string &payload);
				~QueryCoreWordsResult();
				int getTotalCount()const;
				std::vector<CoreWord> getCoreWords()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<CoreWord> coreWords_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_QUERYCOREWORDSRESULT_H_