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

#include <alibabacloud/dms-enterprise/model/GetTableDesignProjectFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetTableDesignProjectFlowResult::GetTableDesignProjectFlowResult() :
	ServiceResult()
{}

GetTableDesignProjectFlowResult::GetTableDesignProjectFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableDesignProjectFlowResult::~GetTableDesignProjectFlowResult()
{}

void GetTableDesignProjectFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectFlowNode = value["ProjectFlow"];
	if(!projectFlowNode["CurrentPosition"].isNull())
		projectFlow_.currentPosition = std::stoi(projectFlowNode["CurrentPosition"].asString());
	if(!projectFlowNode["RuleName"].isNull())
		projectFlow_.ruleName = projectFlowNode["RuleName"].asString();
	if(!projectFlowNode["RuleComment"].isNull())
		projectFlow_.ruleComment = projectFlowNode["RuleComment"].asString();
	auto allFlowNodeArrayNode = projectFlowNode["FlowNodeArray"]["FlowNodeArrayItem"];
	for (auto projectFlowNodeFlowNodeArrayFlowNodeArrayItem : allFlowNodeArrayNode)
	{
		ProjectFlow::FlowNodeArrayItem flowNodeArrayItemObject;
		if(!projectFlowNodeFlowNodeArrayFlowNodeArrayItem["NodeRole"].isNull())
			flowNodeArrayItemObject.nodeRole = projectFlowNodeFlowNodeArrayFlowNodeArrayItem["NodeRole"].asString();
		if(!projectFlowNodeFlowNodeArrayFlowNodeArrayItem["NodeTitle"].isNull())
			flowNodeArrayItemObject.nodeTitle = projectFlowNodeFlowNodeArrayFlowNodeArrayItem["NodeTitle"].asString();
		if(!projectFlowNodeFlowNodeArrayFlowNodeArrayItem["Position"].isNull())
			flowNodeArrayItemObject.position = std::stoi(projectFlowNodeFlowNodeArrayFlowNodeArrayItem["Position"].asString());
		if(!projectFlowNodeFlowNodeArrayFlowNodeArrayItem["PublishAnchor"].isNull())
			flowNodeArrayItemObject.publishAnchor = projectFlowNodeFlowNodeArrayFlowNodeArrayItem["PublishAnchor"].asString() == "true";
		if(!projectFlowNodeFlowNodeArrayFlowNodeArrayItem["BackToDesign"].isNull())
			flowNodeArrayItemObject.backToDesign = projectFlowNodeFlowNodeArrayFlowNodeArrayItem["BackToDesign"].asString() == "true";
		if(!projectFlowNodeFlowNodeArrayFlowNodeArrayItem["CanSkip"].isNull())
			flowNodeArrayItemObject.canSkip = projectFlowNodeFlowNodeArrayFlowNodeArrayItem["CanSkip"].asString() == "true";
		auto allPublishStrategies = value["PublishStrategies"]["PublishStrategies"];
		for (auto value : allPublishStrategies)
			flowNodeArrayItemObject.publishStrategies.push_back(value.asString());
		projectFlow_.flowNodeArray.push_back(flowNodeArrayItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetTableDesignProjectFlowResult::ProjectFlow GetTableDesignProjectFlowResult::getProjectFlow()const
{
	return projectFlow_;
}

std::string GetTableDesignProjectFlowResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTableDesignProjectFlowResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTableDesignProjectFlowResult::getSuccess()const
{
	return success_;
}

