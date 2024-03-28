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

#include <alibabacloud/devops/model/GetVariableGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetVariableGroupResult::GetVariableGroupResult() :
	ServiceResult()
{}

GetVariableGroupResult::GetVariableGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVariableGroupResult::~GetVariableGroupResult()
{}

void GetVariableGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto variableGroupNode = value["variableGroup"];
	if(!variableGroupNode["ccreatorAccountId"].isNull())
		variableGroup_.ccreatorAccountId = variableGroupNode["ccreatorAccountId"].asString();
	if(!variableGroupNode["description"].isNull())
		variableGroup_.description = variableGroupNode["description"].asString();
	if(!variableGroupNode["updateTime"].isNull())
		variableGroup_.updateTime = std::stol(variableGroupNode["updateTime"].asString());
	if(!variableGroupNode["id"].isNull())
		variableGroup_.id = std::stol(variableGroupNode["id"].asString());
	if(!variableGroupNode["modifierAccountId"].isNull())
		variableGroup_.modifierAccountId = variableGroupNode["modifierAccountId"].asString();
	if(!variableGroupNode["name"].isNull())
		variableGroup_.name = variableGroupNode["name"].asString();
	if(!variableGroupNode["createTime"].isNull())
		variableGroup_.createTime = std::stol(variableGroupNode["createTime"].asString());
	auto allrelatedPipelinesNode = variableGroupNode["relatedPipelines"]["RelatedPipeline"];
	for (auto variableGroupNoderelatedPipelinesRelatedPipeline : allrelatedPipelinesNode)
	{
		VariableGroup::RelatedPipeline relatedPipelineObject;
		if(!variableGroupNoderelatedPipelinesRelatedPipeline["id"].isNull())
			relatedPipelineObject.id = std::stol(variableGroupNoderelatedPipelinesRelatedPipeline["id"].asString());
		if(!variableGroupNoderelatedPipelinesRelatedPipeline["name"].isNull())
			relatedPipelineObject.name = variableGroupNoderelatedPipelinesRelatedPipeline["name"].asString();
		variableGroup_.relatedPipelines.push_back(relatedPipelineObject);
	}
	auto allvariablesNode = variableGroupNode["variables"]["Variable"];
	for (auto variableGroupNodevariablesVariable : allvariablesNode)
	{
		VariableGroup::Variable variableObject;
		if(!variableGroupNodevariablesVariable["value"].isNull())
			variableObject.value = variableGroupNodevariablesVariable["value"].asString();
		if(!variableGroupNodevariablesVariable["name"].isNull())
			variableObject.name = variableGroupNodevariablesVariable["name"].asString();
		if(!variableGroupNodevariablesVariable["isEncrypted"].isNull())
			variableObject.isEncrypted = variableGroupNodevariablesVariable["isEncrypted"].asString() == "true";
		variableGroup_.variables.push_back(variableObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetVariableGroupResult::getRequestId()const
{
	return requestId_;
}

GetVariableGroupResult::VariableGroup GetVariableGroupResult::getVariableGroup()const
{
	return variableGroup_;
}

std::string GetVariableGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetVariableGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetVariableGroupResult::getSuccess()const
{
	return success_;
}

