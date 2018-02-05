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

#ifndef ALIBABACLOUD_CDN_MODEL_SETREQAUTHCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETREQAUTHCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT SetReqAuthConfigRequest : public RpcServiceRequest
			{

			public:
				SetReqAuthConfigRequest();
				~SetReqAuthConfigRequest();

				std::string getKey1()const;
				void setKey1(const std::string& key1);
				std::string getKey2()const;
				void setKey2(const std::string& key2);
				std::string getAuthRemoteDesc()const;
				void setAuthRemoteDesc(const std::string& authRemoteDesc);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTimeOut()const;
				void setTimeOut(const std::string& timeOut);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAuthType()const;
				void setAuthType(const std::string& authType);

            private:
				std::string key1_;
				std::string key2_;
				std::string authRemoteDesc_;
				std::string securityToken_;
				std::string domainName_;
				long ownerId_;
				std::string timeOut_;
				std::string accessKeyId_;
				std::string authType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETREQAUTHCONFIGREQUEST_H_