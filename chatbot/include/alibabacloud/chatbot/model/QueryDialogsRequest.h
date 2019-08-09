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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_QUERYDIALOGSREQUEST_H_
#define ALIBABACLOUD_CHATBOT_MODEL_QUERYDIALOGSREQUEST_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT QueryDialogsRequest : public RpcServiceRequest
			{

			public:
				QueryDialogsRequest();
				~QueryDialogsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDialogName()const;
				void setDialogName(const std::string& dialogName);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string instanceId_;
				int pageSize_;
				std::string dialogName_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_QUERYDIALOGSREQUEST_H_