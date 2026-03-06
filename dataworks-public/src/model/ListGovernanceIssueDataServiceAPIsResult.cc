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

#include <alibabacloud/dataworks-public/model/ListGovernanceIssueDataServiceAPIsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListGovernanceIssueDataServiceAPIsResult::ListGovernanceIssueDataServiceAPIsResult() :
	ServiceResult()
{}

ListGovernanceIssueDataServiceAPIsResult::ListGovernanceIssueDataServiceAPIsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGovernanceIssueDataServiceAPIsResult::~ListGovernanceIssueDataServiceAPIsResult()
{}

void ListGovernanceIssueDataServiceAPIsResult::parse(const std::string &payload)
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
	auto allAPIsNode = dataNode["APIs"]["API"];
	for (auto dataNodeAPIsAPI : allAPIsNode)
	{
		Data::API aPIObject;
		if(!dataNodeAPIsAPI["ApiName"].isNull())
			aPIObject.apiName = dataNodeAPIsAPI["ApiName"].asString();
		if(!dataNodeAPIsAPI["ApiId"].isNull())
			aPIObject.apiId = dataNodeAPIsAPI["ApiId"].asString();
		if(!dataNodeAPIsAPI["RuleId"].isNull())
			aPIObject.ruleId = dataNodeAPIsAPI["RuleId"].asString();
		if(!dataNodeAPIsAPI["RuleCategory"].isNull())
			aPIObject.ruleCategory = dataNodeAPIsAPI["RuleCategory"].asString();
		if(!dataNodeAPIsAPI["ProjectId"].isNull())
			aPIObject.projectId = std::stol(dataNodeAPIsAPI["ProjectId"].asString());
		if(!dataNodeAPIsAPI["OwnerId"].isNull())
			aPIObject.ownerId = dataNodeAPIsAPI["OwnerId"].asString();
		if(!dataNodeAPIsAPI["BizDate"].isNull())
			aPIObject.bizDate = dataNodeAPIsAPI["BizDate"].asString();
		if(!dataNodeAPIsAPI["Properties"].isNull())
			aPIObject.properties = dataNodeAPIsAPI["Properties"].asString();
		data_.aPIs.push_back(aPIObject);
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

std::string ListGovernanceIssueDataServiceAPIsResult::getDynamicErrorMessage()const
{
	return dynamicErrorMessage_;
}

int ListGovernanceIssueDataServiceAPIsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGovernanceIssueDataServiceAPIsResult::Data ListGovernanceIssueDataServiceAPIsResult::getData()const
{
	return data_;
}

std::string ListGovernanceIssueDataServiceAPIsResult::getDynamicErrorCode()const
{
	return dynamicErrorCode_;
}

std::string ListGovernanceIssueDataServiceAPIsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGovernanceIssueDataServiceAPIsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGovernanceIssueDataServiceAPIsResult::getSuccess()const
{
	return success_;
}

