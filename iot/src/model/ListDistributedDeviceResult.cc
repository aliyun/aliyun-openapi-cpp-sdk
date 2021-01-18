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

#include <alibabacloud/iot/model/ListDistributedDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListDistributedDeviceResult::ListDistributedDeviceResult() :
	ServiceResult()
{}

ListDistributedDeviceResult::ListDistributedDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDistributedDeviceResult::~ListDistributedDeviceResult()
{}

void ListDistributedDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allInfoNode = dataNode["Info"]["items"];
	for (auto dataNodeInfoitems : allInfoNode)
	{
		Data::Items itemsObject;
		if(!dataNodeInfoitems["SourceUid"].isNull())
			itemsObject.sourceUid = dataNodeInfoitems["SourceUid"].asString();
		if(!dataNodeInfoitems["TargetUid"].isNull())
			itemsObject.targetUid = dataNodeInfoitems["TargetUid"].asString();
		if(!dataNodeInfoitems["ProductKey"].isNull())
			itemsObject.productKey = dataNodeInfoitems["ProductKey"].asString();
		if(!dataNodeInfoitems["DeviceName"].isNull())
			itemsObject.deviceName = dataNodeInfoitems["DeviceName"].asString();
		if(!dataNodeInfoitems["SourceInstanceId"].isNull())
			itemsObject.sourceInstanceId = dataNodeInfoitems["SourceInstanceId"].asString();
		if(!dataNodeInfoitems["TargetInstanceId"].isNull())
			itemsObject.targetInstanceId = dataNodeInfoitems["TargetInstanceId"].asString();
		if(!dataNodeInfoitems["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(dataNodeInfoitems["GmtCreate"].asString());
		if(!dataNodeInfoitems["TargetAliyunId"].isNull())
			itemsObject.targetAliyunId = dataNodeInfoitems["TargetAliyunId"].asString();
		if(!dataNodeInfoitems["SourceRegion"].isNull())
			itemsObject.sourceRegion = dataNodeInfoitems["SourceRegion"].asString();
		if(!dataNodeInfoitems["TargetRegion"].isNull())
			itemsObject.targetRegion = dataNodeInfoitems["TargetRegion"].asString();
		if(!dataNodeInfoitems["SourceInstanceName"].isNull())
			itemsObject.sourceInstanceName = dataNodeInfoitems["SourceInstanceName"].asString();
		if(!dataNodeInfoitems["TargetInstanceName"].isNull())
			itemsObject.targetInstanceName = dataNodeInfoitems["TargetInstanceName"].asString();
		if(!dataNodeInfoitems["GmtModified"].isNull())
			itemsObject.gmtModified = std::stol(dataNodeInfoitems["GmtModified"].asString());
		data_.info.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListDistributedDeviceResult::Data ListDistributedDeviceResult::getData()const
{
	return data_;
}

std::string ListDistributedDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListDistributedDeviceResult::getCode()const
{
	return code_;
}

bool ListDistributedDeviceResult::getSuccess()const
{
	return success_;
}

