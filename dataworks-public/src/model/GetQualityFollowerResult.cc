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

#include <alibabacloud/dataworks-public/model/GetQualityFollowerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetQualityFollowerResult::GetQualityFollowerResult() :
	ServiceResult()
{}

GetQualityFollowerResult::GetQualityFollowerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQualityFollowerResult::~GetQualityFollowerResult()
{}

void GetQualityFollowerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Follower"];
	for (auto valueDataFollower : allDataNode)
	{
		Follower dataObject;
		if(!valueDataFollower["FollowerAccountName"].isNull())
			dataObject.followerAccountName = valueDataFollower["FollowerAccountName"].asString();
		if(!valueDataFollower["TableName"].isNull())
			dataObject.tableName = valueDataFollower["TableName"].asString();
		if(!valueDataFollower["AlarmMode"].isNull())
			dataObject.alarmMode = std::stoi(valueDataFollower["AlarmMode"].asString());
		if(!valueDataFollower["EntityId"].isNull())
			dataObject.entityId = valueDataFollower["EntityId"].asString();
		if(!valueDataFollower["ProjectName"].isNull())
			dataObject.projectName = valueDataFollower["ProjectName"].asString();
		if(!valueDataFollower["Id"].isNull())
			dataObject.id = std::stol(valueDataFollower["Id"].asString());
		if(!valueDataFollower["Follower"].isNull())
			dataObject.follower = valueDataFollower["Follower"].asString();
		if(!valueDataFollower["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataFollower["CreateTime"].asString());
		if(!valueDataFollower["ModifyTime"].isNull())
			dataObject.modifyTime = std::stol(valueDataFollower["ModifyTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetQualityFollowerResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetQualityFollowerResult::Follower> GetQualityFollowerResult::getData()const
{
	return data_;
}

std::string GetQualityFollowerResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetQualityFollowerResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetQualityFollowerResult::getSuccess()const
{
	return success_;
}

