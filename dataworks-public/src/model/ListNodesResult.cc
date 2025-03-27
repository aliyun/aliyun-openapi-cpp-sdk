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

#include <alibabacloud/dataworks-public/model/ListNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListNodesResult::ListNodesResult() :
	ServiceResult()
{}

ListNodesResult::ListNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesResult::~ListNodesResult()
{}

void ListNodesResult::parse(const std::string &payload)
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
	auto allNodesNode = dataNode["Nodes"]["NodesItem"];
	for (auto dataNodeNodesNodesItem : allNodesNode)
	{
		Data::NodesItem nodesItemObject;
		if(!dataNodeNodesNodesItem["SchedulerType"].isNull())
			nodesItemObject.schedulerType = dataNodeNodesNodesItem["SchedulerType"].asString();
		if(!dataNodeNodesNodesItem["RepeatInterval"].isNull())
			nodesItemObject.repeatInterval = std::stol(dataNodeNodesNodesItem["RepeatInterval"].asString());
		if(!dataNodeNodesNodesItem["Repeatability"].isNull())
			nodesItemObject.repeatability = dataNodeNodesNodesItem["Repeatability"].asString() == "true";
		if(!dataNodeNodesNodesItem["RepeatMode"].isNull())
			nodesItemObject.repeatMode = std::stoi(dataNodeNodesNodesItem["RepeatMode"].asString());
		if(!dataNodeNodesNodesItem["ProjectId"].isNull())
			nodesItemObject.projectId = std::stol(dataNodeNodesNodesItem["ProjectId"].asString());
		if(!dataNodeNodesNodesItem["ProgramType"].isNull())
			nodesItemObject.programType = dataNodeNodesNodesItem["ProgramType"].asString();
		if(!dataNodeNodesNodesItem["Priority"].isNull())
			nodesItemObject.priority = std::stoi(dataNodeNodesNodesItem["Priority"].asString());
		if(!dataNodeNodesNodesItem["OwnerId"].isNull())
			nodesItemObject.ownerId = dataNodeNodesNodesItem["OwnerId"].asString();
		if(!dataNodeNodesNodesItem["Connection"].isNull())
			nodesItemObject.connection = dataNodeNodesNodesItem["Connection"].asString();
		if(!dataNodeNodesNodesItem["ParamValues"].isNull())
			nodesItemObject.paramValues = dataNodeNodesNodesItem["ParamValues"].asString();
		if(!dataNodeNodesNodesItem["RelatedFlowId"].isNull())
			nodesItemObject.relatedFlowId = std::stol(dataNodeNodesNodesItem["RelatedFlowId"].asString());
		if(!dataNodeNodesNodesItem["DqcType"].isNull())
			nodesItemObject.dqcType = std::stoi(dataNodeNodesNodesItem["DqcType"].asString());
		if(!dataNodeNodesNodesItem["BaselineId"].isNull())
			nodesItemObject.baselineId = std::stol(dataNodeNodesNodesItem["BaselineId"].asString());
		if(!dataNodeNodesNodesItem["Description"].isNull())
			nodesItemObject.description = dataNodeNodesNodesItem["Description"].asString();
		if(!dataNodeNodesNodesItem["NodeName"].isNull())
			nodesItemObject.nodeName = dataNodeNodesNodesItem["NodeName"].asString();
		if(!dataNodeNodesNodesItem["ResGroupName"].isNull())
			nodesItemObject.resGroupName = dataNodeNodesNodesItem["ResGroupName"].asString();
		if(!dataNodeNodesNodesItem["BusinessId"].isNull())
			nodesItemObject.businessId = std::stol(dataNodeNodesNodesItem["BusinessId"].asString());
		if(!dataNodeNodesNodesItem["DqcDescription"].isNull())
			nodesItemObject.dqcDescription = dataNodeNodesNodesItem["DqcDescription"].asString();
		if(!dataNodeNodesNodesItem["CronExpress"].isNull())
			nodesItemObject.cronExpress = dataNodeNodesNodesItem["CronExpress"].asString();
		if(!dataNodeNodesNodesItem["NodeId"].isNull())
			nodesItemObject.nodeId = std::stol(dataNodeNodesNodesItem["NodeId"].asString());
		if(!dataNodeNodesNodesItem["ResGroupIdentifier"].isNull())
			nodesItemObject.resGroupIdentifier = dataNodeNodesNodesItem["ResGroupIdentifier"].asString();
		if(!dataNodeNodesNodesItem["FileType"].isNull())
			nodesItemObject.fileType = std::stoi(dataNodeNodesNodesItem["FileType"].asString());
		if(!dataNodeNodesNodesItem["FileId"].isNull())
			nodesItemObject.fileId = std::stol(dataNodeNodesNodesItem["FileId"].asString());
		if(!dataNodeNodesNodesItem["FileVersion"].isNull())
			nodesItemObject.fileVersion = std::stoi(dataNodeNodesNodesItem["FileVersion"].asString());
		if(!dataNodeNodesNodesItem["DeployDate"].isNull())
			nodesItemObject.deployDate = std::stol(dataNodeNodesNodesItem["DeployDate"].asString());
		if(!dataNodeNodesNodesItem["CreateTime"].isNull())
			nodesItemObject.createTime = std::stol(dataNodeNodesNodesItem["CreateTime"].asString());
		if(!dataNodeNodesNodesItem["ModifyTime"].isNull())
			nodesItemObject.modifyTime = std::stol(dataNodeNodesNodesItem["ModifyTime"].asString());
		data_.nodes.push_back(nodesItemObject);
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

int ListNodesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListNodesResult::Data ListNodesResult::getData()const
{
	return data_;
}

std::string ListNodesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListNodesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListNodesResult::getSuccess()const
{
	return success_;
}

