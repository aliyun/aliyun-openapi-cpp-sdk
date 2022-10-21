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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENROUTEMAPSRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENROUTEMAPSRESULT_H_

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
			class ALIBABACLOUD_CBN_EXPORT DescribeCenRouteMapsResult : public ServiceResult
			{
			public:
				struct RouteMap
				{
					std::string matchAddressType;
					std::string description;
					bool sourceInstanceIdsReverseMatch;
					std::string transmitDirection;
					std::vector<std::string> matchCommunitySet;
					std::string cenRegionId;
					std::vector<std::string> sourceRouteTableIds;
					std::vector<std::string> destinationInstanceIds;
					bool destinationInstanceIdsReverseMatch;
					std::vector<std::string> sourceInstanceIds;
					std::vector<std::string> destinationRouteTableIds;
					std::vector<std::string> destinationCidrBlocks;
					std::string routeMapId;
					std::vector<std::string> operateCommunitySet;
					std::vector<std::string> destinationChildInstanceTypes;
					std::string status;
					int priority;
					std::vector<std::string> sourceChildInstanceTypes;
					std::string asPathMatchMode;
					std::string mapResult;
					std::string cidrMatchMode;
					std::vector<std::string> originalRouteTableIds;
					std::string transitRouterRouteTableId;
					std::vector<std::string> routeTypes;
					std::string gatewayZoneId;
					int preference;
					std::string communityOperateMode;
					std::string cenId;
					std::vector<std::string> destinationRegionIds;
					int nextPriority;
					std::string gatewayRegionId;
					std::vector<std::string> prependAsPath;
					std::string communityMatchMode;
					std::vector<std::string> srcZoneIds;
					std::vector<std::string> matchAsns;
					std::vector<std::string> sourceRegionIds;
				};


				DescribeCenRouteMapsResult();
				explicit DescribeCenRouteMapsResult(const std::string &payload);
				~DescribeCenRouteMapsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RouteMap> getRouteMaps()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<RouteMap> routeMaps_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENROUTEMAPSRESULT_H_