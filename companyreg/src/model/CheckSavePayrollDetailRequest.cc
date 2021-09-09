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

#include <alibabacloud/companyreg/model/CheckSavePayrollDetailRequest.h>

using AlibabaCloud::Companyreg::Model::CheckSavePayrollDetailRequest;

CheckSavePayrollDetailRequest::CheckSavePayrollDetailRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "CheckSavePayrollDetail")
{
	setMethod(HttpRequest::Method::Post);
}

CheckSavePayrollDetailRequest::~CheckSavePayrollDetailRequest()
{}

std::string CheckSavePayrollDetailRequest::getIncome()const
{
	return income_;
}

void CheckSavePayrollDetailRequest::setIncome(const std::string& income)
{
	income_ = income;
	setParameter("Income", income);
}

std::string CheckSavePayrollDetailRequest::getCorporateHousingAccumulationFund()const
{
	return corporateHousingAccumulationFund_;
}

void CheckSavePayrollDetailRequest::setCorporateHousingAccumulationFund(const std::string& corporateHousingAccumulationFund)
{
	corporateHousingAccumulationFund_ = corporateHousingAccumulationFund;
	setParameter("CorporateHousingAccumulationFund", corporateHousingAccumulationFund);
}

std::string CheckSavePayrollDetailRequest::getPersonHousingAccumulationFund()const
{
	return personHousingAccumulationFund_;
}

void CheckSavePayrollDetailRequest::setPersonHousingAccumulationFund(const std::string& personHousingAccumulationFund)
{
	personHousingAccumulationFund_ = personHousingAccumulationFund;
	setParameter("PersonHousingAccumulationFund", personHousingAccumulationFund);
}

std::string CheckSavePayrollDetailRequest::getPersMedicalInsurance()const
{
	return persMedicalInsurance_;
}

void CheckSavePayrollDetailRequest::setPersMedicalInsurance(const std::string& persMedicalInsurance)
{
	persMedicalInsurance_ = persMedicalInsurance;
	setParameter("PersMedicalInsurance", persMedicalInsurance);
}

std::string CheckSavePayrollDetailRequest::getCorpUnemploymentInsurance()const
{
	return corpUnemploymentInsurance_;
}

void CheckSavePayrollDetailRequest::setCorpUnemploymentInsurance(const std::string& corpUnemploymentInsurance)
{
	corpUnemploymentInsurance_ = corpUnemploymentInsurance;
	setParameter("CorpUnemploymentInsurance", corpUnemploymentInsurance);
}

long CheckSavePayrollDetailRequest::getId()const
{
	return id_;
}

void CheckSavePayrollDetailRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string CheckSavePayrollDetailRequest::getPersonSocialInsurance()const
{
	return personSocialInsurance_;
}

void CheckSavePayrollDetailRequest::setPersonSocialInsurance(const std::string& personSocialInsurance)
{
	personSocialInsurance_ = personSocialInsurance;
	setParameter("PersonSocialInsurance", personSocialInsurance);
}

std::string CheckSavePayrollDetailRequest::getPeriod()const
{
	return period_;
}

void CheckSavePayrollDetailRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CheckSavePayrollDetailRequest::getCorporateSocialInsurance()const
{
	return corporateSocialInsurance_;
}

void CheckSavePayrollDetailRequest::setCorporateSocialInsurance(const std::string& corporateSocialInsurance)
{
	corporateSocialInsurance_ = corporateSocialInsurance;
	setParameter("CorporateSocialInsurance", corporateSocialInsurance);
}

std::string CheckSavePayrollDetailRequest::getCorpInjuryInsurance()const
{
	return corpInjuryInsurance_;
}

void CheckSavePayrollDetailRequest::setCorpInjuryInsurance(const std::string& corpInjuryInsurance)
{
	corpInjuryInsurance_ = corpInjuryInsurance;
	setParameter("CorpInjuryInsurance", corpInjuryInsurance);
}

std::string CheckSavePayrollDetailRequest::getPersPension()const
{
	return persPension_;
}

void CheckSavePayrollDetailRequest::setPersPension(const std::string& persPension)
{
	persPension_ = persPension;
	setParameter("PersPension", persPension);
}

std::string CheckSavePayrollDetailRequest::getCorpMedicalInsurance()const
{
	return corpMedicalInsurance_;
}

void CheckSavePayrollDetailRequest::setCorpMedicalInsurance(const std::string& corpMedicalInsurance)
{
	corpMedicalInsurance_ = corpMedicalInsurance;
	setParameter("CorpMedicalInsurance", corpMedicalInsurance);
}

std::string CheckSavePayrollDetailRequest::getIdNo()const
{
	return idNo_;
}

void CheckSavePayrollDetailRequest::setIdNo(const std::string& idNo)
{
	idNo_ = idNo;
	setParameter("IdNo", idNo);
}

std::string CheckSavePayrollDetailRequest::getEmployeeTime()const
{
	return employeeTime_;
}

void CheckSavePayrollDetailRequest::setEmployeeTime(const std::string& employeeTime)
{
	employeeTime_ = employeeTime;
	setParameter("EmployeeTime", employeeTime);
}

bool CheckSavePayrollDetailRequest::getUpdateEmployeeFlag()const
{
	return updateEmployeeFlag_;
}

void CheckSavePayrollDetailRequest::setUpdateEmployeeFlag(bool updateEmployeeFlag)
{
	updateEmployeeFlag_ = updateEmployeeFlag;
	setParameter("UpdateEmployeeFlag", updateEmployeeFlag ? "true" : "false");
}

std::string CheckSavePayrollDetailRequest::getPhone()const
{
	return phone_;
}

void CheckSavePayrollDetailRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string CheckSavePayrollDetailRequest::getPersUnemploymentInsurance()const
{
	return persUnemploymentInsurance_;
}

void CheckSavePayrollDetailRequest::setPersUnemploymentInsurance(const std::string& persUnemploymentInsurance)
{
	persUnemploymentInsurance_ = persUnemploymentInsurance;
	setParameter("PersUnemploymentInsurance", persUnemploymentInsurance);
}

std::string CheckSavePayrollDetailRequest::getBizId()const
{
	return bizId_;
}

void CheckSavePayrollDetailRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string CheckSavePayrollDetailRequest::getName()const
{
	return name_;
}

void CheckSavePayrollDetailRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CheckSavePayrollDetailRequest::getCorpPension()const
{
	return corpPension_;
}

void CheckSavePayrollDetailRequest::setCorpPension(const std::string& corpPension)
{
	corpPension_ = corpPension;
	setParameter("CorpPension", corpPension);
}

std::string CheckSavePayrollDetailRequest::getCorpMaternityInsurance()const
{
	return corpMaternityInsurance_;
}

void CheckSavePayrollDetailRequest::setCorpMaternityInsurance(const std::string& corpMaternityInsurance)
{
	corpMaternityInsurance_ = corpMaternityInsurance;
	setParameter("CorpMaternityInsurance", corpMaternityInsurance);
}

