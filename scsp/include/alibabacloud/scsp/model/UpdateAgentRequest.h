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

#ifndef ALIBABACLOUD_SCSP_MODEL_UPDATEAGENTREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_UPDATEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT UpdateAgentRequest : public RpcServiceRequest
			{

			public:
				UpdateAgentRequest();
				~UpdateAgentRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				std::vector<long> getSkillGroupId()const;
				void setSkillGroupId(const std::vector<long>& skillGroupId);
				std::vector<long> getSkillGroupIdList()const;
				void setSkillGroupIdList(const std::vector<long>& skillGroupIdList);

            private:
				std::string clientToken_;
				std::string instanceId_;
				std::string accountName_;
				std::string displayName_;
				std::vector<long> skillGroupId_;
				std::vector<long> skillGroupIdList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_UPDATEAGENTREQUEST_H_