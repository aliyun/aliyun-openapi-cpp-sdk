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

#include <alibabacloud/slb/model/DescribeDomainExtensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeDomainExtensionsResult::DescribeDomainExtensionsResult() :
	ServiceResult()
{}

DescribeDomainExtensionsResult::DescribeDomainExtensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainExtensionsResult::~DescribeDomainExtensionsResult()
{}

void DescribeDomainExtensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainExtensionsNode = value["DomainExtensions"]["DomainExtension"];
	for (auto valueDomainExtensionsDomainExtension : allDomainExtensionsNode)
	{
		DomainExtension domainExtensionsObject;
		if(!valueDomainExtensionsDomainExtension["ServerCertificateId"].isNull())
			domainExtensionsObject.serverCertificateId = valueDomainExtensionsDomainExtension["ServerCertificateId"].asString();
		if(!valueDomainExtensionsDomainExtension["Domain"].isNull())
			domainExtensionsObject.domain = valueDomainExtensionsDomainExtension["Domain"].asString();
		if(!valueDomainExtensionsDomainExtension["DomainExtensionId"].isNull())
			domainExtensionsObject.domainExtensionId = valueDomainExtensionsDomainExtension["DomainExtensionId"].asString();
		auto allCertificatesNode = valueDomainExtensionsDomainExtension["Certificates"]["Certificate"];
		for (auto valueDomainExtensionsDomainExtensionCertificatesCertificate : allCertificatesNode)
		{
			DomainExtension::Certificate certificatesObject;
			if(!valueDomainExtensionsDomainExtensionCertificatesCertificate["EncryptionAlgorithm"].isNull())
				certificatesObject.encryptionAlgorithm = valueDomainExtensionsDomainExtensionCertificatesCertificate["EncryptionAlgorithm"].asString();
			if(!valueDomainExtensionsDomainExtensionCertificatesCertificate["CertificateId"].isNull())
				certificatesObject.certificateId = valueDomainExtensionsDomainExtensionCertificatesCertificate["CertificateId"].asString();
			domainExtensionsObject.certificates.push_back(certificatesObject);
		}
		auto allServerCertificatesNode = valueDomainExtensionsDomainExtension["ServerCertificates"]["ServerCertificate"];
		for (auto valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate : allServerCertificatesNode)
		{
			DomainExtension::ServerCertificate serverCertificatesObject;
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["EncryptionAlgorithm"].isNull())
				serverCertificatesObject.encryptionAlgorithm = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["EncryptionAlgorithm"].asString();
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["StandardType"].isNull())
				serverCertificatesObject.standardType = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["StandardType"].asString();
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["CertificateId"].isNull())
				serverCertificatesObject.certificateId = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["CertificateId"].asString();
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["BindingType"].isNull())
				serverCertificatesObject.bindingType = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["BindingType"].asString();
			domainExtensionsObject.serverCertificates.push_back(serverCertificatesObject);
		}
		domainExtensions_.push_back(domainExtensionsObject);
	}

}

std::vector<DescribeDomainExtensionsResult::DomainExtension> DescribeDomainExtensionsResult::getDomainExtensions()const
{
	return domainExtensions_;
}

