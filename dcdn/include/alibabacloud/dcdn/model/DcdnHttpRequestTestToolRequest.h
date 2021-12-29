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

#ifndef ALIBABACLOUD_DCDN_MODEL_DCDNHTTPREQUESTTESTTOOLREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DCDNHTTPREQUESTTESTTOOLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DcdnHttpRequestTestToolRequest : public RpcServiceRequest
			{

			public:
				DcdnHttpRequestTestToolRequest();
				~DcdnHttpRequestTestToolRequest();

				std::string getProxyIp()const;
				void setProxyIp(const std::string& proxyIp);
				std::string getScheme()const;
				void setScheme(const std::string& scheme);
				std::string getBody()const;
				void setBody(const std::string& body);
				std::string getHost()const;
				void setHost(const std::string& host);
				std::string getMethod()const;
				void setMethod(const std::string& method);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getUri()const;
				void setUri(const std::string& uri);
				std::string getArgs()const;
				void setArgs(const std::string& args);
				std::string getHeader()const;
				void setHeader(const std::string& header);

            private:
				std::string proxyIp_;
				std::string scheme_;
				std::string body_;
				std::string host_;
				std::string method_;
				long ownerId_;
				std::string uri_;
				std::string args_;
				std::string header_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DCDNHTTPREQUESTTESTTOOLREQUEST_H_