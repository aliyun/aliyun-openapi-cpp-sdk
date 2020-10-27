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
		if(!valueEslDevicesEslDeviceInfo["CompanyId"].isNull())
			eslDevicesObject.companyId = valueEslDevicesEslDeviceInfo["CompanyId"].asString();
		if(!valueEslDevicesEslDeviceInfo["StoreId"].isNull())
			eslDevicesObject.storeId = valueEslDevicesEslDeviceInfo["StoreId"].asString();
		if(!valueEslDevicesEslDeviceInfo["Mac"].isNull())
			eslDevicesObject.mac = valueEslDevicesEslDeviceInfo["Mac"].asString();
		if(!valueEslDevicesEslDeviceInfo["EslBarCode"].isNull())
			eslDevicesObject.eslBarCode = valueEslDevicesEslDeviceInfo["EslBarCode"].asString();
		if(!valueEslDevicesEslDeviceInfo["ItemBarCode"].isNull())
			eslDevicesObject.itemBarCode = valueEslDevicesEslDeviceInfo["ItemBarCode"].asString();
		if(!valueEslDevicesEslDeviceInfo["Vendor"].isNull())
			eslDevicesObject.vendor = valueEslDevicesEslDeviceInfo["Vendor"].asString();
		if(!valueEslDevicesEslDeviceInfo["ConnectAp"].isNull())
			eslDevicesObject.connectAp = valueEslDevicesEslDeviceInfo["ConnectAp"].asString();
		if(!valueEslDevicesEslDeviceInfo["Type"].isNull())
			eslDevicesObject.type = valueEslDevicesEslDeviceInfo["Type"].asString();
		if(!valueEslDevicesEslDeviceInfo["Model"].isNull())
			eslDevicesObject.model = valueEslDevicesEslDeviceInfo["Model"].asString();
		if(!valueEslDevicesEslDeviceInfo["BeBind"].isNull())
			eslDevicesObject.beBind = valueEslDevicesEslDeviceInfo["BeBind"].asString();
		if(!valueEslDevicesEslDeviceInfo["ScreenWidth"].isNull())
			eslDevicesObject.screenWidth = valueEslDevicesEslDeviceInfo["ScreenWidth"].asString();
		if(!valueEslDevicesEslDeviceInfo["ScreenHeight"].isNull())
			eslDevicesObject.screenHeight = valueEslDevicesEslDeviceInfo["ScreenHeight"].asString();
		if(!valueEslDevicesEslDeviceInfo["LastCommunicateTime"].isNull())
			eslDevicesObject.lastCommunicateTime = valueEslDevicesEslDeviceInfo["LastCommunicateTime"].asString();
		if(!valueEslDevicesEslDeviceInfo["BatteryLevel"].isNull())
			eslDevicesObject.batteryLevel = std::stoi(valueEslDevicesEslDeviceInfo["BatteryLevel"].asString());
		if(!valueEslDevicesEslDeviceInfo["EslStatus"].isNull())
			eslDevicesObject.eslStatus = valueEslDevicesEslDeviceInfo["EslStatus"].asString();
		if(!valueEslDevicesEslDeviceInfo["ShelfCode"].isNull())
			eslDevicesObject.shelfCode = valueEslDevicesEslDeviceInfo["ShelfCode"].asString();
		if(!valueEslDevicesEslDeviceInfo["PositionCode"].isNull())
			eslDevicesObject.positionCode = valueEslDevicesEslDeviceInfo["PositionCode"].asString();
		if(!valueEslDevicesEslDeviceInfo["ItemId"].isNull())
			eslDevicesObject.itemId = std::stol(valueEslDevicesEslDeviceInfo["ItemId"].asString());
		if(!valueEslDevicesEslDeviceInfo["ItemTitle"].isNull())
			eslDevicesObject.itemTitle = valueEslDevicesEslDeviceInfo["ItemTitle"].asString();
		if(!valueEslDevicesEslDeviceInfo["ItemActionPrice"].isNull())
			eslDevicesObject.itemActionPrice = std::stoi(valueEslDevicesEslDeviceInfo["ItemActionPrice"].asString());
		if(!valueEslDevicesEslDeviceInfo["ItemPriceUnit"].isNull())
			eslDevicesObject.itemPriceUnit = valueEslDevicesEslDeviceInfo["ItemPriceUnit"].asString();
		eslDevices_.push_back(eslDevicesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

std::string DescribeEslDevicesResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeEslDevicesResult::getSuccess()const
{
	return success_;
}

