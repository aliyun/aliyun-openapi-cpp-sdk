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

#include <alibabacloud/dataworks-public/model/ListGovernanceRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListGovernanceRulesResult::ListGovernanceRulesResult() :
	ServiceResult()
{}

ListGovernanceRulesResult::ListGovernanceRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGovernanceRulesResult::~ListGovernanceRulesResult()
{}

void ListGovernanceRulesResult::parse(const std::string &payload)
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
	auto allRulesNode = dataNode["Rules"]["Rule"];
	for (auto dataNodeRulesRule : allRulesNode)
	{
		Data::Rule ruleObject;
		if(!dataNodeRulesRule["Id"].isNull())
			ruleObject.id = dataNodeRulesRule["Id"].asString();
		if(!dataNodeRulesRule["Category"].isNull())
			ruleObject.category = dataNodeRulesRule["Category"].asString();
		if(!dataNodeRulesRule["Name"].isNull())
			ruleObject.name = dataNodeRulesRule["Name"].asString();
		if(!dataNodeRulesRule["Description"].isNull())
			ruleObject.description = dataNodeRulesRule["Description"].asString();
		if(!dataNodeRulesRule["IssueType"].isNull())
			ruleObject.issueType = dataNodeRulesRule["IssueType"].asString();
		if(!dataNodeRulesRule["Rule"].isNull())
			ruleObject.rule = dataNodeRulesRule["Rule"].asString();
		if(!dataNodeRulesRule["Guide"].isNull())
			ruleObject.guide = dataNodeRulesRule["Guide"].asString();
		if(!dataNodeRulesRule["Note"].isNull())
			ruleObject.note = dataNodeRulesRule["Note"].asString();
		data_.rules.push_back(ruleObject);
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

std::string ListGovernanceRulesResult::getDynamicErrorMessage()const
{
	return dynamicErrorMessage_;
}

int ListGovernanceRulesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGovernanceRulesResult::Data ListGovernanceRulesResult::getData()const
{
	return data_;
}

std::string ListGovernanceRulesResult::getDynamicErrorCode()const
{
	return dynamicErrorCode_;
}

std::string ListGovernanceRulesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGovernanceRulesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGovernanceRulesResult::getSuccess()const
{
	return success_;
}

