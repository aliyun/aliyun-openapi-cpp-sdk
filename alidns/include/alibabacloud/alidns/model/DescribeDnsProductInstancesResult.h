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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSPRODUCTINSTANCESRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSPRODUCTINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsProductInstancesResult : public ServiceResult
			{
			public:
				struct DnsProduct
				{
					long monitorNodeCount;
					bool inBlackHole;
					long bindDomainCount;
					bool regionLines;
					long bindCount;
					std::string endTime;
					long startTimestamp;
					std::string iSPLines;
					long endTimestamp;
					long dDosDefendQuery;
					std::string dnsSecurity;
					long uRLForwardCount;
					long tTLMinValue;
					std::string paymentType;
					std::string versionName;
					std::string overseaLine;
					std::string iSPRegionLines;
					bool gslb;
					long bindUsedCount;
					long dnsSLBCount;
					std::string instanceId;
					long monitorTaskCount;
					std::string startTime;
					long dDosDefendFlow;
					long monitorFrequency;
					std::string searchEngineLines;
					long bindDomainUsedCount;
					std::string versionCode;
					long overseaDDosDefendFlow;
					bool inClean;
					long subDomainLevel;
					std::string domain;
				};


				DescribeDnsProductInstancesResult();
				explicit DescribeDnsProductInstancesResult(const std::string &payload);
				~DescribeDnsProductInstancesResult();
				long getTotalCount()const;
				std::string getDomainType()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<DnsProduct> getDnsProducts()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string domainType_;
				long pageSize_;
				long pageNumber_;
				std::vector<DnsProduct> dnsProducts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSPRODUCTINSTANCESRESULT_H_