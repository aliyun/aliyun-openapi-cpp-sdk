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

#include <alibabacloud/trademark/model/QueryTrademarkMonitorResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTrademarkMonitorResultsResult::QueryTrademarkMonitorResultsResult() :
	ServiceResult()
{}

QueryTrademarkMonitorResultsResult::QueryTrademarkMonitorResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTrademarkMonitorResultsResult::~QueryTrademarkMonitorResultsResult()
{}

void QueryTrademarkMonitorResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["TmMonitorResult"];
	for (auto value : allData)
	{
		TmMonitorResult dataObject;
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["RuleId"].isNull())
			dataObject.ruleId = value["RuleId"].asString();
		if(!value["TmUid"].isNull())
			dataObject.tmUid = value["TmUid"].asString();
		if(!value["DataCreateTime"].isNull())
			dataObject.dataCreateTime = std::stol(value["DataCreateTime"].asString());
		if(!value["DataUpdateTime"].isNull())
			dataObject.dataUpdateTime = std::stol(value["DataUpdateTime"].asString());
		if(!value["TmName"].isNull())
			dataObject.tmName = value["TmName"].asString();
		if(!value["TmImage"].isNull())
			dataObject.tmImage = value["TmImage"].asString();
		if(!value["Classification"].isNull())
			dataObject.classification = value["Classification"].asString();
		if(!value["RegistrationNumber"].isNull())
			dataObject.registrationNumber = value["RegistrationNumber"].asString();
		if(!value["TmProcedureStatusDesc"].isNull())
			dataObject.tmProcedureStatusDesc = value["TmProcedureStatusDesc"].asString();
		if(!value["OwnerName"].isNull())
			dataObject.ownerName = value["OwnerName"].asString();
		if(!value["OwnerEnName"].isNull())
			dataObject.ownerEnName = value["OwnerEnName"].asString();
		if(!value["ApplyDate"].isNull())
			dataObject.applyDate = value["ApplyDate"].asString();
		if(!value["XuzhanEndDate"].isNull())
			dataObject.xuzhanEndDate = value["XuzhanEndDate"].asString();
		if(!value["ChesanEndDate"].isNull())
			dataObject.chesanEndDate = value["ChesanEndDate"].asString();
		if(!value["WuxiaoEndDate"].isNull())
			dataObject.wuxiaoEndDate = value["WuxiaoEndDate"].asString();
		if(!value["YiyiEndDate"].isNull())
			dataObject.yiyiEndDate = value["YiyiEndDate"].asString();
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

bool QueryTrademarkMonitorResultsResult::getPrePage()const
{
	return prePage_;
}

int QueryTrademarkMonitorResultsResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTrademarkMonitorResultsResult::getPageSize()const
{
	return pageSize_;
}

int QueryTrademarkMonitorResultsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTrademarkMonitorResultsResult::TmMonitorResult> QueryTrademarkMonitorResultsResult::getData()const
{
	return data_;
}

int QueryTrademarkMonitorResultsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryTrademarkMonitorResultsResult::getNextPage()const
{
	return nextPage_;
}

