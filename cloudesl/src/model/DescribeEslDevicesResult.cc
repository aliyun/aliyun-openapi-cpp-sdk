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

#include <alibabacloud/cloudesl/model/DescribeEslDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeEslDevicesResult::DescribeEslDevicesResult() :
	ServiceResult()
{}

DescribeEslDevicesResult::DescribeEslDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEslDevicesResult::~DescribeEslDevicesResult()
{}

void DescribeEslDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEslDevicesNode = value["EslDevices"]["EslDeviceInfo"];
	for (auto valueEslDevicesEslDeviceInfo : allEslDevicesNode)
	{
		EslDeviceInfo eslDevicesObject;
		if(!valueEslDevicesEslDeviceInfo["Type"].isNull())
			eslDevicesObject.type = valueEslDevicesEslDeviceInfo["Type"].asString();
		if(!valueEslDevicesEslDeviceInfo["StoreId"].isNull())
			eslDevicesObject.storeId = valueEslDevicesEslDeviceInfo["StoreId"].asString();
		if(!valueEslDevicesEslDeviceInfo["EslBarCode"].isNull())
			eslDevicesObject.eslBarCode = valueEslDevicesEslDeviceInfo["EslBarCode"].asString();
		if(!valueEslDevicesEslDeviceInfo["Model"].isNull())
			eslDevicesObject.model = valueEslDevicesEslDeviceInfo["Model"].asString();
		if(!valueEslDevicesEslDeviceInfo["LastCommunicateTime"].isNull())
			eslDevicesObject.lastCommunicateTime = valueEslDevicesEslDeviceInfo["LastCommunicateTime"].asString();
		if(!valueEslDevicesEslDeviceInfo["ScreenHeight"].isNull())
			eslDevicesObject.screenHeight = std::stoi(valueEslDevicesEslDeviceInfo["ScreenHeight"].asString());
		if(!valueEslDevicesEslDeviceInfo["ScreenWidth"].isNull())
			eslDevicesObject.screenWidth = std::stoi(valueEslDevicesEslDeviceInfo["ScreenWidth"].asString());
		if(!valueEslDevicesEslDeviceInfo["EslSignal"].isNull())
			eslDevicesObject.eslSignal = std::stoi(valueEslDevicesEslDeviceInfo["EslSignal"].asString());
		if(!valueEslDevicesEslDeviceInfo["BatteryLevel"].isNull())
			eslDevicesObject.batteryLevel = std::stoi(valueEslDevicesEslDeviceInfo["BatteryLevel"].asString());
		if(!valueEslDevicesEslDeviceInfo["EslStatus"].isNull())
			eslDevicesObject.eslStatus = valueEslDevicesEslDeviceInfo["EslStatus"].asString();
		if(!valueEslDevicesEslDeviceInfo["Mac"].isNull())
			eslDevicesObject.mac = valueEslDevicesEslDeviceInfo["Mac"].asString();
		if(!valueEslDevicesEslDeviceInfo["TypeEncode"].isNull())
			eslDevicesObject.typeEncode = valueEslDevicesEslDeviceInfo["TypeEncode"].asString();
		if(!valueEslDevicesEslDeviceInfo["LayoutId"].isNull())
			eslDevicesObject.layoutId = valueEslDevicesEslDeviceInfo["LayoutId"].asString();
		if(!valueEslDevicesEslDeviceInfo["LayoutName"].isNull())
			eslDevicesObject.layoutName = valueEslDevicesEslDeviceInfo["LayoutName"].asString();
		eslDevices_.push_back(eslDevicesObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

int DescribeEslDevicesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeEslDevicesResult::getMessage()const
{
	return message_;
}

int DescribeEslDevicesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEslDevicesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEslDevicesResult::EslDeviceInfo> DescribeEslDevicesResult::getEslDevices()const
{
	return eslDevices_;
}

std::string DescribeEslDevicesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeEslDevicesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeEslDevicesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeEslDevicesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeEslDevicesResult::getCode()const
{
	return code_;
}

bool DescribeEslDevicesResult::getSuccess()const
{
	return success_;
}

