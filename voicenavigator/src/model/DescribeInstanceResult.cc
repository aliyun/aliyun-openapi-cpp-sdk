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

#include <alibabacloud/voicenavigator/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicableOperations = value["ApplicableOperations"]["Operation"];
	for (const auto &item : allApplicableOperations)
		applicableOperations_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = std::stol(value["ModifyTime"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Concurrency"].isNull())
		concurrency_ = std::stol(value["Concurrency"].asString());
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();
	if(!value["NluServiceType"].isNull())
		nluServiceType_ = value["NluServiceType"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();

}

std::string DescribeInstanceResult::getStatus()const
{
	return status_;
}

long DescribeInstanceResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeInstanceResult::getDescription()const
{
	return description_;
}

std::string DescribeInstanceResult::getInstanceId()const
{
	return instanceId_;
}

long DescribeInstanceResult::getConcurrency()const
{
	return concurrency_;
}

std::vector<std::string> DescribeInstanceResult::getApplicableOperations()const
{
	return applicableOperations_;
}

std::string DescribeInstanceResult::getModifyUserName()const
{
	return modifyUserName_;
}

std::string DescribeInstanceResult::getNluServiceType()const
{
	return nluServiceType_;
}

std::string DescribeInstanceResult::getName()const
{
	return name_;
}

