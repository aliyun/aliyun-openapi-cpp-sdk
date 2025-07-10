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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeRouterInterfacesResult : public ServiceResult
			{
			public:
				struct RouterInterfaceType
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string oppositeInterfaceId;
					std::string oppositeInterfaceStatus;
					std::string description;
					std::string oppositeRouterId;
					std::string endTime;
					std::string resourceGroupId;
					std::string routerId;
					std::string businessStatus;
					std::string name;
					std::string reservationOrderType;
					std::string oppositeRouterType;
					int oppositeBandwidth;
					int bandwidth;
					std::string connectedTime;
					bool fastLinkMode;
					std::string reservationActiveTime;
					int hcThreshold;
					std::string reservationBandwidth;
					std::vector<RouterInterfaceType::TagsItem> tags;
					std::string status;
					std::string oppositeInterfaceOwnerId;
					std::string oppositeRegionId;
					std::string healthCheckSourceIp;
					std::string hasReservationData;
					bool crossBorder;
					int hcRate;
					std::string reservationInternetChargeType;
					std::string oppositeInterfaceSpec;
					std::string role;
					std::string oppositeVpcInstanceId;
					std::string routerType;
					std::string chargeType;
					std::string ipv6Status;
					std::string creationTime;
					std::string accessPointId;
					std::string vpcInstanceId;
					std::string oppositeInterfaceBusinessStatus;
					std::string oppositeAccessPointId;
					std::string spec;
					std::string healthCheckTargetIp;
					std::string routerInterfaceId;
				};


				DescribeRouterInterfacesResult();
				explicit DescribeRouterInterfacesResult(const std::string &payload);
				~DescribeRouterInterfacesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RouterInterfaceType> getRouterInterfaceSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<RouterInterfaceType> routerInterfaceSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACESRESULT_H_