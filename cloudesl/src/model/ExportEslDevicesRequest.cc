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

#include <alibabacloud/cloudesl/model/ExportEslDevicesRequest.h>

using AlibabaCloud::Cloudesl::Model::ExportEslDevicesRequest;

ExportEslDevicesRequest::ExportEslDevicesRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "ExportEslDevices")
{
	setMethod(HttpRequest::Method::Post);
}

ExportEslDevicesRequest::~ExportEslDevicesRequest()
{}

std::string ExportEslDevicesRequest::getExtraParams()const
{
	return extraParams_;
}

void ExportEslDevicesRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string ExportEslDevicesRequest::getLanguage()const
{
	return language_;
}

void ExportEslDevicesRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setBodyParameter("Language", language);
}

std::string ExportEslDevicesRequest::getType()const
{
	return type_;
}

void ExportEslDevicesRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string ExportEslDevicesRequest::getStoreId()const
{
	return storeId_;
}

void ExportEslDevicesRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string ExportEslDevicesRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void ExportEslDevicesRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

std::string ExportEslDevicesRequest::getTypeEncode()const
{
	return typeEncode_;
}

void ExportEslDevicesRequest::setTypeEncode(const std::string& typeEncode)
{
	typeEncode_ = typeEncode;
	setBodyParameter("TypeEncode", typeEncode);
}

std::string ExportEslDevicesRequest::getEslStatus()const
{
	return eslStatus_;
}

void ExportEslDevicesRequest::setEslStatus(const std::string& eslStatus)
{
	eslStatus_ = eslStatus;
	setBodyParameter("EslStatus", eslStatus);
}

int ExportEslDevicesRequest::getToBatteryLevel()const
{
	return toBatteryLevel_;
}

void ExportEslDevicesRequest::setToBatteryLevel(int toBatteryLevel)
{
	toBatteryLevel_ = toBatteryLevel;
	setBodyParameter("ToBatteryLevel", std::to_string(toBatteryLevel));
}

std::string ExportEslDevicesRequest::getLevelLower()const
{
	return levelLower_;
}

void ExportEslDevicesRequest::setLevelLower(const std::string& levelLower)
{
	levelLower_ = levelLower;
	setBodyParameter("LevelLower", levelLower);
}

int ExportEslDevicesRequest::getFromBatteryLevel()const
{
	return fromBatteryLevel_;
}

void ExportEslDevicesRequest::setFromBatteryLevel(int fromBatteryLevel)
{
	fromBatteryLevel_ = fromBatteryLevel;
	setBodyParameter("FromBatteryLevel", std::to_string(fromBatteryLevel));
}

std::string ExportEslDevicesRequest::getLevelOrder()const
{
	return levelOrder_;
}

void ExportEslDevicesRequest::setLevelOrder(const std::string& levelOrder)
{
	levelOrder_ = levelOrder;
	setBodyParameter("LevelOrder", levelOrder);
}

