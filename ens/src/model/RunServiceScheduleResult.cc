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

#include <alibabacloud/ens/model/RunServiceScheduleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

RunServiceScheduleResult::RunServiceScheduleResult() :
	ServiceResult()
{}

RunServiceScheduleResult::RunServiceScheduleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RunServiceScheduleResult::~RunServiceScheduleResult()
{}

void RunServiceScheduleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommandResultsNode = value["CommandResults"]["CommandResult"];
	for (auto valueCommandResultsCommandResult : allCommandResultsNode)
	{
		CommandResult commandResultsObject;
		if(!valueCommandResultsCommandResult["Command"].isNull())
			commandResultsObject.command = valueCommandResultsCommandResult["Command"].asString();
		if(!valueCommandResultsCommandResult["ContainerName"].isNull())
			commandResultsObject.containerName = valueCommandResultsCommandResult["ContainerName"].asString();
		if(!valueCommandResultsCommandResult["ResultMsg"].isNull())
			commandResultsObject.resultMsg = valueCommandResultsCommandResult["ResultMsg"].asString();
		commandResults_.push_back(commandResultsObject);
	}
	if(!value["Index"].isNull())
		index_ = std::stoi(value["Index"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceIp"].isNull())
		instanceIp_ = value["InstanceIp"].asString();
	if(!value["InstancePort"].isNull())
		instancePort_ = std::stoi(value["InstancePort"].asString());
	if(!value["RequestRepeated"].isNull())
		requestRepeated_ = value["RequestRepeated"].asString();
	if(!value["TcpPorts"].isNull())
		tcpPorts_ = value["TcpPorts"].asString() == "true";

}

std::string RunServiceScheduleResult::getRequestRepeated()const
{
	return requestRepeated_;
}

bool RunServiceScheduleResult::getTcpPorts()const
{
	return tcpPorts_;
}

std::string RunServiceScheduleResult::getInstanceId()const
{
	return instanceId_;
}

int RunServiceScheduleResult::getInstancePort()const
{
	return instancePort_;
}

std::string RunServiceScheduleResult::getInstanceIp()const
{
	return instanceIp_;
}

int RunServiceScheduleResult::getIndex()const
{
	return index_;
}

std::vector<RunServiceScheduleResult::CommandResult> RunServiceScheduleResult::getCommandResults()const
{
	return commandResults_;
}

