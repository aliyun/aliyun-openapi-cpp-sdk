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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allProfilings = value["Profilings"]["ProfilingInfo"];
	for (auto value : allProfilings)
	{
		ProfilingInfo profilingsObject;
		if(!value["ProfilingId"].isNull())
			profilingsObject.profilingId = value["ProfilingId"].asString();
		if(!value["InstanceId"].isNull())
			profilingsObject.instanceId = value["InstanceId"].asString();
		if(!value["HostName"].isNull())
			profilingsObject.hostName = value["HostName"].asString();
		if(!value["Pid"].isNull())
			profilingsObject.pid = std::stoi(value["Pid"].asString());
		if(!value["Duration"].isNull())
			profilingsObject.duration = std::stoi(value["Duration"].asString());
		if(!value["Freq"].isNull())
			profilingsObject.freq = std::stoi(value["Freq"].asString());
		if(!value["TriggerTime"].isNull())
			profilingsObject.triggerTime = value["TriggerTime"].asString();
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

