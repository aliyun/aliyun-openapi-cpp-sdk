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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEDOMAINRESULT_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEDOMAINRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeDomainResult : public ServiceResult
			{
			public:
				struct Domain
				{
					struct LogHeader
					{
						std::string v;
						std::string k;
					};
					struct CloudNativeInstancesItem
					{
						struct ProtocolPortConfigsItem
						{
							std::vector<std::string> ports;
							std::string protocol;
						};
						std::vector<CloudNativeInstancesItem::ProtocolPortConfigsItem> protocolPortConfigs;
						std::string redirectionTypeName;
						std::string instanceId;
						std::vector<std::string> iPAddressList;
						std::string cloudNativeProductName;
					};
					int isAccessProduct;
					std::string resourceGroupId;
					std::vector<std::string> accessHeaders;
					int readTime;
					std::vector<std::string> sourceIps;
					std::string sniHost;
					long version;
					int connectionTime;
					std::vector<CloudNativeInstancesItem> cloudNativeInstances;
					std::string accessType;
					std::vector<std::string> httpsPort;
					int httpToUserIp;
					std::vector<std::string> httpPort;
					int accessHeaderMode;
					bool keepalive;
					int ipFollowStatus;
					int clusterType;
					int loadBalancing;
					std::string cname;
					int keepaliveTimeout;
					std::vector<LogHeader> logHeaders;
					int sniStatus;
					int writeTime;
					std::vector<std::string> http2Port;
					int httpsRedirect;
					bool retry;
					int keepaliveRequests;
				};


				DescribeDomainResult();
				explicit DescribeDomainResult(const std::string &payload);
				~DescribeDomainResult();
				Domain getDomain()const;

			protected:
				void parse(const std::string &payload);
			private:
				Domain domain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEDOMAINRESULT_H_