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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDohSubDomainStatisticsSummaryResult : public ServiceResult
			{
			public:
				struct Statistic
				{
					std::string subDomain;
					long ipCount;
					long totalCount;
					long v4HttpCount;
					long v6HttpCount;
					long httpCount;
					long httpsCount;
					long v4HttpsCount;
					long v6HttpsCount;
				};


				DescribeDohSubDomainStatisticsSummaryResult();
				explicit DescribeDohSubDomainStatisticsSummaryResult(const std::string &payload);
				~DescribeDohSubDomainStatisticsSummaryResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotalPages()const;
				int getTotalItems()const;
				std::vector<Statistic> getStatistics()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int totalPages_;
				int totalItems_;
				std::vector<Statistic> statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESULT_H_