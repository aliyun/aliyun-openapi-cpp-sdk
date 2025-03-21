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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONSSOCONFIGRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONSSOCONFIGRESULT_H_

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
			class ALIBABACLOUD_EIAM_EXPORT GetApplicationSsoConfigResult : public ServiceResult
			{
			public:
				struct ApplicationSsoConfig
				{
					struct SamlSsoConfig
					{
						struct AttributeStatement
						{
							std::string attributeValueExpression;
							std::string attributeName;
						};
						struct OptionalRelayStatesItem
						{
							std::string relayState;
							std::string displayName;
						};
						std::string nameIdValueExpression;
						bool responseSigned;
						std::string spEntityId;
						std::string spSsoAcsUrl;
						std::vector<OptionalRelayStatesItem> optionalRelayStates;
						std::string defaultRelayState;
						std::string signatureAlgorithm;
						bool assertionSigned;
						std::vector<AttributeStatement> attributeStatements;
						std::string nameIdFormat;
						std::string idPEntityId;
					};
					struct OidcSsoConfig
					{
						struct CustomClaim
						{
							std::string claimName;
							std::string claimValueExpression;
						};
						std::vector<std::string> responseTypes;
						std::string passwordAuthenticationSourceId;
						bool passwordTotpMfaRequired;
						std::string subjectIdExpression;
						std::vector<CustomClaim> customClaims;
						std::vector<std::string> pkceChallengeMethods;
						long refreshTokenEffective;
						std::vector<std::string> postLogoutRedirectUris;
						bool pkceRequired;
						long accessTokenEffectiveTime;
						std::vector<std::string> grantScopes;
						long idTokenEffectiveTime;
						std::vector<std::string> redirectUris;
						long codeEffectiveTime;
						std::vector<std::string> grantTypes;
					};
					struct ProtocolEndpointDomain
					{
						std::string samlMetaEndpoint;
						std::string oidcIssuer;
						std::string oauth2DeviceAuthorizationEndpoint;
						std::string oauth2UserinfoEndpoint;
						std::string oidcJwksEndpoint;
						std::string oauth2RevokeEndpoint;
						std::string oauth2TokenEndpoint;
						std::string oidcLogoutEndpoint;
						std::string oauth2AuthorizationEndpoint;
						std::string samlSsoEndpoint;
					};
					SamlSsoConfig samlSsoConfig;
					ProtocolEndpointDomain protocolEndpointDomain;
					std::string ssoStatus;
					std::string initLoginType;
					OidcSsoConfig oidcSsoConfig;
					std::string initLoginUrl;
				};


				GetApplicationSsoConfigResult();
				explicit GetApplicationSsoConfigResult(const std::string &payload);
				~GetApplicationSsoConfigResult();
				ApplicationSsoConfig getApplicationSsoConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				ApplicationSsoConfig applicationSsoConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONSSOCONFIGRESULT_H_