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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSPRODUCTINSTANCERESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSPRODUCTINSTANCERESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsProductInstanceResult : public ServiceResult
			{
			public:


				DescribeDnsProductInstanceResult();
				explicit DescribeDnsProductInstanceResult(const std::string &payload);
				~DescribeDnsProductInstanceResult();
				long getMonitorNodeCount()const;
				bool getInBlackHole()const;
				long getBindDomainCount()const;
				bool getRegionLines()const;
				long getBindCount()const;
				std::string getEndTime()const;
				long getStartTimestamp()const;
				std::string getISPLines()const;
				std::vector<std::string> getDnsServers()const;
				long getEndTimestamp()const;
				long getDDosDefendQuery()const;
				std::string getDnsSecurity()const;
				std::string getDomainType()const;
				long getURLForwardCount()const;
				long getTTLMinValue()const;
				std::string getPaymentType()const;
				std::string getVersionName()const;
				std::string getOverseaLine()const;
				std::string getISPRegionLines()const;
				bool getGslb()const;
				long getBindUsedCount()const;
				long getDnsSLBCount()const;
				std::string getInstanceId()const;
				long getMonitorTaskCount()const;
				std::string getStartTime()const;
				long getDDosDefendFlow()const;
				long getMonitorFrequency()const;
				std::string getSearchEngineLines()const;
				long getBindDomainUsedCount()const;
				std::string getVersionCode()const;
				long getOverseaDDosDefendFlow()const;
				bool getInClean()const;
				long getSubDomainLevel()const;
				std::string getDomain()const;

			protected:
				void parse(const std::string &payload);
			private:
				long monitorNodeCount_;
				bool inBlackHole_;
				long bindDomainCount_;
				bool regionLines_;
				long bindCount_;
				std::string endTime_;
				long startTimestamp_;
				std::string iSPLines_;
				std::vector<std::string> dnsServers_;
				long endTimestamp_;
				long dDosDefendQuery_;
				std::string dnsSecurity_;
				std::string domainType_;
				long uRLForwardCount_;
				long tTLMinValue_;
				std::string paymentType_;
				std::string versionName_;
				std::string overseaLine_;
				std::string iSPRegionLines_;
				bool gslb_;
				long bindUsedCount_;
				long dnsSLBCount_;
				std::string instanceId_;
				long monitorTaskCount_;
				std::string startTime_;
				long dDosDefendFlow_;
				long monitorFrequency_;
				std::string searchEngineLines_;
				long bindDomainUsedCount_;
				std::string versionCode_;
				long overseaDDosDefendFlow_;
				bool inClean_;
				long subDomainLevel_;
				std::string domain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSPRODUCTINSTANCERESULT_H_