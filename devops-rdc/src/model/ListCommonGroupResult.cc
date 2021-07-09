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

#include <alibabacloud/devops-rdc/model/ListCommonGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListCommonGroupResult::ListCommonGroupResult() :
	ServiceResult()
{}

ListCommonGroupResult::ListCommonGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCommonGroupResult::~ListCommonGroupResult()
{}

void ListCommonGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["CommonGroup"];
	for (auto valueObjectCommonGroup : allObjectNode)
	{
		CommonGroup objectObject;
		if(!valueObjectCommonGroup["ResourceCount"].isNull())
			objectObject.resourceCount = std::stoi(valueObjectCommonGroup["ResourceCount"].asString());
		if(!valueObjectCommonGroup["SmartGroupId"].isNull())
			objectObject.smartGroupId = valueObjectCommonGroup["SmartGroupId"].asString();
		if(!valueObjectCommonGroup["Pos"].isNull())
			objectObject.pos = std::stoi(valueObjectCommonGroup["Pos"].asString());
		if(!valueObjectCommonGroup["ProjectId"].isNull())
			objectObject.projectId = valueObjectCommonGroup["ProjectId"].asString();
		if(!valueObjectCommonGroup["IsRoot"].isNull())
			objectObject.isRoot = valueObjectCommonGroup["IsRoot"].asString() == "true";
		if(!valueObjectCommonGroup["Pinyin"].isNull())
			objectObject.pinyin = valueObjectCommonGroup["Pinyin"].asString();
		if(!valueObjectCommonGroup["CreatorId"].isNull())
			objectObject.creatorId = valueObjectCommonGroup["CreatorId"].asString();
		if(!valueObjectCommonGroup["Name"].isNull())
			objectObject.name = valueObjectCommonGroup["Name"].asString();
		if(!valueObjectCommonGroup["id"].isNull())
			objectObject.id = valueObjectCommonGroup["id"].asString();
		object_.push_back(objectObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListCommonGroupResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListCommonGroupResult::CommonGroup> ListCommonGroupResult::getObject()const
{
	return object_;
}

std::string ListCommonGroupResult::getErrorCode()const
{
	return errorCode_;
}

bool ListCommonGroupResult::getSuccessful()const
{
	return successful_;
}

