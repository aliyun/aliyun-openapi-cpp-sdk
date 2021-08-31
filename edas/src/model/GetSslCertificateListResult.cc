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

#include <alibabacloud/edas/model/GetSslCertificateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetSslCertificateListResult::GetSslCertificateListResult() :
	ServiceResult()
{}

GetSslCertificateListResult::GetSslCertificateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSslCertificateListResult::~GetSslCertificateListResult()
{}

void GetSslCertificateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allCertificateListNode = dataNode["CertificateList"]["CertificateListItem"];
	for (auto dataNodeCertificateListCertificateListItem : allCertificateListNode)
	{
		Data::CertificateListItem certificateListItemObject;
		if(!dataNodeCertificateListCertificateListItem["Id"].isNull())
			certificateListItemObject.id = dataNodeCertificateListCertificateListItem["Id"].asString();
		if(!dataNodeCertificateListCertificateListItem["Name"].isNull())
			certificateListItemObject.name = dataNodeCertificateListCertificateListItem["Name"].asString();
		if(!dataNodeCertificateListCertificateListItem["Issuer"].isNull())
			certificateListItemObject.issuer = dataNodeCertificateListCertificateListItem["Issuer"].asString();
		if(!dataNodeCertificateListCertificateListItem["StartDate"].isNull())
			certificateListItemObject.startDate = dataNodeCertificateListCertificateListItem["StartDate"].asString();
		if(!dataNodeCertificateListCertificateListItem["EndDate"].isNull())
			certificateListItemObject.endDate = dataNodeCertificateListCertificateListItem["EndDate"].asString();
		if(!dataNodeCertificateListCertificateListItem["Expired"].isNull())
			certificateListItemObject.expired = dataNodeCertificateListCertificateListItem["Expired"].asString();
		if(!dataNodeCertificateListCertificateListItem["DomainNames"].isNull())
			certificateListItemObject.domainNames = dataNodeCertificateListCertificateListItem["DomainNames"].asString();
		if(!dataNodeCertificateListCertificateListItem["RegionId"].isNull())
			certificateListItemObject.regionId = dataNodeCertificateListCertificateListItem["RegionId"].asString();
		data_.certificateList.push_back(certificateListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSslCertificateListResult::getMessage()const
{
	return message_;
}

GetSslCertificateListResult::Data GetSslCertificateListResult::getData()const
{
	return data_;
}

std::string GetSslCertificateListResult::getCode()const
{
	return code_;
}

