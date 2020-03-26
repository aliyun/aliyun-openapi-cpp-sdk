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

#include <alibabacloud/sas-api/model/GetPhoneProfileRequest.h>

using AlibabaCloud::Sas_api::Model::GetPhoneProfileRequest;

GetPhoneProfileRequest::GetPhoneProfileRequest() :
	RpcServiceRequest("sas-api", "2017-07-05", "GetPhoneProfile")
{
	setMethod(HttpRequest::Method::Post);
}

GetPhoneProfileRequest::~GetPhoneProfileRequest()
{}

std::string GetPhoneProfileRequest::getPhone()const
{
	return phone_;
}

void GetPhoneProfileRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

int GetPhoneProfileRequest::getSensType()const
{
	return sensType_;
}

void GetPhoneProfileRequest::setSensType(int sensType)
{
	sensType_ = sensType;
	setParameter("SensType", std::to_string(sensType));
}

std::string GetPhoneProfileRequest::getDataVersion()const
{
	return dataVersion_;
}

void GetPhoneProfileRequest::setDataVersion(const std::string& dataVersion)
{
	dataVersion_ = dataVersion;
	setParameter("DataVersion", dataVersion);
}

int GetPhoneProfileRequest::getBusinessType()const
{
	return businessType_;
}

void GetPhoneProfileRequest::setBusinessType(int businessType)
{
	businessType_ = businessType;
	setParameter("BusinessType", std::to_string(businessType));
}

