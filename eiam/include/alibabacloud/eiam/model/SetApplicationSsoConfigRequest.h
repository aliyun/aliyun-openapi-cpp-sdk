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

#ifndef ALIBABACLOUD_EIAM_MODEL_SETAPPLICATIONSSOCONFIGREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_SETAPPLICATIONSSOCONFIGREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT SetApplicationSsoConfigRequest : public RpcServiceRequest {
public:
	struct OidcSsoConfig {
		long codeEffectiveTime;
		std::string string;
		std::vector<std::string> responseTypes;
		std::string string;
		std::vector<std::string> grantScopes;
		long refreshTokenEffective;
		std::string string;
		std::vector<std::string> grantTypes;
		long idTokenEffectiveTime;
		std::string string;
		std::vector<std::string> pkceChallengeMethods;
		std::string passwordAuthenticationSourceId;
		long accessTokenEffectiveTime;
		std::string string;
		std::vector<std::string> postLogoutRedirectUris;
		bool passwordTotpMfaRequired;
		struct CustomClaimsItem {
			std::string claimValueExpression;
			std::string claimName;
		};
		CustomClaimsItem customClaimsItem;
		std::vector<CustomClaimsItem> customClaims;
		std::string subjectIdExpression;
		bool pkceRequired;
		std::string string;
		std::vector<std::string> redirectUris;
	};
	struct SamlSsoConfig {
		std::string signatureAlgorithm;
		std::string nameIdFormat;
		std::string idPEntityId;
		bool assertionSigned;
		std::string spSsoAcsUrl;
		std::string nameIdValueExpression;
		struct AttributeStatementsItem {
			std::string attributeValueExpression;
			std::string attributeName;
		};
		AttributeStatementsItem attributeStatementsItem;
		std::vector<AttributeStatementsItem> attributeStatements;
		std::string defaultRelayState;
		std::string spEntityId;
		struct OptionalRelayStatesItem {
			std::string relayState;
			std::string displayName;
		};
		OptionalRelayStatesItem optionalRelayStatesItem;
		std::vector<OptionalRelayStatesItem> optionalRelayStates;
		bool responseSigned;
	};
	SetApplicationSsoConfigRequest();
	~SetApplicationSsoConfigRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getInitLoginUrl() const;
	void setInitLoginUrl(const std::string &initLoginUrl);
	std::string getInitLoginType() const;
	void setInitLoginType(const std::string &initLoginType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	OidcSsoConfig getOidcSsoConfig() const;
	void setOidcSsoConfig(const OidcSsoConfig &oidcSsoConfig);
	SamlSsoConfig getSamlSsoConfig() const;
	void setSamlSsoConfig(const SamlSsoConfig &samlSsoConfig);

private:
	std::string clientToken_;
	std::string applicationId_;
	std::string initLoginUrl_;
	std::string initLoginType_;
	std::string instanceId_;
	OidcSsoConfig oidcSsoConfig_;
	SamlSsoConfig samlSsoConfig_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_SETAPPLICATIONSSOCONFIGREQUEST_H_
