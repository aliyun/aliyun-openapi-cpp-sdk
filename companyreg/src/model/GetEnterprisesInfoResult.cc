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

#include <alibabacloud/companyreg/model/GetEnterprisesInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetEnterprisesInfoResult::GetEnterprisesInfoResult() :
	ServiceResult()
{}

GetEnterprisesInfoResult::GetEnterprisesInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEnterprisesInfoResult::~GetEnterprisesInfoResult()
{}

void GetEnterprisesInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EnterpriseName"].isNull())
		enterpriseName_ = value["EnterpriseName"].asString();
	if(!value["TaxNo"].isNull())
		taxNo_ = value["TaxNo"].asString();
	if(!value["Corporation"].isNull())
		corporation_ = value["Corporation"].asString();
	if(!value["EstablishDate"].isNull())
		establishDate_ = value["EstablishDate"].asString();
	if(!value["EnterpriseType"].isNull())
		enterpriseType_ = value["EnterpriseType"].asString();
	if(!value["RegisteredCapital"].isNull())
		registeredCapital_ = value["RegisteredCapital"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["BusinessScope"].isNull())
		businessScope_ = value["BusinessScope"].asString();
	if(!value["FromBusinessTerm"].isNull())
		fromBusinessTerm_ = value["FromBusinessTerm"].asString();
	if(!value["ToBusinessTerm"].isNull())
		toBusinessTerm_ = value["ToBusinessTerm"].asString();
	if(!value["EnterpriseStatus"].isNull())
		enterpriseStatus_ = value["EnterpriseStatus"].asString();
	if(!value["IndustryCoName"].isNull())
		industryCoName_ = value["IndustryCoName"].asString();
	if(!value["IndustryCode"].isNull())
		industryCode_ = value["IndustryCode"].asString();
	if(!value["EntityType"].isNull())
		entityType_ = value["EntityType"].asString();
	if(!value["AreaName"].isNull())
		areaName_ = value["AreaName"].asString();
	if(!value["RegCityName"].isNull())
		regCityName_ = value["RegCityName"].asString();
	if(!value["ChangeDate"].isNull())
		changeDate_ = value["ChangeDate"].asString();

}

std::string GetEnterprisesInfoResult::getEnterpriseType()const
{
	return enterpriseType_;
}

std::string GetEnterprisesInfoResult::getToBusinessTerm()const
{
	return toBusinessTerm_;
}

std::string GetEnterprisesInfoResult::getTaxNo()const
{
	return taxNo_;
}

std::string GetEnterprisesInfoResult::getAddress()const
{
	return address_;
}

std::string GetEnterprisesInfoResult::getIndustryCode()const
{
	return industryCode_;
}

std::string GetEnterprisesInfoResult::getBusinessScope()const
{
	return businessScope_;
}

std::string GetEnterprisesInfoResult::getFromBusinessTerm()const
{
	return fromBusinessTerm_;
}

std::string GetEnterprisesInfoResult::getChangeDate()const
{
	return changeDate_;
}

std::string GetEnterprisesInfoResult::getRegCityName()const
{
	return regCityName_;
}

std::string GetEnterprisesInfoResult::getEstablishDate()const
{
	return establishDate_;
}

std::string GetEnterprisesInfoResult::getEntityType()const
{
	return entityType_;
}

std::string GetEnterprisesInfoResult::getAreaName()const
{
	return areaName_;
}

std::string GetEnterprisesInfoResult::getCorporation()const
{
	return corporation_;
}

std::string GetEnterprisesInfoResult::getRegisteredCapital()const
{
	return registeredCapital_;
}

std::string GetEnterprisesInfoResult::getEnterpriseName()const
{
	return enterpriseName_;
}

std::string GetEnterprisesInfoResult::getIndustryCoName()const
{
	return industryCoName_;
}

std::string GetEnterprisesInfoResult::getEnterpriseStatus()const
{
	return enterpriseStatus_;
}

