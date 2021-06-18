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

#include <alibabacloud/cloudesl/model/DescribePlanogramEslDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribePlanogramEslDevicesResult::DescribePlanogramEslDevicesResult() :
	ServiceResult()
{}

DescribePlanogramEslDevicesResult::DescribePlanogramEslDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlanogramEslDevicesResult::~DescribePlanogramEslDevicesResult()
{}

void DescribePlanogramEslDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEslDeviceLayerInfosNode = value["EslDeviceLayerInfos"]["EslDeviceLayerInfo"];
	for (auto valueEslDeviceLayerInfosEslDeviceLayerInfo : allEslDeviceLayerInfosNode)
	{
		EslDeviceLayerInfo eslDeviceLayerInfosObject;
		if(!valueEslDeviceLayerInfosEslDeviceLayerInfo["Layer"].isNull())
			eslDeviceLayerInfosObject.layer = std::stoi(valueEslDeviceLayerInfosEslDeviceLayerInfo["Layer"].asString());
		auto allEslDevicePositionInfosNode = valueEslDeviceLayerInfosEslDeviceLayerInfo["EslDevicePositionInfos"]["EslDevicePositionInfo"];
		for (auto valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfo : allEslDevicePositionInfosNode)
		{
			EslDeviceLayerInfo::EslDevicePositionInfo eslDevicePositionInfosObject;
			if(!valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfo["Column"].isNull())
				eslDevicePositionInfosObject.column = valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfo["Column"].asString();
			auto allEslDevicePlanogramInfosNode = valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfo["EslDevicePlanogramInfos"]["EslDevicePlanogramInfo"];
			for (auto valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo : allEslDevicePlanogramInfosNode)
			{
				EslDeviceLayerInfo::EslDevicePositionInfo::EslDevicePlanogramInfo eslDevicePlanogramInfosObject;
				if(!valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["EslBarCode"].isNull())
					eslDevicePlanogramInfosObject.eslBarCode = valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["EslBarCode"].asString();
				if(!valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["EslModel"].isNull())
					eslDevicePlanogramInfosObject.eslModel = valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["EslModel"].asString();
				if(!valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["ItemBarCode"].isNull())
					eslDevicePlanogramInfosObject.itemBarCode = valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["ItemBarCode"].asString();
				if(!valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["ItemTitle"].isNull())
					eslDevicePlanogramInfosObject.itemTitle = valueEslDeviceLayerInfosEslDeviceLayerInfoEslDevicePositionInfosEslDevicePositionInfoEslDevicePlanogramInfosEslDevicePlanogramInfo["ItemTitle"].asString();
				eslDevicePositionInfosObject.eslDevicePlanogramInfos.push_back(eslDevicePlanogramInfosObject);
			}
			eslDeviceLayerInfosObject.eslDevicePositionInfos.push_back(eslDevicePositionInfosObject);
		}
		eslDeviceLayerInfos_.push_back(eslDeviceLayerInfosObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Shelf"].isNull())
		shelf_ = value["Shelf"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribePlanogramEslDevicesResult::getMessage()const
{
	return message_;
}

std::string DescribePlanogramEslDevicesResult::getStoreId()const
{
	return storeId_;
}

std::string DescribePlanogramEslDevicesResult::getShelf()const
{
	return shelf_;
}

std::string DescribePlanogramEslDevicesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribePlanogramEslDevicesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribePlanogramEslDevicesResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<DescribePlanogramEslDevicesResult::EslDeviceLayerInfo> DescribePlanogramEslDevicesResult::getEslDeviceLayerInfos()const
{
	return eslDeviceLayerInfos_;
}

std::string DescribePlanogramEslDevicesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribePlanogramEslDevicesResult::getCode()const
{
	return code_;
}

bool DescribePlanogramEslDevicesResult::getSuccess()const
{
	return success_;
}

