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

#include <alibabacloud/emr/model/ListFlowJobHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowJobHistoryResult::ListFlowJobHistoryResult() :
	ServiceResult()
{}

ListFlowJobHistoryResult::ListFlowJobHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowJobHistoryResult::~ListFlowJobHistoryResult()
{}

void ListFlowJobHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeInstancesNode = value["NodeInstances"]["NodeInstance"];
	for (auto valueNodeInstancesNodeInstance : allNodeInstancesNode)
	{
		NodeInstance nodeInstancesObject;
		if(!valueNodeInstancesNodeInstance["Id"].isNull())
			nodeInstancesObject.id = valueNodeInstancesNodeInstance["Id"].asString();
		if(!valueNodeInstancesNodeInstance["GmtCreate"].isNull())
			nodeInstancesObject.gmtCreate = std::stol(valueNodeInstancesNodeInstance["GmtCreate"].asString());
		if(!valueNodeInstancesNodeInstance["GmtModified"].isNull())
			nodeInstancesObject.gmtModified = std::stol(valueNodeInstancesNodeInstance["GmtModified"].asString());
		if(!valueNodeInstancesNodeInstance["Type"].isNull())
			nodeInstancesObject.type = valueNodeInstancesNodeInstance["Type"].asString();
		if(!valueNodeInstancesNodeInstance["Status"].isNull())
			nodeInstancesObject.status = valueNodeInstancesNodeInstance["Status"].asString();
		if(!valueNodeInstancesNodeInstance["JobId"].isNull())
			nodeInstancesObject.jobId = valueNodeInstancesNodeInstance["JobId"].asString();
		if(!valueNodeInstancesNodeInstance["JobName"].isNull())
			nodeInstancesObject.jobName = valueNodeInstancesNodeInstance["JobName"].asString();
		if(!valueNodeInstancesNodeInstance["JobType"].isNull())
			nodeInstancesObject.jobType = valueNodeInstancesNodeInstance["JobType"].asString();
		if(!valueNodeInstancesNodeInstance["JobParams"].isNull())
			nodeInstancesObject.jobParams = valueNodeInstancesNodeInstance["JobParams"].asString();
		if(!valueNodeInstancesNodeInstance["FailAct"].isNull())
			nodeInstancesObject.failAct = valueNodeInstancesNodeInstance["FailAct"].asString();
		if(!valueNodeInstancesNodeInstance["MaxRetry"].isNull())
			nodeInstancesObject.maxRetry = std::stoi(valueNodeInstancesNodeInstance["MaxRetry"].asString());
		if(!valueNodeInstancesNodeInstance["RetryInterval"].isNull())
			nodeInstancesObject.retryInterval = std::stol(valueNodeInstancesNodeInstance["RetryInterval"].asString());
		if(!valueNodeInstancesNodeInstance["NodeName"].isNull())
			nodeInstancesObject.nodeName = valueNodeInstancesNodeInstance["NodeName"].asString();
		if(!valueNodeInstancesNodeInstance["ClusterId"].isNull())
			nodeInstancesObject.clusterId = valueNodeInstancesNodeInstance["ClusterId"].asString();
		if(!valueNodeInstancesNodeInstance["HostName"].isNull())
			nodeInstancesObject.hostName = valueNodeInstancesNodeInstance["HostName"].asString();
		if(!valueNodeInstancesNodeInstance["ProjectId"].isNull())
			nodeInstancesObject.projectId = valueNodeInstancesNodeInstance["ProjectId"].asString();
		if(!valueNodeInstancesNodeInstance["StartTime"].isNull())
			nodeInstancesObject.startTime = std::stol(valueNodeInstancesNodeInstance["StartTime"].asString());
		if(!valueNodeInstancesNodeInstance["EndTime"].isNull())
			nodeInstancesObject.endTime = std::stol(valueNodeInstancesNodeInstance["EndTime"].asString());
		if(!valueNodeInstancesNodeInstance["pending"].isNull())
			nodeInstancesObject.pending = valueNodeInstancesNodeInstance["pending"].asString() == "true";
		if(!valueNodeInstancesNodeInstance["Retries"].isNull())
			nodeInstancesObject.retries = std::stoi(valueNodeInstancesNodeInstance["Retries"].asString());
		if(!valueNodeInstancesNodeInstance["ExternalId"].isNull())
			nodeInstancesObject.externalId = valueNodeInstancesNodeInstance["ExternalId"].asString();
		if(!valueNodeInstancesNodeInstance["ExternalStatus"].isNull())
			nodeInstancesObject.externalStatus = valueNodeInstancesNodeInstance["ExternalStatus"].asString();
		if(!valueNodeInstancesNodeInstance["ExternalInfo"].isNull())
			nodeInstancesObject.externalInfo = valueNodeInstancesNodeInstance["ExternalInfo"].asString();
		if(!valueNodeInstancesNodeInstance["ParamConf"].isNull())
			nodeInstancesObject.paramConf = valueNodeInstancesNodeInstance["ParamConf"].asString();
		if(!valueNodeInstancesNodeInstance["EnvConf"].isNull())
			nodeInstancesObject.envConf = valueNodeInstancesNodeInstance["EnvConf"].asString();
		if(!valueNodeInstancesNodeInstance["RunConf"].isNull())
			nodeInstancesObject.runConf = valueNodeInstancesNodeInstance["RunConf"].asString();
		nodeInstances_.push_back(nodeInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowJobHistoryResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowJobHistoryResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowJobHistoryResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowJobHistoryResult::NodeInstance> ListFlowJobHistoryResult::getNodeInstances()const
{
	return nodeInstances_;
}

