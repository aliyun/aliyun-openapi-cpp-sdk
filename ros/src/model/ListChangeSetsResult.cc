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

#include <alibabacloud/ros/model/ListChangeSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

ListChangeSetsResult::ListChangeSetsResult() :
	ServiceResult()
{}

ListChangeSetsResult::ListChangeSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListChangeSetsResult::~ListChangeSetsResult()
{}

void ListChangeSetsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allChangeSets = value["ChangeSets"]["ChangeSet"];
	for (auto value : allChangeSets)
	{
		ChangeSet changeSetsObject;
		if(!value["ChangeSetId"].isNull())
			changeSetsObject.changeSetId = value["ChangeSetId"].asString();
		if(!value["ChangeSetName"].isNull())
			changeSetsObject.changeSetName = value["ChangeSetName"].asString();
		if(!value["ChangeSetType"].isNull())
			changeSetsObject.changeSetType = value["ChangeSetType"].asString();
		if(!value["CreateTime"].isNull())
			changeSetsObject.createTime = value["CreateTime"].asString();
		if(!value["Description"].isNull())
			changeSetsObject.description = value["Description"].asString();
		if(!value["ExecutionStatus"].isNull())
			changeSetsObject.executionStatus = value["ExecutionStatus"].asString();
		if(!value["RegionId"].isNull())
			changeSetsObject.regionId = value["RegionId"].asString();
		if(!value["StackId"].isNull())
			changeSetsObject.stackId = value["StackId"].asString();
		if(!value["StackName"].isNull())
			changeSetsObject.stackName = value["StackName"].asString();
		if(!value["Status"].isNull())
			changeSetsObject.status = value["Status"].asString();
		changeSets_.push_back(changeSetsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListChangeSetsResult::getTotalCount()const
{
	return totalCount_;
}

int ListChangeSetsResult::getPageSize()const
{
	return pageSize_;
}

int ListChangeSetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListChangeSetsResult::ChangeSet> ListChangeSetsResult::getChangeSets()const
{
	return changeSets_;
}

