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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENBANDWIDTHPACKAGESRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENBANDWIDTHPACKAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT DescribeCenBandwidthPackagesResult : public ServiceResult
			{
			public:
				struct CenBandwidthPackage
				{
					struct OrginInterRegionBandwidthLimit
					{
						std::string geographicSpanId;
						std::string oppositeRegionId;
						std::string bandwidthLimit;
						std::string localRegionId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string description;
					std::string geographicSpanId;
					std::string resourceGroupId;
					std::string geographicRegionBId;
					std::string geographicRegionAId;
					bool isCrossBorder;
					std::string businessStatus;
					std::string name;
					std::string reservationOrderType;
					std::string serviceType;
					long bandwidth;
					std::string expiredTime;
					std::string ratio;
					std::vector<CenBandwidthPackage::OrginInterRegionBandwidthLimit> orginInterRegionBandwidthLimits;
					std::string reservationActiveTime;
					std::string cenBandwidthPackageId;
					std::string reservationBandwidth;
					std::vector<CenBandwidthPackage::Tag> tags;
					std::string status;
					std::string hasReservationData;
					std::string reservationInternetChargeType;
					std::string typeFor95;
					std::string bandwidthPackageChargeType;
					std::string creationTime;
					std::vector<std::string> cenIds;
				};


				DescribeCenBandwidthPackagesResult();
				explicit DescribeCenBandwidthPackagesResult(const std::string &payload);
				~DescribeCenBandwidthPackagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<CenBandwidthPackage> getCenBandwidthPackages()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<CenBandwidthPackage> cenBandwidthPackages_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENBANDWIDTHPACKAGESRESULT_H_