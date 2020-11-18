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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCELISTREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDedicatedClusterInstanceListRequest : public RpcServiceRequest
			{

			public:
				DescribeDedicatedClusterInstanceListRequest();
				~DescribeDedicatedClusterInstanceListRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getInstanceStatus()const;
				void setInstanceStatus(const std::string& instanceStatus);
				std::string getDedicatedHostName()const;
				void setDedicatedHostName(const std::string& dedicatedHostName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getInstanceNetType()const;
				void setInstanceNetType(const std::string& instanceNetType);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				long resourceOwnerId_;
				std::string engineVersion_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string engine_;
				int pageSize_;
				std::string instanceStatus_;
				std::string dedicatedHostName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string instanceNetType_;
				std::string clusterId_;
				long ownerId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCELISTREQUEST_H_