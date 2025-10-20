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

#include <alibabacloud/eiam/model/ListFederatedCredentialProvidersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListFederatedCredentialProvidersResult::ListFederatedCredentialProvidersResult() :
	ServiceResult()
{}

ListFederatedCredentialProvidersResult::ListFederatedCredentialProvidersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFederatedCredentialProvidersResult::~ListFederatedCredentialProvidersResult()
{}

void ListFederatedCredentialProvidersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFederatedCredentialProvidersNode = value["FederatedCredentialProviders"]["FederatedCredentialProvider"];
	for (auto valueFederatedCredentialProvidersFederatedCredentialProvider : allFederatedCredentialProvidersNode)
	{
		FederatedCredentialProvider federatedCredentialProvidersObject;
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["Status"].isNull())
			federatedCredentialProvidersObject.status = valueFederatedCredentialProvidersFederatedCredentialProvider["Status"].asString();
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["Description"].isNull())
			federatedCredentialProvidersObject.description = valueFederatedCredentialProvidersFederatedCredentialProvider["Description"].asString();
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["InstanceId"].isNull())
			federatedCredentialProvidersObject.instanceId = valueFederatedCredentialProvidersFederatedCredentialProvider["InstanceId"].asString();
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["CreateTime"].isNull())
			federatedCredentialProvidersObject.createTime = std::stol(valueFederatedCredentialProvidersFederatedCredentialProvider["CreateTime"].asString());
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["UpdateTime"].isNull())
			federatedCredentialProvidersObject.updateTime = std::stol(valueFederatedCredentialProvidersFederatedCredentialProvider["UpdateTime"].asString());
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["FederatedCredentialProviderType"].isNull())
			federatedCredentialProvidersObject.federatedCredentialProviderType = valueFederatedCredentialProvidersFederatedCredentialProvider["FederatedCredentialProviderType"].asString();
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["NetworkAccessEndpointId"].isNull())
			federatedCredentialProvidersObject.networkAccessEndpointId = valueFederatedCredentialProvidersFederatedCredentialProvider["NetworkAccessEndpointId"].asString();
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["FederatedCredentialProviderName"].isNull())
			federatedCredentialProvidersObject.federatedCredentialProviderName = valueFederatedCredentialProvidersFederatedCredentialProvider["FederatedCredentialProviderName"].asString();
		if(!valueFederatedCredentialProvidersFederatedCredentialProvider["FederatedCredentialProviderId"].isNull())
			federatedCredentialProvidersObject.federatedCredentialProviderId = valueFederatedCredentialProvidersFederatedCredentialProvider["FederatedCredentialProviderId"].asString();
		auto privateCaProviderConfigNode = value["PrivateCaProviderConfig"];
		if(!privateCaProviderConfigNode["TrustAnchorSource"].isNull())
			federatedCredentialProvidersObject.privateCaProviderConfig.trustAnchorSource = privateCaProviderConfigNode["TrustAnchorSource"].asString();
		if(!privateCaProviderConfigNode["TrustCondition"].isNull())
			federatedCredentialProvidersObject.privateCaProviderConfig.trustCondition = privateCaProviderConfigNode["TrustCondition"].asString();
		auto allCertificatesNode = privateCaProviderConfigNode["Certificates"]["Certificate"];
		for (auto privateCaProviderConfigNodeCertificatesCertificate : allCertificatesNode)
		{
			FederatedCredentialProvider::PrivateCaProviderConfig::Certificate certificateObject;
			if(!privateCaProviderConfigNodeCertificatesCertificate["Fingerprint"].isNull())
				certificateObject.fingerprint = privateCaProviderConfigNodeCertificatesCertificate["Fingerprint"].asString();
			if(!privateCaProviderConfigNodeCertificatesCertificate["Content"].isNull())
				certificateObject.content = privateCaProviderConfigNodeCertificatesCertificate["Content"].asString();
			auto certificateMetadataNode = value["CertificateMetadata"];
			if(!certificateMetadataNode["NotBefore"].isNull())
				certificateObject.certificateMetadata.notBefore = std::stol(certificateMetadataNode["NotBefore"].asString());
			if(!certificateMetadataNode["NotAfter"].isNull())
				certificateObject.certificateMetadata.notAfter = std::stol(certificateMetadataNode["NotAfter"].asString());
			federatedCredentialProvidersObject.privateCaProviderConfig.certificates.push_back(certificateObject);
		}
		auto oidcProviderConfigNode = value["OidcProviderConfig"];
		if(!oidcProviderConfigNode["JwksUri"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.jwksUri = oidcProviderConfigNode["JwksUri"].asString();
		if(!oidcProviderConfigNode["Issuer"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.issuer = oidcProviderConfigNode["Issuer"].asString();
		if(!oidcProviderConfigNode["JwksLastObtainedTime"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.jwksLastObtainedTime = std::stol(oidcProviderConfigNode["JwksLastObtainedTime"].asString());
		if(!oidcProviderConfigNode["StaticJwks"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.staticJwks = oidcProviderConfigNode["StaticJwks"].asString();
		if(!oidcProviderConfigNode["JwksSource"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.jwksSource = oidcProviderConfigNode["JwksSource"].asString();
		if(!oidcProviderConfigNode["TrustCondition"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.trustCondition = oidcProviderConfigNode["TrustCondition"].asString();
		if(!oidcProviderConfigNode["DynamicJwks"].isNull())
			federatedCredentialProvidersObject.oidcProviderConfig.dynamicJwks = oidcProviderConfigNode["DynamicJwks"].asString();
			auto allAudiences = oidcProviderConfigNode["Audiences"]["Auidence"];
			for (auto value : allAudiences)
				federatedCredentialProvidersObject.oidcProviderConfig.audiences.push_back(value.asString());
		auto pkcs7ProviderConfigNode = value["Pkcs7ProviderConfig"];
		if(!pkcs7ProviderConfigNode["SignatureEffectiveTime"].isNull())
			federatedCredentialProvidersObject.pkcs7ProviderConfig.signatureEffectiveTime = std::stol(pkcs7ProviderConfigNode["SignatureEffectiveTime"].asString());
		if(!pkcs7ProviderConfigNode["TrustAnchorSource"].isNull())
			federatedCredentialProvidersObject.pkcs7ProviderConfig.trustAnchorSource = pkcs7ProviderConfigNode["TrustAnchorSource"].asString();
		if(!pkcs7ProviderConfigNode["CmsVerificationMode"].isNull())
			federatedCredentialProvidersObject.pkcs7ProviderConfig.cmsVerificationMode = pkcs7ProviderConfigNode["CmsVerificationMode"].asString();
		if(!pkcs7ProviderConfigNode["SigningTimeValueExpression"].isNull())
			federatedCredentialProvidersObject.pkcs7ProviderConfig.signingTimeValueExpression = pkcs7ProviderConfigNode["SigningTimeValueExpression"].asString();
		if(!pkcs7ProviderConfigNode["TrustCondition"].isNull())
			federatedCredentialProvidersObject.pkcs7ProviderConfig.trustCondition = pkcs7ProviderConfigNode["TrustCondition"].asString();
		auto allCertificates1Node = pkcs7ProviderConfigNode["Certificates"]["Certificate"];
		for (auto pkcs7ProviderConfigNodeCertificatesCertificate : allCertificates1Node)
		{
			FederatedCredentialProvider::Pkcs7ProviderConfig::Certificate2 certificate2Object;
			if(!pkcs7ProviderConfigNodeCertificatesCertificate["Fingerprint"].isNull())
				certificate2Object.fingerprint = pkcs7ProviderConfigNodeCertificatesCertificate["Fingerprint"].asString();
			if(!pkcs7ProviderConfigNodeCertificatesCertificate["Content"].isNull())
				certificate2Object.content = pkcs7ProviderConfigNodeCertificatesCertificate["Content"].asString();
			auto certificateMetadata3Node = value["CertificateMetadata"];
			if(!certificateMetadata3Node["NotBefore"].isNull())
				certificate2Object.certificateMetadata3.notBefore = std::stol(certificateMetadata3Node["NotBefore"].asString());
			if(!certificateMetadata3Node["NotAfter"].isNull())
				certificate2Object.certificateMetadata3.notAfter = std::stol(certificateMetadata3Node["NotAfter"].asString());
			federatedCredentialProvidersObject.pkcs7ProviderConfig.certificates1.push_back(certificate2Object);
		}
		federatedCredentialProviders_.push_back(federatedCredentialProvidersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListFederatedCredentialProvidersResult::FederatedCredentialProvider> ListFederatedCredentialProvidersResult::getFederatedCredentialProviders()const
{
	return federatedCredentialProviders_;
}

int ListFederatedCredentialProvidersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListFederatedCredentialProvidersResult::getPreviousToken()const
{
	return previousToken_;
}

std::string ListFederatedCredentialProvidersResult::getNextToken()const
{
	return nextToken_;
}

int ListFederatedCredentialProvidersResult::getMaxResults()const
{
	return maxResults_;
}

