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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACEATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeRouterInterfaceAttributeResult : public ServiceResult
			{
			public:
				struct TagsItem
				{
					std::string value;
					std::string key;
				};


				DescribeRouterInterfaceAttributeResult();
				explicit DescribeRouterInterfaceAttributeResult(const std::string &payload);
				~DescribeRouterInterfaceAttributeResult();
				std::string getOppositeInterfaceId()const;
				std::string getOppositeInterfaceStatus()const;
				std::string getDescription()const;
				std::string getOppositeRouterId()const;
				std::string getMessage()const;
				std::string getEndTime()const;
				std::string getResourceGroupId()const;
				std::string getGmtModified()const;
				std::string getRouterId()const;
				std::string getBusinessStatus()const;
				bool getSuccess()const;
				std::string getName()const;
				std::string getReservationOrderType()const;
				std::string getOppositeRouterType()const;
				int getOppositeBandwidth()const;
				int getBandwidth()const;
				std::string getConnectedTime()const;
				std::string getFastLinkMode()const;
				std::string getReservationActiveTime()const;
				int getHcThreshold()const;
				std::string getReservationBandwidth()const;
				std::vector<TagsItem> getTags()const;
				std::string getStatus()const;
				std::string getOppositeInterfaceOwnerId()const;
				std::string getOppositeRegionId()const;
				std::string getHealthCheckSourceIp()const;
				std::string getHasReservationData()const;
				bool getCrossBorder()const;
				int getHcRate()const;
				std::string getCode()const;
				std::string getReservationInternetChargeType()const;
				std::string getOppositeInterfaceSpec()const;
				std::string getRole()const;
				std::string getOppositeVpcInstanceId()const;
				std::string getRouterType()const;
				std::string getChargeType()const;
				std::string getCreationTime()const;
				std::string getAccessPointId()const;
				std::string getVpcInstanceId()const;
				std::string getOppositeInterfaceBusinessStatus()const;
				std::string getOppositeAccessPointId()const;
				std::string getSpec()const;
				std::string getHealthCheckStatus()const;
				std::string getHealthCheckTargetIp()const;
				std::string getRouterInterfaceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string oppositeInterfaceId_;
				std::string oppositeInterfaceStatus_;
				std::string description_;
				std::string oppositeRouterId_;
				std::string message_;
				std::string endTime_;
				std::string resourceGroupId_;
				std::string gmtModified_;
				std::string routerId_;
				std::string businessStatus_;
				bool success_;
				std::string name_;
				std::string reservationOrderType_;
				std::string oppositeRouterType_;
				int oppositeBandwidth_;
				int bandwidth_;
				std::string connectedTime_;
				std::string fastLinkMode_;
				std::string reservationActiveTime_;
				int hcThreshold_;
				std::string reservationBandwidth_;
				std::vector<TagsItem> tags_;
				std::string status_;
				std::string oppositeInterfaceOwnerId_;
				std::string oppositeRegionId_;
				std::string healthCheckSourceIp_;
				std::string hasReservationData_;
				bool crossBorder_;
				int hcRate_;
				std::string code_;
				std::string reservationInternetChargeType_;
				std::string oppositeInterfaceSpec_;
				std::string role_;
				std::string oppositeVpcInstanceId_;
				std::string routerType_;
				std::string chargeType_;
				std::string creationTime_;
				std::string accessPointId_;
				std::string vpcInstanceId_;
				std::string oppositeInterfaceBusinessStatus_;
				std::string oppositeAccessPointId_;
				std::string spec_;
				std::string healthCheckStatus_;
				std::string healthCheckTargetIp_;
				std::string routerInterfaceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACEATTRIBUTERESULT_H_