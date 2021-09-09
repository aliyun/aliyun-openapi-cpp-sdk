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

#include <alibabacloud/companyreg/model/GetPayrollInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetPayrollInfoResult::GetPayrollInfoResult() :
	ServiceResult()
{}

GetPayrollInfoResult::GetPayrollInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPayrollInfoResult::~GetPayrollInfoResult()
{}

void GetPayrollInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CorporateHousingAccumulationFund"].isNull())
		corporateHousingAccumulationFund_ = value["CorporateHousingAccumulationFund"].asString();
	if(!value["CorporateSocialInsurance"].isNull())
		corporateSocialInsurance_ = value["CorporateSocialInsurance"].asString();
	if(!value["EmployeeTime"].isNull())
		employeeTime_ = value["EmployeeTime"].asString();
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["IdNo"].isNull())
		idNo_ = value["IdNo"].asString();
	if(!value["Income"].isNull())
		income_ = value["Income"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Period"].isNull())
		period_ = value["Period"].asString();
	if(!value["PersonHousingAccumulationFund"].isNull())
		personHousingAccumulationFund_ = value["PersonHousingAccumulationFund"].asString();
	if(!value["PersonSocialInsurance"].isNull())
		personSocialInsurance_ = value["PersonSocialInsurance"].asString();
	if(!value["Phone"].isNull())
		phone_ = value["Phone"].asString();
	if(!value["CorpPension"].isNull())
		corpPension_ = value["CorpPension"].asString();
	if(!value["CorpMedicalInsurance"].isNull())
		corpMedicalInsurance_ = value["CorpMedicalInsurance"].asString();
	if(!value["CorpUnemploymentInsurance"].isNull())
		corpUnemploymentInsurance_ = value["CorpUnemploymentInsurance"].asString();
	if(!value["CorpInjuryInsurance"].isNull())
		corpInjuryInsurance_ = value["CorpInjuryInsurance"].asString();
	if(!value["CorpMaternityInsurance"].isNull())
		corpMaternityInsurance_ = value["CorpMaternityInsurance"].asString();
	if(!value["PersPension"].isNull())
		persPension_ = value["PersPension"].asString();
	if(!value["PersUnemploymentInsurance"].isNull())
		persUnemploymentInsurance_ = value["PersUnemploymentInsurance"].asString();
	if(!value["PersMedicalInsurance"].isNull())
		persMedicalInsurance_ = value["PersMedicalInsurance"].asString();

}

std::string GetPayrollInfoResult::getCorpInjuryInsurance()const
{
	return corpInjuryInsurance_;
}

std::string GetPayrollInfoResult::getCorpMedicalInsurance()const
{
	return corpMedicalInsurance_;
}

std::string GetPayrollInfoResult::getIncome()const
{
	return income_;
}

std::string GetPayrollInfoResult::getCorporateSocialInsurance()const
{
	return corporateSocialInsurance_;
}

std::string GetPayrollInfoResult::getPeriod()const
{
	return period_;
}

std::string GetPayrollInfoResult::getPersUnemploymentInsurance()const
{
	return persUnemploymentInsurance_;
}

std::string GetPayrollInfoResult::getName()const
{
	return name_;
}

std::string GetPayrollInfoResult::getCorpMaternityInsurance()const
{
	return corpMaternityInsurance_;
}

std::string GetPayrollInfoResult::getPersonSocialInsurance()const
{
	return personSocialInsurance_;
}

std::string GetPayrollInfoResult::getPersonHousingAccumulationFund()const
{
	return personHousingAccumulationFund_;
}

std::string GetPayrollInfoResult::getPhone()const
{
	return phone_;
}

std::string GetPayrollInfoResult::getCorpUnemploymentInsurance()const
{
	return corpUnemploymentInsurance_;
}

std::string GetPayrollInfoResult::getPersPension()const
{
	return persPension_;
}

std::string GetPayrollInfoResult::getPersMedicalInsurance()const
{
	return persMedicalInsurance_;
}

long GetPayrollInfoResult::getId()const
{
	return id_;
}

std::string GetPayrollInfoResult::getCorpPension()const
{
	return corpPension_;
}

std::string GetPayrollInfoResult::getEmployeeTime()const
{
	return employeeTime_;
}

std::string GetPayrollInfoResult::getIdNo()const
{
	return idNo_;
}

std::string GetPayrollInfoResult::getCorporateHousingAccumulationFund()const
{
	return corporateHousingAccumulationFund_;
}

