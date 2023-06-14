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

#include <alibabacloud/ga/model/ListListenerCertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListListenerCertificatesResult::ListListenerCertificatesResult() :
	ServiceResult()
{}

ListListenerCertificatesResult::ListListenerCertificatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListListenerCertificatesResult::~ListListenerCertificatesResult()
{}

void ListListenerCertificatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificatesNode = value["Certificates"]["CertificatesItem"];
	for (auto valueCertificatesCertificatesItem : allCertificatesNode)
	{
		CertificatesItem certificatesObject;
		if(!valueCertificatesCertificatesItem["CertificateId"].isNull())
			certificatesObject.certificateId = valueCertificatesCertificatesItem["CertificateId"].asString();
		if(!valueCertificatesCertificatesItem["IsDefault"].isNull())
			certificatesObject.isDefault = valueCertificatesCertificatesItem["IsDefault"].asString() == "true";
		if(!valueCertificatesCertificatesItem["Domain"].isNull())
			certificatesObject.domain = valueCertificatesCertificatesItem["Domain"].asString();
		if(!valueCertificatesCertificatesItem["State"].isNull())
			certificatesObject.state = valueCertificatesCertificatesItem["State"].asString();
		certificates_.push_back(certificatesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListListenerCertificatesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListListenerCertificatesResult::getNextToken()const
{
	return nextToken_;
}

int ListListenerCertificatesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListListenerCertificatesResult::CertificatesItem> ListListenerCertificatesResult::getCertificates()const
{
	return certificates_;
}

