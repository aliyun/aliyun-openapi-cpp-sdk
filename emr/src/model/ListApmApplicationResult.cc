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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allApmAppInfoList = value["ApmAppInfoList"]["ApmAppInfo"];
	for (auto value : allApmAppInfoList)
	{
		ApmAppInfo apmAppInfoListObject;
		if(!value["ApplicationId"].isNull())
			apmAppInfoListObject.applicationId = value["ApplicationId"].asString();
		if(!value["ClusterBizId"].isNull())
			apmAppInfoListObject.clusterBizId = value["ClusterBizId"].asString();
		if(!value["ApplicationType"].isNull())
			apmAppInfoListObject.applicationType = value["ApplicationType"].asString();
		if(!value["Name"].isNull())
			apmAppInfoListObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			apmAppInfoListObject.state = value["State"].asString();
		if(!value["FinalStatus"].isNull())
			apmAppInfoListObject.finalStatus = value["FinalStatus"].asString();
		if(!value["Queue"].isNull())
			apmAppInfoListObject.queue = value["Queue"].asString();
		if(!value["User"].isNull())
			apmAppInfoListObject.user = value["User"].asString();
		if(!value["AllocatedVcore"].isNull())
			apmAppInfoListObject.allocatedVcore = std::stol(value["AllocatedVcore"].asString());
		if(!value["AllocatedMemory"].isNull())
			apmAppInfoListObject.allocatedMemory = std::stol(value["AllocatedMemory"].asString());
		if(!value["Progress"].isNull())
			apmAppInfoListObject.progress = std::stof(value["Progress"].asString());
		if(!value["VcoreSeconds"].isNull())
			apmAppInfoListObject.vcoreSeconds = std::stol(value["VcoreSeconds"].asString());
		if(!value["MemorySeconds"].isNull())
			apmAppInfoListObject.memorySeconds = std::stol(value["MemorySeconds"].asString());
		if(!value["StartTime"].isNull())
			apmAppInfoListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["SubmitTime"].isNull())
			apmAppInfoListObject.submitTime = std::stol(value["SubmitTime"].asString());
		if(!value["FinishedTime"].isNull())
			apmAppInfoListObject.finishedTime = std::stol(value["FinishedTime"].asString());
		if(!value["Duration"].isNull())
			apmAppInfoListObject.duration = std::stoi(value["Duration"].asString());
		if(!value["Diagnostics"].isNull())
			apmAppInfoListObject.diagnostics = value["Diagnostics"].asString();
		if(!value["ClusterUsagePercent"].isNull())
			apmAppInfoListObject.clusterUsagePercent = std::stof(value["ClusterUsagePercent"].asString());
		if(!value["QueueUsagePercent"].isNull())
			apmAppInfoListObject.queueUsagePercent = std::stof(value["QueueUsagePercent"].asString());
		if(!value["RunningContainers"].isNull())
			apmAppInfoListObject.runningContainers = std::stoi(value["RunningContainers"].asString());
		if(!value["RunningDuration"].isNull())
			apmAppInfoListObject.runningDuration = std::stoi(value["RunningDuration"].asString());
		if(!value["ResourceRequests"].isNull())
			apmAppInfoListObject.resourceRequests = value["ResourceRequests"].asString();
		if(!value["DiagnoseResult"].isNull())
			apmAppInfoListObject.diagnoseResult = value["DiagnoseResult"].asString();
		if(!value["DiagnoseCode"].isNull())
			apmAppInfoListObject.diagnoseCode = value["DiagnoseCode"].asString();
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

