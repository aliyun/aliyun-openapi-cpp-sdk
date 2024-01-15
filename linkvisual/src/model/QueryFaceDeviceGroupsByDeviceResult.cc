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

#include <alibabacloud/linkvisual/model/QueryFaceDeviceGroupsByDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceDeviceGroupsByDeviceResult::QueryFaceDeviceGroupsByDeviceResult() :
	ServiceResult()
{}

QueryFaceDeviceGroupsByDeviceResult::QueryFaceDeviceGroupsByDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceDeviceGroupsByDeviceResult::~QueryFaceDeviceGroupsByDeviceResult()
{}

void QueryFaceDeviceGroupsByDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allDeviceGroupListNode = dataNode["DeviceGroupList"]["deviceGroupListItem"];
	for (auto dataNodeDeviceGroupListdeviceGroupListItem : allDeviceGroupListNode)
	{
		Data::DeviceGroupListItem deviceGroupListItemObject;
		if(!dataNodeDeviceGroupListdeviceGroupListItem["DeviceGroupId"].isNull())
			deviceGroupListItemObject.deviceGroupId = dataNodeDeviceGroupListdeviceGroupListItem["DeviceGroupId"].asString();
		if(!dataNodeDeviceGroupListdeviceGroupListItem["ModifiedTime"].isNull())
			deviceGroupListItemObject.modifiedTime = dataNodeDeviceGroupListdeviceGroupListItem["ModifiedTime"].asString();
		if(!dataNodeDeviceGroupListdeviceGroupListItem["DeviceGroupName"].isNull())
			deviceGroupListItemObject.deviceGroupName = dataNodeDeviceGroupListdeviceGroupListItem["DeviceGroupName"].asString();
		data_.deviceGroupList.push_back(deviceGroupListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceDeviceGroupsByDeviceResult::Data QueryFaceDeviceGroupsByDeviceResult::getData()const
{
	return data_;
}

std::string QueryFaceDeviceGroupsByDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceDeviceGroupsByDeviceResult::getCode()const
{
	return code_;
}

bool QueryFaceDeviceGroupsByDeviceResult::getSuccess()const
{
	return success_;
}

