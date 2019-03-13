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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORSREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIPv6TranslatorsRequest : public RpcServiceRequest
			{

			public:
				DescribeIPv6TranslatorsRequest();
				~DescribeIPv6TranslatorsRequest();

				std::string getBusinessStatus()const;
				void setBusinessStatus(const std::string& businessStatus);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getAllocateIpv6Addr()const;
				void setAllocateIpv6Addr(const std::string& allocateIpv6Addr);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getAllocateIpv4Addr()const;
				void setAllocateIpv4Addr(const std::string& allocateIpv4Addr);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getIpv6TranslatorId()const;
				void setIpv6TranslatorId(const std::string& ipv6TranslatorId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string businessStatus_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string allocateIpv6Addr_;
				std::string ownerAccount_;
				std::string allocateIpv4Addr_;
				long ownerId_;
				std::string spec_;
				int pageNumber_;
				std::string regionId_;
				std::string name_;
				int pageSize_;
				std::string ipv6TranslatorId_;
				std::string payType_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORSREQUEST_H_