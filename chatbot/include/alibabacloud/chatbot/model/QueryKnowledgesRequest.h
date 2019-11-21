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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_QUERYKNOWLEDGESREQUEST_H_
#define ALIBABACLOUD_CHATBOT_MODEL_QUERYKNOWLEDGESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT QueryKnowledgesRequest : public RpcServiceRequest
			{

			public:
				QueryKnowledgesRequest();
				~QueryKnowledgesRequest();

				std::string getKnowledgeTitle()const;
				void setKnowledgeTitle(const std::string& knowledgeTitle);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCoreWordName()const;
				void setCoreWordName(const std::string& coreWordName);
				long getCategoryId()const;
				void setCategoryId(long categoryId);

            private:
				std::string knowledgeTitle_;
				int pageNumber_;
				int pageSize_;
				std::string coreWordName_;
				long categoryId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_QUERYKNOWLEDGESREQUEST_H_