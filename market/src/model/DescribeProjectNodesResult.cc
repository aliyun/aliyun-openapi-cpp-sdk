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

#include <alibabacloud/market/model/DescribeProjectNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeProjectNodesResult::DescribeProjectNodesResult() :
	ServiceResult()
{}

DescribeProjectNodesResult::DescribeProjectNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProjectNodesResult::~DescribeProjectNodesResult()
{}

void DescribeProjectNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ProjectNode"];
	for (auto valueResultProjectNode : allResultNode)
	{
		ProjectNode resultObject;
		if(!valueResultProjectNode["NextNodeId"].isNull())
			resultObject.nextNodeId = std::stol(valueResultProjectNode["NextNodeId"].asString());
		if(!valueResultProjectNode["StepNo"].isNull())
			resultObject.stepNo = std::stoi(valueResultProjectNode["StepNo"].asString());
		if(!valueResultProjectNode["AutoFinishNode"].isNull())
			resultObject.autoFinishNode = valueResultProjectNode["AutoFinishNode"].asString() == "true";
		if(!valueResultProjectNode["FinalStepNo"].isNull())
			resultObject.finalStepNo = std::stoi(valueResultProjectNode["FinalStepNo"].asString());
		if(!valueResultProjectNode["PreviousNodeId"].isNull())
			resultObject.previousNodeId = std::stol(valueResultProjectNode["PreviousNodeId"].asString());
		if(!valueResultProjectNode["ParentNodeId"].isNull())
			resultObject.parentNodeId = std::stol(valueResultProjectNode["ParentNodeId"].asString());
		if(!valueResultProjectNode["GmtExpired"].isNull())
			resultObject.gmtExpired = std::stol(valueResultProjectNode["GmtExpired"].asString());
		if(!valueResultProjectNode["OperatorRole"].isNull())
			resultObject.operatorRole = valueResultProjectNode["OperatorRole"].asString();
		if(!valueResultProjectNode["GmtStart"].isNull())
			resultObject.gmtStart = std::stol(valueResultProjectNode["GmtStart"].asString());
		if(!valueResultProjectNode["NodeStatus"].isNull())
			resultObject.nodeStatus = valueResultProjectNode["NodeStatus"].asString();
		if(!valueResultProjectNode["NodeName"].isNull())
			resultObject.nodeName = valueResultProjectNode["NodeName"].asString();
		if(!valueResultProjectNode["GmtFinished"].isNull())
			resultObject.gmtFinished = std::stol(valueResultProjectNode["GmtFinished"].asString());
		if(!valueResultProjectNode["AllowRollbackNode"].isNull())
			resultObject.allowRollbackNode = valueResultProjectNode["AllowRollbackNode"].asString() == "true";
		if(!valueResultProjectNode["TemplateForm"].isNull())
			resultObject.templateForm = valueResultProjectNode["TemplateForm"].asString();
		if(!valueResultProjectNode["NeedAttachment"].isNull())
			resultObject.needAttachment = valueResultProjectNode["NeedAttachment"].asString() == "true";
		if(!valueResultProjectNode["NodeId"].isNull())
			resultObject.nodeId = std::stol(valueResultProjectNode["NodeId"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool DescribeProjectNodesResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeProjectNodesResult::ProjectNode> DescribeProjectNodesResult::getResult()const
{
	return result_;
}

