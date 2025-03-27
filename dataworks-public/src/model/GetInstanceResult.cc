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

#include <alibabacloud/dataworks-public/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["CycTime"].isNull())
		data_.cycTime = std::stol(dataNode["CycTime"].asString());
	if(!dataNode["BeginRunningTime"].isNull())
		data_.beginRunningTime = std::stol(dataNode["BeginRunningTime"].asString());
	if(!dataNode["FinishTime"].isNull())
		data_.finishTime = std::stol(dataNode["FinishTime"].asString());
	if(!dataNode["ErrorMessage"].isNull())
		data_.errorMessage = dataNode["ErrorMessage"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["DagId"].isNull())
		data_.dagId = std::stol(dataNode["DagId"].asString());
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["TaskType"].isNull())
		data_.taskType = dataNode["TaskType"].asString();
	if(!dataNode["ParamValues"].isNull())
		data_.paramValues = dataNode["ParamValues"].asString();
	if(!dataNode["Connection"].isNull())
		data_.connection = dataNode["Connection"].asString();
	if(!dataNode["BaselineId"].isNull())
		data_.baselineId = std::stol(dataNode["BaselineId"].asString());
	if(!dataNode["DqcType"].isNull())
		data_.dqcType = std::stoi(dataNode["DqcType"].asString());
	if(!dataNode["DagType"].isNull())
		data_.dagType = dataNode["DagType"].asString();
	if(!dataNode["BusinessId"].isNull())
		data_.businessId = std::stol(dataNode["BusinessId"].asString());
	if(!dataNode["TaskRerunTime"].isNull())
		data_.taskRerunTime = std::stoi(dataNode["TaskRerunTime"].asString());
	if(!dataNode["PeriodNumber"].isNull())
		data_.periodNumber = std::stoi(dataNode["PeriodNumber"].asString());
	if(!dataNode["ModifyTime"].isNull())
		data_.modifyTime = std::stol(dataNode["ModifyTime"].asString());
	if(!dataNode["Repeatability"].isNull())
		data_.repeatability = dataNode["Repeatability"].asString() == "true";
	if(!dataNode["RepeatInterval"].isNull())
		data_.repeatInterval = std::stol(dataNode["RepeatInterval"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = std::stol(dataNode["InstanceId"].asString());
	if(!dataNode["BeginWaitResTime"].isNull())
		data_.beginWaitResTime = std::stol(dataNode["BeginWaitResTime"].asString());
	if(!dataNode["RelatedFlowId"].isNull())
		data_.relatedFlowId = std::stol(dataNode["RelatedFlowId"].asString());
	if(!dataNode["Bizdate"].isNull())
		data_.bizdate = std::stol(dataNode["Bizdate"].asString());
	if(!dataNode["NodeName"].isNull())
		data_.nodeName = dataNode["NodeName"].asString();
	if(!dataNode["BeginWaitTimeTime"].isNull())
		data_.beginWaitTimeTime = std::stol(dataNode["BeginWaitTimeTime"].asString());
	if(!dataNode["DqcDescription"].isNull())
		data_.dqcDescription = dataNode["DqcDescription"].asString();
	if(!dataNode["NodeId"].isNull())
		data_.nodeId = std::stol(dataNode["NodeId"].asString());
	if(!dataNode["CreateUser"].isNull())
		data_.createUser = dataNode["CreateUser"].asString();
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetInstanceResult::Data GetInstanceResult::getData()const
{
	return data_;
}

std::string GetInstanceResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetInstanceResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetInstanceResult::getSuccess()const
{
	return success_;
}

