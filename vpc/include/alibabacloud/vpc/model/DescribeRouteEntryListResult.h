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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTEENTRYLISTRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTEENTRYLISTRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeRouteEntryListResult : public ServiceResult
			{
			public:
				struct RouteEntry
				{
					struct NextHop
					{
						struct NextHopRelatedInfo
						{
							std::string instanceId;
							std::string regionId;
							std::string instanceType;
						};
						std::string nextHopRegionId;
						std::string nextHopType;
						std::string nextHopId;
						int enabled;
						NextHopRelatedInfo nextHopRelatedInfo;
						int weight;
					};
					std::string status;
					std::string origin;
					std::string routeEntryId;
					std::string type;
					std::string description;
					std::string routeTableId;
					std::string ipVersion;
					std::vector<RouteEntry::NextHop> nextHops;
					std::string routeEntryName;
					std::string serviceType;
					std::string gmtModified;
					std::string destinationCidrBlock;
				};


				DescribeRouteEntryListResult();
				explicit DescribeRouteEntryListResult(const std::string &payload);
				~DescribeRouteEntryListResult();
				std::string getNextToken()const;
				std::vector<RouteEntry> getRouteEntrys()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<RouteEntry> routeEntrys_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTEENTRYLISTRESULT_H_