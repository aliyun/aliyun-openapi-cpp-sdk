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

#include <alibabacloud/companyreg/model/CheckCompanyRegRequest.h>

using AlibabaCloud::Companyreg::Model::CheckCompanyRegRequest;

CheckCompanyRegRequest::CheckCompanyRegRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "CheckCompanyReg")
{
	setMethod(HttpRequest::Method::Post);
}

CheckCompanyRegRequest::~CheckCompanyRegRequest()
{}

std::string CheckCompanyRegRequest::getOrgType()const
{
	return orgType_;
}

void CheckCompanyRegRequest::setOrgType(const std::string& orgType)
{
	orgType_ = orgType;
	setParameter("OrgType", orgType);
}

std::string CheckCompanyRegRequest::getIndustryType()const
{
	return industryType_;
}

void CheckCompanyRegRequest::setIndustryType(const std::string& industryType)
{
	industryType_ = industryType;
	setParameter("IndustryType", industryType);
}

std::string CheckCompanyRegRequest::getTradeName()const
{
	return tradeName_;
}

void CheckCompanyRegRequest::setTradeName(const std::string& tradeName)
{
	tradeName_ = tradeName;
	setParameter("TradeName", tradeName);
}

std::string CheckCompanyRegRequest::getCity()const
{
	return city_;
}

void CheckCompanyRegRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

int CheckCompanyRegRequest::getNameType()const
{
	return nameType_;
}

void CheckCompanyRegRequest::setNameType(int nameType)
{
	nameType_ = nameType;
	setParameter("NameType", std::to_string(nameType));
}

