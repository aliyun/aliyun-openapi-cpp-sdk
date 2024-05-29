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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINRESOURCERESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINRESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDomainResourceResult : public ServiceResult
			{
			public:
				struct WebRule
				{
					struct ProxyConfig
					{
						std::vector<std::string> proxyPorts;
						std::string proxyType;
					};
					std::string sslProtocols;
					std::vector<WebRule::ProxyConfig> proxyTypes;
					bool ccRuleEnabled;
					std::vector<std::string> whiteList;
					std::vector<std::string> blackList;
					bool punishStatus;
					int rsType;
					std::vector<std::string> realServers;
					bool http2HttpsEnable;
					int punishReason;
					std::vector<std::string> instanceIds;
					std::string ccTemplate;
					bool ssl13Enabled;
					std::string policyMode;
					std::vector<std::string> customCiphers;
					bool ccEnabled;
					std::string sslCiphers;
					std::string cname;
					bool proxyEnabled;
					std::string httpsExt;
					bool https2HttpEnable;
					bool ocspEnabled;
					std::string certName;
					std::string domain;
					bool http2Enable;
				};


				DescribeDomainResourceResult();
				explicit DescribeDomainResourceResult(const std::string &payload);
				~DescribeDomainResourceResult();
				long getTotalCount()const;
				std::vector<WebRule> getWebRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<WebRule> webRules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINRESOURCERESULT_H_