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

#include <alibabacloud/quickbi-public/model/QueryComponentPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryComponentPerformanceResult::QueryComponentPerformanceResult() :
	ServiceResult()
{}

QueryComponentPerformanceResult::QueryComponentPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryComponentPerformanceResult::~QueryComponentPerformanceResult()
{}

void QueryComponentPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["CacheCostTimeAvg"].isNull())
			resultObject.cacheCostTimeAvg = valueResultData["CacheCostTimeAvg"].asString();
		if(!valueResultData["CacheQueryCount"].isNull())
			resultObject.cacheQueryCount = std::stoi(valueResultData["CacheQueryCount"].asString());
		if(!valueResultData["ComponentId"].isNull())
			resultObject.componentId = valueResultData["ComponentId"].asString();
		if(!valueResultData["ComponentName"].isNull())
			resultObject.componentName = valueResultData["ComponentName"].asString();
		if(!valueResultData["CostTimeAvg"].isNull())
			resultObject.costTimeAvg = valueResultData["CostTimeAvg"].asString();
		if(!valueResultData["QueryCount"].isNull())
			resultObject.queryCount = std::stoi(valueResultData["QueryCount"].asString());
		if(!valueResultData["QueryCountAvg"].isNull())
			resultObject.queryCountAvg = valueResultData["QueryCountAvg"].asString();
		if(!valueResultData["QueryOverFivePercentNum"].isNull())
			resultObject.queryOverFivePercentNum = valueResultData["QueryOverFivePercentNum"].asString();
		if(!valueResultData["QueryOverFiveSecPercent"].isNull())
			resultObject.queryOverFiveSecPercent = valueResultData["QueryOverFiveSecPercent"].asString();
		if(!valueResultData["QueryOverTenSecPercent"].isNull())
			resultObject.queryOverTenSecPercent = valueResultData["QueryOverTenSecPercent"].asString();
		if(!valueResultData["QueryOverTenSecPercentNum"].isNull())
			resultObject.queryOverTenSecPercentNum = valueResultData["QueryOverTenSecPercentNum"].asString();
		if(!valueResultData["QueryTimeoutCount"].isNull())
			resultObject.queryTimeoutCount = std::stoi(valueResultData["QueryTimeoutCount"].asString());
		if(!valueResultData["QueryTimeoutCountPercent"].isNull())
			resultObject.queryTimeoutCountPercent = valueResultData["QueryTimeoutCountPercent"].asString();
		if(!valueResultData["QuickIndexCostTimeAvg"].isNull())
			resultObject.quickIndexCostTimeAvg = valueResultData["QuickIndexCostTimeAvg"].asString();
		if(!valueResultData["QuickIndexQueryCount"].isNull())
			resultObject.quickIndexQueryCount = std::stoi(valueResultData["QuickIndexQueryCount"].asString());
		if(!valueResultData["RepeatQueryPercent"].isNull())
			resultObject.repeatQueryPercent = valueResultData["RepeatQueryPercent"].asString();
		if(!valueResultData["RepeatQueryPercentNum"].isNull())
			resultObject.repeatQueryPercentNum = valueResultData["RepeatQueryPercentNum"].asString();
		if(!valueResultData["RepeatSqlQueryCount"].isNull())
			resultObject.repeatSqlQueryCount = std::stoi(valueResultData["RepeatSqlQueryCount"].asString());
		if(!valueResultData["RepeatSqlQueryPercent"].isNull())
			resultObject.repeatSqlQueryPercent = valueResultData["RepeatSqlQueryPercent"].asString();
		if(!valueResultData["ReportId"].isNull())
			resultObject.reportId = valueResultData["ReportId"].asString();
		if(!valueResultData["ReportName"].isNull())
			resultObject.reportName = valueResultData["ReportName"].asString();
		if(!valueResultData["ReportType"].isNull())
			resultObject.reportType = valueResultData["ReportType"].asString();
		if(!valueResultData["WorkspaceId"].isNull())
			resultObject.workspaceId = valueResultData["WorkspaceId"].asString();
		if(!valueResultData["WorkspaceName"].isNull())
			resultObject.workspaceName = valueResultData["WorkspaceName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryComponentPerformanceResult::getSuccess()const
{
	return success_;
}

std::vector<QueryComponentPerformanceResult::Data> QueryComponentPerformanceResult::getResult()const
{
	return result_;
}

