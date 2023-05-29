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

#include <alibabacloud/market/model/DescribeCurrentNodeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeCurrentNodeInfoResult::DescribeCurrentNodeInfoResult() :
	ServiceResult()
{}

DescribeCurrentNodeInfoResult::DescribeCurrentNodeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCurrentNodeInfoResult::~DescribeCurrentNodeInfoResult()
{}

void DescribeCurrentNodeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["NextNodeId"].isNull())
		result_.nextNodeId = std::stol(resultNode["NextNodeId"].asString());
	if(!resultNode["StepNo"].isNull())
		result_.stepNo = std::stoi(resultNode["StepNo"].asString());
	if(!resultNode["AutoFinishNode"].isNull())
		result_.autoFinishNode = resultNode["AutoFinishNode"].asString() == "true";
	if(!resultNode["FinalStepNo"].isNull())
		result_.finalStepNo = std::stoi(resultNode["FinalStepNo"].asString());
	if(!resultNode["PreviousNodeId"].isNull())
		result_.previousNodeId = std::stol(resultNode["PreviousNodeId"].asString());
	if(!resultNode["ParentNodeId"].isNull())
		result_.parentNodeId = std::stol(resultNode["ParentNodeId"].asString());
	if(!resultNode["GmtExpired"].isNull())
		result_.gmtExpired = std::stol(resultNode["GmtExpired"].asString());
	if(!resultNode["OperatorRole"].isNull())
		result_.operatorRole = resultNode["OperatorRole"].asString();
	if(!resultNode["GmtStart"].isNull())
		result_.gmtStart = std::stol(resultNode["GmtStart"].asString());
	if(!resultNode["NodeStatus"].isNull())
		result_.nodeStatus = resultNode["NodeStatus"].asString();
	if(!resultNode["NodeName"].isNull())
		result_.nodeName = resultNode["NodeName"].asString();
	if(!resultNode["GmtFinished"].isNull())
		result_.gmtFinished = std::stol(resultNode["GmtFinished"].asString());
	if(!resultNode["AllowRollbackNode"].isNull())
		result_.allowRollbackNode = resultNode["AllowRollbackNode"].asString() == "true";
	if(!resultNode["TemplateForm"].isNull())
		result_.templateForm = resultNode["TemplateForm"].asString();
	if(!resultNode["NeedAttachment"].isNull())
		result_.needAttachment = resultNode["NeedAttachment"].asString() == "true";
	if(!resultNode["NodeId"].isNull())
		result_.nodeId = std::stol(resultNode["NodeId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool DescribeCurrentNodeInfoResult::getSuccess()const
{
	return success_;
}

DescribeCurrentNodeInfoResult::Result DescribeCurrentNodeInfoResult::getResult()const
{
	return result_;
}

