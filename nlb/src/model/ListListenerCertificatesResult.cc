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

#include <alibabacloud/nlb/model/ListListenerCertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

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
	auto allCertificatesNode = value["Certificates"]["Certificate"];
	for (auto valueCertificatesCertificate : allCertificatesNode)
	{
		Certificate certificatesObject;
		if(!valueCertificatesCertificate["CertificateId"].isNull())
			certificatesObject.certificateId = valueCertificatesCertificate["CertificateId"].asString();
		if(!valueCertificatesCertificate["IsDefault"].isNull())
			certificatesObject.isDefault = valueCertificatesCertificate["IsDefault"].asString() == "true";
		if(!valueCertificatesCertificate["Status"].isNull())
			certificatesObject.status = valueCertificatesCertificate["Status"].asString();
		if(!valueCertificatesCertificate["CertificateType"].isNull())
			certificatesObject.certificateType = valueCertificatesCertificate["CertificateType"].asString();
		certificates_.push_back(certificatesObject);
	}
	auto allCertificateIds = value["CertificateIds"]["CertificateId"];
	for (const auto &item : allCertificateIds)
		certificateIds_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
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

std::string ListListenerCertificatesResult::getMessage()const
{
	return message_;
}

std::string ListListenerCertificatesResult::getNextToken()const
{
	return nextToken_;
}

int ListListenerCertificatesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListListenerCertificatesResult::Certificate> ListListenerCertificatesResult::getCertificates()const
{
	return certificates_;
}

std::vector<std::string> ListListenerCertificatesResult::getCertificateIds()const
{
	return certificateIds_;
}

int ListListenerCertificatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListListenerCertificatesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListListenerCertificatesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListListenerCertificatesResult::getCode()const
{
	return code_;
}

bool ListListenerCertificatesResult::getSuccess()const
{
	return success_;
}

