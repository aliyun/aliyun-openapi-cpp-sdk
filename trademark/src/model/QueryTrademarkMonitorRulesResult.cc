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
	auto allData = value["Data"]["TmMonitorRule"];
	for (auto value : allData)
	{
		TmMonitorRule dataObject;
		if(!value["Id"].isNull())
			dataObject.id = value["Id"].asString();
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["RuleStatus"].isNull())
			dataObject.ruleStatus = value["RuleStatus"].asString();
		if(!value["RuleSource"].isNull())
			dataObject.ruleSource = value["RuleSource"].asString();
		if(!value["RuleName"].isNull())
			dataObject.ruleName = value["RuleName"].asString();
		if(!value["RuleType"].isNull())
			dataObject.ruleType = std::stoi(value["RuleType"].asString());
		if(!value["RuleKeyword"].isNull())
			dataObject.ruleKeyword = value["RuleKeyword"].asString();
		if(!value["RuleDetail"].isNull())
			dataObject.ruleDetail = value["RuleDetail"].asString();
		if(!value["NotifyUpdate"].isNull())
			dataObject.notifyUpdate = std::stoi(value["NotifyUpdate"].asString());
		if(!value["Version"].isNull())
			dataObject.version = std::stoi(value["Version"].asString());
		if(!value["StartTime"].isNull())
			dataObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			dataObject.endTime = value["EndTime"].asString();
		if(!value["LastRunTime"].isNull())
			dataObject.lastRunTime = value["LastRunTime"].asString();
		if(!value["LastFinishTime"].isNull())
			dataObject.lastFinishTime = value["LastFinishTime"].asString();
		if(!value["LastUpdateTime"].isNull())
			dataObject.lastUpdateTime = value["LastUpdateTime"].asString();
		if(!value["Env"].isNull())
			dataObject.env = value["Env"].asString();
		if(!value["RuleExtend"].isNull())
			dataObject.ruleExtend = value["RuleExtend"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = value["CreateTime"].asString();
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = value["UpdateTime"].asString();
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

