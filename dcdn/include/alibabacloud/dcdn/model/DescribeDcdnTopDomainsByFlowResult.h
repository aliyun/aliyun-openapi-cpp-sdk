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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNTOPDOMAINSBYFLOWRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNTOPDOMAINSBYFLOWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnTopDomainsByFlowResult : public ServiceResult
			{
			public:
				struct TopDomain
				{
					long maxBps;
					std::string domainName;
					std::string maxBpsTime;
					long rank;
					std::string totalTraffic;
					long totalAccess;
					std::string trafficPercent;
				};


				DescribeDcdnTopDomainsByFlowResult();
				explicit DescribeDcdnTopDomainsByFlowResult(const std::string &payload);
				~DescribeDcdnTopDomainsByFlowResult();
				std::vector<TopDomain> getTopDomains()const;
				std::string getEndTime()const;
				long getDomainOnlineCount()const;
				std::string getStartTime()const;
				long getDomainCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TopDomain> topDomains_;
				std::string endTime_;
				long domainOnlineCount_;
				std::string startTime_;
				long domainCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNTOPDOMAINSBYFLOWRESULT_H_