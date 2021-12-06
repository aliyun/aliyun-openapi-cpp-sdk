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

#include <alibabacloud/dataworks-public/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allInstancesNode = dataNode["Instances"]["Instance"];
	for (auto dataNodeInstancesInstance : allInstancesNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeInstancesInstance["Status"].isNull())
			instanceObject.status = dataNodeInstancesInstance["Status"].asString();
		if(!dataNodeInstancesInstance["CycTime"].isNull())
			instanceObject.cycTime = std::stol(dataNodeInstancesInstance["CycTime"].asString());
		if(!dataNodeInstancesInstance["BeginRunningTime"].isNull())
			instanceObject.beginRunningTime = std::stol(dataNodeInstancesInstance["BeginRunningTime"].asString());
		if(!dataNodeInstancesInstance["FinishTime"].isNull())
			instanceObject.finishTime = std::stol(dataNodeInstancesInstance["FinishTime"].asString());
		if(!dataNodeInstancesInstance["ErrorMessage"].isNull())
			instanceObject.errorMessage = dataNodeInstancesInstance["ErrorMessage"].asString();
		if(!dataNodeInstancesInstance["CreateTime"].isNull())
			instanceObject.createTime = std::stol(dataNodeInstancesInstance["CreateTime"].asString());
		if(!dataNodeInstancesInstance["DagId"].isNull())
			instanceObject.dagId = std::stol(dataNodeInstancesInstance["DagId"].asString());
		if(!dataNodeInstancesInstance["Priority"].isNull())
			instanceObject.priority = std::stoi(dataNodeInstancesInstance["Priority"].asString());
		if(!dataNodeInstancesInstance["TaskType"].isNull())
			instanceObject.taskType = dataNodeInstancesInstance["TaskType"].asString();
		if(!dataNodeInstancesInstance["ParamValues"].isNull())
			instanceObject.paramValues = dataNodeInstancesInstance["ParamValues"].asString();
		if(!dataNodeInstancesInstance["Connection"].isNull())
			instanceObject.connection = dataNodeInstancesInstance["Connection"].asString();
		if(!dataNodeInstancesInstance["BaselineId"].isNull())
			instanceObject.baselineId = std::stol(dataNodeInstancesInstance["BaselineId"].asString());
		if(!dataNodeInstancesInstance["DqcType"].isNull())
			instanceObject.dqcType = std::stoi(dataNodeInstancesInstance["DqcType"].asString());
		if(!dataNodeInstancesInstance["DagType"].isNull())
			instanceObject.dagType = dataNodeInstancesInstance["DagType"].asString();
		if(!dataNodeInstancesInstance["BusinessId"].isNull())
			instanceObject.businessId = std::stol(dataNodeInstancesInstance["BusinessId"].asString());
		if(!dataNodeInstancesInstance["TaskRerunTime"].isNull())
			instanceObject.taskRerunTime = std::stoi(dataNodeInstancesInstance["TaskRerunTime"].asString());
		if(!dataNodeInstancesInstance["ModifyTime"].isNull())
			instanceObject.modifyTime = std::stol(dataNodeInstancesInstance["ModifyTime"].asString());
		if(!dataNodeInstancesInstance["Repeatability"].isNull())
			instanceObject.repeatability = dataNodeInstancesInstance["Repeatability"].asString() == "true";
		if(!dataNodeInstancesInstance["RepeatInterval"].isNull())
			instanceObject.repeatInterval = std::stol(dataNodeInstancesInstance["RepeatInterval"].asString());
		if(!dataNodeInstancesInstance["InstanceId"].isNull())
			instanceObject.instanceId = std::stol(dataNodeInstancesInstance["InstanceId"].asString());
		if(!dataNodeInstancesInstance["BeginWaitResTime"].isNull())
			instanceObject.beginWaitResTime = std::stol(dataNodeInstancesInstance["BeginWaitResTime"].asString());
		if(!dataNodeInstancesInstance["RelatedFlowId"].isNull())
			instanceObject.relatedFlowId = std::stol(dataNodeInstancesInstance["RelatedFlowId"].asString());
		if(!dataNodeInstancesInstance["Bizdate"].isNull())
			instanceObject.bizdate = std::stol(dataNodeInstancesInstance["Bizdate"].asString());
		if(!dataNodeInstancesInstance["NodeName"].isNull())
			instanceObject.nodeName = dataNodeInstancesInstance["NodeName"].asString();
		if(!dataNodeInstancesInstance["BeginWaitTimeTime"].isNull())
			instanceObject.beginWaitTimeTime = std::stol(dataNodeInstancesInstance["BeginWaitTimeTime"].asString());
		if(!dataNodeInstancesInstance["DqcDescription"].isNull())
			instanceObject.dqcDescription = dataNodeInstancesInstance["DqcDescription"].asString();
		if(!dataNodeInstancesInstance["NodeId"].isNull())
			instanceObject.nodeId = std::stol(dataNodeInstancesInstance["NodeId"].asString());
		if(!dataNodeInstancesInstance["CreateUser"].isNull())
			instanceObject.createUser = dataNodeInstancesInstance["CreateUser"].asString();
		data_.instances.push_back(instanceObject);
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

int ListInstancesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListInstancesResult::Data ListInstancesResult::getData()const
{
	return data_;
}

std::string ListInstancesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListInstancesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListInstancesResult::getSuccess()const
{
	return success_;
}

