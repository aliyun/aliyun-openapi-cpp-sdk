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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETIDENTITYPROVIDERRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETIDENTITYPROVIDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetIdentityProviderResult : public ServiceResult
			{
			public:
				struct IdentityProviderDetail
				{
					struct DingtalkAppConfig
					{
						std::string corpId;
						std::string appKey;
						std::string dingtalkVersion;
						std::string appSecret;
					};
					struct DingtalkProvisioningConfig
					{
						struct AuthedDepartmentId
						{
							std::string deptName;
							std::string deptId;
						};
						struct AuthedUser
						{
							std::string userId;
							std::string name;
						};
						std::string corpId;
						std::vector<AuthedDepartmentId> authedDepartmentIds;
						std::vector<AuthedUser> authedUsers;
						std::string corpName;
					};
					struct LarkConfig
					{
						std::string encryptKey;
						std::string appId;
						std::string verificationToken;
						std::string enterpriseNumber;
						std::string appSecret;
					};
					struct LdapConfig
					{
						std::vector<std::string> certificateFingerprints;
						std::string ldapProtocol;
						std::string startTlsStatus;
						int ldapServerPort;
						std::string certificateFingerprintStatus;
						std::string administratorPassword;
						std::string ldapServerHost;
						std::string administratorUsername;
					};
					struct OidcConfig
					{
						struct AuthnParam
						{
							std::string authnMethod;
							std::string clientSecret;
							std::string clientId;
						};
						struct EndpointConfig
						{
							std::string jwksUri;
							std::string tokenEndpoint;
							std::string issuer;
							std::string userinfoEndpoint;
							std::string authorizationEndpoint;
						};
						AuthnParam authnParam;
						bool pkceRequired;
						std::vector<std::string> grantScopes;
						std::string grantType;
						EndpointConfig endpointConfig;
						std::string pkceChallengeMethod;
					};
					struct UdPullConfig
					{
						struct UdSyncScopeConfig
						{
							std::vector<std::string> sourceScopes;
							std::string targetScope;
						};
						UdSyncScopeConfig udSyncScopeConfig;
						std::string groupSyncStatus;
						std::string incrementalCallbackStatus;
					};
					struct UdPushConfig
					{
						struct UdSyncScopeConfig1
						{
							std::vector<std::string> sourceScopes2;
							std::string targetScope;
						};
						std::vector<UdSyncScopeConfig1> udSyncScopeConfigs;
						std::string incrementalCallbackStatus;
					};
					struct WeComConfig
					{
						std::string trustableDomain;
						std::string corpId;
						std::string agentId;
						std::string corpSecret;
						std::string authorizeCallbackDomain;
					};
					std::string authnSourceSupplier;
					std::string description;
					std::string identityProviderId;
					OidcConfig oidcConfig;
					std::string authnStatus;
					std::string logoUrl;
					std::string identityProviderName;
					DingtalkAppConfig dingtalkAppConfig;
					std::string authnSourceType;
					LarkConfig larkConfig;
					LdapConfig ldapConfig;
					std::string advancedStatus;
					UdPushConfig udPushConfig;
					std::string udPushStatus;
					std::string identityProviderType;
					std::string lockReason;
					std::string instanceId;
					UdPullConfig udPullConfig;
					long createTime;
					std::string networkAccessEndpointId;
					DingtalkProvisioningConfig dingtalkProvisioningConfig;
					std::string lastStatusCheckJobResult;
					std::string udPullStatus;
					long updateTime;
					WeComConfig weComConfig;
					std::string identityProviderExternalId;
				};


				GetIdentityProviderResult();
				explicit GetIdentityProviderResult(const std::string &payload);
				~GetIdentityProviderResult();
				IdentityProviderDetail getIdentityProviderDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				IdentityProviderDetail identityProviderDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETIDENTITYPROVIDERRESULT_H_