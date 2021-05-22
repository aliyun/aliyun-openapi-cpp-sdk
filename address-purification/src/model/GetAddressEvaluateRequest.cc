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

#include <alibabacloud/address-purification/model/GetAddressEvaluateRequest.h>

using AlibabaCloud::Address_purification::Model::GetAddressEvaluateRequest;

GetAddressEvaluateRequest::GetAddressEvaluateRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetAddressEvaluate")
{
	setMethod(HttpRequest::Method::Post);
}

GetAddressEvaluateRequest::~GetAddressEvaluateRequest()
{}

std::string GetAddressEvaluateRequest::getDefaultProvince()const
{
	return defaultProvince_;
}

void GetAddressEvaluateRequest::setDefaultProvince(const std::string& defaultProvince)
{
	defaultProvince_ = defaultProvince;
	setBodyParameter("DefaultProvince", defaultProvince);
}

std::string GetAddressEvaluateRequest::getServiceCode()const
{
	return serviceCode_;
}

void GetAddressEvaluateRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string GetAddressEvaluateRequest::getDefaultCity()const
{
	return defaultCity_;
}

void GetAddressEvaluateRequest::setDefaultCity(const std::string& defaultCity)
{
	defaultCity_ = defaultCity;
	setBodyParameter("DefaultCity", defaultCity);
}

std::string GetAddressEvaluateRequest::getDefaultDistrict()const
{
	return defaultDistrict_;
}

void GetAddressEvaluateRequest::setDefaultDistrict(const std::string& defaultDistrict)
{
	defaultDistrict_ = defaultDistrict;
	setBodyParameter("DefaultDistrict", defaultDistrict);
}

std::string GetAddressEvaluateRequest::getAppKey()const
{
	return appKey_;
}

void GetAddressEvaluateRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string GetAddressEvaluateRequest::getText()const
{
	return text_;
}

void GetAddressEvaluateRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

