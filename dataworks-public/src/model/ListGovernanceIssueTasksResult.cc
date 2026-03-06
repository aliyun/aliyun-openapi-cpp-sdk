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

#include <alibabacloud/dataworks-public/model/ListGovernanceIssueTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListGovernanceIssueTasksResult::ListGovernanceIssueTasksResult() :
	ServiceResult()
{}

ListGovernanceIssueTasksResult::ListGovernanceIssueTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGovernanceIssueTasksResult::~ListGovernanceIssueTasksResult()
{}

void ListGovernanceIssueTasksResult::parse(const std::string &payload)
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
	auto allTasksNode = dataNode["Tasks"]["Task"];
	for (auto dataNodeTasksTask : allTasksNode)
	{
		Data::Task taskObject;
		if(!dataNodeTasksTask["NodeName"].isNull())
			taskObject.nodeName = dataNodeTasksTask["NodeName"].asString();
		if(!dataNodeTasksTask["NodeId"].isNull())
			taskObject.nodeId = std::stol(dataNodeTasksTask["NodeId"].asString());
		if(!dataNodeTasksTask["NodeType"].isNull())
			taskObject.nodeType = dataNodeTasksTask["NodeType"].asString();
		if(!dataNodeTasksTask["RuleId"].isNull())
			taskObject.ruleId = dataNodeTasksTask["RuleId"].asString();
		if(!dataNodeTasksTask["RuleCategory"].isNull())
			taskObject.ruleCategory = dataNodeTasksTask["RuleCategory"].asString();
		if(!dataNodeTasksTask["ProjectId"].isNull())
			taskObject.projectId = std::stol(dataNodeTasksTask["ProjectId"].asString());
		if(!dataNodeTasksTask["OwnerId"].isNull())
			taskObject.ownerId = dataNodeTasksTask["OwnerId"].asString();
		if(!dataNodeTasksTask["BizDate"].isNull())
			taskObject.bizDate = dataNodeTasksTask["BizDate"].asString();
		if(!dataNodeTasksTask["Properties"].isNull())
			taskObject.properties = dataNodeTasksTask["Properties"].asString();
		data_.tasks.push_back(taskObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicErrorCode"].isNull())
		dynamicErrorCode_ = value["DynamicErrorCode"].asString();
	if(!value["DynamicErrorMessage"].isNull())
		dynamicErrorMessage_ = value["DynamicErrorMessage"].asString();

}

std::string ListGovernanceIssueTasksResult::getDynamicErrorMessage()const
{
	return dynamicErrorMessage_;
}

int ListGovernanceIssueTasksResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGovernanceIssueTasksResult::Data ListGovernanceIssueTasksResult::getData()const
{
	return data_;
}

std::string ListGovernanceIssueTasksResult::getDynamicErrorCode()const
{
	return dynamicErrorCode_;
}

std::string ListGovernanceIssueTasksResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGovernanceIssueTasksResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGovernanceIssueTasksResult::getSuccess()const
{
	return success_;
}

