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

#include <alibabacloud/cloudwf/model/BusinessCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::BusinessCreateRequest;

BusinessCreateRequest::BusinessCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "BusinessCreate")
{
	setMethod(HttpRequest::Method::Post);
}

BusinessCreateRequest::~BusinessCreateRequest()
{}

std::string BusinessCreateRequest::getBusinessCity()const
{
	return businessCity_;
}

void BusinessCreateRequest::setBusinessCity(const std::string& businessCity)
{
	businessCity_ = businessCity;
	setParameter("BusinessCity", businessCity);
}

std::string BusinessCreateRequest::getWarnEmail()const
{
	return warnEmail_;
}

void BusinessCreateRequest::setWarnEmail(const std::string& warnEmail)
{
	warnEmail_ = warnEmail;
	setParameter("WarnEmail", warnEmail);
}

std::string BusinessCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BusinessCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int BusinessCreateRequest::getBusinessType()const
{
	return businessType_;
}

void BusinessCreateRequest::setBusinessType(int businessType)
{
	businessType_ = businessType;
	setParameter("BusinessType", std::to_string(businessType));
}

int BusinessCreateRequest::getBusinessTopType()const
{
	return businessTopType_;
}

void BusinessCreateRequest::setBusinessTopType(int businessTopType)
{
	businessTopType_ = businessTopType;
	setParameter("BusinessTopType", std::to_string(businessTopType));
}

std::string BusinessCreateRequest::getBusinessTel()const
{
	return businessTel_;
}

void BusinessCreateRequest::setBusinessTel(const std::string& businessTel)
{
	businessTel_ = businessTel;
	setParameter("BusinessTel", businessTel);
}

std::string BusinessCreateRequest::getBusinessProvince()const
{
	return businessProvince_;
}

void BusinessCreateRequest::setBusinessProvince(const std::string& businessProvince)
{
	businessProvince_ = businessProvince;
	setParameter("BusinessProvince", businessProvince);
}

int BusinessCreateRequest::getBusinessSubtype()const
{
	return businessSubtype_;
}

void BusinessCreateRequest::setBusinessSubtype(int businessSubtype)
{
	businessSubtype_ = businessSubtype;
	setParameter("BusinessSubtype", std::to_string(businessSubtype));
}

std::string BusinessCreateRequest::getCombo()const
{
	return combo_;
}

void BusinessCreateRequest::setCombo(const std::string& combo)
{
	combo_ = combo;
	setParameter("Combo", combo);
}

std::string BusinessCreateRequest::getBusinessManager()const
{
	return businessManager_;
}

void BusinessCreateRequest::setBusinessManager(const std::string& businessManager)
{
	businessManager_ = businessManager;
	setParameter("BusinessManager", businessManager);
}

int BusinessCreateRequest::getWarn()const
{
	return warn_;
}

void BusinessCreateRequest::setWarn(int warn)
{
	warn_ = warn;
	setParameter("Warn", std::to_string(warn));
}

std::string BusinessCreateRequest::getBusinessName()const
{
	return businessName_;
}

void BusinessCreateRequest::setBusinessName(const std::string& businessName)
{
	businessName_ = businessName;
	setParameter("BusinessName", businessName);
}

std::string BusinessCreateRequest::getBusinessAddress()const
{
	return businessAddress_;
}

void BusinessCreateRequest::setBusinessAddress(const std::string& businessAddress)
{
	businessAddress_ = businessAddress;
	setParameter("BusinessAddress", businessAddress);
}

