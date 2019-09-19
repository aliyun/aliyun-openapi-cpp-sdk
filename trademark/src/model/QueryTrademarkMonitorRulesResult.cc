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

#include <alibabacloud/trademark/model/QueryTrademarkMonitorRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTrademarkMonitorRulesResult::QueryTrademarkMonitorRulesResult() :
	ServiceResult()
{}

QueryTrademarkMonitorRulesResult::QueryTrademarkMonitorRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTrademarkMonitorRulesResult::~QueryTrademarkMonitorRulesResult()
{}

void QueryTrademarkMonitorRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TmMonitorRule"];
	for (auto valueDataTmMonitorRule : allDataNode)
	{
		TmMonitorRule dataObject;
		if(!valueDataTmMonitorRule["Id"].isNull())
			dataObject.id = valueDataTmMonitorRule["Id"].asString();
		if(!valueDataTmMonitorRule["UserId"].isNull())
			dataObject.userId = valueDataTmMonitorRule["UserId"].asString();
		if(!valueDataTmMonitorRule["RuleStatus"].isNull())
			dataObject.ruleStatus = valueDataTmMonitorRule["RuleStatus"].asString();
		if(!valueDataTmMonitorRule["RuleSource"].isNull())
			dataObject.ruleSource = valueDataTmMonitorRule["RuleSource"].asString();
		if(!valueDataTmMonitorRule["RuleName"].isNull())
			dataObject.ruleName = valueDataTmMonitorRule["RuleName"].asString();
		if(!valueDataTmMonitorRule["RuleType"].isNull())
			dataObject.ruleType = std::stoi(valueDataTmMonitorRule["RuleType"].asString());
		if(!valueDataTmMonitorRule["RuleKeyword"].isNull())
			dataObject.ruleKeyword = valueDataTmMonitorRule["RuleKeyword"].asString();
		if(!valueDataTmMonitorRule["RuleDetail"].isNull())
			dataObject.ruleDetail = valueDataTmMonitorRule["RuleDetail"].asString();
		if(!valueDataTmMonitorRule["NotifyUpdate"].isNull())
			dataObject.notifyUpdate = std::stoi(valueDataTmMonitorRule["NotifyUpdate"].asString());
		if(!valueDataTmMonitorRule["Version"].isNull())
			dataObject.version = std::stoi(valueDataTmMonitorRule["Version"].asString());
		if(!valueDataTmMonitorRule["StartTime"].isNull())
			dataObject.startTime = valueDataTmMonitorRule["StartTime"].asString();
		if(!valueDataTmMonitorRule["EndTime"].isNull())
			dataObject.endTime = valueDataTmMonitorRule["EndTime"].asString();
		if(!valueDataTmMonitorRule["LastRunTime"].isNull())
			dataObject.lastRunTime = valueDataTmMonitorRule["LastRunTime"].asString();
		if(!valueDataTmMonitorRule["LastFinishTime"].isNull())
			dataObject.lastFinishTime = valueDataTmMonitorRule["LastFinishTime"].asString();
		if(!valueDataTmMonitorRule["LastUpdateTime"].isNull())
			dataObject.lastUpdateTime = valueDataTmMonitorRule["LastUpdateTime"].asString();
		if(!valueDataTmMonitorRule["Env"].isNull())
			dataObject.env = valueDataTmMonitorRule["Env"].asString();
		if(!valueDataTmMonitorRule["RuleExtend"].isNull())
			dataObject.ruleExtend = valueDataTmMonitorRule["RuleExtend"].asString();
		if(!valueDataTmMonitorRule["CreateTime"].isNull())
			dataObject.createTime = valueDataTmMonitorRule["CreateTime"].asString();
		if(!valueDataTmMonitorRule["UpdateTime"].isNull())
			dataObject.updateTime = valueDataTmMonitorRule["UpdateTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool QueryTrademarkMonitorRulesResult::getPrePage()const
{
	return prePage_;
}

int QueryTrademarkMonitorRulesResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTrademarkMonitorRulesResult::getPageSize()const
{
	return pageSize_;
}

int QueryTrademarkMonitorRulesResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTrademarkMonitorRulesResult::TmMonitorRule> QueryTrademarkMonitorRulesResult::getData()const
{
	return data_;
}

int QueryTrademarkMonitorRulesResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryTrademarkMonitorRulesResult::getNextPage()const
{
	return nextPage_;
}

