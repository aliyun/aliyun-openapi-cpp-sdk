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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEWEBRULESRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEWEBRULESRESULT_H_

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
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeWebRulesResult : public ServiceResult
			{
			public:
				struct WebRule
				{
					struct GmCert
					{
						std::string certId;
						long gmEnable;
						long gmOnly;
					};
					struct ProxyConfig
					{
						std::vector<std::string> proxyPorts;
						std::string proxyType;
					};
					struct RealServer
					{
						std::string realServer;
						int rsType;
					};
					GmCert gmCert;
					std::vector<std::string> customCiphers;
					bool ccEnabled;
					std::string sslProtocols;
					std::vector<WebRule::ProxyConfig> proxyTypes;
					std::string certRegion;
					bool ccRuleEnabled;
					std::vector<std::string> whiteList;
					std::string sslCiphers;
					std::vector<std::string> blackList;
					bool punishStatus;
					std::string cname;
					bool proxyEnabled;
					bool https2HttpEnable;
					bool ocspEnabled;
					std::vector<WebRule::RealServer> realServers;
					bool http2HttpsEnable;
					int punishReason;
					std::string certName;
					std::string domain;
					bool http2Enable;
					std::string ccTemplate;
					bool ssl13Enabled;
					std::string policyMode;
				};


				DescribeWebRulesResult();
				explicit DescribeWebRulesResult(const std::string &payload);
				~DescribeWebRulesResult();
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
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEWEBRULESRESULT_H_