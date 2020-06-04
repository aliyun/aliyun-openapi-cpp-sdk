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

#include <alibabacloud/address-purification/model/GetZipcodeRequest.h>

using AlibabaCloud::Address_purification::Model::GetZipcodeRequest;

GetZipcodeRequest::GetZipcodeRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetZipcode")
{
	setMethod(HttpRequest::Method::Post);
}

GetZipcodeRequest::~GetZipcodeRequest()
{}

std::string GetZipcodeRequest::getDefaultProvince()const
{
	return defaultProvince_;
}

void GetZipcodeRequest::setDefaultProvince(const std::string& defaultProvince)
{
	defaultProvince_ = defaultProvince;
	setBodyParameter("DefaultProvince", defaultProvince);
}

std::string GetZipcodeRequest::getServiceCode()const
{
	return serviceCode_;
}

void GetZipcodeRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string GetZipcodeRequest::getDefaultCity()const
{
	return defaultCity_;
}

void GetZipcodeRequest::setDefaultCity(const std::string& defaultCity)
{
	defaultCity_ = defaultCity;
	setBodyParameter("DefaultCity", defaultCity);
}

std::string GetZipcodeRequest::getDefaultDistrict()const
{
	return defaultDistrict_;
}

void GetZipcodeRequest::setDefaultDistrict(const std::string& defaultDistrict)
{
	defaultDistrict_ = defaultDistrict;
	setBodyParameter("DefaultDistrict", defaultDistrict);
}

std::string GetZipcodeRequest::getAppKey()const
{
	return appKey_;
}

void GetZipcodeRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string GetZipcodeRequest::getText()const
{
	return text_;
}

void GetZipcodeRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

