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

#include <alibabacloud/domain/model/QueryRegistrantProfilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryRegistrantProfilesResult::QueryRegistrantProfilesResult() :
	ServiceResult()
{}

QueryRegistrantProfilesResult::QueryRegistrantProfilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRegistrantProfilesResult::~QueryRegistrantProfilesResult()
{}

void QueryRegistrantProfilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegistrantProfilesNode = value["RegistrantProfiles"]["RegistrantProfile"];
	for (auto valueRegistrantProfilesRegistrantProfile : allRegistrantProfilesNode)
	{
		RegistrantProfile registrantProfilesObject;
		if(!valueRegistrantProfilesRegistrantProfile["TelExt"].isNull())
			registrantProfilesObject.telExt = valueRegistrantProfilesRegistrantProfile["TelExt"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["UpdateTime"].isNull())
			registrantProfilesObject.updateTime = valueRegistrantProfilesRegistrantProfile["UpdateTime"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["ZhProvince"].isNull())
			registrantProfilesObject.zhProvince = valueRegistrantProfilesRegistrantProfile["ZhProvince"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["CreateTime"].isNull())
			registrantProfilesObject.createTime = valueRegistrantProfilesRegistrantProfile["CreateTime"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["Telephone"].isNull())
			registrantProfilesObject.telephone = valueRegistrantProfilesRegistrantProfile["Telephone"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["RegistrantOrganization"].isNull())
			registrantProfilesObject.registrantOrganization = valueRegistrantProfilesRegistrantProfile["RegistrantOrganization"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["City"].isNull())
			registrantProfilesObject.city = valueRegistrantProfilesRegistrantProfile["City"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["ZhCity"].isNull())
			registrantProfilesObject.zhCity = valueRegistrantProfilesRegistrantProfile["ZhCity"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["TelArea"].isNull())
			registrantProfilesObject.telArea = valueRegistrantProfilesRegistrantProfile["TelArea"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["Address"].isNull())
			registrantProfilesObject.address = valueRegistrantProfilesRegistrantProfile["Address"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["RealNameStatus"].isNull())
			registrantProfilesObject.realNameStatus = valueRegistrantProfilesRegistrantProfile["RealNameStatus"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["PostalCode"].isNull())
			registrantProfilesObject.postalCode = valueRegistrantProfilesRegistrantProfile["PostalCode"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["RegistrantProfileType"].isNull())
			registrantProfilesObject.registrantProfileType = valueRegistrantProfilesRegistrantProfile["RegistrantProfileType"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["RegistrantProfileId"].isNull())
			registrantProfilesObject.registrantProfileId = std::stol(valueRegistrantProfilesRegistrantProfile["RegistrantProfileId"].asString());
		if(!valueRegistrantProfilesRegistrantProfile["ZhRegistrantOrganization"].isNull())
			registrantProfilesObject.zhRegistrantOrganization = valueRegistrantProfilesRegistrantProfile["ZhRegistrantOrganization"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["DefaultRegistrantProfile"].isNull())
			registrantProfilesObject.defaultRegistrantProfile = valueRegistrantProfilesRegistrantProfile["DefaultRegistrantProfile"].asString() == "true";
		if(!valueRegistrantProfilesRegistrantProfile["Email"].isNull())
			registrantProfilesObject.email = valueRegistrantProfilesRegistrantProfile["Email"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["ZhRegistrantName"].isNull())
			registrantProfilesObject.zhRegistrantName = valueRegistrantProfilesRegistrantProfile["ZhRegistrantName"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["RegistrantType"].isNull())
			registrantProfilesObject.registrantType = valueRegistrantProfilesRegistrantProfile["RegistrantType"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["Country"].isNull())
			registrantProfilesObject.country = valueRegistrantProfilesRegistrantProfile["Country"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["RegistrantName"].isNull())
			registrantProfilesObject.registrantName = valueRegistrantProfilesRegistrantProfile["RegistrantName"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["EmailVerificationStatus"].isNull())
			registrantProfilesObject.emailVerificationStatus = std::stoi(valueRegistrantProfilesRegistrantProfile["EmailVerificationStatus"].asString());
		if(!valueRegistrantProfilesRegistrantProfile["ZhAddress"].isNull())
			registrantProfilesObject.zhAddress = valueRegistrantProfilesRegistrantProfile["ZhAddress"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["Province"].isNull())
			registrantProfilesObject.province = valueRegistrantProfilesRegistrantProfile["Province"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["CredentialNo"].isNull())
			registrantProfilesObject.credentialNo = valueRegistrantProfilesRegistrantProfile["CredentialNo"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["CredentialType"].isNull())
			registrantProfilesObject.credentialType = valueRegistrantProfilesRegistrantProfile["CredentialType"].asString();
		if(!valueRegistrantProfilesRegistrantProfile["Remark"].isNull())
			registrantProfilesObject.remark = valueRegistrantProfilesRegistrantProfile["Remark"].asString();
		registrantProfiles_.push_back(registrantProfilesObject);
	}
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

bool QueryRegistrantProfilesResult::getPrePage()const
{
	return prePage_;
}

int QueryRegistrantProfilesResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryRegistrantProfilesResult::getPageSize()const
{
	return pageSize_;
}

int QueryRegistrantProfilesResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryRegistrantProfilesResult::RegistrantProfile> QueryRegistrantProfilesResult::getRegistrantProfiles()const
{
	return registrantProfiles_;
}

int QueryRegistrantProfilesResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryRegistrantProfilesResult::getNextPage()const
{
	return nextPage_;
}

