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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMONTHBILLINGBPSDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMONTHBILLINGBPSDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainMonthBillingBpsDataResult : public ServiceResult
			{
			public:


				DescribeDomainMonthBillingBpsDataResult();
				explicit DescribeDomainMonthBillingBpsDataResult(const std::string &payload);
				~DescribeDomainMonthBillingBpsDataResult();
				float getOverseasBandwidth95Bps()const;
				void setOverseasBandwidth95Bps(float overseasBandwidth95Bps);
				float getDomesticMonth4thBps()const;
				void setDomesticMonth4thBps(float domesticMonth4thBps);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				float getOverseasMonthavgBps()const;
				void setOverseasMonthavgBps(float overseasMonthavgBps);
				float getMonth4thBps()const;
				void setMonth4thBps(float month4thBps);
				float getDomesticMonthavgBps()const;
				void setDomesticMonthavgBps(float domesticMonthavgBps);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				float getBandwidth95Bps()const;
				void setBandwidth95Bps(float bandwidth95Bps);
				float getMonthavgBps()const;
				void setMonthavgBps(float monthavgBps);
				float getOverseasMonth4thBps()const;
				void setOverseasMonth4thBps(float overseasMonth4thBps);
				float getDomesticBandwidth95Bps()const;
				void setDomesticBandwidth95Bps(float domesticBandwidth95Bps);

			protected:
				void parse(const std::string &payload);
			private:
				float overseasBandwidth95Bps_;
				float domesticMonth4thBps_;
				std::string endTime_;
				std::string domainName_;
				float overseasMonthavgBps_;
				float month4thBps_;
				float domesticMonthavgBps_;
				std::string startTime_;
				float bandwidth95Bps_;
				float monthavgBps_;
				float overseasMonth4thBps_;
				float domesticBandwidth95Bps_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMONTHBILLINGBPSDATARESULT_H_