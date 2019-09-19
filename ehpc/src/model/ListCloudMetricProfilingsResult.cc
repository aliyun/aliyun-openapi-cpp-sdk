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

#include <alibabacloud/ehpc/model/ListCloudMetricProfilingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListCloudMetricProfilingsResult::ListCloudMetricProfilingsResult() :
	ServiceResult()
{}

ListCloudMetricProfilingsResult::ListCloudMetricProfilingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCloudMetricProfilingsResult::~ListCloudMetricProfilingsResult()
{}

void ListCloudMetricProfilingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProfilingsNode = value["Profilings"]["ProfilingInfo"];
	for (auto valueProfilingsProfilingInfo : allProfilingsNode)
	{
		ProfilingInfo profilingsObject;
		if(!valueProfilingsProfilingInfo["ProfilingId"].isNull())
			profilingsObject.profilingId = valueProfilingsProfilingInfo["ProfilingId"].asString();
		if(!valueProfilingsProfilingInfo["InstanceId"].isNull())
			profilingsObject.instanceId = valueProfilingsProfilingInfo["InstanceId"].asString();
		if(!valueProfilingsProfilingInfo["HostName"].isNull())
			profilingsObject.hostName = valueProfilingsProfilingInfo["HostName"].asString();
		if(!valueProfilingsProfilingInfo["Pid"].isNull())
			profilingsObject.pid = std::stoi(valueProfilingsProfilingInfo["Pid"].asString());
		if(!valueProfilingsProfilingInfo["Duration"].isNull())
			profilingsObject.duration = std::stoi(valueProfilingsProfilingInfo["Duration"].asString());
		if(!valueProfilingsProfilingInfo["Freq"].isNull())
			profilingsObject.freq = std::stoi(valueProfilingsProfilingInfo["Freq"].asString());
		if(!valueProfilingsProfilingInfo["TriggerTime"].isNull())
			profilingsObject.triggerTime = valueProfilingsProfilingInfo["TriggerTime"].asString();
		profilings_.push_back(profilingsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListCloudMetricProfilingsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCloudMetricProfilingsResult::getPageSize()const
{
	return pageSize_;
}

int ListCloudMetricProfilingsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCloudMetricProfilingsResult::ProfilingInfo> ListCloudMetricProfilingsResult::getProfilings()const
{
	return profilings_;
}

