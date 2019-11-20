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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSRCBPSDATAREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSRCBPSDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainSrcBpsDataRequest : public RpcServiceRequest
			{

			public:
				DescribeDomainSrcBpsDataRequest();
				~DescribeDomainSrcBpsDataRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getFixTimeGap()const;
				void setFixTimeGap(const std::string& fixTimeGap);
				std::string getTimeMerge()const;
				void setTimeMerge(const std::string& timeMerge);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInterval()const;
				void setInterval(const std::string& interval);

            private:
				std::string startTime_;
				std::string fixTimeGap_;
				std::string timeMerge_;
				std::string domainName_;
				std::string endTime_;
				long ownerId_;
				std::string interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSRCBPSDATAREQUEST_H_