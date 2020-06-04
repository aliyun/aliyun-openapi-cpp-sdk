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

#include <alibabacloud/address-purification/model/ExtractPhoneRequest.h>

using AlibabaCloud::Address_purification::Model::ExtractPhoneRequest;

ExtractPhoneRequest::ExtractPhoneRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "ExtractPhone")
{
	setMethod(HttpRequest::Method::Post);
}

ExtractPhoneRequest::~ExtractPhoneRequest()
{}

std::string ExtractPhoneRequest::getDefaultProvince()const
{
	return defaultProvince_;
}

void ExtractPhoneRequest::setDefaultProvince(const std::string& defaultProvince)
{
	defaultProvince_ = defaultProvince;
	setBodyParameter("DefaultProvince", defaultProvince);
}

std::string ExtractPhoneRequest::getServiceCode()const
{
	return serviceCode_;
}

void ExtractPhoneRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string ExtractPhoneRequest::getDefaultCity()const
{
	return defaultCity_;
}

void ExtractPhoneRequest::setDefaultCity(const std::string& defaultCity)
{
	defaultCity_ = defaultCity;
	setBodyParameter("DefaultCity", defaultCity);
}

std::string ExtractPhoneRequest::getDefaultDistrict()const
{
	return defaultDistrict_;
}

void ExtractPhoneRequest::setDefaultDistrict(const std::string& defaultDistrict)
{
	defaultDistrict_ = defaultDistrict;
	setBodyParameter("DefaultDistrict", defaultDistrict);
}

std::string ExtractPhoneRequest::getAppKey()const
{
	return appKey_;
}

void ExtractPhoneRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string ExtractPhoneRequest::getText()const
{
	return text_;
}

void ExtractPhoneRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

