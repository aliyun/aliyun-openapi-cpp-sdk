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

#include <alibabacloud/cas/model/DescribeOrderMaterialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeOrderMaterialResult::DescribeOrderMaterialResult() :
	ServiceResult()
{}

DescribeOrderMaterialResult::DescribeOrderMaterialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderMaterialResult::~DescribeOrderMaterialResult()
{}

void DescribeOrderMaterialResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["CompanyName"].isNull())
		companyName_ = value["CompanyName"].asString();
	if(!value["CompanyPhone"].isNull())
		companyPhone_ = value["CompanyPhone"].asString();
	if(!value["CompanyCode"].isNull())
		companyCode_ = value["CompanyCode"].asString();
	if(!value["PersonName"].isNull())
		personName_ = value["PersonName"].asString();
	if(!value["PersonPhone"].isNull())
		personPhone_ = value["PersonPhone"].asString();
	if(!value["PersonEmail"].isNull())
		personEmail_ = value["PersonEmail"].asString();
	if(!value["CompanyEmail"].isNull())
		companyEmail_ = value["CompanyEmail"].asString();
	if(!value["CompanyAddress"].isNull())
		companyAddress_ = value["CompanyAddress"].asString();
	if(!value["PersonIdCardNumber"].isNull())
		personIdCardNumber_ = value["PersonIdCardNumber"].asString();
	if(!value["CompanyType"].isNull())
		companyType_ = std::stoi(value["CompanyType"].asString());
	if(!value["City"].isNull())
		city_ = value["City"].asString();
	if(!value["Province"].isNull())
		province_ = value["Province"].asString();
	if(!value["CreateCsr"].isNull())
		createCsr_ = std::stoi(value["CreateCsr"].asString());
	if(!value["PostCode"].isNull())
		postCode_ = value["PostCode"].asString();
	if(!value["CsrContent"].isNull())
		csrContent_ = value["CsrContent"].asString();
	if(!value["PersonTitle"].isNull())
		personTitle_ = value["PersonTitle"].asString();
	if(!value["LeaderName"].isNull())
		leaderName_ = value["LeaderName"].asString();
	if(!value["LeaderTitle"].isNull())
		leaderTitle_ = value["LeaderTitle"].asString();
	if(!value["LeaderEmail"].isNull())
		leaderEmail_ = value["LeaderEmail"].asString();
	if(!value["LeaderPhone"].isNull())
		leaderPhone_ = value["LeaderPhone"].asString();
	if(!value["CountryCode"].isNull())
		countryCode_ = value["CountryCode"].asString();
	if(!value["PersonDepartment"].isNull())
		personDepartment_ = value["PersonDepartment"].asString();
	if(!value["DomainAuthType"].isNull())
		domainAuthType_ = std::stoi(value["DomainAuthType"].asString());
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();

}

std::string DescribeOrderMaterialResult::getPersonName()const
{
	return personName_;
}

int DescribeOrderMaterialResult::getDomainAuthType()const
{
	return domainAuthType_;
}

std::string DescribeOrderMaterialResult::getPersonIdCardNumber()const
{
	return personIdCardNumber_;
}

std::string DescribeOrderMaterialResult::getLeaderName()const
{
	return leaderName_;
}

std::string DescribeOrderMaterialResult::getCompanyEmail()const
{
	return companyEmail_;
}

std::string DescribeOrderMaterialResult::getPersonPhone()const
{
	return personPhone_;
}

int DescribeOrderMaterialResult::getCompanyType()const
{
	return companyType_;
}

std::string DescribeOrderMaterialResult::getCity()const
{
	return city_;
}

std::string DescribeOrderMaterialResult::getLeaderEmail()const
{
	return leaderEmail_;
}

std::string DescribeOrderMaterialResult::getProvince()const
{
	return province_;
}

std::string DescribeOrderMaterialResult::getPersonTitle()const
{
	return personTitle_;
}

std::string DescribeOrderMaterialResult::getCompanyAddress()const
{
	return companyAddress_;
}

std::string DescribeOrderMaterialResult::getCompanyName()const
{
	return companyName_;
}

std::string DescribeOrderMaterialResult::getPersonDepartment()const
{
	return personDepartment_;
}

int DescribeOrderMaterialResult::getCreateCsr()const
{
	return createCsr_;
}

std::string DescribeOrderMaterialResult::getCsrContent()const
{
	return csrContent_;
}

std::string DescribeOrderMaterialResult::getPostCode()const
{
	return postCode_;
}

std::string DescribeOrderMaterialResult::getCountryCode()const
{
	return countryCode_;
}

std::string DescribeOrderMaterialResult::getDomain()const
{
	return domain_;
}

std::string DescribeOrderMaterialResult::getPersonEmail()const
{
	return personEmail_;
}

std::string DescribeOrderMaterialResult::getLeaderPhone()const
{
	return leaderPhone_;
}

std::string DescribeOrderMaterialResult::getCompanyPhone()const
{
	return companyPhone_;
}

std::string DescribeOrderMaterialResult::getCompanyCode()const
{
	return companyCode_;
}

std::string DescribeOrderMaterialResult::getLeaderTitle()const
{
	return leaderTitle_;
}

