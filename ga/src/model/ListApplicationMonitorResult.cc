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

#include <alibabacloud/ga/model/ListApplicationMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListApplicationMonitorResult::ListApplicationMonitorResult() :
	ServiceResult()
{}

ListApplicationMonitorResult::ListApplicationMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationMonitorResult::~ListApplicationMonitorResult()
{}

void ListApplicationMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationMonitorsNode = value["ApplicationMonitors"]["ApplicationMonitor"];
	for (auto valueApplicationMonitorsApplicationMonitor : allApplicationMonitorsNode)
	{
		ApplicationMonitor applicationMonitorsObject;
		if(!valueApplicationMonitorsApplicationMonitor["AcceleratorId"].isNull())
			applicationMonitorsObject.acceleratorId = valueApplicationMonitorsApplicationMonitor["AcceleratorId"].asString();
		if(!valueApplicationMonitorsApplicationMonitor["ListenerId"].isNull())
			applicationMonitorsObject.listenerId = valueApplicationMonitorsApplicationMonitor["ListenerId"].asString();
		if(!valueApplicationMonitorsApplicationMonitor["TaskId"].isNull())
			applicationMonitorsObject.taskId = valueApplicationMonitorsApplicationMonitor["TaskId"].asString();
		if(!valueApplicationMonitorsApplicationMonitor["TaskName"].isNull())
			applicationMonitorsObject.taskName = valueApplicationMonitorsApplicationMonitor["TaskName"].asString();
		if(!valueApplicationMonitorsApplicationMonitor["Address"].isNull())
			applicationMonitorsObject.address = valueApplicationMonitorsApplicationMonitor["Address"].asString();
		if(!valueApplicationMonitorsApplicationMonitor["OptionsJson"].isNull())
			applicationMonitorsObject.optionsJson = valueApplicationMonitorsApplicationMonitor["OptionsJson"].asString();
		if(!valueApplicationMonitorsApplicationMonitor["DetectEnable"].isNull())
			applicationMonitorsObject.detectEnable = valueApplicationMonitorsApplicationMonitor["DetectEnable"].asString() == "true";
		if(!valueApplicationMonitorsApplicationMonitor["DetectThreshold"].isNull())
			applicationMonitorsObject.detectThreshold = std::stoi(valueApplicationMonitorsApplicationMonitor["DetectThreshold"].asString());
		if(!valueApplicationMonitorsApplicationMonitor["DetectTimes"].isNull())
			applicationMonitorsObject.detectTimes = std::stoi(valueApplicationMonitorsApplicationMonitor["DetectTimes"].asString());
		if(!valueApplicationMonitorsApplicationMonitor["SilenceTime"].isNull())
			applicationMonitorsObject.silenceTime = std::stoi(valueApplicationMonitorsApplicationMonitor["SilenceTime"].asString());
		if(!valueApplicationMonitorsApplicationMonitor["State"].isNull())
			applicationMonitorsObject.state = valueApplicationMonitorsApplicationMonitor["State"].asString();
		applicationMonitors_.push_back(applicationMonitorsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListApplicationMonitorResult::getTotalCount()const
{
	return totalCount_;
}

int ListApplicationMonitorResult::getPageSize()const
{
	return pageSize_;
}

int ListApplicationMonitorResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListApplicationMonitorResult::ApplicationMonitor> ListApplicationMonitorResult::getApplicationMonitors()const
{
	return applicationMonitors_;
}

