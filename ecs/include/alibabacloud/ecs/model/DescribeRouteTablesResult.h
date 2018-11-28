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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeRouteTablesResult : public ServiceResult
			{
			public:
				struct RouteTable
				{
					struct RouteEntry
					{
						struct NextHop
						{
							std::string nextHopType;
							std::string nextHopId;
							int enabled;
							int weight;
						};
						std::string status;
						std::string nextHopType;
						std::string type;
						std::string routeTableId;
						std::string instanceId;
						std::vector<RouteEntry::NextHop> nextHops;
						std::string destinationCidrBlock;
					};
					std::string vRouterId;
					std::string routeTableId;
					std::string resourceGroupId;
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
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESRESULT_H_