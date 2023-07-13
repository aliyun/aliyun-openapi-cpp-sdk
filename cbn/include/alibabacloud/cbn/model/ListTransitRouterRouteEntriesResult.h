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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTEENTRIESRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTEENTRIESRESULT_H_

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
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterRouteEntriesResult : public ServiceResult
			{
			public:
				struct TransitRouterRouteEntry
				{
					struct PathAttributes
					{
						std::string originRouteType;
						int preference;
						std::string originInstanceType;
						std::string originInstanceId;
						std::vector<std::string> communities1;
						std::vector<std::string> asPaths2;
					};
					std::string transitRouterRouteEntryOriginResourceType;
					std::string transitRouterRouteEntryNextHopId;
					std::string transitRouterRouteEntryOriginResourceId;
					std::string prefixListId;
					std::vector<std::string> communities;
					PathAttributes pathAttributes;
					std::string createTime;
					std::string transitRouterRouteEntryNextHopType;
					bool operationalMode;
					std::string transitRouterRouteEntryDestinationCidrBlock;
					std::string transitRouterRouteEntryNextHopResourceId;
					std::string transitRouterRouteEntryNextHopResourceType;
					std::string transitRouterRouteEntryType;
					int preference;
					std::string transitRouterRouteEntryDescription;
					std::string transitRouterRouteEntryName;
					std::string tag;
					std::vector<std::string> asPaths;
					std::string transitRouterRouteEntryId;
					std::string transitRouterRouteEntryStatus;
				};


				ListTransitRouterRouteEntriesResult();
				explicit ListTransitRouterRouteEntriesResult(const std::string &payload);
				~ListTransitRouterRouteEntriesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<TransitRouterRouteEntry> getTransitRouterRouteEntries()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<TransitRouterRouteEntry> transitRouterRouteEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTEENTRIESRESULT_H_