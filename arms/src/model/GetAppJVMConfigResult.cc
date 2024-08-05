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

#include <alibabacloud/arms/model/GetAppJVMConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetAppJVMConfigResult::GetAppJVMConfigResult() :
	ServiceResult()
{}

GetAppJVMConfigResult::GetAppJVMConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppJVMConfigResult::~GetAppJVMConfigResult()
{}

void GetAppJVMConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJvmInfoListNode = value["JvmInfoList"]["JvmInfoListItem"];
	for (auto valueJvmInfoListJvmInfoListItem : allJvmInfoListNode)
	{
		JvmInfoListItem jvmInfoListObject;
		if(!valueJvmInfoListJvmInfoListItem["Pid"].isNull())
			jvmInfoListObject.pid = valueJvmInfoListJvmInfoListItem["Pid"].asString();
		if(!valueJvmInfoListJvmInfoListItem["VmArgs"].isNull())
			jvmInfoListObject.vmArgs = valueJvmInfoListJvmInfoListItem["VmArgs"].asString();
		if(!valueJvmInfoListJvmInfoListItem["HostName"].isNull())
			jvmInfoListObject.hostName = valueJvmInfoListJvmInfoListItem["HostName"].asString();
		if(!valueJvmInfoListJvmInfoListItem["Ip"].isNull())
			jvmInfoListObject.ip = valueJvmInfoListJvmInfoListItem["Ip"].asString();
		if(!valueJvmInfoListJvmInfoListItem["AgentVersion"].isNull())
			jvmInfoListObject.agentVersion = valueJvmInfoListJvmInfoListItem["AgentVersion"].asString();
		if(!valueJvmInfoListJvmInfoListItem["ProcId"].isNull())
			jvmInfoListObject.procId = valueJvmInfoListJvmInfoListItem["ProcId"].asString();
		jvmInfoList_.push_back(jvmInfoListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAppJVMConfigResult::getMessage()const
{
	return message_;
}

std::vector<GetAppJVMConfigResult::JvmInfoListItem> GetAppJVMConfigResult::getJvmInfoList()const
{
	return jvmInfoList_;
}

int GetAppJVMConfigResult::getCode()const
{
	return code_;
}

bool GetAppJVMConfigResult::getSuccess()const
{
	return success_;
}

