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

#include <alibabacloud/retailcloud/model/ListDeployOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListDeployOrdersResult::ListDeployOrdersResult() :
	ServiceResult()
{}

ListDeployOrdersResult::ListDeployOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeployOrdersResult::~ListDeployOrdersResult()
{}

void ListDeployOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DeployOrderInstance"];
	for (auto valueDataDeployOrderInstance : allDataNode)
	{
		DeployOrderInstance dataObject;
		if(!valueDataDeployOrderInstance["AppInstanceType"].isNull())
			dataObject.appInstanceType = valueDataDeployOrderInstance["AppInstanceType"].asString();
		if(!valueDataDeployOrderInstance["CurrentPartitionNum"].isNull())
			dataObject.currentPartitionNum = std::stoi(valueDataDeployOrderInstance["CurrentPartitionNum"].asString());
		if(!valueDataDeployOrderInstance["DeployOrderId"].isNull())
			dataObject.deployOrderId = std::stol(valueDataDeployOrderInstance["DeployOrderId"].asString());
		if(!valueDataDeployOrderInstance["DeployPauseType"].isNull())
			dataObject.deployPauseType = valueDataDeployOrderInstance["DeployPauseType"].asString();
		if(!valueDataDeployOrderInstance["DeployPauseTypeName"].isNull())
			dataObject.deployPauseTypeName = valueDataDeployOrderInstance["DeployPauseTypeName"].asString();
		if(!valueDataDeployOrderInstance["DeployType"].isNull())
			dataObject.deployType = valueDataDeployOrderInstance["DeployType"].asString();
		if(!valueDataDeployOrderInstance["DeployTypeName"].isNull())
			dataObject.deployTypeName = valueDataDeployOrderInstance["DeployTypeName"].asString();
		if(!valueDataDeployOrderInstance["Description"].isNull())
			dataObject.description = valueDataDeployOrderInstance["Description"].asString();
		if(!valueDataDeployOrderInstance["ElapsedTime"].isNull())
			dataObject.elapsedTime = std::stoi(valueDataDeployOrderInstance["ElapsedTime"].asString());
		if(!valueDataDeployOrderInstance["EndTime"].isNull())
			dataObject.endTime = valueDataDeployOrderInstance["EndTime"].asString();
		if(!valueDataDeployOrderInstance["EnvId"].isNull())
			dataObject.envId = std::stol(valueDataDeployOrderInstance["EnvId"].asString());
		if(!valueDataDeployOrderInstance["EnvType"].isNull())
			dataObject.envType = valueDataDeployOrderInstance["EnvType"].asString();
		if(!valueDataDeployOrderInstance["FailureRate"].isNull())
			dataObject.failureRate = valueDataDeployOrderInstance["FailureRate"].asString();
		if(!valueDataDeployOrderInstance["FinishAppInstanceCt"].isNull())
			dataObject.finishAppInstanceCt = std::stoi(valueDataDeployOrderInstance["FinishAppInstanceCt"].asString());
		if(!valueDataDeployOrderInstance["Name"].isNull())
			dataObject.name = valueDataDeployOrderInstance["Name"].asString();
		if(!valueDataDeployOrderInstance["PartitionType"].isNull())
			dataObject.partitionType = valueDataDeployOrderInstance["PartitionType"].asString();
		if(!valueDataDeployOrderInstance["PartitionTypeName"].isNull())
			dataObject.partitionTypeName = valueDataDeployOrderInstance["PartitionTypeName"].asString();
		if(!valueDataDeployOrderInstance["Result"].isNull())
			dataObject.result = std::stoi(valueDataDeployOrderInstance["Result"].asString());
		if(!valueDataDeployOrderInstance["ResultName"].isNull())
			dataObject.resultName = valueDataDeployOrderInstance["ResultName"].asString();
		if(!valueDataDeployOrderInstance["SchemaId"].isNull())
			dataObject.schemaId = std::stol(valueDataDeployOrderInstance["SchemaId"].asString());
		if(!valueDataDeployOrderInstance["StartTime"].isNull())
			dataObject.startTime = valueDataDeployOrderInstance["StartTime"].asString();
		if(!valueDataDeployOrderInstance["Status"].isNull())
			dataObject.status = std::stoi(valueDataDeployOrderInstance["Status"].asString());
		if(!valueDataDeployOrderInstance["StatusName"].isNull())
			dataObject.statusName = valueDataDeployOrderInstance["StatusName"].asString();
		if(!valueDataDeployOrderInstance["TotalAppInstanceCt"].isNull())
			dataObject.totalAppInstanceCt = std::stoi(valueDataDeployOrderInstance["TotalAppInstanceCt"].asString());
		if(!valueDataDeployOrderInstance["TotalPartitions"].isNull())
			dataObject.totalPartitions = std::stoi(valueDataDeployOrderInstance["TotalPartitions"].asString());
		if(!valueDataDeployOrderInstance["UserId"].isNull())
			dataObject.userId = valueDataDeployOrderInstance["UserId"].asString();
		if(!valueDataDeployOrderInstance["UserNick"].isNull())
			dataObject.userNick = valueDataDeployOrderInstance["UserNick"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListDeployOrdersResult::getTotalCount()const
{
	return totalCount_;
}

int ListDeployOrdersResult::getPageSize()const
{
	return pageSize_;
}

int ListDeployOrdersResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListDeployOrdersResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListDeployOrdersResult::DeployOrderInstance> ListDeployOrdersResult::getData()const
{
	return data_;
}

int ListDeployOrdersResult::getCode()const
{
	return code_;
}

