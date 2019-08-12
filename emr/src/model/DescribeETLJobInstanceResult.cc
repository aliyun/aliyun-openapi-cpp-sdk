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

#include <alibabacloud/emr/model/DescribeETLJobInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeETLJobInstanceResult::DescribeETLJobInstanceResult() :
	ServiceResult()
{}

DescribeETLJobInstanceResult::DescribeETLJobInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeETLJobInstanceResult::~DescribeETLJobInstanceResult()
{}

void DescribeETLJobInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFlowRelationList = value["FlowRelationList"]["FlowRelation"];
	for (auto value : allFlowRelationList)
	{
		FlowRelation flowRelationListObject;
		if(!value["FlowJobId"].isNull())
			flowRelationListObject.flowJobId = value["FlowJobId"].asString();
		if(!value["FlowJobInstanceId"].isNull())
			flowRelationListObject.flowJobInstanceId = value["FlowJobInstanceId"].asString();
		flowRelationList_.push_back(flowRelationListObject);
	}
	auto allStageInstanceList = value["StageInstanceList"]["StageInstance"];
	for (auto value : allStageInstanceList)
	{
		StageInstance stageInstanceListObject;
		if(!value["Id"].isNull())
			stageInstanceListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			stageInstanceListObject.name = value["Name"].asString();
		if(!value["StageStartTime"].isNull())
			stageInstanceListObject.stageStartTime = std::stol(value["StageStartTime"].asString());
		if(!value["StageEndTime"].isNull())
			stageInstanceListObject.stageEndTime = std::stol(value["StageEndTime"].asString());
		stageInstanceList_.push_back(stageInstanceListObject);
	}
	auto triggerHistoryNode = value["TriggerHistory"];
	if(!triggerHistoryNode["HistoryId"].isNull())
		triggerHistory_.historyId = triggerHistoryNode["HistoryId"].asString();
	if(!triggerHistoryNode["TriggerId"].isNull())
		triggerHistory_.triggerId = triggerHistoryNode["TriggerId"].asString();
	if(!triggerHistoryNode["TriggerType"].isNull())
		triggerHistory_.triggerType = triggerHistoryNode["TriggerType"].asString();
	if(!triggerHistoryNode["FireState"].isNull())
		triggerHistory_.fireState = triggerHistoryNode["FireState"].asString();
	if(!triggerHistoryNode["FireTime"].isNull())
		triggerHistory_.fireTime = std::stol(triggerHistoryNode["FireTime"].asString());
	auto argumentsNode = value["Arguments"];
	if(!argumentsNode["Key"].isNull())
		arguments_.key = argumentsNode["Key"].asString();
	if(!argumentsNode["Value"].isNull())
		arguments_.value = argumentsNode["Value"].asString();
	auto metricsNode = value["Metrics"];
	if(!metricsNode["TotalTime"].isNull())
		metrics_.totalTime = std::stol(metricsNode["TotalTime"].asString());
	if(!metricsNode["RecordsIn"].isNull())
		metrics_.recordsIn = std::stol(metricsNode["RecordsIn"].asString());
	if(!metricsNode["RecordsOut"].isNull())
		metrics_.recordsOut = std::stol(metricsNode["RecordsOut"].asString());
	if(!metricsNode["RecordsError"].isNull())
		metrics_.recordsError = std::stol(metricsNode["RecordsError"].asString());
	if(!metricsNode["RecordsRate"].isNull())
		metrics_.recordsRate = metricsNode["RecordsRate"].asString();
	if(!metricsNode["Vcores"].isNull())
		metrics_.vcores = std::stol(metricsNode["Vcores"].asString());
	if(!metricsNode["MemSize"].isNull())
		metrics_.memSize = std::stol(metricsNode["MemSize"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["EtlJobId"].isNull())
		etlJobId_ = value["EtlJobId"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["TriggerUser"].isNull())
		triggerUser_ = value["TriggerUser"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());

}

std::string DescribeETLJobInstanceResult::getTriggerUser()const
{
	return triggerUser_;
}

DescribeETLJobInstanceResult::Metrics DescribeETLJobInstanceResult::getMetrics()const
{
	return metrics_;
}

long DescribeETLJobInstanceResult::getEndTime()const
{
	return endTime_;
}

DescribeETLJobInstanceResult::TriggerHistory DescribeETLJobInstanceResult::getTriggerHistory()const
{
	return triggerHistory_;
}

std::string DescribeETLJobInstanceResult::getInstanceStatus()const
{
	return instanceStatus_;
}

DescribeETLJobInstanceResult::Arguments DescribeETLJobInstanceResult::getArguments()const
{
	return arguments_;
}

long DescribeETLJobInstanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeETLJobInstanceResult::getId()const
{
	return id_;
}

std::vector<DescribeETLJobInstanceResult::FlowRelation> DescribeETLJobInstanceResult::getFlowRelationList()const
{
	return flowRelationList_;
}

std::vector<DescribeETLJobInstanceResult::StageInstance> DescribeETLJobInstanceResult::getStageInstanceList()const
{
	return stageInstanceList_;
}

std::string DescribeETLJobInstanceResult::getEtlJobId()const
{
	return etlJobId_;
}

