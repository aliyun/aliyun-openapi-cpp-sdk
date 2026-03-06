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

#include <alibabacloud/dataworks-public/model/ListGovernanceIssueTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListGovernanceIssueTablesResult::ListGovernanceIssueTablesResult() :
	ServiceResult()
{}

ListGovernanceIssueTablesResult::ListGovernanceIssueTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGovernanceIssueTablesResult::~ListGovernanceIssueTablesResult()
{}

void ListGovernanceIssueTablesResult::parse(const std::string &payload)
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
	auto allTablesNode = dataNode["Tables"]["Table"];
	for (auto dataNodeTablesTable : allTablesNode)
	{
		Data::Table tableObject;
		if(!dataNodeTablesTable["DatasourceType"].isNull())
			tableObject.datasourceType = dataNodeTablesTable["DatasourceType"].asString();
		if(!dataNodeTablesTable["McProjectName"].isNull())
			tableObject.mcProjectName = dataNodeTablesTable["McProjectName"].asString();
		if(!dataNodeTablesTable["ClusterId"].isNull())
			tableObject.clusterId = dataNodeTablesTable["ClusterId"].asString();
		if(!dataNodeTablesTable["DatabaseName"].isNull())
			tableObject.databaseName = dataNodeTablesTable["DatabaseName"].asString();
		if(!dataNodeTablesTable["Schema"].isNull())
			tableObject.schema = dataNodeTablesTable["Schema"].asString();
		if(!dataNodeTablesTable["TableName"].isNull())
			tableObject.tableName = dataNodeTablesTable["TableName"].asString();
		if(!dataNodeTablesTable["TableGuid"].isNull())
			tableObject.tableGuid = dataNodeTablesTable["TableGuid"].asString();
		if(!dataNodeTablesTable["TableSize"].isNull())
			tableObject.tableSize = std::stol(dataNodeTablesTable["TableSize"].asString());
		if(!dataNodeTablesTable["LifeCycle"].isNull())
			tableObject.lifeCycle = std::stol(dataNodeTablesTable["LifeCycle"].asString());
		if(!dataNodeTablesTable["CreateTime"].isNull())
			tableObject.createTime = std::stol(dataNodeTablesTable["CreateTime"].asString());
		if(!dataNodeTablesTable["LastAccessTime"].isNull())
			tableObject.lastAccessTime = std::stol(dataNodeTablesTable["LastAccessTime"].asString());
		if(!dataNodeTablesTable["DownstreamDependencyCount"].isNull())
			tableObject.downstreamDependencyCount = std::stoi(dataNodeTablesTable["DownstreamDependencyCount"].asString());
		if(!dataNodeTablesTable["RuleId"].isNull())
			tableObject.ruleId = dataNodeTablesTable["RuleId"].asString();
		if(!dataNodeTablesTable["RuleCategory"].isNull())
			tableObject.ruleCategory = dataNodeTablesTable["RuleCategory"].asString();
		if(!dataNodeTablesTable["ProjectId"].isNull())
			tableObject.projectId = std::stol(dataNodeTablesTable["ProjectId"].asString());
		if(!dataNodeTablesTable["OwnerId"].isNull())
			tableObject.ownerId = dataNodeTablesTable["OwnerId"].asString();
		if(!dataNodeTablesTable["BizDate"].isNull())
			tableObject.bizDate = dataNodeTablesTable["BizDate"].asString();
		if(!dataNodeTablesTable["Properties"].isNull())
			tableObject.properties = dataNodeTablesTable["Properties"].asString();
		data_.tables.push_back(tableObject);
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

std::string ListGovernanceIssueTablesResult::getDynamicErrorMessage()const
{
	return dynamicErrorMessage_;
}

int ListGovernanceIssueTablesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGovernanceIssueTablesResult::Data ListGovernanceIssueTablesResult::getData()const
{
	return data_;
}

std::string ListGovernanceIssueTablesResult::getDynamicErrorCode()const
{
	return dynamicErrorCode_;
}

std::string ListGovernanceIssueTablesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGovernanceIssueTablesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGovernanceIssueTablesResult::getSuccess()const
{
	return success_;
}

