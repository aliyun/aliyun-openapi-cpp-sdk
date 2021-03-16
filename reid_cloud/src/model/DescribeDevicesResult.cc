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

#include <alibabacloud/reid_cloud/model/DescribeDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

DescribeDevicesResult::DescribeDevicesResult() :
	ServiceResult()
{}

DescribeDevicesResult::DescribeDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDevicesResult::~DescribeDevicesResult()
{}

void DescribeDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["Device"];
	for (auto valueDevicesDevice : allDevicesNode)
	{
		Device devicesObject;
		if(!valueDevicesDevice["AgentStatus"].isNull())
			devicesObject.agentStatus = valueDevicesDevice["AgentStatus"].asString();
		if(!valueDevicesDevice["IpcStatus"].isNull())
			devicesObject.ipcStatus = valueDevicesDevice["IpcStatus"].asString();
		if(!valueDevicesDevice["AgentIp"].isNull())
			devicesObject.agentIp = valueDevicesDevice["AgentIp"].asString();
		if(!valueDevicesDevice["IpcIp"].isNull())
			devicesObject.ipcIp = valueDevicesDevice["IpcIp"].asString();
		if(!valueDevicesDevice["AgentReceiveTime"].isNull())
			devicesObject.agentReceiveTime = std::stol(valueDevicesDevice["AgentReceiveTime"].asString());
		if(!valueDevicesDevice["IpcId"].isNull())
			devicesObject.ipcId = std::stol(valueDevicesDevice["IpcId"].asString());
		if(!valueDevicesDevice["AgentMac"].isNull())
			devicesObject.agentMac = valueDevicesDevice["AgentMac"].asString();
		if(!valueDevicesDevice["IpcName"].isNull())
			devicesObject.ipcName = valueDevicesDevice["IpcName"].asString();
		if(!valueDevicesDevice["IpcReceiveTime"].isNull())
			devicesObject.ipcReceiveTime = std::stol(valueDevicesDevice["IpcReceiveTime"].asString());
		devices_.push_back(devicesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string DescribeDevicesResult::getMessage()const
{
	return message_;
}

std::string DescribeDevicesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDevicesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeDevicesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::vector<DescribeDevicesResult::Device> DescribeDevicesResult::getDevices()const
{
	return devices_;
}

std::string DescribeDevicesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeDevicesResult::getCode()const
{
	return code_;
}

bool DescribeDevicesResult::getSuccess()const
{
	return success_;
}

