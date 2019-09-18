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
	auto allRegistrantProfiles = value["RegistrantProfiles"]["RegistrantProfile"];
	for (auto value : allRegistrantProfiles)
	{
		RegistrantProfile registrantProfilesObject;
		if(!value["RegistrantProfileId"].isNull())
			registrantProfilesObject.registrantProfileId = std::stol(value["RegistrantProfileId"].asString());
		if(!value["CreateTime"].isNull())
			registrantProfilesObject.createTime = value["CreateTime"].asString();
		if(!value["UpdateTime"].isNull())
			registrantProfilesObject.updateTime = value["UpdateTime"].asString();
		if(!value["DefaultRegistrantProfile"].isNull())
			registrantProfilesObject.defaultRegistrantProfile = value["DefaultRegistrantProfile"].asString() == "true";
		if(!value["RegistrantName"].isNull())
			registrantProfilesObject.registrantName = value["RegistrantName"].asString();
		if(!value["RegistrantOrganization"].isNull())
			registrantProfilesObject.registrantOrganization = value["RegistrantOrganization"].asString();
		if(!value["Country"].isNull())
			registrantProfilesObject.country = value["Country"].asString();
		if(!value["Province"].isNull())
			registrantProfilesObject.province = value["Province"].asString();
		if(!value["City"].isNull())
			registrantProfilesObject.city = value["City"].asString();
		if(!value["Address"].isNull())
			registrantProfilesObject.address = value["Address"].asString();
		if(!value["Email"].isNull())
			registrantProfilesObject.email = value["Email"].asString();
		if(!value["PostalCode"].isNull())
			registrantProfilesObject.postalCode = value["PostalCode"].asString();
		if(!value["TelArea"].isNull())
			registrantProfilesObject.telArea = value["TelArea"].asString();
		if(!value["Telephone"].isNull())
			registrantProfilesObject.telephone = value["Telephone"].asString();
		if(!value["TelExt"].isNull())
			registrantProfilesObject.telExt = value["TelExt"].asString();
		if(!value["EmailVerificationStatus"].isNull())
			registrantProfilesObject.emailVerificationStatus = std::stoi(value["EmailVerificationStatus"].asString());
		if(!value["ZhRegistrantName"].isNull())
			registrantProfilesObject.zhRegistrantName = value["ZhRegistrantName"].asString();
		if(!value["ZhRegistrantOrganization"].isNull())
			registrantProfilesObject.zhRegistrantOrganization = value["ZhRegistrantOrganization"].asString();
		if(!value["ZhProvince"].isNull())
			registrantProfilesObject.zhProvince = value["ZhProvince"].asString();
		if(!value["ZhCity"].isNull())
			registrantProfilesObject.zhCity = value["ZhCity"].asString();
		if(!value["ZhAddress"].isNull())
			registrantProfilesObject.zhAddress = value["ZhAddress"].asString();
		if(!value["RegistrantType"].isNull())
			registrantProfilesObject.registrantType = value["RegistrantType"].asString();
		if(!value["RealNameStatus"].isNull())
			registrantProfilesObject.realNameStatus = value["RealNameStatus"].asString();
		if(!value["RegistrantProfileType"].isNull())
			registrantProfilesObject.registrantProfileType = value["RegistrantProfileType"].asString();
		registrantProfiles_.push_back(registrantProfilesObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

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

