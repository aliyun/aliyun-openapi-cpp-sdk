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

#include <alibabacloud/waf-openapi/model/DescribeCertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeCertificatesResult::DescribeCertificatesResult() :
	ServiceResult()
{}

DescribeCertificatesResult::DescribeCertificatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificatesResult::~DescribeCertificatesResult()
{}

void DescribeCertificatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificatesNode = value["Certificates"]["Certificate"];
	for (auto valueCertificatesCertificate : allCertificatesNode)
	{
		Certificate certificatesObject;
		if(!valueCertificatesCertificate["IsUsing"].isNull())
			certificatesObject.isUsing = valueCertificatesCertificate["IsUsing"].asString() == "true";
		if(!valueCertificatesCertificate["CertificateName"].isNull())
			certificatesObject.certificateName = valueCertificatesCertificate["CertificateName"].asString();
		if(!valueCertificatesCertificate["CertificateId"].isNull())
			certificatesObject.certificateId = std::stol(valueCertificatesCertificate["CertificateId"].asString());
		if(!valueCertificatesCertificate["CommonName"].isNull())
			certificatesObject.commonName = valueCertificatesCertificate["CommonName"].asString();
		if(!valueCertificatesCertificate["EndTime"].isNull())
			certificatesObject.endTime = std::stol(valueCertificatesCertificate["EndTime"].asString());
		auto allSans = value["Sans"]["San"];
		for (auto value : allSans)
			certificatesObject.sans.push_back(value.asString());
		certificates_.push_back(certificatesObject);
	}

}

std::vector<DescribeCertificatesResult::Certificate> DescribeCertificatesResult::getCertificates()const
{
	return certificates_;
}

