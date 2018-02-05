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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACESFORGLOBALRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACESFORGLOBALRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeRouterInterfacesForGlobalResult : public ServiceResult
			{
			public:
				struct RouterInterfaceType
				{
					std::string oppositeInterfaceId;
					std::string oppositeInterfaceStatus;
					std::string oppositeRouterId;
					std::string description;
					std::string routerId;
					std::string businessStatus;
					std::string name;
					std::string oppositeRouterType;
					std::string connectedTime;
					std::string status;
					long oppositeInterfaceOwnerId;
					std::string oppositeRegionId;
					std::string healthCheckSourceIp;
					std::string oppositeInterfaceSpec;
					std::string role;
					std::string oppositeVpcInstanceId;
					std::string routerType;
					std::string chargeType;
					std::string accessPointId;
					std::string creationTime;
					std::string oppositeInterfaceBusinessStatus;
					std::string vpcInstanceId;
					std::string oppositeAccessPointId;
					std::string regionId;
					std::string spec;
					std::string routerInterfaceId;
					std::string healthCheckTargetIp;
				};


				DescribeRouterInterfacesForGlobalResult();
				explicit DescribeRouterInterfacesForGlobalResult(const std::string &payload);
				~DescribeRouterInterfacesForGlobalResult();
				std::string getDesc()const;
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RouterInterfaceType> getRouterInterfaceSet()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string desc_;
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<RouterInterfaceType> routerInterfaceSet_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTERINTERFACESFORGLOBALRESULT_H_