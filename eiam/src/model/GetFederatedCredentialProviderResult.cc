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

#include <alibabacloud/eiam/model/GetFederatedCredentialProviderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetFederatedCredentialProviderResult::GetFederatedCredentialProviderResult() :
	ServiceResult()
{}

GetFederatedCredentialProviderResult::GetFederatedCredentialProviderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFederatedCredentialProviderResult::~GetFederatedCredentialProviderResult()
{}

void GetFederatedCredentialProviderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto federatedCredentialProviderNode = value["FederatedCredentialProvider"];
	if(!federatedCredentialProviderNode["InstanceId"].isNull())
		federatedCredentialProvider_.instanceId = federatedCredentialProviderNode["InstanceId"].asString();
	if(!federatedCredentialProviderNode["FederatedCredentialProviderId"].isNull())
		federatedCredentialProvider_.federatedCredentialProviderId = federatedCredentialProviderNode["FederatedCredentialProviderId"].asString();
	if(!federatedCredentialProviderNode["FederatedCredentialProviderName"].isNull())
		federatedCredentialProvider_.federatedCredentialProviderName = federatedCredentialProviderNode["FederatedCredentialProviderName"].asString();
	if(!federatedCredentialProviderNode["FederatedCredentialProviderType"].isNull())
		federatedCredentialProvider_.federatedCredentialProviderType = federatedCredentialProviderNode["FederatedCredentialProviderType"].asString();
	if(!federatedCredentialProviderNode["Description"].isNull())
		federatedCredentialProvider_.description = federatedCredentialProviderNode["Description"].asString();
	if(!federatedCredentialProviderNode["NetworkAccessEndpointId"].isNull())
		federatedCredentialProvider_.networkAccessEndpointId = federatedCredentialProviderNode["NetworkAccessEndpointId"].asString();
	if(!federatedCredentialProviderNode["Status"].isNull())
		federatedCredentialProvider_.status = federatedCredentialProviderNode["Status"].asString();
	if(!federatedCredentialProviderNode["CreateTime"].isNull())
		federatedCredentialProvider_.createTime = std::stol(federatedCredentialProviderNode["CreateTime"].asString());
	if(!federatedCredentialProviderNode["UpdateTime"].isNull())
		federatedCredentialProvider_.updateTime = std::stol(federatedCredentialProviderNode["UpdateTime"].asString());
	auto oidcProviderConfigNode = federatedCredentialProviderNode["OidcProviderConfig"];
	if(!oidcProviderConfigNode["JwksSource"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.jwksSource = oidcProviderConfigNode["JwksSource"].asString();
	if(!oidcProviderConfigNode["JwksUri"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.jwksUri = oidcProviderConfigNode["JwksUri"].asString();
	if(!oidcProviderConfigNode["StaticJwks"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.staticJwks = oidcProviderConfigNode["StaticJwks"].asString();
	if(!oidcProviderConfigNode["Issuer"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.issuer = oidcProviderConfigNode["Issuer"].asString();
	if(!oidcProviderConfigNode["TrustCondition"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.trustCondition = oidcProviderConfigNode["TrustCondition"].asString();
	if(!oidcProviderConfigNode["DynamicJwks"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.dynamicJwks = oidcProviderConfigNode["DynamicJwks"].asString();
	if(!oidcProviderConfigNode["JwksLastObtainedTime"].isNull())
		federatedCredentialProvider_.oidcProviderConfig.jwksLastObtainedTime = std::stol(oidcProviderConfigNode["JwksLastObtainedTime"].asString());
		auto allAudiences = oidcProviderConfigNode["Audiences"]["Auidence"];
		for (auto value : allAudiences)
			federatedCredentialProvider_.oidcProviderConfig.audiences.push_back(value.asString());
	auto pkcs7ProviderConfigNode = federatedCredentialProviderNode["Pkcs7ProviderConfig"];
	if(!pkcs7ProviderConfigNode["TrustAnchorSource"].isNull())
		federatedCredentialProvider_.pkcs7ProviderConfig.trustAnchorSource = pkcs7ProviderConfigNode["TrustAnchorSource"].asString();
	if(!pkcs7ProviderConfigNode["TrustCondition"].isNull())
		federatedCredentialProvider_.pkcs7ProviderConfig.trustCondition = pkcs7ProviderConfigNode["TrustCondition"].asString();
	if(!pkcs7ProviderConfigNode["CmsVerificationMode"].isNull())
		federatedCredentialProvider_.pkcs7ProviderConfig.cmsVerificationMode = pkcs7ProviderConfigNode["CmsVerificationMode"].asString();
	if(!pkcs7ProviderConfigNode["SigningTimeValueExpression"].isNull())
		federatedCredentialProvider_.pkcs7ProviderConfig.signingTimeValueExpression = pkcs7ProviderConfigNode["SigningTimeValueExpression"].asString();
	if(!pkcs7ProviderConfigNode["SignatureEffectiveTime"].isNull())
		federatedCredentialProvider_.pkcs7ProviderConfig.signatureEffectiveTime = std::stol(pkcs7ProviderConfigNode["SignatureEffectiveTime"].asString());
	auto allCertificatesNode = pkcs7ProviderConfigNode["Certificates"]["Certificate"];
	for (auto pkcs7ProviderConfigNodeCertificatesCertificate : allCertificatesNode)
	{
		FederatedCredentialProvider::Pkcs7ProviderConfig::Certificate certificateObject;
		if(!pkcs7ProviderConfigNodeCertificatesCertificate["Fingerprint"].isNull())
			certificateObject.fingerprint = pkcs7ProviderConfigNodeCertificatesCertificate["Fingerprint"].asString();
		if(!pkcs7ProviderConfigNodeCertificatesCertificate["Content"].isNull())
			certificateObject.content = pkcs7ProviderConfigNodeCertificatesCertificate["Content"].asString();
		auto certificateMetadataNode = value["CertificateMetadata"];
		if(!certificateMetadataNode["NotBefore"].isNull())
			certificateObject.certificateMetadata.notBefore = std::stol(certificateMetadataNode["NotBefore"].asString());
		if(!certificateMetadataNode["NotAfter"].isNull())
			certificateObject.certificateMetadata.notAfter = std::stol(certificateMetadataNode["NotAfter"].asString());
		federatedCredentialProvider_.pkcs7ProviderConfig.certificates.push_back(certificateObject);
	}
	auto privateCaProviderConfigNode = federatedCredentialProviderNode["PrivateCaProviderConfig"];
	if(!privateCaProviderConfigNode["TrustAnchorSource"].isNull())
		federatedCredentialProvider_.privateCaProviderConfig.trustAnchorSource = privateCaProviderConfigNode["TrustAnchorSource"].asString();
	if(!privateCaProviderConfigNode["TrustCondition"].isNull())
		federatedCredentialProvider_.privateCaProviderConfig.trustCondition = privateCaProviderConfigNode["TrustCondition"].asString();
	auto allCertificates1Node = privateCaProviderConfigNode["Certificates"]["Certificate"];
	for (auto privateCaProviderConfigNodeCertificatesCertificate : allCertificates1Node)
	{
		FederatedCredentialProvider::PrivateCaProviderConfig::Certificate2 certificate2Object;
		if(!privateCaProviderConfigNodeCertificatesCertificate["Fingerprint"].isNull())
			certificate2Object.fingerprint = privateCaProviderConfigNodeCertificatesCertificate["Fingerprint"].asString();
		if(!privateCaProviderConfigNodeCertificatesCertificate["Content"].isNull())
			certificate2Object.content = privateCaProviderConfigNodeCertificatesCertificate["Content"].asString();
		auto certificateMetadata3Node = value["CertificateMetadata"];
		if(!certificateMetadata3Node["NotBefore"].isNull())
			certificate2Object.certificateMetadata3.notBefore = std::stol(certificateMetadata3Node["NotBefore"].asString());
		if(!certificateMetadata3Node["NotAfter"].isNull())
			certificate2Object.certificateMetadata3.notAfter = std::stol(certificateMetadata3Node["NotAfter"].asString());
		federatedCredentialProvider_.privateCaProviderConfig.certificates1.push_back(certificate2Object);
	}

}

GetFederatedCredentialProviderResult::FederatedCredentialProvider GetFederatedCredentialProviderResult::getFederatedCredentialProvider()const
{
	return federatedCredentialProvider_;
}

