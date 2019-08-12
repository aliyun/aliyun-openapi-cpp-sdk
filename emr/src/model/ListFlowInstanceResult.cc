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

#include <alibabacloud/emr/model/ListFlowInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowInstanceResult::ListFlowInstanceResult() :
	ServiceResult()
{}

ListFlowInstanceResult::ListFlowInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowInstanceResult::~ListFlowInstanceResult()
{}

void ListFlowInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFlowInstances = value["FlowInstances"]["FlowInstance"];
	for (auto value : allFlowInstances)
	{
		FlowInstance flowInstancesObject;
		if(!value["Id"].isNull())
			flowInstancesObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			flowInstancesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			flowInstancesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["FlowId"].isNull())
			flowInstancesObject.flowId = value["FlowId"].asString();
		if(!value["FlowName"].isNull())
			flowInstancesObject.flowName = value["FlowName"].asString();
		if(!value["ProjectId"].isNull())
			flowInstancesObject.projectId = value["ProjectId"].asString();
		if(!value["Status"].isNull())
			flowInstancesObject.status = value["Status"].asString();
		if(!value["ClusterId"].isNull())
			flowInstancesObject.clusterId = value["ClusterId"].asString();
		if(!value["Owner"].isNull())
			flowInstancesObject.owner = value["Owner"].asString();
		if(!value["StartTime"].isNull())
			flowInstancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			flowInstancesObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Duration"].isNull())
			flowInstancesObject.duration = std::stol(value["Duration"].asString());
		if(!value["HasNodeFailed"].isNull())
			flowInstancesObject.hasNodeFailed = value["HasNodeFailed"].asString() == "true";
		flowInstances_.push_back(flowInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListFlowInstanceResult::FlowInstance> ListFlowInstanceResult::getFlowInstances()const
{
	return flowInstances_;
}

int ListFlowInstanceResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowInstanceResult::getTotal()const
{
	return total_;
}

