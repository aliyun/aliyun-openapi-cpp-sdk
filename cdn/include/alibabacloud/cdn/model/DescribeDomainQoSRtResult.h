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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINQOSRTRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINQOSRTRESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainQoSRtResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string more3s;
					std::string more5s;
					std::string time;
				};


				DescribeDomainQoSRtResult();
				explicit DescribeDomainQoSRtResult(const std::string &payload);
				~DescribeDomainQoSRtResult();
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::vector<Data> getContent()const;
				void setContent(const std::vector<Data>& content);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::vector<Data> content_;
				std::string ip_;
				std::string startTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINQOSRTRESULT_H_