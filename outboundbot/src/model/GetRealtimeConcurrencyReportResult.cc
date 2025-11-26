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

#include <alibabacloud/outboundbot/model/GetRealtimeConcurrencyReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetRealtimeConcurrencyReportResult::GetRealtimeConcurrencyReportResult() :
	ServiceResult()
{}

GetRealtimeConcurrencyReportResult::GetRealtimeConcurrencyReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRealtimeConcurrencyReportResult::~GetRealtimeConcurrencyReportResult()
{}

void GetRealtimeConcurrencyReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto reportsNode = value["Reports"];
	if(!reportsNode["TotalCount"].isNull())
		reports_.totalCount = std::stoi(reportsNode["TotalCount"].asString());
	if(!reportsNode["PageNumber"].isNull())
		reports_.pageNumber = std::stoi(reportsNode["PageNumber"].asString());
	if(!reportsNode["PageSize"].isNull())
		reports_.pageSize = std::stoi(reportsNode["PageSize"].asString());
	auto allListNode = reportsNode["List"]["Item"];
	for (auto reportsNodeListItem : allListNode)
	{
		Reports::Item itemObject;
		if(!reportsNodeListItem["ReportDate"].isNull())
			itemObject.reportDate = std::stol(reportsNodeListItem["ReportDate"].asString());
		if(!reportsNodeListItem["InstanceId"].isNull())
			itemObject.instanceId = reportsNodeListItem["InstanceId"].asString();
		if(!reportsNodeListItem["InstanceName"].isNull())
			itemObject.instanceName = reportsNodeListItem["InstanceName"].asString();
		if(!reportsNodeListItem["JobGroupId"].isNull())
			itemObject.jobGroupId = reportsNodeListItem["JobGroupId"].asString();
		if(!reportsNodeListItem["JobGroupName"].isNull())
			itemObject.jobGroupName = reportsNodeListItem["JobGroupName"].asString();
		if(!reportsNodeListItem["OccupiedConcurrencyCount"].isNull())
			itemObject.occupiedConcurrencyCount = std::stol(reportsNodeListItem["OccupiedConcurrencyCount"].asString());
		if(!reportsNodeListItem["MaxConcurrencyLimit"].isNull())
			itemObject.maxConcurrencyLimit = std::stol(reportsNodeListItem["MaxConcurrencyLimit"].asString());
		if(!reportsNodeListItem["MinConcurrencyLimit"].isNull())
			itemObject.minConcurrencyLimit = std::stol(reportsNodeListItem["MinConcurrencyLimit"].asString());
		reports_.list.push_back(itemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ReportDate"].isNull())
		reportDate_ = std::stol(value["ReportDate"].asString());

}

std::string GetRealtimeConcurrencyReportResult::getMessage()const
{
	return message_;
}

int GetRealtimeConcurrencyReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetRealtimeConcurrencyReportResult::Reports GetRealtimeConcurrencyReportResult::getReports()const
{
	return reports_;
}

long GetRealtimeConcurrencyReportResult::getReportDate()const
{
	return reportDate_;
}

std::string GetRealtimeConcurrencyReportResult::getCode()const
{
	return code_;
}

bool GetRealtimeConcurrencyReportResult::getSuccess()const
{
	return success_;
}

