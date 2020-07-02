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
	auto allInstancesNode = dataNode["Instances"]["InstancesItem"];
	for (auto dataNodeInstancesInstancesItem : allInstancesNode)
	{
		Data::InstancesItem instancesItemObject;
		if(!dataNodeInstancesInstancesItem["NodeId"].isNull())
			instancesItemObject.nodeId = std::stoi(dataNodeInstancesInstancesItem["NodeId"].asString());
		if(!dataNodeInstancesInstancesItem["InstanceId"].isNull())
			instancesItemObject.instanceId = std::stol(dataNodeInstancesInstancesItem["InstanceId"].asString());
		if(!dataNodeInstancesInstancesItem["DagId"].isNull())
			instancesItemObject.dagId = std::stoi(dataNodeInstancesInstancesItem["DagId"].asString());
		if(!dataNodeInstancesInstancesItem["DagType"].isNull())
			instancesItemObject.dagType = dataNodeInstancesInstancesItem["DagType"].asString();
		if(!dataNodeInstancesInstancesItem["Status"].isNull())
			instancesItemObject.status = dataNodeInstancesInstancesItem["Status"].asString();
		if(!dataNodeInstancesInstancesItem["Bizdate"].isNull())
			instancesItemObject.bizdate = std::stol(dataNodeInstancesInstancesItem["Bizdate"].asString());
		if(!dataNodeInstancesInstancesItem["CycTime"].isNull())
			instancesItemObject.cycTime = std::stol(dataNodeInstancesInstancesItem["CycTime"].asString());
		if(!dataNodeInstancesInstancesItem["CreateTime"].isNull())
			instancesItemObject.createTime = std::stol(dataNodeInstancesInstancesItem["CreateTime"].asString());
		if(!dataNodeInstancesInstancesItem["ModifyTime"].isNull())
			instancesItemObject.modifyTime = std::stol(dataNodeInstancesInstancesItem["ModifyTime"].asString());
		if(!dataNodeInstancesInstancesItem["NodeName"].isNull())
			instancesItemObject.nodeName = dataNodeInstancesInstancesItem["NodeName"].asString();
		if(!dataNodeInstancesInstancesItem["BeginWaitTimeTime"].isNull())
			instancesItemObject.beginWaitTimeTime = std::stol(dataNodeInstancesInstancesItem["BeginWaitTimeTime"].asString());
		if(!dataNodeInstancesInstancesItem["BeginWaitResTime"].isNull())
			instancesItemObject.beginWaitResTime = std::stol(dataNodeInstancesInstancesItem["BeginWaitResTime"].asString());
		if(!dataNodeInstancesInstancesItem["BeginRunningTime"].isNull())
			instancesItemObject.beginRunningTime = std::stol(dataNodeInstancesInstancesItem["BeginRunningTime"].asString());
		if(!dataNodeInstancesInstancesItem["ParamValues"].isNull())
			instancesItemObject.paramValues = dataNodeInstancesInstancesItem["ParamValues"].asString();
		if(!dataNodeInstancesInstancesItem["FinishTime"].isNull())
			instancesItemObject.finishTime = std::stol(dataNodeInstancesInstancesItem["FinishTime"].asString());
		data_.instances.push_back(instancesItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

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

