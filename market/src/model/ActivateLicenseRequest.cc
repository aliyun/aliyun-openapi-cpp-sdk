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

#include <alibabacloud/market/model/ActivateLicenseRequest.h>

using AlibabaCloud::Market::Model::ActivateLicenseRequest;

ActivateLicenseRequest::ActivateLicenseRequest() :
	RpcServiceRequest("market", "2015-11-01", "ActivateLicense")
{
	setMethod(HttpRequest::Method::Post);
}

ActivateLicenseRequest::~ActivateLicenseRequest()
{}

std::string ActivateLicenseRequest::getIdentification()const
{
	return identification_;
}

void ActivateLicenseRequest::setIdentification(const std::string& identification)
{
	identification_ = identification;
	setParameter("Identification", identification);
}

std::string ActivateLicenseRequest::getLicenseCode()const
{
	return licenseCode_;
}

void ActivateLicenseRequest::setLicenseCode(const std::string& licenseCode)
{
	licenseCode_ = licenseCode;
	setParameter("LicenseCode", licenseCode);
}

