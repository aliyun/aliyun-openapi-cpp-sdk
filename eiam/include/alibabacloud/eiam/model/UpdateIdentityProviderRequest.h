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

#ifndef ALIBABACLOUD_EIAM_MODEL_UPDATEIDENTITYPROVIDERREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_UPDATEIDENTITYPROVIDERREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT UpdateIdentityProviderRequest : public RpcServiceRequest {
public:
	struct DingtalkAppConfig {
		std::string appSecret;
		std::string appKey;
	};
	struct LarkConfig {
		std::string appId;
		std::string appSecret;
		std::string verificationToken;
		std::string encryptKey;
	};
	struct WeComConfig {
		std::string agentId;
		std::string corpSecret;
		std::string authorizeCallbackDomain;
		std::string trustableDomain;
	};
	struct LdapConfig {
		std::string startTlsStatus;
		std::string ldapServerHost;
		std::string administratorUsername;
		std::string string;
		std::vector<std::string> certificateFingerprints;
		std::string ldapProtocol;
		std::string administratorPassword;
		std::string certificateFingerprintStatus;
		int ldapServerPort;
	};
	struct OidcConfig {
		std::string string;
		std::vector<std::string> grantScopes;
		struct EndpointConfig {
			std::string userinfoEndpoint;
			std::string authorizationEndpoint;
			std::string jwksUri;
			std::string tokenEndpoint;
			std::string issuer;
		};
		EndpointConfig endpointConfig;
		std::string pkceChallengeMethod;
		bool pkceRequired;
		struct AuthnParam {
			std::string clientSecret;
			std::string authnMethod;
		};
		AuthnParam authnParam;
		std::string grantType;
	};
	UpdateIdentityProviderRequest();
	~UpdateIdentityProviderRequest();
	DingtalkAppConfig getDingtalkAppConfig() const;
	void setDingtalkAppConfig(const DingtalkAppConfig &dingtalkAppConfig);
	std::string getNetworkAccessEndpointId() const;
	void setNetworkAccessEndpointId(const std::string &networkAccessEndpointId);
	std::string getLogoUrl() const;
	void setLogoUrl(const std::string &logoUrl);
	std::string getIdentityProviderId() const;
	void setIdentityProviderId(const std::string &identityProviderId);
	LarkConfig getLarkConfig() const;
	void setLarkConfig(const LarkConfig &larkConfig);
	WeComConfig getWeComConfig() const;
	void setWeComConfig(const WeComConfig &weComConfig);
	std::string getIdentityProviderName() const;
	void setIdentityProviderName(const std::string &identityProviderName);
	LdapConfig getLdapConfig() const;
	void setLdapConfig(const LdapConfig &ldapConfig);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	OidcConfig getOidcConfig() const;
	void setOidcConfig(const OidcConfig &oidcConfig);

private:
	DingtalkAppConfig dingtalkAppConfig_;
	std::string networkAccessEndpointId_;
	std::string logoUrl_;
	std::string identityProviderId_;
	LarkConfig larkConfig_;
	WeComConfig weComConfig_;
	std::string identityProviderName_;
	LdapConfig ldapConfig_;
	std::string instanceId_;
	OidcConfig oidcConfig_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_UPDATEIDENTITYPROVIDERREQUEST_H_
