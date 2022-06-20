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

#include <alibabacloud/iot/model/QueryImportedDeviceByApplyIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryImportedDeviceByApplyIdResult::QueryImportedDeviceByApplyIdResult() :
	ServiceResult()
{}

QueryImportedDeviceByApplyIdResult::QueryImportedDeviceByApplyIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryImportedDeviceByApplyIdResult::~QueryImportedDeviceByApplyIdResult()
{}

void QueryImportedDeviceByApplyIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeviceListNode = value["DeviceList"]["device"];
	for (auto valueDeviceListdevice : allDeviceListNode)
	{
		Device deviceListObject;
		if(!valueDeviceListdevice["ProductKey"].isNull())
			deviceListObject.productKey = valueDeviceListdevice["ProductKey"].asString();
		if(!valueDeviceListdevice["DeviceName"].isNull())
			deviceListObject.deviceName = valueDeviceListdevice["DeviceName"].asString();
		if(!valueDeviceListdevice["DeviceSecret"].isNull())
			deviceListObject.deviceSecret = valueDeviceListdevice["DeviceSecret"].asString();
		if(!valueDeviceListdevice["Sn"].isNull())
			deviceListObject.sn = valueDeviceListdevice["Sn"].asString();
		deviceList_.push_back(deviceListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["ProductKey"].isNull())
		productKey_ = value["ProductKey"].asString();

}

int QueryImportedDeviceByApplyIdResult::getPageSize()const
{
	return pageSize_;
}

int QueryImportedDeviceByApplyIdResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<QueryImportedDeviceByApplyIdResult::Device> QueryImportedDeviceByApplyIdResult::getDeviceList()const
{
	return deviceList_;
}

int QueryImportedDeviceByApplyIdResult::getPageNo()const
{
	return pageNo_;
}

std::string QueryImportedDeviceByApplyIdResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryImportedDeviceByApplyIdResult::getCode()const
{
	return code_;
}

bool QueryImportedDeviceByApplyIdResult::getSuccess()const
{
	return success_;
}

std::string QueryImportedDeviceByApplyIdResult::getProductKey()const
{
	return productKey_;
}

