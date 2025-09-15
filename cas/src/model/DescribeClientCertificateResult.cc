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

#include <alibabacloud/cas/model/DescribeClientCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeClientCertificateResult::DescribeClientCertificateResult() :
	ServiceResult()
{}

DescribeClientCertificateResult::DescribeClientCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClientCertificateResult::~DescribeClientCertificateResult()
{}

void DescribeClientCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto certificateNode = value["Certificate"];
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
	if(!certificateNode["BeforeDate"].isNull())
		certificate_.beforeDate = std::stol(certificateNode["BeforeDate"].asString());
	if(!certificateNode["AfterDate"].isNull())
		certificate_.afterDate = std::stol(certificateNode["AfterDate"].asString());
	if(!certificateNode["Algorithm"].isNull())
		certificate_.algorithm = certificateNode["Algorithm"].asString();
	if(!certificateNode["KeySize"].isNull())
		certificate_.keySize = std::stoi(certificateNode["KeySize"].asString());
	if(!certificateNode["SignAlgorithm"].isNull())
		certificate_.signAlgorithm = certificateNode["SignAlgorithm"].asString();
	if(!certificateNode["CertificateType"].isNull())
		certificate_.certificateType = certificateNode["CertificateType"].asString();
	if(!certificateNode["ParentIdentifier"].isNull())
		certificate_.parentIdentifier = certificateNode["ParentIdentifier"].asString();
	if(!certificateNode["Sha2"].isNull())
		certificate_.sha2 = certificateNode["Sha2"].asString();
	if(!certificateNode["Md5"].isNull())
		certificate_.md5 = certificateNode["Md5"].asString();
	if(!certificateNode["Days"].isNull())
		certificate_.days = std::stoi(certificateNode["Days"].asString());

}

DescribeClientCertificateResult::Certificate DescribeClientCertificateResult::getCertificate()const
{
	return certificate_;
}

