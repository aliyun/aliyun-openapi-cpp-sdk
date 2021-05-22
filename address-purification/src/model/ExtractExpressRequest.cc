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

#include <alibabacloud/address-purification/model/ExtractExpressRequest.h>

using AlibabaCloud::Address_purification::Model::ExtractExpressRequest;

ExtractExpressRequest::ExtractExpressRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "ExtractExpress")
{
	setMethod(HttpRequest::Method::Post);
}

ExtractExpressRequest::~ExtractExpressRequest()
{}

std::string ExtractExpressRequest::getDefaultProvince()const
{
	return defaultProvince_;
}

void ExtractExpressRequest::setDefaultProvince(const std::string& defaultProvince)
{
	defaultProvince_ = defaultProvince;
	setBodyParameter("DefaultProvince", defaultProvince);
}

std::string ExtractExpressRequest::getServiceCode()const
{
	return serviceCode_;
}

void ExtractExpressRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string ExtractExpressRequest::getDefaultCity()const
{
	return defaultCity_;
}

void ExtractExpressRequest::setDefaultCity(const std::string& defaultCity)
{
	defaultCity_ = defaultCity;
	setBodyParameter("DefaultCity", defaultCity);
}

std::string ExtractExpressRequest::getDefaultDistrict()const
{
	return defaultDistrict_;
}

void ExtractExpressRequest::setDefaultDistrict(const std::string& defaultDistrict)
{
	defaultDistrict_ = defaultDistrict;
	setBodyParameter("DefaultDistrict", defaultDistrict);
}

std::string ExtractExpressRequest::getAppKey()const
{
	return appKey_;
}

void ExtractExpressRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string ExtractExpressRequest::getText()const
{
	return text_;
}

void ExtractExpressRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

