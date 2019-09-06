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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBENETWORKACLSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBENETWORKACLSREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeNetworkAclsRequest : public RpcServiceRequest
			{

			public:
				DescribeNetworkAclsRequest();
				~DescribeNetworkAclsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getNetworkAclId()const;
				void setNetworkAclId(const std::string& networkAclId);
				std::string getResourceId()const;
				void setResourceId(const std::string& resourceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getNetworkAclName()const;
				void setNetworkAclName(const std::string& networkAclName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::string networkAclId_;
				std::string resourceId_;
				std::string resourceOwnerAccount_;
				std::string networkAclName_;
				long ownerId_;
				std::string resourceType_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBENETWORKACLSREQUEST_H_