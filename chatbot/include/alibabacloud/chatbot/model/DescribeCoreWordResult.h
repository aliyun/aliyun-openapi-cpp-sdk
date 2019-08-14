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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBECOREWORDRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBECOREWORDRESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT DescribeCoreWordResult : public ServiceResult
			{
			public:


				DescribeCoreWordResult();
				explicit DescribeCoreWordResult(const std::string &payload);
				~DescribeCoreWordResult();
				std::vector<std::string> getSynonyms()const;
				std::string getCoreWordName()const;
				std::string getModifyTime()const;
				std::string getCreateTime()const;
				std::string getCoreWordCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> synonyms_;
				std::string coreWordName_;
				std::string modifyTime_;
				std::string createTime_;
				std::string coreWordCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBECOREWORDRESULT_H_