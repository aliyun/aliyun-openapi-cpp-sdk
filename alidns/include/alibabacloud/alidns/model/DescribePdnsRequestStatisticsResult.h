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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICSRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribePdnsRequestStatisticsResult : public ServiceResult
			{
			public:
				struct StatisticItem
				{
					struct ThreatItem
					{
						std::string threatLevel;
						std::string threatType;
					};
					long udpTotalCount;
					long ipCount;
					std::vector<StatisticItem::ThreatItem> threatInfo;
					std::string domainName;
					long v6HttpCount;
					long v4Count;
					long httpsCount;
					long v4HttpsCount;
					long v6Count;
					std::string subDomain;
					long totalCount;
					long v4HttpCount;
					long threatCount;
					std::string maxThreatLevel;
					long httpCount;
					long v6HttpsCount;
					long dohTotalCount;
				};


				DescribePdnsRequestStatisticsResult();
				explicit DescribePdnsRequestStatisticsResult(const std::string &payload);
				~DescribePdnsRequestStatisticsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<StatisticItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<StatisticItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICSRESULT_H_