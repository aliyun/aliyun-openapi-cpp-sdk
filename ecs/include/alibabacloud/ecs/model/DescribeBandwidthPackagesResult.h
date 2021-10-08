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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEBANDWIDTHPACKAGESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEBANDWIDTHPACKAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeBandwidthPackagesResult : public ServiceResult
			{
			public:
				struct BandwidthPackage
				{
					struct PublicIpAddresse
					{
						std::string allocationId;
						std::string ipAddress;
					};
					std::string status;
					std::string ipCount;
					std::string description;
					std::string zoneId;
					std::string instanceChargeType;
					std::string iSP;
					std::string businessStatus;
					std::string internetChargeType;
					std::string name;
					std::string bandwidth;
					std::string creationTime;
					std::vector<BandwidthPackage::PublicIpAddresse> publicIpAddresses;
					std::string bandwidthPackageId;
					std::string regionId;
					std::string natGatewayId;
				};


				DescribeBandwidthPackagesResult();
				explicit DescribeBandwidthPackagesResult(const std::string &payload);
				~DescribeBandwidthPackagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<BandwidthPackage> getBandwidthPackages()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<BandwidthPackage> bandwidthPackages_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEBANDWIDTHPACKAGESRESULT_H_