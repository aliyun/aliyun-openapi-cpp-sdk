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

#ifndef ALIBABACLOUD_ESS_MODEL_ATTACHVSERVERGROUPSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_ATTACHVSERVERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT AttachVServerGroupsRequest : public RpcServiceRequest
			{
			public:
				struct VServerGroup
				{
					std::string loadBalancerId;
					struct VServerGroupAttribute
					{
						std::string vServerGroupId;
						int port;
						int weight;
					};
					std::vector<VServerGroupAttribute> vServerGroupAttribute;
				};

			public:
				AttachVServerGroupsRequest();
				~AttachVServerGroupsRequest();

				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				bool getForceAttach()const;
				void setForceAttach(bool forceAttach);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<VServerGroup> getVServerGroup()const;
				void setVServerGroup(const std::vector<VServerGroup>& vServerGroup);

            private:
				std::string scalingGroupId_;
				bool forceAttach_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::vector<VServerGroup> vServerGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_ATTACHVSERVERGROUPSREQUEST_H_