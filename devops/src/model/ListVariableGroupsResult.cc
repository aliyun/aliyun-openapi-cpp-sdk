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

#include <alibabacloud/devops/model/ListVariableGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListVariableGroupsResult::ListVariableGroupsResult() :
	ServiceResult()
{}

ListVariableGroupsResult::ListVariableGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVariableGroupsResult::~ListVariableGroupsResult()
{}

void ListVariableGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allvariableGroupsNode = value["variableGroups"]["VariableGroup"];
	for (auto valuevariableGroupsVariableGroup : allvariableGroupsNode)
	{
		VariableGroup variableGroupsObject;
		if(!valuevariableGroupsVariableGroup["creatorAccountId"].isNull())
			variableGroupsObject.creatorAccountId = valuevariableGroupsVariableGroup["creatorAccountId"].asString();
		if(!valuevariableGroupsVariableGroup["updateTime"].isNull())
			variableGroupsObject.updateTime = std::stol(valuevariableGroupsVariableGroup["updateTime"].asString());
		if(!valuevariableGroupsVariableGroup["modifierAccountId"].isNull())
			variableGroupsObject.modifierAccountId = valuevariableGroupsVariableGroup["modifierAccountId"].asString();
		if(!valuevariableGroupsVariableGroup["description"].isNull())
			variableGroupsObject.description = valuevariableGroupsVariableGroup["description"].asString();
		if(!valuevariableGroupsVariableGroup["name"].isNull())
			variableGroupsObject.name = valuevariableGroupsVariableGroup["name"].asString();
		if(!valuevariableGroupsVariableGroup["id"].isNull())
			variableGroupsObject.id = std::stol(valuevariableGroupsVariableGroup["id"].asString());
		if(!valuevariableGroupsVariableGroup["createTime"].isNull())
			variableGroupsObject.createTime = std::stol(valuevariableGroupsVariableGroup["createTime"].asString());
		auto allrelatedPipelinesNode = valuevariableGroupsVariableGroup["relatedPipelines"]["RelatedPipeline"];
		for (auto valuevariableGroupsVariableGrouprelatedPipelinesRelatedPipeline : allrelatedPipelinesNode)
		{
			VariableGroup::RelatedPipeline relatedPipelinesObject;
			if(!valuevariableGroupsVariableGrouprelatedPipelinesRelatedPipeline["id"].isNull())
				relatedPipelinesObject.id = std::stol(valuevariableGroupsVariableGrouprelatedPipelinesRelatedPipeline["id"].asString());
			if(!valuevariableGroupsVariableGrouprelatedPipelinesRelatedPipeline["name"].isNull())
				relatedPipelinesObject.name = valuevariableGroupsVariableGrouprelatedPipelinesRelatedPipeline["name"].asString();
			variableGroupsObject.relatedPipelines.push_back(relatedPipelinesObject);
		}
		auto allvariablesNode = valuevariableGroupsVariableGroup["variables"]["Variable"];
		for (auto valuevariableGroupsVariableGroupvariablesVariable : allvariablesNode)
		{
			VariableGroup::Variable variablesObject;
			if(!valuevariableGroupsVariableGroupvariablesVariable["value"].isNull())
				variablesObject.value = valuevariableGroupsVariableGroupvariablesVariable["value"].asString();
			if(!valuevariableGroupsVariableGroupvariablesVariable["name"].isNull())
				variablesObject.name = valuevariableGroupsVariableGroupvariablesVariable["name"].asString();
			if(!valuevariableGroupsVariableGroupvariablesVariable["isEncrypted"].isNull())
				variablesObject.isEncrypted = valuevariableGroupsVariableGroupvariablesVariable["isEncrypted"].asString() == "true";
			variableGroupsObject.variables.push_back(variablesObject);
		}
		variableGroups_.push_back(variableGroupsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["totalCount"].isNull())
		totalCount_ = std::stol(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();

}

long ListVariableGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVariableGroupsResult::getRequestId()const
{
	return requestId_;
}

std::string ListVariableGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListVariableGroupsResult::VariableGroup> ListVariableGroupsResult::getvariableGroups()const
{
	return variableGroups_;
}

std::string ListVariableGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListVariableGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListVariableGroupsResult::getSuccess()const
{
	return success_;
}

