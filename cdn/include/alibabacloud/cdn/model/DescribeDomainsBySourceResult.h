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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSBYSOURCERESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSBYSOURCERESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainsBySourceResult : public ServiceResult
			{
			public:
				struct DomainsData
				{
					struct DomainInfo
					{
						std::string status;
						std::string domainName;
						std::string createTime;
						std::string updateTime;
						std::string domainCname;
					};
					std::vector<std::string> domains;
					std::vector<DomainsData::DomainInfo> domainInfos;
					std::string source;
				};


				DescribeDomainsBySourceResult();
				explicit DescribeDomainsBySourceResult(const std::string &payload);
				~DescribeDomainsBySourceResult();
				std::vector<DomainsData> getDomainsList()const;
				std::string getSources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DomainsData> domainsList_;
				std::string sources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSBYSOURCERESULT_H_