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

#include <alibabacloud/cas/model/ListClientCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListClientCertificateResult::ListClientCertificateResult() :
	ServiceResult()
{}

ListClientCertificateResult::ListClientCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClientCertificateResult::~ListClientCertificateResult()
{}

void ListClientCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificateListNode = value["CertificateList"]["Certificate"];
	for (auto valueCertificateListCertificate : allCertificateListNode)
	{
		Certificate certificateListObject;
		if(!valueCertificateListCertificate["X509Certificate"].isNull())
			certificateListObject.x509Certificate = valueCertificateListCertificate["X509Certificate"].asString();
		if(!valueCertificateListCertificate["Identifier"].isNull())
			certificateListObject.identifier = valueCertificateListCertificate["Identifier"].asString();
		if(!valueCertificateListCertificate["SerialNumber"].isNull())
			certificateListObject.serialNumber = valueCertificateListCertificate["SerialNumber"].asString();
		if(!valueCertificateListCertificate["SubjectDN"].isNull())
			certificateListObject.subjectDN = valueCertificateListCertificate["SubjectDN"].asString();
		if(!valueCertificateListCertificate["CommonName"].isNull())
			certificateListObject.commonName = valueCertificateListCertificate["CommonName"].asString();
		if(!valueCertificateListCertificate["OrganizationUnit"].isNull())
			certificateListObject.organizationUnit = valueCertificateListCertificate["OrganizationUnit"].asString();
		if(!valueCertificateListCertificate["Organization"].isNull())
			certificateListObject.organization = valueCertificateListCertificate["Organization"].asString();
		if(!valueCertificateListCertificate["Locality"].isNull())
			certificateListObject.locality = valueCertificateListCertificate["Locality"].asString();
		if(!valueCertificateListCertificate["State"].isNull())
			certificateListObject.state = valueCertificateListCertificate["State"].asString();
		if(!valueCertificateListCertificate["CountryCode"].isNull())
			certificateListObject.countryCode = valueCertificateListCertificate["CountryCode"].asString();
		if(!valueCertificateListCertificate["Sans"].isNull())
			certificateListObject.sans = valueCertificateListCertificate["Sans"].asString();
		if(!valueCertificateListCertificate["Status"].isNull())
			certificateListObject.status = valueCertificateListCertificate["Status"].asString();
		if(!valueCertificateListCertificate["BeforeDate"].isNull())
			certificateListObject.beforeDate = std::stol(valueCertificateListCertificate["BeforeDate"].asString());
		if(!valueCertificateListCertificate["AfterDate"].isNull())
			certificateListObject.afterDate = std::stol(valueCertificateListCertificate["AfterDate"].asString());
		if(!valueCertificateListCertificate["Algorithm"].isNull())
			certificateListObject.algorithm = valueCertificateListCertificate["Algorithm"].asString();
		if(!valueCertificateListCertificate["KeySize"].isNull())
			certificateListObject.keySize = std::stoi(valueCertificateListCertificate["KeySize"].asString());
		if(!valueCertificateListCertificate["SignAlgorithm"].isNull())
			certificateListObject.signAlgorithm = valueCertificateListCertificate["SignAlgorithm"].asString();
		if(!valueCertificateListCertificate["CertificateType"].isNull())
			certificateListObject.certificateType = valueCertificateListCertificate["CertificateType"].asString();
		if(!valueCertificateListCertificate["ParentIdentifier"].isNull())
			certificateListObject.parentIdentifier = valueCertificateListCertificate["ParentIdentifier"].asString();
		if(!valueCertificateListCertificate["Sha2"].isNull())
			certificateListObject.sha2 = valueCertificateListCertificate["Sha2"].asString();
		if(!valueCertificateListCertificate["Md5"].isNull())
			certificateListObject.md5 = valueCertificateListCertificate["Md5"].asString();
		if(!valueCertificateListCertificate["Days"].isNull())
			certificateListObject.days = std::stoi(valueCertificateListCertificate["Days"].asString());
		certificateList_.push_back(certificateListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["ShowSize"].isNull())
		showSize_ = std::stoi(value["ShowSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListClientCertificateResult::getTotalCount()const
{
	return totalCount_;
}

int ListClientCertificateResult::getPageCount()const
{
	return pageCount_;
}

int ListClientCertificateResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<ListClientCertificateResult::Certificate> ListClientCertificateResult::getCertificateList()const
{
	return certificateList_;
}

int ListClientCertificateResult::getShowSize()const
{
	return showSize_;
}

