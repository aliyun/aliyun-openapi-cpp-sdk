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

#include <alibabacloud/companyreg/model/SavePayrollRequest.h>

using AlibabaCloud::Companyreg::Model::SavePayrollRequest;

SavePayrollRequest::SavePayrollRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "SavePayroll")
{
	setMethod(HttpRequest::Method::Post);
}

SavePayrollRequest::~SavePayrollRequest()
{}

std::string SavePayrollRequest::getIncome()const
{
	return income_;
}

void SavePayrollRequest::setIncome(const std::string& income)
{
	income_ = income;
	setParameter("Income", income);
}

std::string SavePayrollRequest::getCorporateHousingAccumulationFund()const
{
	return corporateHousingAccumulationFund_;
}

void SavePayrollRequest::setCorporateHousingAccumulationFund(const std::string& corporateHousingAccumulationFund)
{
	corporateHousingAccumulationFund_ = corporateHousingAccumulationFund;
	setParameter("CorporateHousingAccumulationFund", corporateHousingAccumulationFund);
}

std::string SavePayrollRequest::getPeriod()const
{
	return period_;
}

void SavePayrollRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string SavePayrollRequest::getCorporateSocialInsurance()const
{
	return corporateSocialInsurance_;
}

void SavePayrollRequest::setCorporateSocialInsurance(const std::string& corporateSocialInsurance)
{
	corporateSocialInsurance_ = corporateSocialInsurance;
	setParameter("CorporateSocialInsurance", corporateSocialInsurance);
}

std::string SavePayrollRequest::getIdNo()const
{
	return idNo_;
}

void SavePayrollRequest::setIdNo(const std::string& idNo)
{
	idNo_ = idNo;
	setParameter("IdNo", idNo);
}

std::string SavePayrollRequest::getEmployeeTime()const
{
	return employeeTime_;
}

void SavePayrollRequest::setEmployeeTime(const std::string& employeeTime)
{
	employeeTime_ = employeeTime;
	setParameter("EmployeeTime", employeeTime);
}

std::string SavePayrollRequest::getPersonHousingAccumulationFund()const
{
	return personHousingAccumulationFund_;
}

void SavePayrollRequest::setPersonHousingAccumulationFund(const std::string& personHousingAccumulationFund)
{
	personHousingAccumulationFund_ = personHousingAccumulationFund;
	setParameter("PersonHousingAccumulationFund", personHousingAccumulationFund);
}

std::string SavePayrollRequest::getPhone()const
{
	return phone_;
}

void SavePayrollRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string SavePayrollRequest::getBizId()const
{
	return bizId_;
}

void SavePayrollRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string SavePayrollRequest::getName()const
{
	return name_;
}

void SavePayrollRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long SavePayrollRequest::getId()const
{
	return id_;
}

void SavePayrollRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string SavePayrollRequest::getPersonSocialInsurance()const
{
	return personSocialInsurance_;
}

void SavePayrollRequest::setPersonSocialInsurance(const std::string& personSocialInsurance)
{
	personSocialInsurance_ = personSocialInsurance;
	setParameter("PersonSocialInsurance", personSocialInsurance);
}

