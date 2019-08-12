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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVPCSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVPCSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeVpcsRequest : public RpcServiceRequest
			{

			public:
				DescribeVpcsRequest();
				~DescribeVpcsRequest();

				bool getResourceOwnerId()const;
				void setResourceOwnerId(bool resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				bool getIsDefault()const;
				void setIsDefault(bool isDefault);
				bool getOwnerId()const;
				void setOwnerId(bool ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				bool resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string vpcId_;
				std::string ownerAccount_;
				int pageSize_;
				bool isDefault_;
				bool ownerId_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVPCSREQUEST_H_