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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEAVAILABLEDEDICATEDHOSTCLASSESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEAVAILABLEDEDICATEDHOSTCLASSESREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeAvailableDedicatedHostClassesRequest : public RpcServiceRequest
			{

			public:
				DescribeAvailableDedicatedHostClassesRequest();
				~DescribeAvailableDedicatedHostClassesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getStorageType()const;
				void setStorageType(const std::string& storageType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string storageType_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEAVAILABLEDEDICATEDHOSTCLASSESREQUEST_H_