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

#include <alibabacloud/address-purification/model/TransferCoordRequest.h>

using AlibabaCloud::Address_purification::Model::TransferCoordRequest;

TransferCoordRequest::TransferCoordRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "TransferCoord")
{
	setMethod(HttpRequest::Method::Post);
}

TransferCoordRequest::~TransferCoordRequest()
{}

std::string TransferCoordRequest::getDefaultProvince()const
{
	return defaultProvince_;
}

void TransferCoordRequest::setDefaultProvince(const std::string& defaultProvince)
{
	defaultProvince_ = defaultProvince;
	setBodyParameter("DefaultProvince", defaultProvince);
}

std::string TransferCoordRequest::getSrcCoord()const
{
	return srcCoord_;
}

void TransferCoordRequest::setSrcCoord(const std::string& srcCoord)
{
	srcCoord_ = srcCoord;
	setBodyParameter("SrcCoord", srcCoord);
}

std::string TransferCoordRequest::getDefaultCity()const
{
	return defaultCity_;
}

void TransferCoordRequest::setDefaultCity(const std::string& defaultCity)
{
	defaultCity_ = defaultCity;
	setBodyParameter("DefaultCity", defaultCity);
}

std::string TransferCoordRequest::getText()const
{
	return text_;
}

void TransferCoordRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

std::string TransferCoordRequest::getServiceCode()const
{
	return serviceCode_;
}

void TransferCoordRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string TransferCoordRequest::getDefaultDistrict()const
{
	return defaultDistrict_;
}

void TransferCoordRequest::setDefaultDistrict(const std::string& defaultDistrict)
{
	defaultDistrict_ = defaultDistrict;
	setBodyParameter("DefaultDistrict", defaultDistrict);
}

std::string TransferCoordRequest::getAppKey()const
{
	return appKey_;
}

void TransferCoordRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

