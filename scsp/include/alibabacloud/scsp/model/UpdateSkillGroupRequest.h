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

#ifndef ALIBABACLOUD_SCSP_MODEL_UPDATESKILLGROUPREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_UPDATESKILLGROUPREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT UpdateSkillGroupRequest : public RpcServiceRequest
			{

			public:
				UpdateSkillGroupRequest();
				~UpdateSkillGroupRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				long getSkillGroupId()const;
				void setSkillGroupId(long skillGroupId);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				long getChannelType()const;
				void setChannelType(long channelType);
				std::string getSkillGroupName()const;
				void setSkillGroupName(const std::string& skillGroupName);
				std::string getDescription()const;
				void setDescription(const std::string& description);

            private:
				std::string instanceId_;
				std::string clientToken_;
				long skillGroupId_;
				std::string displayName_;
				long channelType_;
				std::string skillGroupName_;
				std::string description_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_UPDATESKILLGROUPREQUEST_H_