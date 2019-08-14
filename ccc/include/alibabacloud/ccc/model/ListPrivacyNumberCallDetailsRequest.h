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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTPRIVACYNUMBERCALLDETAILSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTPRIVACYNUMBERCALLDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListPrivacyNumberCallDetailsRequest : public RpcServiceRequest
			{

			public:
				ListPrivacyNumberCallDetailsRequest();
				~ListPrivacyNumberCallDetailsRequest();

				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getContactId()const;
				void setContactId(const std::string& contactId);
				std::string getAgentName()const;
				void setAgentName(const std::string& agentName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string agentId_;
				std::string instanceId_;
				std::string contactId_;
				std::string agentName_;
				int pageSize_;
				long endTime_;
				long startTime_;
				int pageNumber_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTPRIVACYNUMBERCALLDETAILSREQUEST_H_