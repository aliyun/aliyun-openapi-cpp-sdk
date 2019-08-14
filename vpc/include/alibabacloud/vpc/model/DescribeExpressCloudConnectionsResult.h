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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCLOUDCONNECTIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCLOUDCONNECTIONSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeExpressCloudConnectionsResult : public ServiceResult
			{
			public:
				struct ExpressCloudConnectionType
				{
					struct VirtualBorderRouterModel
					{
						std::string instanceId;
						std::string physicalConnectionId;
						std::string accessPointId;
					};
					std::string contactMail;
					std::string description;
					std::string endTime;
					std::vector<ExpressCloudConnectionType::VirtualBorderRouterModel> virtualBorderRouterModels;
					std::string peerLocation;
					std::string businessStatus;
					std::string name;
					std::string reservationOrderType;
					std::string iDCardNo;
					std::string contactTel;
					std::string gmtModify;
					std::string idcSP;
					int bandwidth;
					std::string reservationActiveTime;
					std::string reservationBandwidth;
					int distance;
					std::string status;
					std::string instanceId;
					std::string circuitCode;
					std::string isp;
					std::string hasReservationData;
					std::string redundantEccId;
					std::string reservationInternetChargeType;
					std::string applicationBandwidth;
					std::string applicationType;
					std::string gmtCreate;
					std::string type;
					std::string chargeType;
					std::string applicationStatus;
					std::string applicationId;
					std::string peerCity;
					std::string portType;
				};


				DescribeExpressCloudConnectionsResult();
				explicit DescribeExpressCloudConnectionsResult(const std::string &payload);
				~DescribeExpressCloudConnectionsResult();
				std::vector<ExpressCloudConnectionType> getExpressCloudConnectionSet()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ExpressCloudConnectionType> expressCloudConnectionSet_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCLOUDCONNECTIONSRESULT_H_