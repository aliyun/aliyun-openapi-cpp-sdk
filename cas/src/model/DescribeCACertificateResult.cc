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

#include <alibabacloud/cas/model/DescribeCACertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCACertificateResult::DescribeCACertificateResult() :
	ServiceResult()
{}

DescribeCACertificateResult::DescribeCACertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCACertificateResult::~DescribeCACertificateResult()
{}

void DescribeCACertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto certificateNode = value["Certificate"];
	if(!certificateNode["CertificateType"].isNull())
		certificate_.certificateType = certificateNode["CertificateType"].asString();
	if(!certificateNode["X509Certificate"].isNull())
		certificate_.x509Certificate = certificateNode["X509Certificate"].asString();
	if(!certificateNode["Identifier"].isNull())
		certificate_.identifier = certificateNode["Identifier"].asString();
	if(!certificateNode["SerialNumber"].isNull())
		certificate_.serialNumber = certificateNode["SerialNumber"].asString();
	if(!certificateNode["SubjectDN"].isNull())
		certificate_.subjectDN = certificateNode["SubjectDN"].asString();
	if(!certificateNode["CommonName"].isNull())
		certificate_.commonName = certificateNode["CommonName"].asString();
	if(!certificateNode["OrganizationUnit"].isNull())
		certificate_.organizationUnit = certificateNode["OrganizationUnit"].asString();
	if(!certificateNode["Organization"].isNull())
		certificate_.organization = certificateNode["Organization"].asString();
	if(!certificateNode["Locality"].isNull())
		certificate_.locality = certificateNode["Locality"].asString();
	if(!certificateNode["State"].isNull())
		certificate_.state = certificateNode["State"].asString();
	if(!certificateNode["CountryCode"].isNull())
		certificate_.countryCode = certificateNode["CountryCode"].asString();
	if(!certificateNode["Sans"].isNull())
		certificate_.sans = certificateNode["Sans"].asString();
	if(!certificateNode["Status"].isNull())
		certificate_.status = certificateNode["Status"].asString();
	if(!certificateNode["Algorithm"].isNull())
		certificate_.algorithm = certificateNode["Algorithm"].asString();
	if(!certificateNode["KeySize"].isNull())
		certificate_.keySize = std::stoi(certificateNode["KeySize"].asString());
	if(!certificateNode["SignAlgorithm"].isNull())
		certificate_.signAlgorithm = certificateNode["SignAlgorithm"].asString();
	if(!certificateNode["BeforeDate"].isNull())
		certificate_.beforeDate = std::stol(certificateNode["BeforeDate"].asString());
	if(!certificateNode["AfterDate"].isNull())
		certificate_.afterDate = std::stol(certificateNode["AfterDate"].asString());
	if(!certificateNode["ParentIdentifier"].isNull())
		certificate_.parentIdentifier = certificateNode["ParentIdentifier"].asString();
	if(!certificateNode["Sha2"].isNull())
		certificate_.sha2 = certificateNode["Sha2"].asString();
	if(!certificateNode["Md5"].isNull())
		certificate_.md5 = certificateNode["Md5"].asString();
	if(!certificateNode["CrlStatus"].isNull())
		certificate_.crlStatus = certificateNode["CrlStatus"].asString();
	if(!certificateNode["CrlUrl"].isNull())
		certificate_.crlUrl = certificateNode["CrlUrl"].asString();
	if(!certificateNode["CertTotalCount"].isNull())
		certificate_.certTotalCount = std::stol(certificateNode["CertTotalCount"].asString());
	if(!certificateNode["CertRemainingCount"].isNull())
		certificate_.certRemainingCount = std::stol(certificateNode["CertRemainingCount"].asString());
	if(!certificateNode["CertIssuedCount"].isNull())
		certificate_.certIssuedCount = std::stol(certificateNode["CertIssuedCount"].asString());
	if(!certificateNode["CaCertChain"].isNull())
		certificate_.caCertChain = certificateNode["CaCertChain"].asString();
	if(!certificateNode["CrlDay"].isNull())
		certificate_.crlDay = std::stoi(certificateNode["CrlDay"].asString());
	if(!certificateNode["IssuerType"].isNull())
		certificate_.issuerType = certificateNode["IssuerType"].asString();
	if(!certificateNode["Years"].isNull())
		certificate_.years = std::stoi(certificateNode["Years"].asString());
	if(!certificateNode["FullAlgorithm"].isNull())
		certificate_.fullAlgorithm = certificateNode["FullAlgorithm"].asString();
	if(!value["Years"].isNull())
		years_ = std::stoi(value["Years"].asString());

}

int DescribeCACertificateResult::getYears()const
{
	return years_;
}

DescribeCACertificateResult::Certificate DescribeCACertificateResult::getCertificate()const
{
	return certificate_;
}

