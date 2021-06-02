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

#include <alibabacloud/kms/model/ListCertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListCertificatesResult::ListCertificatesResult() :
	ServiceResult()
{}

ListCertificatesResult::ListCertificatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCertificatesResult::~ListCertificatesResult()
{}

void ListCertificatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificateSummaryListNode = value["CertificateSummaryList"]["CertificateSummary"];
	for (auto valueCertificateSummaryListCertificateSummary : allCertificateSummaryListNode)
	{
		CertificateSummary certificateSummaryListObject;
		if(!valueCertificateSummaryListCertificateSummary["CertificateId"].isNull())
			certificateSummaryListObject.certificateId = valueCertificateSummaryListCertificateSummary["CertificateId"].asString();
		certificateSummaryList_.push_back(certificateSummaryListObject);
	}
	auto allCertificatesNode = value["Certificates"]["Certificate"];
	for (auto valueCertificatesCertificate : allCertificatesNode)
	{
		Certificate certificatesObject;
		if(!valueCertificatesCertificate["CertificateId"].isNull())
			certificatesObject.certificateId = valueCertificatesCertificate["CertificateId"].asString();
		certificates_.push_back(certificatesObject);
	}
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListCertificatesResult::getPageSize()const
{
	return pageSize_;
}

int ListCertificatesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCertificatesResult::CertificateSummary> ListCertificatesResult::getCertificateSummaryList()const
{
	return certificateSummaryList_;
}

std::vector<ListCertificatesResult::Certificate> ListCertificatesResult::getCertificates()const
{
	return certificates_;
}

int ListCertificatesResult::getTotalSize()const
{
	return totalSize_;
}

