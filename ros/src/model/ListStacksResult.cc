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

#include <alibabacloud/ros/model/ListStacksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

ListStacksResult::ListStacksResult() :
	ServiceResult()
{}

ListStacksResult::ListStacksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStacksResult::~ListStacksResult()
{}

void ListStacksResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStacks = value["Stacks"]["Stack"];
	for (auto value : allStacks)
	{
		Stack stacksObject;
		if(!value["CreateTime"].isNull())
			stacksObject.createTime = value["CreateTime"].asString();
		if(!value["DisableRollback"].isNull())
			stacksObject.disableRollback = value["DisableRollback"].asString() == "true";
		if(!value["RegionId"].isNull())
			stacksObject.regionId = value["RegionId"].asString();
		if(!value["StackId"].isNull())
			stacksObject.stackId = value["StackId"].asString();
		if(!value["StackName"].isNull())
			stacksObject.stackName = value["StackName"].asString();
		if(!value["Status"].isNull())
			stacksObject.status = value["Status"].asString();
		if(!value["StatusReason"].isNull())
			stacksObject.statusReason = value["StatusReason"].asString();
		if(!value["TimeoutInMinutes"].isNull())
			stacksObject.timeoutInMinutes = std::stoi(value["TimeoutInMinutes"].asString());
		if(!value["ParentStackId"].isNull())
			stacksObject.parentStackId = value["ParentStackId"].asString();
		if(!value["UpdateTime"].isNull())
			stacksObject.updateTime = value["UpdateTime"].asString();
		stacks_.push_back(stacksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListStacksResult::getTotalCount()const
{
	return totalCount_;
}

int ListStacksResult::getPageSize()const
{
	return pageSize_;
}

int ListStacksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListStacksResult::Stack> ListStacksResult::getStacks()const
{
	return stacks_;
}

