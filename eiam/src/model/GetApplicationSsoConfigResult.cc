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

#include <alibabacloud/eiam/model/GetApplicationSsoConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetApplicationSsoConfigResult::GetApplicationSsoConfigResult() :
	ServiceResult()
{}

GetApplicationSsoConfigResult::GetApplicationSsoConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationSsoConfigResult::~GetApplicationSsoConfigResult()
{}

void GetApplicationSsoConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationSsoConfigNode = value["ApplicationSsoConfig"];
	if(!applicationSsoConfigNode["SsoStatus"].isNull())
		applicationSsoConfig_.ssoStatus = applicationSsoConfigNode["SsoStatus"].asString();
	if(!applicationSsoConfigNode["InitLoginType"].isNull())
		applicationSsoConfig_.initLoginType = applicationSsoConfigNode["InitLoginType"].asString();
	if(!applicationSsoConfigNode["InitLoginUrl"].isNull())
		applicationSsoConfig_.initLoginUrl = applicationSsoConfigNode["InitLoginUrl"].asString();
	auto samlSsoConfigNode = applicationSsoConfigNode["SamlSsoConfig"];
	if(!samlSsoConfigNode["SpSsoAcsUrl"].isNull())
		applicationSsoConfig_.samlSsoConfig.spSsoAcsUrl = samlSsoConfigNode["SpSsoAcsUrl"].asString();
	if(!samlSsoConfigNode["SpEntityId"].isNull())
		applicationSsoConfig_.samlSsoConfig.spEntityId = samlSsoConfigNode["SpEntityId"].asString();
	if(!samlSsoConfigNode["NameIdFormat"].isNull())
		applicationSsoConfig_.samlSsoConfig.nameIdFormat = samlSsoConfigNode["NameIdFormat"].asString();
	if(!samlSsoConfigNode["NameIdValueExpression"].isNull())
		applicationSsoConfig_.samlSsoConfig.nameIdValueExpression = samlSsoConfigNode["NameIdValueExpression"].asString();
	if(!samlSsoConfigNode["DefaultRelayState"].isNull())
		applicationSsoConfig_.samlSsoConfig.defaultRelayState = samlSsoConfigNode["DefaultRelayState"].asString();
	if(!samlSsoConfigNode["SignatureAlgorithm"].isNull())
		applicationSsoConfig_.samlSsoConfig.signatureAlgorithm = samlSsoConfigNode["SignatureAlgorithm"].asString();
	if(!samlSsoConfigNode["ResponseSigned"].isNull())
		applicationSsoConfig_.samlSsoConfig.responseSigned = samlSsoConfigNode["ResponseSigned"].asString() == "true";
	if(!samlSsoConfigNode["AssertionSigned"].isNull())
		applicationSsoConfig_.samlSsoConfig.assertionSigned = samlSsoConfigNode["AssertionSigned"].asString() == "true";
	if(!samlSsoConfigNode["IdPEntityId"].isNull())
		applicationSsoConfig_.samlSsoConfig.idPEntityId = samlSsoConfigNode["IdPEntityId"].asString();
	auto allAttributeStatementsNode = samlSsoConfigNode["AttributeStatements"]["AttributeStatement"];
	for (auto samlSsoConfigNodeAttributeStatementsAttributeStatement : allAttributeStatementsNode)
	{
		ApplicationSsoConfig::SamlSsoConfig::AttributeStatement attributeStatementObject;
		if(!samlSsoConfigNodeAttributeStatementsAttributeStatement["AttributeName"].isNull())
			attributeStatementObject.attributeName = samlSsoConfigNodeAttributeStatementsAttributeStatement["AttributeName"].asString();
		if(!samlSsoConfigNodeAttributeStatementsAttributeStatement["AttributeValueExpression"].isNull())
			attributeStatementObject.attributeValueExpression = samlSsoConfigNodeAttributeStatementsAttributeStatement["AttributeValueExpression"].asString();
		applicationSsoConfig_.samlSsoConfig.attributeStatements.push_back(attributeStatementObject);
	}
	auto allOptionalRelayStatesNode = samlSsoConfigNode["OptionalRelayStates"]["OptionalRelayStatesItem"];
	for (auto samlSsoConfigNodeOptionalRelayStatesOptionalRelayStatesItem : allOptionalRelayStatesNode)
	{
		ApplicationSsoConfig::SamlSsoConfig::OptionalRelayStatesItem optionalRelayStatesItemObject;
		if(!samlSsoConfigNodeOptionalRelayStatesOptionalRelayStatesItem["RelayState"].isNull())
			optionalRelayStatesItemObject.relayState = samlSsoConfigNodeOptionalRelayStatesOptionalRelayStatesItem["RelayState"].asString();
		if(!samlSsoConfigNodeOptionalRelayStatesOptionalRelayStatesItem["DisplayName"].isNull())
			optionalRelayStatesItemObject.displayName = samlSsoConfigNodeOptionalRelayStatesOptionalRelayStatesItem["DisplayName"].asString();
		applicationSsoConfig_.samlSsoConfig.optionalRelayStates.push_back(optionalRelayStatesItemObject);
	}
	auto oidcSsoConfigNode = applicationSsoConfigNode["OidcSsoConfig"];
	if(!oidcSsoConfigNode["PasswordTotpMfaRequired"].isNull())
		applicationSsoConfig_.oidcSsoConfig.passwordTotpMfaRequired = oidcSsoConfigNode["PasswordTotpMfaRequired"].asString() == "true";
	if(!oidcSsoConfigNode["PasswordAuthenticationSourceId"].isNull())
		applicationSsoConfig_.oidcSsoConfig.passwordAuthenticationSourceId = oidcSsoConfigNode["PasswordAuthenticationSourceId"].asString();
	if(!oidcSsoConfigNode["PkceRequired"].isNull())
		applicationSsoConfig_.oidcSsoConfig.pkceRequired = oidcSsoConfigNode["PkceRequired"].asString() == "true";
	if(!oidcSsoConfigNode["AccessTokenEffectiveTime"].isNull())
		applicationSsoConfig_.oidcSsoConfig.accessTokenEffectiveTime = std::stol(oidcSsoConfigNode["AccessTokenEffectiveTime"].asString());
	if(!oidcSsoConfigNode["CodeEffectiveTime"].isNull())
		applicationSsoConfig_.oidcSsoConfig.codeEffectiveTime = std::stol(oidcSsoConfigNode["CodeEffectiveTime"].asString());
	if(!oidcSsoConfigNode["IdTokenEffectiveTime"].isNull())
		applicationSsoConfig_.oidcSsoConfig.idTokenEffectiveTime = std::stol(oidcSsoConfigNode["IdTokenEffectiveTime"].asString());
	if(!oidcSsoConfigNode["RefreshTokenEffective"].isNull())
		applicationSsoConfig_.oidcSsoConfig.refreshTokenEffective = std::stol(oidcSsoConfigNode["RefreshTokenEffective"].asString());
	if(!oidcSsoConfigNode["SubjectIdExpression"].isNull())
		applicationSsoConfig_.oidcSsoConfig.subjectIdExpression = oidcSsoConfigNode["SubjectIdExpression"].asString();
	auto allCustomClaimsNode = oidcSsoConfigNode["CustomClaims"]["CustomClaim"];
	for (auto oidcSsoConfigNodeCustomClaimsCustomClaim : allCustomClaimsNode)
	{
		ApplicationSsoConfig::OidcSsoConfig::CustomClaim customClaimObject;
		if(!oidcSsoConfigNodeCustomClaimsCustomClaim["ClaimName"].isNull())
			customClaimObject.claimName = oidcSsoConfigNodeCustomClaimsCustomClaim["ClaimName"].asString();
		if(!oidcSsoConfigNodeCustomClaimsCustomClaim["ClaimValueExpression"].isNull())
			customClaimObject.claimValueExpression = oidcSsoConfigNodeCustomClaimsCustomClaim["ClaimValueExpression"].asString();
		applicationSsoConfig_.oidcSsoConfig.customClaims.push_back(customClaimObject);
	}
		auto allRedirectUris = oidcSsoConfigNode["RedirectUris"]["RedirectUri"];
		for (auto value : allRedirectUris)
			applicationSsoConfig_.oidcSsoConfig.redirectUris.push_back(value.asString());
		auto allPostLogoutRedirectUris = oidcSsoConfigNode["PostLogoutRedirectUris"]["PostLogoutRedirectUri"];
		for (auto value : allPostLogoutRedirectUris)
			applicationSsoConfig_.oidcSsoConfig.postLogoutRedirectUris.push_back(value.asString());
		auto allGrantTypes = oidcSsoConfigNode["GrantTypes"]["GrantTyp"];
		for (auto value : allGrantTypes)
			applicationSsoConfig_.oidcSsoConfig.grantTypes.push_back(value.asString());
		auto allResponseTypes = oidcSsoConfigNode["ResponseTypes"]["ResponseTyp"];
		for (auto value : allResponseTypes)
			applicationSsoConfig_.oidcSsoConfig.responseTypes.push_back(value.asString());
		auto allGrantScopes = oidcSsoConfigNode["GrantScopes"]["GrantScop"];
		for (auto value : allGrantScopes)
			applicationSsoConfig_.oidcSsoConfig.grantScopes.push_back(value.asString());
		auto allPkceChallengeMethods = oidcSsoConfigNode["PkceChallengeMethods"]["PkceChallengeMethod"];
		for (auto value : allPkceChallengeMethods)
			applicationSsoConfig_.oidcSsoConfig.pkceChallengeMethods.push_back(value.asString());
	auto protocolEndpointDomainNode = applicationSsoConfigNode["ProtocolEndpointDomain"];
	if(!protocolEndpointDomainNode["SamlSsoEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.samlSsoEndpoint = protocolEndpointDomainNode["SamlSsoEndpoint"].asString();
	if(!protocolEndpointDomainNode["SamlMetaEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.samlMetaEndpoint = protocolEndpointDomainNode["SamlMetaEndpoint"].asString();
	if(!protocolEndpointDomainNode["OidcIssuer"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oidcIssuer = protocolEndpointDomainNode["OidcIssuer"].asString();
	if(!protocolEndpointDomainNode["OidcJwksEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oidcJwksEndpoint = protocolEndpointDomainNode["OidcJwksEndpoint"].asString();
	if(!protocolEndpointDomainNode["Oauth2AuthorizationEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oauth2AuthorizationEndpoint = protocolEndpointDomainNode["Oauth2AuthorizationEndpoint"].asString();
	if(!protocolEndpointDomainNode["Oauth2RevokeEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oauth2RevokeEndpoint = protocolEndpointDomainNode["Oauth2RevokeEndpoint"].asString();
	if(!protocolEndpointDomainNode["Oauth2TokenEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oauth2TokenEndpoint = protocolEndpointDomainNode["Oauth2TokenEndpoint"].asString();
	if(!protocolEndpointDomainNode["Oauth2DeviceAuthorizationEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oauth2DeviceAuthorizationEndpoint = protocolEndpointDomainNode["Oauth2DeviceAuthorizationEndpoint"].asString();
	if(!protocolEndpointDomainNode["Oauth2UserinfoEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oauth2UserinfoEndpoint = protocolEndpointDomainNode["Oauth2UserinfoEndpoint"].asString();
	if(!protocolEndpointDomainNode["OidcLogoutEndpoint"].isNull())
		applicationSsoConfig_.protocolEndpointDomain.oidcLogoutEndpoint = protocolEndpointDomainNode["OidcLogoutEndpoint"].asString();

}

GetApplicationSsoConfigResult::ApplicationSsoConfig GetApplicationSsoConfigResult::getApplicationSsoConfig()const
{
	return applicationSsoConfig_;
}

