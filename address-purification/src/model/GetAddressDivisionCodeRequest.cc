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

#include <alibabacloud/address-purification/model/GetAddressDivisionCodeRequest.h>

using AlibabaCloud::Address_purification::Model::GetAddressDivisionCodeRequest;

GetAddressDivisionCodeRequest::GetAddressDivisionCodeRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetAddressDivisionCode")
{
	setMethod(HttpRequest::Method::Post);
}

GetAddressDivisionCodeRequest::~GetAddressDivisionCodeRequest()
{}

std::string GetAddressDivisionCodeRequest::getDefaultProvince()const
{
	return defaultProvince_;
}

void GetAddressDivisionCodeRequest::setDefaultProvince(const std::string& defaultProvince)
{
	defaultProvince_ = defaultProvince;
	setBodyParameter("DefaultProvince", defaultProvince);
}

std::string GetAddressDivisionCodeRequest::getServiceCode()const
{
	return serviceCode_;
}

void GetAddressDivisionCodeRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string GetAddressDivisionCodeRequest::getDefaultCity()const
{
	return defaultCity_;
}

void GetAddressDivisionCodeRequest::setDefaultCity(const std::string& defaultCity)
{
	defaultCity_ = defaultCity;
	setBodyParameter("DefaultCity", defaultCity);
}

std::string GetAddressDivisionCodeRequest::getDefaultDistrict()const
{
	return defaultDistrict_;
}

void GetAddressDivisionCodeRequest::setDefaultDistrict(const std::string& defaultDistrict)
{
	defaultDistrict_ = defaultDistrict;
	setBodyParameter("DefaultDistrict", defaultDistrict);
}

std::string GetAddressDivisionCodeRequest::getAppKey()const
{
	return appKey_;
}

void GetAddressDivisionCodeRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string GetAddressDivisionCodeRequest::getText()const
{
	return text_;
}

void GetAddressDivisionCodeRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

