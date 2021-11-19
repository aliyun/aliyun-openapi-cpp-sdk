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
		if(!valueSiteMonitorsSiteMonitor["EndTime"].isNull())
			siteMonitorsObject.endTime = valueSiteMonitorsSiteMonitor["EndTime"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskType"].isNull())
			siteMonitorsObject.taskType = valueSiteMonitorsSiteMonitor["TaskType"].asString();
		if(!valueSiteMonitorsSiteMonitor["UpdateTime"].isNull())
			siteMonitorsObject.updateTime = valueSiteMonitorsSiteMonitor["UpdateTime"].asString();
		if(!valueSiteMonitorsSiteMonitor["Interval"].isNull())
			siteMonitorsObject.interval = valueSiteMonitorsSiteMonitor["Interval"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskState"].isNull())
			siteMonitorsObject.taskState = valueSiteMonitorsSiteMonitor["TaskState"].asString();
		if(!valueSiteMonitorsSiteMonitor["CreateTime"].isNull())
			siteMonitorsObject.createTime = valueSiteMonitorsSiteMonitor["CreateTime"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskName"].isNull())
			siteMonitorsObject.taskName = valueSiteMonitorsSiteMonitor["TaskName"].asString();
		if(!valueSiteMonitorsSiteMonitor["Address"].isNull())
			siteMonitorsObject.address = valueSiteMonitorsSiteMonitor["Address"].asString();
		if(!valueSiteMonitorsSiteMonitor["TaskId"].isNull())
			siteMonitorsObject.taskId = valueSiteMonitorsSiteMonitor["TaskId"].asString();
		auto optionsJsonNode = value["OptionsJson"];
		if(!optionsJsonNode["password"].isNull())
			siteMonitorsObject.optionsJson.password = optionsJsonNode["password"].asString();
		if(!optionsJsonNode["request_format"].isNull())
			siteMonitorsObject.optionsJson.request_format = optionsJsonNode["request_format"].asString();
		if(!optionsJsonNode["expect_value"].isNull())
			siteMonitorsObject.optionsJson.expect_value = optionsJsonNode["expect_value"].asString();
		if(!optionsJsonNode["response_content"].isNull())
			siteMonitorsObject.optionsJson.response_content = optionsJsonNode["response_content"].asString();
		if(!optionsJsonNode["failure_rate"].isNull())
			siteMonitorsObject.optionsJson.failure_rate = std::stof(optionsJsonNode["failure_rate"].asString());
		if(!optionsJsonNode["time_out"].isNull())
			siteMonitorsObject.optionsJson.time_out = std::stol(optionsJsonNode["time_out"].asString());
		if(!optionsJsonNode["header"].isNull())
			siteMonitorsObject.optionsJson.header = optionsJsonNode["header"].asString();
		if(!optionsJsonNode["cookie"].isNull())
			siteMonitorsObject.optionsJson.cookie = optionsJsonNode["cookie"].asString();
		if(!optionsJsonNode["port"].isNull())
			siteMonitorsObject.optionsJson.port = std::stoi(optionsJsonNode["port"].asString());
		if(!optionsJsonNode["ping_num"].isNull())
			siteMonitorsObject.optionsJson.ping_num = std::stoi(optionsJsonNode["ping_num"].asString());
		if(!optionsJsonNode["authentication"].isNull())
			siteMonitorsObject.optionsJson.authentication = std::stoi(optionsJsonNode["authentication"].asString());
		if(!optionsJsonNode["http_method"].isNull())
			siteMonitorsObject.optionsJson.http_method = optionsJsonNode["http_method"].asString();
		if(!optionsJsonNode["match_rule"].isNull())
			siteMonitorsObject.optionsJson.match_rule = std::stoi(optionsJsonNode["match_rule"].asString());
		if(!optionsJsonNode["dns_match_rule"].isNull())
			siteMonitorsObject.optionsJson.dns_match_rule = optionsJsonNode["dns_match_rule"].asString();
		if(!optionsJsonNode["request_content"].isNull())
			siteMonitorsObject.optionsJson.request_content = optionsJsonNode["request_content"].asString();
		if(!optionsJsonNode["username"].isNull())
			siteMonitorsObject.optionsJson.username = optionsJsonNode["username"].asString();
		if(!optionsJsonNode["traceroute"].isNull())
			siteMonitorsObject.optionsJson.traceroute = std::stol(optionsJsonNode["traceroute"].asString());
		if(!optionsJsonNode["response_format"].isNull())
			siteMonitorsObject.optionsJson.response_format = optionsJsonNode["response_format"].asString();
		if(!optionsJsonNode["dns_type"].isNull())
			siteMonitorsObject.optionsJson.dns_type = optionsJsonNode["dns_type"].asString();
		if(!optionsJsonNode["group_id"].isNull())
			siteMonitorsObject.optionsJson.group_id = optionsJsonNode["group_id"].asString();
		if(!optionsJsonNode["dns_server"].isNull())
			siteMonitorsObject.optionsJson.dns_server = optionsJsonNode["dns_server"].asString();
		if(!optionsJsonNode["enable_operator_dns"].isNull())
			siteMonitorsObject.optionsJson.enable_operator_dns = optionsJsonNode["enable_operator_dns"].asString() == "true";
		if(!optionsJsonNode["attempts"].isNull())
			siteMonitorsObject.optionsJson.attempts = std::stol(optionsJsonNode["attempts"].asString());
		if(!optionsJsonNode["protocol"].isNull())
			siteMonitorsObject.optionsJson.protocol = optionsJsonNode["protocol"].asString();
		siteMonitors_.push_back(siteMonitorsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
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

