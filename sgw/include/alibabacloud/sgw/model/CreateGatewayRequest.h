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

#ifndef ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT CreateGatewayRequest : public RpcServiceRequest
			{

			public:
				CreateGatewayRequest();
				~CreateGatewayRequest();

				std::string getGatewayClass()const;
				void setGatewayClass(const std::string& gatewayClass);
				std::string getGatewayVersion()const;
				void setGatewayVersion(const std::string& gatewayVersion);
				long getInitCacheSize()const;
				void setInitCacheSize(long initCacheSize);
				bool getPostPaid()const;
				void setPostPaid(bool postPaid);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				bool getReleaseAfterExpiration()const;
				void setReleaseAfterExpiration(bool releaseAfterExpiration);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getStorageBundleId()const;
				void setStorageBundleId(const std::string& storageBundleId);
				std::string getInitCacheConfig()const;
				void setInitCacheConfig(const std::string& initCacheConfig);
				std::string getInitCacheCategory()const;
				void setInitCacheCategory(const std::string& initCacheCategory);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getLocation()const;
				void setLocation(const std::string& location);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				int getPublicNetworkBandwidth()const;
				void setPublicNetworkBandwidth(int publicNetworkBandwidth);

            private:
				std::string gatewayClass_;
				std::string gatewayVersion_;
				long initCacheSize_;
				bool postPaid_;
				std::string description_;
				std::string type_;
				bool releaseAfterExpiration_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string storageBundleId_;
				std::string initCacheConfig_;
				std::string initCacheCategory_;
				std::string vSwitchId_;
				std::string name_;
				std::string location_;
				std::string category_;
				int publicNetworkBandwidth_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYREQUEST_H_