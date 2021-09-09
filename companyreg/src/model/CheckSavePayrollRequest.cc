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

#include <alibabacloud/companyreg/model/CheckSavePayrollRequest.h>

using AlibabaCloud::Companyreg::Model::CheckSavePayrollRequest;

CheckSavePayrollRequest::CheckSavePayrollRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "CheckSavePayroll")
{
	setMethod(HttpRequest::Method::Post);
}

CheckSavePayrollRequest::~CheckSavePayrollRequest()
{}

std::string CheckSavePayrollRequest::getIncome()const
{
	return income_;
}

void CheckSavePayrollRequest::setIncome(const std::string& income)
{
	income_ = income;
	setParameter("Income", income);
}

std::string CheckSavePayrollRequest::getCorporateHousingAccumulationFund()const
{
	return corporateHousingAccumulationFund_;
}

void CheckSavePayrollRequest::setCorporateHousingAccumulationFund(const std::string& corporateHousingAccumulationFund)
{
	corporateHousingAccumulationFund_ = corporateHousingAccumulationFund;
	setParameter("CorporateHousingAccumulationFund", corporateHousingAccumulationFund);
}

std::string CheckSavePayrollRequest::getPeriod()const
{
	return period_;
}

void CheckSavePayrollRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CheckSavePayrollRequest::getCorporateSocialInsurance()const
{
	return corporateSocialInsurance_;
}

void CheckSavePayrollRequest::setCorporateSocialInsurance(const std::string& corporateSocialInsurance)
{
	corporateSocialInsurance_ = corporateSocialInsurance;
	setParameter("CorporateSocialInsurance", corporateSocialInsurance);
}

std::string CheckSavePayrollRequest::getIdNo()const
{
	return idNo_;
}

void CheckSavePayrollRequest::setIdNo(const std::string& idNo)
{
	idNo_ = idNo;
	setParameter("IdNo", idNo);
}

std::string CheckSavePayrollRequest::getEmployeeTime()const
{
	return employeeTime_;
}

void CheckSavePayrollRequest::setEmployeeTime(const std::string& employeeTime)
{
	employeeTime_ = employeeTime;
	setParameter("EmployeeTime", employeeTime);
}

std::string CheckSavePayrollRequest::getPersonHousingAccumulationFund()const
{
	return personHousingAccumulationFund_;
}

void CheckSavePayrollRequest::setPersonHousingAccumulationFund(const std::string& personHousingAccumulationFund)
{
	personHousingAccumulationFund_ = personHousingAccumulationFund;
	setParameter("PersonHousingAccumulationFund", personHousingAccumulationFund);
}

bool CheckSavePayrollRequest::getUpdateEmployeeFlag()const
{
	return updateEmployeeFlag_;
}

void CheckSavePayrollRequest::setUpdateEmployeeFlag(bool updateEmployeeFlag)
{
	updateEmployeeFlag_ = updateEmployeeFlag;
	setParameter("UpdateEmployeeFlag", updateEmployeeFlag ? "true" : "false");
}

std::string CheckSavePayrollRequest::getPhone()const
{
	return phone_;
}

void CheckSavePayrollRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string CheckSavePayrollRequest::getBizId()const
{
	return bizId_;
}

void CheckSavePayrollRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string CheckSavePayrollRequest::getName()const
{
	return name_;
}

void CheckSavePayrollRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long CheckSavePayrollRequest::getId()const
{
	return id_;
}

void CheckSavePayrollRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string CheckSavePayrollRequest::getPersonSocialInsurance()const
{
	return personSocialInsurance_;
}

void CheckSavePayrollRequest::setPersonSocialInsurance(const std::string& personSocialInsurance)
{
	personSocialInsurance_ = personSocialInsurance;
	setParameter("PersonSocialInsurance", personSocialInsurance);
}

