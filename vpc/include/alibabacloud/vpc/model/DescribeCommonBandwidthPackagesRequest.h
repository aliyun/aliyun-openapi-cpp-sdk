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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBECOMMONBANDWIDTHPACKAGESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBECOMMONBANDWIDTHPACKAGESREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeCommonBandwidthPackagesRequest : public RpcServiceRequest
			{

			public:
				DescribeCommonBandwidthPackagesRequest();
				~DescribeCommonBandwidthPackagesRequest();

				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBandwidthPackageId()const;
				void setBandwidthPackageId(const std::string& bandwidthPackageId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				bool getIncludeReservationData()const;
				void setIncludeReservationData(bool includeReservationData);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string resourceGroupId_;
				long resourceOwnerId_;
				std::string bandwidthPackageId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string name_;
				int pageSize_;
				long ownerId_;
				bool includeReservationData_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBECOMMONBANDWIDTHPACKAGESREQUEST_H_