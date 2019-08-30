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

#include <alibabacloud/ros/model/GetStackResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

GetStackResourceResult::GetStackResourceResult() :
	ServiceResult()
{}

GetStackResourceResult::GetStackResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStackResourceResult::~GetStackResourceResult()
{}

void GetStackResourceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allResourceAttributes = value["ResourceAttributes"]["ResourceAttribute"];
	for (const auto &item : allResourceAttributes)
		resourceAttributes_.push_back(item.asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["LogicalResourceId"].isNull())
		logicalResourceId_ = value["LogicalResourceId"].asString();
	if(!value["Metadata"].isNull())
		metadata_ = value["Metadata"].asString();
	if(!value["PhysicalResourceId"].isNull())
		physicalResourceId_ = value["PhysicalResourceId"].asString();
	if(!value["ResourceType"].isNull())
		resourceType_ = value["ResourceType"].asString();
	if(!value["StackId"].isNull())
		stackId_ = value["StackId"].asString();
	if(!value["StackName"].isNull())
		stackName_ = value["StackName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StatusReason"].isNull())
		statusReason_ = value["StatusReason"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();

}

std::string GetStackResourceResult::getStatus()const
{
	return status_;
}

std::string GetStackResourceResult::getLogicalResourceId()const
{
	return logicalResourceId_;
}

std::string GetStackResourceResult::getDescription()const
{
	return description_;
}

std::string GetStackResourceResult::getPhysicalResourceId()const
{
	return physicalResourceId_;
}

std::string GetStackResourceResult::getStatusReason()const
{
	return statusReason_;
}

std::string GetStackResourceResult::getCreateTime()const
{
	return createTime_;
}

std::string GetStackResourceResult::getMetadata()const
{
	return metadata_;
}

std::string GetStackResourceResult::getUpdateTime()const
{
	return updateTime_;
}

std::string GetStackResourceResult::getResourceType()const
{
	return resourceType_;
}

std::vector<std::string> GetStackResourceResult::getResourceAttributes()const
{
	return resourceAttributes_;
}

std::string GetStackResourceResult::getStackName()const
{
	return stackName_;
}

std::string GetStackResourceResult::getStackId()const
{
	return stackId_;
}

