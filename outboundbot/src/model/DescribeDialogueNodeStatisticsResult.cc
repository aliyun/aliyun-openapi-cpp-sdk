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

#include <alibabacloud/outboundbot/model/DescribeDialogueNodeStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeDialogueNodeStatisticsResult::DescribeDialogueNodeStatisticsResult() :
	ServiceResult()
{}

DescribeDialogueNodeStatisticsResult::DescribeDialogueNodeStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDialogueNodeStatisticsResult::~DescribeDialogueNodeStatisticsResult()
{}

void DescribeDialogueNodeStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNoAnswerDialogueNodesNode = value["NoAnswerDialogueNodes"]["NoAnswerDialogueNode"];
	for (auto valueNoAnswerDialogueNodesNoAnswerDialogueNode : allNoAnswerDialogueNodesNode)
	{
		NoAnswerDialogueNode noAnswerDialogueNodesObject;
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["NoAnswerNum"].isNull())
			noAnswerDialogueNodesObject.noAnswerNum = std::stoi(valueNoAnswerDialogueNodesNoAnswerDialogueNode["NoAnswerNum"].asString());
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["GroupId"].isNull())
			noAnswerDialogueNodesObject.groupId = valueNoAnswerDialogueNodesNoAnswerDialogueNode["GroupId"].asString();
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["NodeName"].isNull())
			noAnswerDialogueNodesObject.nodeName = valueNoAnswerDialogueNodesNoAnswerDialogueNode["NodeName"].asString();
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["HangUpNum"].isNull())
			noAnswerDialogueNodesObject.hangUpNum = std::stoi(valueNoAnswerDialogueNodesNoAnswerDialogueNode["HangUpNum"].asString());
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["InstanceId"].isNull())
			noAnswerDialogueNodesObject.instanceId = valueNoAnswerDialogueNodesNoAnswerDialogueNode["InstanceId"].asString();
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["HitNum"].isNull())
			noAnswerDialogueNodesObject.hitNum = std::stoi(valueNoAnswerDialogueNodesNoAnswerDialogueNode["HitNum"].asString());
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["Id"].isNull())
			noAnswerDialogueNodesObject.id = valueNoAnswerDialogueNodesNoAnswerDialogueNode["Id"].asString();
		if(!valueNoAnswerDialogueNodesNoAnswerDialogueNode["NodeId"].isNull())
			noAnswerDialogueNodesObject.nodeId = valueNoAnswerDialogueNodesNoAnswerDialogueNode["NodeId"].asString();
		noAnswerDialogueNodes_.push_back(noAnswerDialogueNodesObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCompleted"].isNull())
		totalCompleted_ = std::stoi(value["TotalCompleted"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string DescribeDialogueNodeStatisticsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeDialogueNodeStatisticsResult::NoAnswerDialogueNode> DescribeDialogueNodeStatisticsResult::getNoAnswerDialogueNodes()const
{
	return noAnswerDialogueNodes_;
}

std::string DescribeDialogueNodeStatisticsResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeDialogueNodeStatisticsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeDialogueNodeStatisticsResult::getTotalCompleted()const
{
	return totalCompleted_;
}

std::string DescribeDialogueNodeStatisticsResult::getCode()const
{
	return code_;
}

bool DescribeDialogueNodeStatisticsResult::getSuccess()const
{
	return success_;
}

std::string DescribeDialogueNodeStatisticsResult::getGroupId()const
{
	return groupId_;
}

