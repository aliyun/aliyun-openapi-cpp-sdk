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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLESRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLESRESULT_H_

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
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterRouteTablesResult : public ServiceResult
			{
			public:
				struct TransitRouterRouteTable
				{
					struct RouteTableOptions
					{
						std::string multiRegionECMP;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string transitRouterRouteTableId;
					std::string transitRouterRouteTableStatus;
					std::string transitRouterRouteTableType;
					std::string transitRouterRouteTableDescription;
					std::string createTime;
					std::string transitRouterRouteTableName;
					std::string regionId;
					RouteTableOptions routeTableOptions;
					std::vector<TransitRouterRouteTable::Tag> tags;
					std::string transitRouterId;
				};


				ListTransitRouterRouteTablesResult();
				explicit ListTransitRouterRouteTablesResult(const std::string &payload);
				~ListTransitRouterRouteTablesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<TransitRouterRouteTable> getTransitRouterRouteTables()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<TransitRouterRouteTable> transitRouterRouteTables_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLESRESULT_H_