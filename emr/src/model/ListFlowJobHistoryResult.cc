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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allNodeInstances = value["NodeInstances"]["NodeInstance"];
	for (auto value : allNodeInstances)
	{
		NodeInstance nodeInstancesObject;
		if(!value["Id"].isNull())
			nodeInstancesObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			nodeInstancesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			nodeInstancesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Type"].isNull())
			nodeInstancesObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			nodeInstancesObject.status = value["Status"].asString();
		if(!value["JobId"].isNull())
			nodeInstancesObject.jobId = value["JobId"].asString();
		if(!value["JobName"].isNull())
			nodeInstancesObject.jobName = value["JobName"].asString();
		if(!value["JobType"].isNull())
			nodeInstancesObject.jobType = value["JobType"].asString();
		if(!value["JobParams"].isNull())
			nodeInstancesObject.jobParams = value["JobParams"].asString();
		if(!value["FailAct"].isNull())
			nodeInstancesObject.failAct = value["FailAct"].asString();
		if(!value["MaxRetry"].isNull())
			nodeInstancesObject.maxRetry = std::stoi(value["MaxRetry"].asString());
		if(!value["RetryInterval"].isNull())
			nodeInstancesObject.retryInterval = std::stol(value["RetryInterval"].asString());
		if(!value["NodeName"].isNull())
			nodeInstancesObject.nodeName = value["NodeName"].asString();
		if(!value["ClusterId"].isNull())
			nodeInstancesObject.clusterId = value["ClusterId"].asString();
		if(!value["HostName"].isNull())
			nodeInstancesObject.hostName = value["HostName"].asString();
		if(!value["ProjectId"].isNull())
			nodeInstancesObject.projectId = value["ProjectId"].asString();
		if(!value["StartTime"].isNull())
			nodeInstancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			nodeInstancesObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["pending"].isNull())
			nodeInstancesObject.pending = value["pending"].asString() == "true";
		if(!value["Retries"].isNull())
			nodeInstancesObject.retries = std::stoi(value["Retries"].asString());
		if(!value["ExternalId"].isNull())
			nodeInstancesObject.externalId = value["ExternalId"].asString();
		if(!value["ExternalStatus"].isNull())
			nodeInstancesObject.externalStatus = value["ExternalStatus"].asString();
		if(!value["ExternalInfo"].isNull())
			nodeInstancesObject.externalInfo = value["ExternalInfo"].asString();
		if(!value["ParamConf"].isNull())
			nodeInstancesObject.paramConf = value["ParamConf"].asString();
		if(!value["EnvConf"].isNull())
			nodeInstancesObject.envConf = value["EnvConf"].asString();
		if(!value["RunConf"].isNull())
			nodeInstancesObject.runConf = value["RunConf"].asString();
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

