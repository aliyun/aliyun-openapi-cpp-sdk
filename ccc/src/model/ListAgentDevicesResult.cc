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

#include <alibabacloud/ccc/model/ListAgentDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentDevicesResult::ListAgentDevicesResult() :
	ServiceResult()
{}

ListAgentDevicesResult::ListAgentDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentDevicesResult::~ListAgentDevicesResult()
{}

void ListAgentDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAgentDeviceList = value["AgentDeviceList"]["AgentDevice"];
	for (auto value : allAgentDeviceList)
	{
		AgentDevice agentDeviceListObject;
		if(!value["InstanceId"].isNull())
			agentDeviceListObject.instanceId = value["InstanceId"].asString();
		if(!value["RamId"].isNull())
			agentDeviceListObject.ramId = std::stol(value["RamId"].asString());
		if(!value["LoginTime"].isNull())
			agentDeviceListObject.loginTime = std::stol(value["LoginTime"].asString());
		if(!value["ClientIp"].isNull())
			agentDeviceListObject.clientIp = value["ClientIp"].asString();
		if(!value["ClientPort"].isNull())
			agentDeviceListObject.clientPort = value["ClientPort"].asString();
		if(!value["BrowserVersion"].isNull())
			agentDeviceListObject.browserVersion = value["BrowserVersion"].asString();
		if(!value["IsLogin"].isNull())
			agentDeviceListObject.isLogin = std::stoi(value["IsLogin"].asString());
		if(!value["Remark"].isNull())
			agentDeviceListObject.remark = value["Remark"].asString();
		agentDeviceList_.push_back(agentDeviceListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListAgentDevicesResult::getMessage()const
{
	return message_;
}

int ListAgentDevicesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListAgentDevicesResult::getCode()const
{
	return code_;
}

std::vector<ListAgentDevicesResult::AgentDevice> ListAgentDevicesResult::getAgentDeviceList()const
{
	return agentDeviceList_;
}

bool ListAgentDevicesResult::getSuccess()const
{
	return success_;
}

