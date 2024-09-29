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

#include <alibabacloud/dataworks-public/model/GetNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetNodeResult::GetNodeResult() :
	ServiceResult()
{}

GetNodeResult::GetNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeResult::~GetNodeResult()
{}

void GetNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SchedulerType"].isNull())
		data_.schedulerType = dataNode["SchedulerType"].asString();
	if(!dataNode["RepeatInterval"].isNull())
		data_.repeatInterval = std::stol(dataNode["RepeatInterval"].asString());
	if(!dataNode["Repeatability"].isNull())
		data_.repeatability = dataNode["Repeatability"].asString();
	if(!dataNode["RepeatMode"].isNull())
		data_.repeatMode = std::stoi(dataNode["RepeatMode"].asString());
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["ProgramType"].isNull())
		data_.programType = dataNode["ProgramType"].asString();
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["OwnerId"].isNull())
		data_.ownerId = dataNode["OwnerId"].asString();
	if(!dataNode["Connection"].isNull())
		data_.connection = dataNode["Connection"].asString();
	if(!dataNode["ParamValues"].isNull())
		data_.paramValues = dataNode["ParamValues"].asString();
	if(!dataNode["RelatedFlowId"].isNull())
		data_.relatedFlowId = std::stol(dataNode["RelatedFlowId"].asString());
	if(!dataNode["DqcType"].isNull())
		data_.dqcType = std::stoi(dataNode["DqcType"].asString());
	if(!dataNode["BaselineId"].isNull())
		data_.baselineId = std::stol(dataNode["BaselineId"].asString());
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["NodeName"].isNull())
		data_.nodeName = dataNode["NodeName"].asString();
	if(!dataNode["ResGroupName"].isNull())
		data_.resGroupName = dataNode["ResGroupName"].asString();
	if(!dataNode["BusinessId"].isNull())
		data_.businessId = std::stol(dataNode["BusinessId"].asString());
	if(!dataNode["DqcDescription"].isNull())
		data_.dqcDescription = dataNode["DqcDescription"].asString();
	if(!dataNode["CronExpress"].isNull())
		data_.cronExpress = dataNode["CronExpress"].asString();
	if(!dataNode["NodeId"].isNull())
		data_.nodeId = std::stol(dataNode["NodeId"].asString());
	if(!dataNode["ResGroupIdentifier"].isNull())
		data_.resGroupIdentifier = dataNode["ResGroupIdentifier"].asString();
	if(!dataNode["FileType"].isNull())
		data_.fileType = std::stoi(dataNode["FileType"].asString());
	if(!dataNode["FileId"].isNull())
		data_.fileId = std::stol(dataNode["FileId"].asString());
	if(!dataNode["FileVersion"].isNull())
		data_.fileVersion = std::stoi(dataNode["FileVersion"].asString());
	if(!dataNode["DeployDate"].isNull())
		data_.deployDate = std::stol(dataNode["DeployDate"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ModifyTime"].isNull())
		data_.modifyTime = std::stol(dataNode["ModifyTime"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetNodeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetNodeResult::Data GetNodeResult::getData()const
{
	return data_;
}

std::string GetNodeResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetNodeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetNodeResult::getSuccess()const
{
	return success_;
}

