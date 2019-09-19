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
	auto allDataNode = value["Data"]["TmMonitorResult"];
	for (auto valueDataTmMonitorResult : allDataNode)
	{
		TmMonitorResult dataObject;
		if(!valueDataTmMonitorResult["UserId"].isNull())
			dataObject.userId = valueDataTmMonitorResult["UserId"].asString();
		if(!valueDataTmMonitorResult["RuleId"].isNull())
			dataObject.ruleId = valueDataTmMonitorResult["RuleId"].asString();
		if(!valueDataTmMonitorResult["TmUid"].isNull())
			dataObject.tmUid = valueDataTmMonitorResult["TmUid"].asString();
		if(!valueDataTmMonitorResult["DataCreateTime"].isNull())
			dataObject.dataCreateTime = std::stol(valueDataTmMonitorResult["DataCreateTime"].asString());
		if(!valueDataTmMonitorResult["DataUpdateTime"].isNull())
			dataObject.dataUpdateTime = std::stol(valueDataTmMonitorResult["DataUpdateTime"].asString());
		if(!valueDataTmMonitorResult["TmName"].isNull())
			dataObject.tmName = valueDataTmMonitorResult["TmName"].asString();
		if(!valueDataTmMonitorResult["TmImage"].isNull())
			dataObject.tmImage = valueDataTmMonitorResult["TmImage"].asString();
		if(!valueDataTmMonitorResult["Classification"].isNull())
			dataObject.classification = valueDataTmMonitorResult["Classification"].asString();
		if(!valueDataTmMonitorResult["RegistrationNumber"].isNull())
			dataObject.registrationNumber = valueDataTmMonitorResult["RegistrationNumber"].asString();
		if(!valueDataTmMonitorResult["TmProcedureStatusDesc"].isNull())
			dataObject.tmProcedureStatusDesc = valueDataTmMonitorResult["TmProcedureStatusDesc"].asString();
		if(!valueDataTmMonitorResult["OwnerName"].isNull())
			dataObject.ownerName = valueDataTmMonitorResult["OwnerName"].asString();
		if(!valueDataTmMonitorResult["OwnerEnName"].isNull())
			dataObject.ownerEnName = valueDataTmMonitorResult["OwnerEnName"].asString();
		if(!valueDataTmMonitorResult["ApplyDate"].isNull())
			dataObject.applyDate = valueDataTmMonitorResult["ApplyDate"].asString();
		if(!valueDataTmMonitorResult["XuzhanEndDate"].isNull())
			dataObject.xuzhanEndDate = valueDataTmMonitorResult["XuzhanEndDate"].asString();
		if(!valueDataTmMonitorResult["ChesanEndDate"].isNull())
			dataObject.chesanEndDate = valueDataTmMonitorResult["ChesanEndDate"].asString();
		if(!valueDataTmMonitorResult["WuxiaoEndDate"].isNull())
			dataObject.wuxiaoEndDate = valueDataTmMonitorResult["WuxiaoEndDate"].asString();
		if(!valueDataTmMonitorResult["YiyiEndDate"].isNull())
			dataObject.yiyiEndDate = valueDataTmMonitorResult["YiyiEndDate"].asString();
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

