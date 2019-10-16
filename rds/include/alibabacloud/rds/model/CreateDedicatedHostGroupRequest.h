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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDEDICATEDHOSTGROUPREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDEDICATEDHOSTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT CreateDedicatedHostGroupRequest : public RpcServiceRequest
			{

			public:
				CreateDedicatedHostGroupRequest();
				~CreateDedicatedHostGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getCpuAllocationRatio()const;
				void setCpuAllocationRatio(int cpuAllocationRatio);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getDiskAllocationRatio()const;
				void setDiskAllocationRatio(int diskAllocationRatio);
				int getMemAllocationRatio()const;
				void setMemAllocationRatio(int memAllocationRatio);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getHostReplacePolicy()const;
				void setHostReplacePolicy(const std::string& hostReplacePolicy);
				std::string getAllocationPolicy()const;
				void setAllocationPolicy(const std::string& allocationPolicy);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);

            private:
				long resourceOwnerId_;
				int cpuAllocationRatio_;
				std::string clientToken_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string engine_;
				std::string resourceOwnerAccount_;
				int diskAllocationRatio_;
				int memAllocationRatio_;
				long ownerId_;
				std::string hostReplacePolicy_;
				std::string allocationPolicy_;
				std::string vPCId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDEDICATEDHOSTGROUPREQUEST_H_