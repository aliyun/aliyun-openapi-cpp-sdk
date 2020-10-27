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

#include <alibabacloud/cloudesl/model/UpdateEslDeviceLightRequest.h>

using AlibabaCloud::Cloudesl::Model::UpdateEslDeviceLightRequest;

UpdateEslDeviceLightRequest::UpdateEslDeviceLightRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "UpdateEslDeviceLight")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateEslDeviceLightRequest::~UpdateEslDeviceLightRequest()
{}

std::string UpdateEslDeviceLightRequest::getExtraParams()const
{
	return extraParams_;
}

void UpdateEslDeviceLightRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

int UpdateEslDeviceLightRequest::getLightUpTime()const
{
	return lightUpTime_;
}

void UpdateEslDeviceLightRequest::setLightUpTime(int lightUpTime)
{
	lightUpTime_ = lightUpTime;
	setBodyParameter("LightUpTime", std::to_string(lightUpTime));
}

std::string UpdateEslDeviceLightRequest::getStoreId()const
{
	return storeId_;
}

void UpdateEslDeviceLightRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string UpdateEslDeviceLightRequest::getFrequency()const
{
	return frequency_;
}

void UpdateEslDeviceLightRequest::setFrequency(const std::string& frequency)
{
	frequency_ = frequency;
	setBodyParameter("Frequency", frequency);
}

std::string UpdateEslDeviceLightRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void UpdateEslDeviceLightRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

std::string UpdateEslDeviceLightRequest::getLedColor()const
{
	return ledColor_;
}

void UpdateEslDeviceLightRequest::setLedColor(const std::string& ledColor)
{
	ledColor_ = ledColor;
	setBodyParameter("LedColor", ledColor);
}

std::string UpdateEslDeviceLightRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void UpdateEslDeviceLightRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setBodyParameter("ItemBarCode", itemBarCode);
}

