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

#include <alibabacloud/emr/model/ListApmApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListApmApplicationResult::ListApmApplicationResult() :
	ServiceResult()
{}

ListApmApplicationResult::ListApmApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApmApplicationResult::~ListApmApplicationResult()
{}

void ListApmApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApmAppInfoListNode = value["ApmAppInfoList"]["ApmAppInfo"];
	for (auto valueApmAppInfoListApmAppInfo : allApmAppInfoListNode)
	{
		ApmAppInfo apmAppInfoListObject;
		if(!valueApmAppInfoListApmAppInfo["ApplicationId"].isNull())
			apmAppInfoListObject.applicationId = valueApmAppInfoListApmAppInfo["ApplicationId"].asString();
		if(!valueApmAppInfoListApmAppInfo["ClusterBizId"].isNull())
			apmAppInfoListObject.clusterBizId = valueApmAppInfoListApmAppInfo["ClusterBizId"].asString();
		if(!valueApmAppInfoListApmAppInfo["ApplicationType"].isNull())
			apmAppInfoListObject.applicationType = valueApmAppInfoListApmAppInfo["ApplicationType"].asString();
		if(!valueApmAppInfoListApmAppInfo["Name"].isNull())
			apmAppInfoListObject.name = valueApmAppInfoListApmAppInfo["Name"].asString();
		if(!valueApmAppInfoListApmAppInfo["State"].isNull())
			apmAppInfoListObject.state = valueApmAppInfoListApmAppInfo["State"].asString();
		if(!valueApmAppInfoListApmAppInfo["FinalStatus"].isNull())
			apmAppInfoListObject.finalStatus = valueApmAppInfoListApmAppInfo["FinalStatus"].asString();
		if(!valueApmAppInfoListApmAppInfo["Queue"].isNull())
			apmAppInfoListObject.queue = valueApmAppInfoListApmAppInfo["Queue"].asString();
		if(!valueApmAppInfoListApmAppInfo["User"].isNull())
			apmAppInfoListObject.user = valueApmAppInfoListApmAppInfo["User"].asString();
		if(!valueApmAppInfoListApmAppInfo["AllocatedVcore"].isNull())
			apmAppInfoListObject.allocatedVcore = std::stol(valueApmAppInfoListApmAppInfo["AllocatedVcore"].asString());
		if(!valueApmAppInfoListApmAppInfo["AllocatedMemory"].isNull())
			apmAppInfoListObject.allocatedMemory = std::stol(valueApmAppInfoListApmAppInfo["AllocatedMemory"].asString());
		if(!valueApmAppInfoListApmAppInfo["Progress"].isNull())
			apmAppInfoListObject.progress = std::stof(valueApmAppInfoListApmAppInfo["Progress"].asString());
		if(!valueApmAppInfoListApmAppInfo["VcoreSeconds"].isNull())
			apmAppInfoListObject.vcoreSeconds = std::stol(valueApmAppInfoListApmAppInfo["VcoreSeconds"].asString());
		if(!valueApmAppInfoListApmAppInfo["MemorySeconds"].isNull())
			apmAppInfoListObject.memorySeconds = std::stol(valueApmAppInfoListApmAppInfo["MemorySeconds"].asString());
		if(!valueApmAppInfoListApmAppInfo["StartTime"].isNull())
			apmAppInfoListObject.startTime = std::stol(valueApmAppInfoListApmAppInfo["StartTime"].asString());
		if(!valueApmAppInfoListApmAppInfo["SubmitTime"].isNull())
			apmAppInfoListObject.submitTime = std::stol(valueApmAppInfoListApmAppInfo["SubmitTime"].asString());
		if(!valueApmAppInfoListApmAppInfo["FinishedTime"].isNull())
			apmAppInfoListObject.finishedTime = std::stol(valueApmAppInfoListApmAppInfo["FinishedTime"].asString());
		if(!valueApmAppInfoListApmAppInfo["Duration"].isNull())
			apmAppInfoListObject.duration = std::stoi(valueApmAppInfoListApmAppInfo["Duration"].asString());
		if(!valueApmAppInfoListApmAppInfo["Diagnostics"].isNull())
			apmAppInfoListObject.diagnostics = valueApmAppInfoListApmAppInfo["Diagnostics"].asString();
		if(!valueApmAppInfoListApmAppInfo["ClusterUsagePercent"].isNull())
			apmAppInfoListObject.clusterUsagePercent = std::stof(valueApmAppInfoListApmAppInfo["ClusterUsagePercent"].asString());
		if(!valueApmAppInfoListApmAppInfo["QueueUsagePercent"].isNull())
			apmAppInfoListObject.queueUsagePercent = std::stof(valueApmAppInfoListApmAppInfo["QueueUsagePercent"].asString());
		if(!valueApmAppInfoListApmAppInfo["RunningContainers"].isNull())
			apmAppInfoListObject.runningContainers = std::stoi(valueApmAppInfoListApmAppInfo["RunningContainers"].asString());
		if(!valueApmAppInfoListApmAppInfo["RunningDuration"].isNull())
			apmAppInfoListObject.runningDuration = std::stoi(valueApmAppInfoListApmAppInfo["RunningDuration"].asString());
		if(!valueApmAppInfoListApmAppInfo["ResourceRequests"].isNull())
			apmAppInfoListObject.resourceRequests = valueApmAppInfoListApmAppInfo["ResourceRequests"].asString();
		if(!valueApmAppInfoListApmAppInfo["DiagnoseResult"].isNull())
			apmAppInfoListObject.diagnoseResult = valueApmAppInfoListApmAppInfo["DiagnoseResult"].asString();
		if(!valueApmAppInfoListApmAppInfo["DiagnoseCode"].isNull())
			apmAppInfoListObject.diagnoseCode = valueApmAppInfoListApmAppInfo["DiagnoseCode"].asString();
		apmAppInfoList_.push_back(apmAppInfoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListApmApplicationResult::ApmAppInfo> ListApmApplicationResult::getApmAppInfoList()const
{
	return apmAppInfoList_;
}

int ListApmApplicationResult::getPageSize()const
{
	return pageSize_;
}

int ListApmApplicationResult::getPageNumber()const
{
	return pageNumber_;
}

int ListApmApplicationResult::getTotal()const
{
	return total_;
}

