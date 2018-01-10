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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPSDATAREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPSDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cdn/CdnRequest.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainHttpsDataRequest : public CdnRequest
			{

			public:
				DescribeDomainHttpsDataRequest();
				~DescribeDomainHttpsDataRequest();

				std::string getDomainType()const;
				void setDomainType(const std::string& domainType);
				std::string getFixTimeGap()const;
				void setFixTimeGap(const std::string& fixTimeGap);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getTimeMerge()const;
				void setTimeMerge(const std::string& timeMerge);
				std::string getDomainNames()const;
				void setDomainNames(const std::string& domainNames);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getInterval()const;
				void setInterval(const std::string& interval);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getCls()const;
				void setCls(const std::string& cls);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string domainType_;
				std::string fixTimeGap_;
				std::string securityToken_;
				std::string timeMerge_;
				std::string domainNames_;
				std::string endTime_;
				std::string interval_;
				std::string startTime_;
				std::string cls_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPSDATAREQUEST_H_