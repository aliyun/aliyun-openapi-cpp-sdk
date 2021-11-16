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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSRESULT_H_

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
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDomainsResult : public ServiceResult
			{
			public:
				struct Domain
				{
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
					bool ccEnabled;
					std::vector<Domain::ProxyConfig> proxyTypeList;
					std::string sslProtocols;
					bool ccRuleEnabled;
					std::vector<std::string> whiteList;
					std::string sslCiphers;
					std::vector<std::string> blackList;
					std::string cname;
					std::vector<Domain::RealServer> realServers;
					std::string certName;
					std::string domain;
					bool http2Enable;
					std::string ccTemplate;
				};


				DescribeDomainsResult();
				explicit DescribeDomainsResult(const std::string &payload);
				~DescribeDomainsResult();
				std::vector<Domain> getDomains()const;
				long getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Domain> domains_;
				long total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSRESULT_H_