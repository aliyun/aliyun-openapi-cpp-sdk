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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

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
			if(!value["StartTime"].isNull())
				stageInstanceListObject.startTime = std::stol(value["StartTime"].asString());
			if(!value["EndTime"].isNull())
				stageInstanceListObject.endTime = std::stol(value["EndTime"].asString());
			auto metrics1Node = value["Metrics"];
			if(!metrics1Node["TotalTime"].isNull())
				stageInstanceListObject.metrics1.totalTime = std::stol(metrics1Node["TotalTime"].asString());
			if(!metrics1Node["RecordsIn"].isNull())
				stageInstanceListObject.metrics1.recordsIn = std::stol(metrics1Node["RecordsIn"].asString());
			if(!metrics1Node["RecordsOut"].isNull())
				stageInstanceListObject.metrics1.recordsOut = std::stol(metrics1Node["RecordsOut"].asString());
			if(!metrics1Node["RecordsError"].isNull())
				stageInstanceListObject.metrics1.recordsError = std::stol(metrics1Node["RecordsError"].asString());
			if(!metrics1Node["RecordsRate"].isNull())
				stageInstanceListObject.metrics1.recordsRate = metrics1Node["RecordsRate"].asString();
			if(!metrics1Node["Vcores"].isNull())
				stageInstanceListObject.metrics1.vcores = std::stol(metrics1Node["Vcores"].asString());
			if(!metrics1Node["MemSize"].isNull())
				stageInstanceListObject.metrics1.memSize = std::stol(metrics1Node["MemSize"].asString());
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

