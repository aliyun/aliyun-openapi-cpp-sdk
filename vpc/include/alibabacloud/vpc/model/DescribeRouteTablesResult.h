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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeRouteTablesResult : public ServiceResult
			{
			public:
				struct RouteTable
				{
					struct RouteEntry
					{
						struct NextHop
						{
							std::string nextHopOppsiteRegionId;
							std::string nextHopType;
							std::string nextHopRegionId;
							std::string nextHopId;
							int enabled;
							std::string nextHopOppsiteType;
							std::string nextHopOppsiteInstanceId;
							int weight;
						};
						std::string status;
						std::string nextHopOppsiteRegionId;
						std::string routeTableId;
						std::string description;
						std::string privateIpAddress;
						std::string instanceId;
						std::vector<RouteEntry::NextHop> nextHops;
						std::string nextHopOppsiteType;
						std::string destinationCidrBlock;
						std::string nextHopType;
						std::string nextHopRegionId;
						std::string routeEntryId;
						std::string type;
						std::string routeEntryName;
						std::string nextHopOppsiteInstanceId;
					};
					std::string status;
					std::string vRouterId;
					std::string routeTableId;
					std::string resourceGroupId;
					std::vector<std::string> vSwitchIds;
					std::string creationTime;
					std::vector<RouteTable::RouteEntry> routeEntrys;
					std::string routeTableType;
				};


				DescribeRouteTablesResult();
				explicit DescribeRouteTablesResult(const std::string &payload);
				~DescribeRouteTablesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RouteTable> getRouteTables()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<RouteTable> routeTables_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLESRESULT_H_