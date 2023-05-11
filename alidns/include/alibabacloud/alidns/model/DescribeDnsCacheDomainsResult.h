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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSCACHEDOMAINSRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSCACHEDOMAINSRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsCacheDomainsResult : public ServiceResult
			{
			public:
				struct Domain
				{
					struct SourceDnsServer
					{
						std::string port;
						std::string host;
					};
					long expireTimestamp;
					std::string instanceId;
					std::string domainName;
					std::string createTime;
					int cacheTtlMin;
					std::string remark;
					std::string versionCode;
					std::string domainId;
					std::string sourceEdns;
					std::string sourceProtocol;
					std::string updateTime;
					long updateTimestamp;
					int cacheTtlMax;
					std::vector<Domain::SourceDnsServer> sourceDnsServers;
					std::string expireTime;
					long createTimestamp;
				};


				DescribeDnsCacheDomainsResult();
				explicit DescribeDnsCacheDomainsResult(const std::string &payload);
				~DescribeDnsCacheDomainsResult();
				std::vector<Domain> getDomains()const;
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Domain> domains_;
				long totalCount_;
				long pageSize_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSCACHEDOMAINSRESULT_H_