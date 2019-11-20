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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeNatGatewaysRequest : public RpcServiceRequest
			{

			public:
				DescribeNatGatewaysRequest();
				~DescribeNatGatewaysRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNatType()const;
				void setNatType(const std::string& natType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getNatGatewayId()const;
				void setNatGatewayId(const std::string& natGatewayId);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string spec_;
				int pageNumber_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string natType_;
				int pageSize_;
				std::string natGatewayId_;
				std::string instanceChargeType_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string vpcId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYSREQUEST_H_