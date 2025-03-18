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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEENSROUTETABLESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEENSROUTETABLESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeEnsRouteTablesResult : public ServiceResult
			{
			public:
				struct RouteTable
				{
					struct AssociatedResource
					{
						std::string resourceId;
						std::string resourceName;
						std::string resourceType;
					};
					std::string status;
					std::string networkName;
					std::string routeTableId;
					std::string description;
					std::vector<std::string> vSwitchIds;
					std::vector<RouteTable::AssociatedResource> associatedResources;
					std::string associateType;
					std::string networkId;
					std::string type;
					std::string creationTime;
					bool isDefaultGatewayRouteTable;
					std::string ensRegionId;
					std::string routeTableName;
				};


				DescribeEnsRouteTablesResult();
				explicit DescribeEnsRouteTablesResult(const std::string &payload);
				~DescribeEnsRouteTablesResult();
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
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEENSROUTETABLESRESULT_H_