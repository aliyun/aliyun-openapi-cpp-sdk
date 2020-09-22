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

#include <alibabacloud/vs/model/DescribeDirectoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeDirectoryResult::DescribeDirectoryResult() :
	ServiceResult()
{}

DescribeDirectoryResult::DescribeDirectoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDirectoryResult::~DescribeDirectoryResult()
{}

void DescribeDirectoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["ParentId"].isNull())
		parentId_ = value["ParentId"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();

}

std::string DescribeDirectoryResult::getParentId()const
{
	return parentId_;
}

std::string DescribeDirectoryResult::getDescription()const
{
	return description_;
}

std::string DescribeDirectoryResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeDirectoryResult::getId()const
{
	return id_;
}

std::string DescribeDirectoryResult::getName()const
{
	return name_;
}

std::string DescribeDirectoryResult::getGroupId()const
{
	return groupId_;
}

