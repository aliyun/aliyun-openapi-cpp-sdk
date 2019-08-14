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

#include <alibabacloud/emr/model/ListETLJobInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListETLJobInstanceResult::ListETLJobInstanceResult() :
	ServiceResult()
{}

ListETLJobInstanceResult::ListETLJobInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListETLJobInstanceResult::~ListETLJobInstanceResult()
{}

void ListETLJobInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstanceList = value["InstanceList"]["Instance"];
	for (auto value : allInstanceList)
	{
		Instance instanceListObject;
		if(!value["Id"].isNull())
			instanceListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			instanceListObject.name = value["Name"].asString();
		if(!value["EtlJobId"].isNull())
			instanceListObject.etlJobId = value["EtlJobId"].asString();
		if(!value["InstanceStatus"].isNull())
			instanceListObject.instanceStatus = value["InstanceStatus"].asString();
		if(!value["TriggerType"].isNull())
			instanceListObject.triggerType = value["TriggerType"].asString();
		if(!value["TriggerUser"].isNull())
			instanceListObject.triggerUser = value["TriggerUser"].asString();
		if(!value["StartTime"].isNull())
			instanceListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			instanceListObject.endTime = std::stol(value["EndTime"].asString());
		auto allFlowRelationList = value["FlowRelationList"]["FlowRelation"];
		for (auto value : allFlowRelationList)
		{
			Instance::FlowRelation flowRelationListObject;
			if(!value["FlowJobId"].isNull())
				flowRelationListObject.flowJobId = value["FlowJobId"].asString();
			if(!value["FlowJobInstanceId"].isNull())
				flowRelationListObject.flowJobInstanceId = value["FlowJobInstanceId"].asString();
			instanceListObject.flowRelationList.push_back(flowRelationListObject);
		}
		auto allStageInstanceList = value["StageInstanceList"]["StageInstance"];
		for (auto value : allStageInstanceList)
		{
			Instance::StageInstance stageInstanceListObject;
			if(!value["Id"].isNull())
				stageInstanceListObject.id = value["Id"].asString();
			if(!value["Name"].isNull())
				stageInstanceListObject.name = value["Name"].asString();
			if(!value["StageStartTime"].isNull())
				stageInstanceListObject.stageStartTime = std::stol(value["StageStartTime"].asString());
			if(!value["StageEndTime"].isNull())
				stageInstanceListObject.stageEndTime = std::stol(value["StageEndTime"].asString());
			instanceListObject.stageInstanceList.push_back(stageInstanceListObject);
		}
		auto argumentsNode = value["Arguments"];
		if(!argumentsNode["Key"].isNull())
			instanceListObject.arguments.key = argumentsNode["Key"].asString();
		if(!argumentsNode["Value"].isNull())
			instanceListObject.arguments.value = argumentsNode["Value"].asString();
		auto metricsNode = value["Metrics"];
		if(!metricsNode["TotalTime"].isNull())
			instanceListObject.metrics.totalTime = std::stol(metricsNode["TotalTime"].asString());
		if(!metricsNode["RecordsIn"].isNull())
			instanceListObject.metrics.recordsIn = std::stol(metricsNode["RecordsIn"].asString());
		if(!metricsNode["RecordsOut"].isNull())
			instanceListObject.metrics.recordsOut = std::stol(metricsNode["RecordsOut"].asString());
		if(!metricsNode["RecordsError"].isNull())
			instanceListObject.metrics.recordsError = std::stol(metricsNode["RecordsError"].asString());
		if(!metricsNode["RecordsRate"].isNull())
			instanceListObject.metrics.recordsRate = metricsNode["RecordsRate"].asString();
		if(!metricsNode["Vcores"].isNull())
			instanceListObject.metrics.vcores = std::stol(metricsNode["Vcores"].asString());
		if(!metricsNode["MemSize"].isNull())
			instanceListObject.metrics.memSize = std::stol(metricsNode["MemSize"].asString());
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListETLJobInstanceResult::getPageSize()const
{
	return pageSize_;
}

int ListETLJobInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

int ListETLJobInstanceResult::getTotal()const
{
	return total_;
}

std::vector<ListETLJobInstanceResult::Instance> ListETLJobInstanceResult::getInstanceList()const
{
	return instanceList_;
}

