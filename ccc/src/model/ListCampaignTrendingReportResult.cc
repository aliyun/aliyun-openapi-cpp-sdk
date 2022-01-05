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

#include <alibabacloud/ccc/model/ListCampaignTrendingReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCampaignTrendingReportResult::ListCampaignTrendingReportResult() :
	ServiceResult()
{}

ListCampaignTrendingReportResult::ListCampaignTrendingReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCampaignTrendingReportResult::~ListCampaignTrendingReportResult()
{}

void ListCampaignTrendingReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TrendingList"];
	for (auto valueDataTrendingList : allDataNode)
	{
		TrendingList dataObject;
		if(!valueDataTrendingList["Datetime"].isNull())
			dataObject.datetime = std::stol(valueDataTrendingList["Datetime"].asString());
		if(!valueDataTrendingList["Concurrency"].isNull())
			dataObject.concurrency = std::stol(valueDataTrendingList["Concurrency"].asString());
		if(!valueDataTrendingList["TalkAgents"].isNull())
			dataObject.talkAgents = std::stol(valueDataTrendingList["TalkAgents"].asString());
		if(!valueDataTrendingList["ReadyAgents"].isNull())
			dataObject.readyAgents = std::stol(valueDataTrendingList["ReadyAgents"].asString());
		if(!valueDataTrendingList["WorkAgents"].isNull())
			dataObject.workAgents = std::stol(valueDataTrendingList["WorkAgents"].asString());
		if(!valueDataTrendingList["LoggedInAgents"].isNull())
			dataObject.loggedInAgents = std::stol(valueDataTrendingList["LoggedInAgents"].asString());
		if(!valueDataTrendingList["BreakAgents"].isNull())
			dataObject.breakAgents = std::stol(valueDataTrendingList["BreakAgents"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListCampaignTrendingReportResult::getMessage()const
{
	return message_;
}

int ListCampaignTrendingReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListCampaignTrendingReportResult::TrendingList> ListCampaignTrendingReportResult::getData()const
{
	return data_;
}

std::string ListCampaignTrendingReportResult::getCode()const
{
	return code_;
}

