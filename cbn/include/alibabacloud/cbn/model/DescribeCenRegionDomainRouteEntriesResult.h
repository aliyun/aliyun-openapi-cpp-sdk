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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENREGIONDOMAINROUTEENTRIESRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENREGIONDOMAINROUTEENTRIESRESULT_H_

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
			class ALIBABACLOUD_CBN_EXPORT DescribeCenRegionDomainRouteEntriesResult : public ServiceResult
			{
			public:
				struct CenRouteEntry
				{
					struct CenRouteMapRecord
					{
						std::string regionId;
						std::string routeMapId;
					};
					struct CenOutRouteMapRecord
					{
						std::string regionId;
						std::string routeMapId;
					};
					std::vector<CenRouteEntry::CenOutRouteMapRecord> cenOutRouteMapRecords;
					std::string toOtherRegionStatus;
					std::string status;
					std::string nextHopType;
					std::string nextHopRegionId;
					std::string type;
					std::vector<CenRouteEntry::CenRouteMapRecord> cenRouteMapRecords;
					int preference;
					std::vector<std::string> communities;
					std::string destinationCidrBlock;
					std::vector<std::string> asPaths;
					std::string nextHopInstanceId;
				};


				DescribeCenRegionDomainRouteEntriesResult();
				explicit DescribeCenRegionDomainRouteEntriesResult(const std::string &payload);
				~DescribeCenRegionDomainRouteEntriesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<CenRouteEntry> getCenRouteEntries()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<CenRouteEntry> cenRouteEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENREGIONDOMAINROUTEENTRIESRESULT_H_