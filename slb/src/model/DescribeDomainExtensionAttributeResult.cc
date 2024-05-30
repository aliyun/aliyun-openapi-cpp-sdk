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

#include <alibabacloud/slb/model/DescribeDomainExtensionAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeDomainExtensionAttributeResult::DescribeDomainExtensionAttributeResult() :
	ServiceResult()
{}

DescribeDomainExtensionAttributeResult::DescribeDomainExtensionAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainExtensionAttributeResult::~DescribeDomainExtensionAttributeResult()
{}

void DescribeDomainExtensionAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificatesNode = value["Certificates"]["Certificate"];
	for (auto valueCertificatesCertificate : allCertificatesNode)
	{
		Certificate certificatesObject;
		if(!valueCertificatesCertificate["EncryptionAlgorithm"].isNull())
			certificatesObject.encryptionAlgorithm = valueCertificatesCertificate["EncryptionAlgorithm"].asString();
		if(!valueCertificatesCertificate["CertificateId"].isNull())
			certificatesObject.certificateId = valueCertificatesCertificate["CertificateId"].asString();
		certificates_.push_back(certificatesObject);
	}
	auto allServerCertificatesNode = value["ServerCertificates"]["ServerCertificate"];
	for (auto valueServerCertificatesServerCertificate : allServerCertificatesNode)
	{
		ServerCertificate serverCertificatesObject;
		if(!valueServerCertificatesServerCertificate["EncryptionAlgorithm"].isNull())
			serverCertificatesObject.encryptionAlgorithm = valueServerCertificatesServerCertificate["EncryptionAlgorithm"].asString();
		if(!valueServerCertificatesServerCertificate["StandardType"].isNull())
			serverCertificatesObject.standardType = valueServerCertificatesServerCertificate["StandardType"].asString();
		if(!valueServerCertificatesServerCertificate["BindingType"].isNull())
			serverCertificatesObject.bindingType = valueServerCertificatesServerCertificate["BindingType"].asString();
		if(!valueServerCertificatesServerCertificate["CertificateId"].isNull())
			serverCertificatesObject.certificateId = valueServerCertificatesServerCertificate["CertificateId"].asString();
		serverCertificates_.push_back(serverCertificatesObject);
	}
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["ServerCertificateId"].isNull())
		serverCertificateId_ = value["ServerCertificateId"].asString();
	if(!value["DomainExtensionId"].isNull())
		domainExtensionId_ = value["DomainExtensionId"].asString();

}

int DescribeDomainExtensionAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

std::string DescribeDomainExtensionAttributeResult::getDomainExtensionId()const
{
	return domainExtensionId_;
}

std::vector<DescribeDomainExtensionAttributeResult::Certificate> DescribeDomainExtensionAttributeResult::getCertificates()const
{
	return certificates_;
}

std::vector<DescribeDomainExtensionAttributeResult::ServerCertificate> DescribeDomainExtensionAttributeResult::getServerCertificates()const
{
	return serverCertificates_;
}

std::string DescribeDomainExtensionAttributeResult::getServerCertificateId()const
{
	return serverCertificateId_;
}

std::string DescribeDomainExtensionAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string DescribeDomainExtensionAttributeResult::getDomain()const
{
	return domain_;
}

