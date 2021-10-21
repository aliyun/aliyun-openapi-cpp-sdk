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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEVSWITCHESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEVSWITCHESREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeVSwitchesRequest : public RpcServiceRequest
			{

			public:
				DescribeVSwitchesRequest();
				~DescribeVSwitchesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getDedicatedHostGroupId()const;
				void setDedicatedHostGroupId(const std::string& dedicatedHostGroupId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				long resourceOwnerId_;
				long pageNumber_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				long pageSize_;
				std::string dedicatedHostGroupId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string vpcId_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEVSWITCHESREQUEST_H_