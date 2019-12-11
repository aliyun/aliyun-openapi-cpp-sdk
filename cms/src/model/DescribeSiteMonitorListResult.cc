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

#include <alibabacloud/cms/model/DescribeSiteMonitorListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSiteMonitorListResult::DescribeSiteMonitorListResult() :
	ServiceResult()
{}

DescribeSiteMonitorListResult::DescribeSiteMonitorListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSiteMonitorListResult::~DescribeSiteMonitorListResult()
{}

void DescribeSiteMonitorListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSiteMonitorsNode = value["SiteMonitors"]["SiteMonitor"];
	for (auto valueSiteMonitorsSiteMonitor : allSiteMonitorsNode)
	{
		SiteMonitor siteMonitorsObject;
		if(!valueSiteMonitorsSiteMonitor["TaskId"].isNull())
			siteMonitorsObject.taskId = valueSiteMonitorsSiteMonitor["TaskId"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskType"].isNull())
			siteMonitorsObject.taskType = valueSiteMonitorsSiteMonitor["TaskType"].asString();
		if(!valueSiteMonitorsSiteMonitor["Address"].isNull())
			siteMonitorsObject.address = valueSiteMonitorsSiteMonitor["Address"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskState"].isNull())
			siteMonitorsObject.taskState = valueSiteMonitorsSiteMonitor["TaskState"].asString();
		if(!valueSiteMonitorsSiteMonitor["CreateTime"].isNull())
			siteMonitorsObject.createTime = valueSiteMonitorsSiteMonitor["CreateTime"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskName"].isNull())
			siteMonitorsObject.taskName = valueSiteMonitorsSiteMonitor["TaskName"].asString();
		if(!valueSiteMonitorsSiteMonitor["Interval"].isNull())
			siteMonitorsObject.interval = valueSiteMonitorsSiteMonitor["Interval"].asString();
		if(!valueSiteMonitorsSiteMonitor["UpdateTime"].isNull())
			siteMonitorsObject.updateTime = valueSiteMonitorsSiteMonitor["UpdateTime"].asString();
		if(!valueSiteMonitorsSiteMonitor["OptionsJson"].isNull())
			siteMonitorsObject.optionsJson = valueSiteMonitorsSiteMonitor["OptionsJson"].asString();
		siteMonitors_.push_back(siteMonitorsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSiteMonitorListResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeSiteMonitorListResult::getMessage()const
{
	return message_;
}

int DescribeSiteMonitorListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSiteMonitorListResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSiteMonitorListResult::getCode()const
{
	return code_;
}

std::vector<DescribeSiteMonitorListResult::SiteMonitor> DescribeSiteMonitorListResult::getSiteMonitors()const
{
	return siteMonitors_;
}

std::string DescribeSiteMonitorListResult::getSuccess()const
{
	return success_;
}

