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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_CREATEDOMAINCONFIGREQUEST_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_CREATEDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT CreateDomainConfigRequest : public RpcServiceRequest
			{

			public:
				CreateDomainConfigRequest();
				~CreateDomainConfigRequest();

				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getHttpPort()const;
				void setHttpPort(const std::string& httpPort);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getProtocols()const;
				void setProtocols(const std::string& protocols);
				int getRsType()const;
				void setRsType(int rsType);
				int getHttpsRedirect()const;
				void setHttpsRedirect(int httpsRedirect);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSourceIps()const;
				void setSourceIps(const std::string& sourceIps);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				int getIsAccessProduct()const;
				void setIsAccessProduct(int isAccessProduct);
				std::string getHttpsPort()const;
				void setHttpsPort(const std::string& httpsPort);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				int getLoadBalancing()const;
				void setLoadBalancing(int loadBalancing);
				int getHttpToUserIp()const;
				void setHttpToUserIp(int httpToUserIp);

            private:
				std::string resourceGroupId_;
				std::string sourceIp_;
				std::string httpPort_;
				std::string lang_;
				std::string protocols_;
				int rsType_;
				int httpsRedirect_;
				std::string instanceId_;
				std::string sourceIps_;
				std::string domain_;
				int isAccessProduct_;
				std::string httpsPort_;
				std::string region_;
				int loadBalancing_;
				int httpToUserIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_CREATEDOMAINCONFIGREQUEST_H_