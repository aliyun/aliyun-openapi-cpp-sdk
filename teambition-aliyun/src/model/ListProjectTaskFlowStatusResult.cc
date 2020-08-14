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

#include <alibabacloud/teambition-aliyun/model/ListProjectTaskFlowStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

ListProjectTaskFlowStatusResult::ListProjectTaskFlowStatusResult() :
	ServiceResult()
{}

ListProjectTaskFlowStatusResult::ListProjectTaskFlowStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectTaskFlowStatusResult::~ListProjectTaskFlowStatusResult()
{}

void ListProjectTaskFlowStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["taskflowStatus"];
	for (auto valueObjecttaskflowStatus : allObjectNode)
	{
		TaskflowStatus objectObject;
		if(!valueObjecttaskflowStatus["IsDeleted"].isNull())
			objectObject.isDeleted = valueObjecttaskflowStatus["IsDeleted"].asString() == "true";
		if(!valueObjecttaskflowStatus["RejectStatusIds"].isNull())
			objectObject.rejectStatusIds = valueObjecttaskflowStatus["RejectStatusIds"].asString();
		if(!valueObjecttaskflowStatus["Pos"].isNull())
			objectObject.pos = std::stoi(valueObjecttaskflowStatus["Pos"].asString());
		if(!valueObjecttaskflowStatus["Kind"].isNull())
			objectObject.kind = valueObjecttaskflowStatus["Kind"].asString();
		if(!valueObjecttaskflowStatus["Created"].isNull())
			objectObject.created = valueObjecttaskflowStatus["Created"].asString();
		if(!valueObjecttaskflowStatus["TaskflowId"].isNull())
			objectObject.taskflowId = valueObjecttaskflowStatus["TaskflowId"].asString();
		if(!valueObjecttaskflowStatus["Name"].isNull())
			objectObject.name = valueObjecttaskflowStatus["Name"].asString();
		if(!valueObjecttaskflowStatus["CreatorId"].isNull())
			objectObject.creatorId = valueObjecttaskflowStatus["CreatorId"].asString();
		if(!valueObjecttaskflowStatus["Id"].isNull())
			objectObject.id = valueObjecttaskflowStatus["Id"].asString();
		if(!valueObjecttaskflowStatus["Updated"].isNull())
			objectObject.updated = valueObjecttaskflowStatus["Updated"].asString();
		object_.push_back(objectObject);
	}
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string ListProjectTaskFlowStatusResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListProjectTaskFlowStatusResult::TaskflowStatus> ListProjectTaskFlowStatusResult::getObject()const
{
	return object_;
}

std::string ListProjectTaskFlowStatusResult::getErrorCode()const
{
	return errorCode_;
}

bool ListProjectTaskFlowStatusResult::getSuccessful()const
{
	return successful_;
}

