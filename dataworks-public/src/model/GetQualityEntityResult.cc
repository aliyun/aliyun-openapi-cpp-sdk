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

#include <alibabacloud/dataworks-public/model/GetQualityEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetQualityEntityResult::GetQualityEntityResult() :
	ServiceResult()
{}

GetQualityEntityResult::GetQualityEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQualityEntityResult::~GetQualityEntityResult()
{}

void GetQualityEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EntityDto"];
	for (auto valueDataEntityDto : allDataNode)
	{
		EntityDto dataObject;
		if(!valueDataEntityDto["RelativeNode"].isNull())
			dataObject.relativeNode = valueDataEntityDto["RelativeNode"].asString();
		if(!valueDataEntityDto["OnDutyAccountName"].isNull())
			dataObject.onDutyAccountName = valueDataEntityDto["OnDutyAccountName"].asString();
		if(!valueDataEntityDto["Task"].isNull())
			dataObject.task = std::stoi(valueDataEntityDto["Task"].asString());
		if(!valueDataEntityDto["TableName"].isNull())
			dataObject.tableName = valueDataEntityDto["TableName"].asString();
		if(!valueDataEntityDto["Followers"].isNull())
			dataObject.followers = valueDataEntityDto["Followers"].asString();
		if(!valueDataEntityDto["OnDuty"].isNull())
			dataObject.onDuty = valueDataEntityDto["OnDuty"].asString();
		if(!valueDataEntityDto["MatchExpression"].isNull())
			dataObject.matchExpression = valueDataEntityDto["MatchExpression"].asString();
		if(!valueDataEntityDto["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataEntityDto["CreateTime"].asString());
		if(!valueDataEntityDto["ProjectName"].isNull())
			dataObject.projectName = valueDataEntityDto["ProjectName"].asString();
		if(!valueDataEntityDto["HasRelativeNode"].isNull())
			dataObject.hasRelativeNode = valueDataEntityDto["HasRelativeNode"].asString() == "true";
		if(!valueDataEntityDto["EnvType"].isNull())
			dataObject.envType = valueDataEntityDto["EnvType"].asString();
		if(!valueDataEntityDto["EntityLevel"].isNull())
			dataObject.entityLevel = std::stoi(valueDataEntityDto["EntityLevel"].asString());
		if(!valueDataEntityDto["ModifyUser"].isNull())
			dataObject.modifyUser = valueDataEntityDto["ModifyUser"].asString();
		if(!valueDataEntityDto["Sql"].isNull())
			dataObject.sql = std::stoi(valueDataEntityDto["Sql"].asString());
		if(!valueDataEntityDto["Id"].isNull())
			dataObject.id = std::stol(valueDataEntityDto["Id"].asString());
		if(!valueDataEntityDto["ModifyTime"].isNull())
			dataObject.modifyTime = std::stol(valueDataEntityDto["ModifyTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetQualityEntityResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetQualityEntityResult::EntityDto> GetQualityEntityResult::getData()const
{
	return data_;
}

std::string GetQualityEntityResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetQualityEntityResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetQualityEntityResult::getSuccess()const
{
	return success_;
}

