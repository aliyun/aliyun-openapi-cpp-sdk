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

#include <alibabacloud/domain/model/QueryContactInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryContactInfoResult::QueryContactInfoResult() :
	ServiceResult()
{}

QueryContactInfoResult::QueryContactInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryContactInfoResult::~QueryContactInfoResult()
{}

void QueryContactInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ZhProvince"].isNull())
		zhProvince_ = value["ZhProvince"].asString();
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["Telephone"].isNull())
		telephone_ = value["Telephone"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["PostalCode"].isNull())
		postalCode_ = value["PostalCode"].asString();
	if(!value["ZhRegistrantName"].isNull())
		zhRegistrantName_ = value["ZhRegistrantName"].asString();
	if(!value["City"].isNull())
		city_ = value["City"].asString();
	if(!value["CreateDate"].isNull())
		createDate_ = value["CreateDate"].asString();
	if(!value["Province"].isNull())
		province_ = value["Province"].asString();
	if(!value["ZhCity"].isNull())
		zhCity_ = value["ZhCity"].asString();
	if(!value["RegistrantName"].isNull())
		registrantName_ = value["RegistrantName"].asString();
	if(!value["ZhRegistrantOrganization"].isNull())
		zhRegistrantOrganization_ = value["ZhRegistrantOrganization"].asString();
	if(!value["Country"].isNull())
		country_ = value["Country"].asString();
	if(!value["RegistrantOrganization"].isNull())
		registrantOrganization_ = value["RegistrantOrganization"].asString();
	if(!value["TelExt"].isNull())
		telExt_ = value["TelExt"].asString();
	if(!value["TelArea"].isNull())
		telArea_ = value["TelArea"].asString();
	if(!value["ZhAddress"].isNull())
		zhAddress_ = value["ZhAddress"].asString();

}

std::string QueryContactInfoResult::getZhProvince()const
{
	return zhProvince_;
}

std::string QueryContactInfoResult::getEmail()const
{
	return email_;
}

std::string QueryContactInfoResult::getTelephone()const
{
	return telephone_;
}

std::string QueryContactInfoResult::getAddress()const
{
	return address_;
}

std::string QueryContactInfoResult::getPostalCode()const
{
	return postalCode_;
}

std::string QueryContactInfoResult::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

std::string QueryContactInfoResult::getCity()const
{
	return city_;
}

std::string QueryContactInfoResult::getCreateDate()const
{
	return createDate_;
}

std::string QueryContactInfoResult::getProvince()const
{
	return province_;
}

std::string QueryContactInfoResult::getZhCity()const
{
	return zhCity_;
}

std::string QueryContactInfoResult::getRegistrantName()const
{
	return registrantName_;
}

std::string QueryContactInfoResult::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

std::string QueryContactInfoResult::getCountry()const
{
	return country_;
}

std::string QueryContactInfoResult::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

std::string QueryContactInfoResult::getTelExt()const
{
	return telExt_;
}

std::string QueryContactInfoResult::getTelArea()const
{
	return telArea_;
}

std::string QueryContactInfoResult::getZhAddress()const
{
	return zhAddress_;
}

