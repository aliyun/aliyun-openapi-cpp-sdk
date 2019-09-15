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

#include <alibabacloud/aegis/model/DescribeGroupStructResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeGroupStructResult::DescribeGroupStructResult() :
	ServiceResult()
{}

DescribeGroupStructResult::DescribeGroupStructResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupStructResult::~DescribeGroupStructResult()
{}

void DescribeGroupStructResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroups = value["Groups"]["Group"];
	for (const auto &item : allGroups)
		groups_.push_back(item.asString());
	if(!value["GroupFather"].isNull())
		groupFather_ = std::stoi(value["GroupFather"].asString());
	if(!value["GroupId"].isNull())
		groupId_ = std::stol(value["GroupId"].asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["GroupIndex"].isNull())
		groupIndex_ = std::stoi(value["GroupIndex"].asString());
	if(!value["GroupFlag"].isNull())
		groupFlag_ = std::stoi(value["GroupFlag"].asString());
	if(!value["GroupLevel"].isNull())
		groupLevel_ = std::stoi(value["GroupLevel"].asString());
	if(!value["MachineNum"].isNull())
		machineNum_ = std::stoi(value["MachineNum"].asString());

}

std::string DescribeGroupStructResult::getGroupName()const
{
	return groupName_;
}

int DescribeGroupStructResult::getMachineNum()const
{
	return machineNum_;
}

int DescribeGroupStructResult::getGroupLevel()const
{
	return groupLevel_;
}

std::vector<std::string> DescribeGroupStructResult::getGroups()const
{
	return groups_;
}

int DescribeGroupStructResult::getGroupIndex()const
{
	return groupIndex_;
}

int DescribeGroupStructResult::getGroupFather()const
{
	return groupFather_;
}

int DescribeGroupStructResult::getGroupFlag()const
{
	return groupFlag_;
}

long DescribeGroupStructResult::getGroupId()const
{
	return groupId_;
}

