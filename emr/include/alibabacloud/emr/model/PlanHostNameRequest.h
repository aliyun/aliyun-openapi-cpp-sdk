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

#ifndef ALIBABACLOUD_EMR_MODEL_PLANHOSTNAMEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_PLANHOSTNAMEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT PlanHostNameRequest : public RpcServiceRequest
			{
				struct HostGroup
				{
					std::string groupType;
					std::string groupName;
				};
				struct HostInfo
				{
					std::string hpHostBizId;
					std::string hostGroupName;
				};

			public:
				PlanHostNameRequest();
				~PlanHostNameRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<HostGroup> getHostGroup()const;
				void setHostGroup(const std::vector<HostGroup>& hostGroup);
				std::vector<HostInfo> getHostInfo()const;
				void setHostInfo(const std::vector<HostInfo>& hostInfo);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::vector<HostGroup> hostGroup_;
				std::vector<HostInfo> hostInfo_;
				std::string clusterId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_PLANHOSTNAMEREQUEST_H_