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

#ifndef ALIBABACLOUD_CCS_MODEL_CREATETICKETREQUEST_H_
#define ALIBABACLOUD_CCS_MODEL_CREATETICKETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccs/CcsExport.h>

namespace AlibabaCloud
{
	namespace Ccs
	{
		namespace Model
		{
			class ALIBABACLOUD_CCS_EXPORT CreateTicketRequest : public RpcServiceRequest
			{

			public:
				CreateTicketRequest();
				~CreateTicketRequest();

				std::string getCreatorId()const;
				void setCreatorId(const std::string& creatorId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getCustomFields()const;
				void setCustomFields(const std::string& customFields);
				std::string getCcsInstanceId()const;
				void setCcsInstanceId(const std::string& ccsInstanceId);

            private:
				std::string creatorId_;
				std::string description_;
				std::string type_;
				std::string customFields_;
				std::string ccsInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCS_MODEL_CREATETICKETREQUEST_H_