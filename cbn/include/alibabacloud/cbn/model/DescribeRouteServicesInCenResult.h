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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBEROUTESERVICESINCENRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBEROUTESERVICESINCENRESULT_H_

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
			class ALIBABACLOUD_CBN_EXPORT DescribeRouteServicesInCenResult : public ServiceResult
			{
			public:
				struct RouteServiceEntry
				{
					std::string status;
					std::string description;
					std::string hostRegionId;
					std::string cenId;
					std::string host;
					std::string accessRegionId;
					std::string updateInterval;
					std::string hostVpcId;
					std::vector<std::string> cidrs;
				};


				DescribeRouteServicesInCenResult();
				explicit DescribeRouteServicesInCenResult(const std::string &payload);
				~DescribeRouteServicesInCenResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RouteServiceEntry> getRouteServiceEntries()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<RouteServiceEntry> routeServiceEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBEROUTESERVICESINCENRESULT_H_