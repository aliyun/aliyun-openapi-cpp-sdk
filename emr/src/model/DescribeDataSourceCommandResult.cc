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

#include <alibabacloud/emr/model/DescribeDataSourceCommandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeDataSourceCommandResult::DescribeDataSourceCommandResult() :
	ServiceResult()
{}

DescribeDataSourceCommandResult::DescribeDataSourceCommandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSourceCommandResult::~DescribeDataSourceCommandResult()
{}

void DescribeDataSourceCommandResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allHostList = value["HostList"]["Host"];
	for (auto value : allHostList)
	{
		Host hostListObject;
		if(!value["HostName"].isNull())
			hostListObject.hostName = value["HostName"].asString();
		if(!value["State"].isNull())
			hostListObject.state = value["State"].asString();
		if(!value["StartTime"].isNull())
			hostListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			hostListObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Message"].isNull())
			hostListObject.message = value["Message"].asString();
		if(!value["Data"].isNull())
			hostListObject.data = value["Data"].asString();
		hostList_.push_back(hostListObject);
	}
	if(!value["CommandId"].isNull())
		commandId_ = value["CommandId"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

long DescribeDataSourceCommandResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDataSourceCommandResult::getMessage()const
{
	return message_;
}

std::string DescribeDataSourceCommandResult::getState()const
{
	return state_;
}

long DescribeDataSourceCommandResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDataSourceCommandResult::Host> DescribeDataSourceCommandResult::getHostList()const
{
	return hostList_;
}

std::string DescribeDataSourceCommandResult::getData()const
{
	return data_;
}

std::string DescribeDataSourceCommandResult::getCommandId()const
{
	return commandId_;
}

std::string DescribeDataSourceCommandResult::getHostName()const
{
	return hostName_;
}

