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

#include <alibabacloud/alb/model/ListListenerCertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

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
	auto allCertificatesNode = value["Certificates"]["CertificateModel"];
	for (auto valueCertificatesCertificateModel : allCertificatesNode)
	{
		CertificateModel certificatesObject;
		if(!valueCertificatesCertificateModel["CertificateId"].isNull())
			certificatesObject.certificateId = valueCertificatesCertificateModel["CertificateId"].asString();
		if(!valueCertificatesCertificateModel["IsDefault"].isNull())
			certificatesObject.isDefault = valueCertificatesCertificateModel["IsDefault"].asString() == "true";
		if(!valueCertificatesCertificateModel["Status"].isNull())
			certificatesObject.status = valueCertificatesCertificateModel["Status"].asString();
		if(!valueCertificatesCertificateModel["CertificateType"].isNull())
			certificatesObject.certificateType = valueCertificatesCertificateModel["CertificateType"].asString();
		certificates_.push_back(certificatesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

std::vector<ListListenerCertificatesResult::CertificateModel> ListListenerCertificatesResult::getCertificates()const
{
	return certificates_;
}

