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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_CREATEENTITYREQUEST_H_
#define ALIBABACLOUD_CHATBOT_MODEL_CREATEENTITYREQUEST_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT CreateEntityRequest : public RpcServiceRequest
			{

			public:
				CreateEntityRequest();
				~CreateEntityRequest();

				std::string getEntityName()const;
				void setEntityName(const std::string& entityName);
				long getDialogId()const;
				void setDialogId(long dialogId);
				std::string getRegex()const;
				void setRegex(const std::string& regex);
				std::string getEntityType()const;
				void setEntityType(const std::string& entityType);
				std::string getMembers()const;
				void setMembers(const std::string& members);

            private:
				std::string entityName_;
				long dialogId_;
				std::string regex_;
				std::string entityType_;
				std::string members_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_CREATEENTITYREQUEST_H_