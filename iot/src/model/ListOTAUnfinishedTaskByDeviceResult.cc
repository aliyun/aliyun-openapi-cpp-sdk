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

#include <alibabacloud/iot/model/ListOTAUnfinishedTaskByDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListOTAUnfinishedTaskByDeviceResult::ListOTAUnfinishedTaskByDeviceResult() :
	ServiceResult()
{}

ListOTAUnfinishedTaskByDeviceResult::ListOTAUnfinishedTaskByDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOTAUnfinishedTaskByDeviceResult::~ListOTAUnfinishedTaskByDeviceResult()
{}

void ListOTAUnfinishedTaskByDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SimpleOTATaskInfo"];
	for (auto valueDataSimpleOTATaskInfo : allDataNode)
	{
		SimpleOTATaskInfo dataObject;
		if(!valueDataSimpleOTATaskInfo["TaskId"].isNull())
			dataObject.taskId = valueDataSimpleOTATaskInfo["TaskId"].asString();
		if(!valueDataSimpleOTATaskInfo["UtcModified"].isNull())
			dataObject.utcModified = valueDataSimpleOTATaskInfo["UtcModified"].asString();
		if(!valueDataSimpleOTATaskInfo["ProductKey"].isNull())
			dataObject.productKey = valueDataSimpleOTATaskInfo["ProductKey"].asString();
		if(!valueDataSimpleOTATaskInfo["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataSimpleOTATaskInfo["TaskStatus"].asString();
		if(!valueDataSimpleOTATaskInfo["JobId"].isNull())
			dataObject.jobId = valueDataSimpleOTATaskInfo["JobId"].asString();
		if(!valueDataSimpleOTATaskInfo["ProductName"].isNull())
			dataObject.productName = valueDataSimpleOTATaskInfo["ProductName"].asString();
		if(!valueDataSimpleOTATaskInfo["DeviceName"].isNull())
			dataObject.deviceName = valueDataSimpleOTATaskInfo["DeviceName"].asString();
		if(!valueDataSimpleOTATaskInfo["SrcVersion"].isNull())
			dataObject.srcVersion = valueDataSimpleOTATaskInfo["SrcVersion"].asString();
		if(!valueDataSimpleOTATaskInfo["DestVersion"].isNull())
			dataObject.destVersion = valueDataSimpleOTATaskInfo["DestVersion"].asString();
		if(!valueDataSimpleOTATaskInfo["IotId"].isNull())
			dataObject.iotId = valueDataSimpleOTATaskInfo["IotId"].asString();
		if(!valueDataSimpleOTATaskInfo["UtcCreate"].isNull())
			dataObject.utcCreate = valueDataSimpleOTATaskInfo["UtcCreate"].asString();
		if(!valueDataSimpleOTATaskInfo["ModuleName"].isNull())
			dataObject.moduleName = valueDataSimpleOTATaskInfo["ModuleName"].asString();
		if(!valueDataSimpleOTATaskInfo["FirmwareId"].isNull())
			dataObject.firmwareId = valueDataSimpleOTATaskInfo["FirmwareId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<ListOTAUnfinishedTaskByDeviceResult::SimpleOTATaskInfo> ListOTAUnfinishedTaskByDeviceResult::getData()const
{
	return data_;
}

std::string ListOTAUnfinishedTaskByDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListOTAUnfinishedTaskByDeviceResult::getCode()const
{
	return code_;
}

bool ListOTAUnfinishedTaskByDeviceResult::getSuccess()const
{
	return success_;
}

