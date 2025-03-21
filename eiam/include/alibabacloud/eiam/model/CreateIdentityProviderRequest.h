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

#ifndef ALIBABACLOUD_EIAM_MODEL_CREATEIDENTITYPROVIDERREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_CREATEIDENTITYPROVIDERREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT CreateIdentityProviderRequest : public RpcServiceRequest {
public:
	struct DingtalkAppConfig {
		std::string corpId;
		std::string dingtalkVersion;
		std::string appSecret;
		std::string appKey;
	};
	struct AutoUpdateUserConfig {
		std::string autoUpdateUserStatus;
	};
	struct UdPullConfig {
		std::string groupSyncStatus;
		struct UdSyncScopeConfig {
			std::string targetScope;
			std::string string;
			std::vector<std::string> sourceScopes;
		};
		UdSyncScopeConfig udSyncScopeConfig;
		std::string periodicSyncStatus;
		struct PeriodicSyncConfig {
			int integer;
			std::vector<int> periodicSyncTimes;
			std::string periodicSyncCron;
			std::string periodicSyncType;
		};
		PeriodicSyncConfig periodicSyncConfig;
		std::string incrementalCallbackStatus;
	};
	struct LarkConfig {
		std::string enterpriseNumber;
		std::string appId;
		std::string appSecret;
		std::string verificationToken;
		std::string encryptKey;
	};
	struct WeComConfig {
		std::string agentId;
		std::string corpId;
		std::string corpSecret;
		std::string authorizeCallbackDomain;
		std::string trustableDomain;
	};
	struct AutoCreateUserConfig {
		std::string autoCreateUserStatus;
		std::string string;
		std::vector<std::string> targetOrganizationalUnitIds;
	};
	struct AuthnConfig {
		std::string authnStatus;
		std::string autoUpdatePasswordStatus;
	};
	struct BindingConfig {
		struct AutoMatchUserProfileExpressionsItem {
			std::string sourceValueExpression;
			std::string targetFieldDescription;
			std::string targetField;
			std::string expressionMappingType;
		};
		AutoMatchUserProfileExpressionsItem autoMatchUserProfileExpressionsItem;
		std::vector<AutoMatchUserProfileExpressionsItem> autoMatchUserProfileExpressions;
		std::string mappingBindingStatus;
		std::string autoMatchUserStatus;
	};
	struct LdapConfig {
		std::string groupMemberAttributeName;
		std::string startTlsStatus;
		std::string ldapServerHost;
		std::string groupObjectClass;
		std::string userObjectClass;
		std::string userObjectClassCustomFilter;
		std::string string;
		std::vector<std::string> certificateFingerprints;
		std::string ldapProtocol;
		std::string groupObjectClassCustomFilter;
		std::string organizationUnitObjectClass;
		std::string administratorUsername;
		std::string userLoginIdentifier;
		std::string administratorPassword;
		std::string certificateFingerprintStatus;
		int ldapServerPort;
	};
	struct UdPushConfig {
		std::string periodicSyncStatus;
		std::string incrementalCallbackStatus;
		struct UdSyncScopeConfigsItem {
			std::string targetScope;
			std::string string;
			std::vector<std::string> sourceScopes;
		};
		UdSyncScopeConfigsItem udSyncScopeConfigsItem;
		std::vector<UdSyncScopeConfigsItem> udSyncScopeConfigs;
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
			std::string clientId;
			std::string clientSecret;
			std::string authnMethod;
		};
		AuthnParam authnParam;
		std::string grantType;
	};
	CreateIdentityProviderRequest();
	~CreateIdentityProviderRequest();
	DingtalkAppConfig getDingtalkAppConfig() const;
	void setDingtalkAppConfig(const DingtalkAppConfig &dingtalkAppConfig);
	std::string getNetworkAccessEndpointId() const;
	void setNetworkAccessEndpointId(const std::string &networkAccessEndpointId);
	AutoUpdateUserConfig getAutoUpdateUserConfig() const;
	void setAutoUpdateUserConfig(const AutoUpdateUserConfig &autoUpdateUserConfig);
	std::string getLogoUrl() const;
	void setLogoUrl(const std::string &logoUrl);
	UdPullConfig getUdPullConfig() const;
	void setUdPullConfig(const UdPullConfig &udPullConfig);
	LarkConfig getLarkConfig() const;
	void setLarkConfig(const LarkConfig &larkConfig);
	WeComConfig getWeComConfig() const;
	void setWeComConfig(const WeComConfig &weComConfig);
	AutoCreateUserConfig getAutoCreateUserConfig() const;
	void setAutoCreateUserConfig(const AutoCreateUserConfig &autoCreateUserConfig);
	AuthnConfig getAuthnConfig() const;
	void setAuthnConfig(const AuthnConfig &authnConfig);
	BindingConfig getBindingConfig() const;
	void setBindingConfig(const BindingConfig &bindingConfig);
	std::string getIdentityProviderName() const;
	void setIdentityProviderName(const std::string &identityProviderName);
	LdapConfig getLdapConfig() const;
	void setLdapConfig(const LdapConfig &ldapConfig);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	UdPushConfig getUdPushConfig() const;
	void setUdPushConfig(const UdPushConfig &udPushConfig);
	std::string getIdentityProviderType() const;
	void setIdentityProviderType(const std::string &identityProviderType);
	OidcConfig getOidcConfig() const;
	void setOidcConfig(const OidcConfig &oidcConfig);

private:
	DingtalkAppConfig dingtalkAppConfig_;
	std::string networkAccessEndpointId_;
	AutoUpdateUserConfig autoUpdateUserConfig_;
	std::string logoUrl_;
	UdPullConfig udPullConfig_;
	LarkConfig larkConfig_;
	WeComConfig weComConfig_;
	AutoCreateUserConfig autoCreateUserConfig_;
	AuthnConfig authnConfig_;
	BindingConfig bindingConfig_;
	std::string identityProviderName_;
	LdapConfig ldapConfig_;
	std::string instanceId_;
	UdPushConfig udPushConfig_;
	std::string identityProviderType_;
	OidcConfig oidcConfig_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_CREATEIDENTITYPROVIDERREQUEST_H_
