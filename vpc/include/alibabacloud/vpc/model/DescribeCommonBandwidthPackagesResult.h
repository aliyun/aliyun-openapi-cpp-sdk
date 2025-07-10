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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBECOMMONBANDWIDTHPACKAGESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBECOMMONBANDWIDTHPACKAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeCommonBandwidthPackagesResult : public ServiceResult
			{
			public:
				struct CommonBandwidthPackage
				{
					struct PublicIpAddresse
					{
						std::string allocationId;
						std::string bandwidthPackageIpRelationStatus;
						std::string ipAddress;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string description;
					int serviceManaged;
					std::string resourceGroupId;
					std::string instanceChargeType;
					std::string businessStatus;
					std::string name;
					std::string reservationOrderType;
					std::string bandwidth;
					std::string expiredTime;
					std::vector<CommonBandwidthPackage::PublicIpAddresse> publicIpAddresses;
					std::string bandwidthPackageId;
					int ratio;
					std::string reservationActiveTime;
					std::string reservationBandwidth;
					std::vector<CommonBandwidthPackage::Tag> tags;
					std::string status;
					std::string zone;
					std::string iSP;
					std::string hasReservationData;
					std::string bizType;
					bool deletionProtection;
					std::string reservationInternetChargeType;
					std::string internetChargeType;
					std::string creationTime;
					std::vector<std::string> securityProtectionTypes;
					std::string regionId;
				};


				DescribeCommonBandwidthPackagesResult();
				explicit DescribeCommonBandwidthPackagesResult(const std::string &payload);
				~DescribeCommonBandwidthPackagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<CommonBandwidthPackage> getCommonBandwidthPackages()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<CommonBandwidthPackage> commonBandwidthPackages_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBECOMMONBANDWIDTHPACKAGESRESULT_H_