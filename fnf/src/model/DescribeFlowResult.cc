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

#include <alibabacloud/fnf/model/DescribeFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

DescribeFlowResult::DescribeFlowResult() :
	ServiceResult()
{}

DescribeFlowResult::DescribeFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowResult::~DescribeFlowResult()
{}

void DescribeFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Definition"].isNull())
		definition_ = value["Definition"].asString();
	if(!value["RoleArn"].isNull())
		roleArn_ = value["RoleArn"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ExternalStorageLocation"].isNull())
		externalStorageLocation_ = value["ExternalStorageLocation"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["LastModifiedTime"].isNull())
		lastModifiedTime_ = value["LastModifiedTime"].asString();
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["ExecutionMode"].isNull())
		executionMode_ = value["ExecutionMode"].asString();

}

std::string DescribeFlowResult::getType()const
{
	return type_;
}

std::string DescribeFlowResult::getDescription()const
{
	return description_;
}

std::string DescribeFlowResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeFlowResult::getDefinition()const
{
	return definition_;
}

std::string DescribeFlowResult::getLastModifiedTime()const
{
	return lastModifiedTime_;
}

std::string DescribeFlowResult::getExecutionMode()const
{
	return executionMode_;
}

std::string DescribeFlowResult::getId()const
{
	return id_;
}

std::string DescribeFlowResult::getExternalStorageLocation()const
{
	return externalStorageLocation_;
}

std::string DescribeFlowResult::getRoleArn()const
{
	return roleArn_;
}

std::string DescribeFlowResult::getName()const
{
	return name_;
}

