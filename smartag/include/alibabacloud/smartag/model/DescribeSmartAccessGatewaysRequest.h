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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSmartAccessGatewaysRequest : public RpcServiceRequest
			{

			public:
				DescribeSmartAccessGatewaysRequest();
				~DescribeSmartAccessGatewaysRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSerialNumber()const;
				void setSerialNumber(const std::string& serialNumber);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getAclIds()const;
				void setAclIds(const std::string& aclIds);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getAssociatedCcnId()const;
				void setAssociatedCcnId(const std::string& associatedCcnId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getUnboundAclIds()const;
				void setUnboundAclIds(const std::string& unboundAclIds);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getSmartAGId()const;
				void setSmartAGId(const std::string& smartAGId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string serialNumber_;
				std::string resourceOwnerAccount_;
				std::string aclIds_;
				std::string ownerAccount_;
				std::string associatedCcnId_;
				long ownerId_;
				std::string unboundAclIds_;
				std::string pageNumber_;
				std::string regionId_;
				std::string name_;
				std::string pageSize_;
				std::string smartAGId_;
				std::string instanceType_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSREQUEST_H_