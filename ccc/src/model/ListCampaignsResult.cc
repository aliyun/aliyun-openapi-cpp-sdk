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

#include <alibabacloud/ccc/model/ListCampaignsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCampaignsResult::ListCampaignsResult() :
	ServiceResult()
{}

ListCampaignsResult::ListCampaignsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCampaignsResult::~ListCampaignsResult()
{}

void ListCampaignsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["listItem"];
	for (auto dataNodeListlistItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListlistItem["ActualEndTime"].isNull())
			listItemObject.actualEndTime = std::stol(dataNodeListlistItem["ActualEndTime"].asString());
		if(!dataNodeListlistItem["ActualStartTime"].isNull())
			listItemObject.actualStartTime = std::stol(dataNodeListlistItem["ActualStartTime"].asString());
		if(!dataNodeListlistItem["CasesAborted"].isNull())
			listItemObject.casesAborted = std::stol(dataNodeListlistItem["CasesAborted"].asString());
		if(!dataNodeListlistItem["CasesUncompleted"].isNull())
			listItemObject.casesUncompleted = std::stol(dataNodeListlistItem["CasesUncompleted"].asString());
		if(!dataNodeListlistItem["CasesConnected"].isNull())
			listItemObject.casesConnected = std::stol(dataNodeListlistItem["CasesConnected"].asString());
		if(!dataNodeListlistItem["MaxAttemptCount"].isNull())
			listItemObject.maxAttemptCount = std::stol(dataNodeListlistItem["MaxAttemptCount"].asString());
		if(!dataNodeListlistItem["MinAttemptInterval"].isNull())
			listItemObject.minAttemptInterval = std::stol(dataNodeListlistItem["MinAttemptInterval"].asString());
		if(!dataNodeListlistItem["Name"].isNull())
			listItemObject.name = dataNodeListlistItem["Name"].asString();
		if(!dataNodeListlistItem["PlanedEndTime"].isNull())
			listItemObject.planedEndTime = std::stol(dataNodeListlistItem["PlanedEndTime"].asString());
		if(!dataNodeListlistItem["PlanedStartTime"].isNull())
			listItemObject.planedStartTime = std::stol(dataNodeListlistItem["PlanedStartTime"].asString());
		if(!dataNodeListlistItem["QueueName"].isNull())
			listItemObject.queueName = dataNodeListlistItem["QueueName"].asString();
		if(!dataNodeListlistItem["TotalCases"].isNull())
			listItemObject.totalCases = std::stol(dataNodeListlistItem["TotalCases"].asString());
		if(!dataNodeListlistItem["State"].isNull())
			listItemObject.state = dataNodeListlistItem["State"].asString();
		if(!dataNodeListlistItem["CampaignId"].isNull())
			listItemObject.campaignId = dataNodeListlistItem["CampaignId"].asString();
		if(!dataNodeListlistItem["StrategyType"].isNull())
			listItemObject.strategyType = dataNodeListlistItem["StrategyType"].asString();
		if(!dataNodeListlistItem["StrategyParameters"].isNull())
			listItemObject.strategyParameters = dataNodeListlistItem["StrategyParameters"].asString();
		if(!dataNodeListlistItem["QueueId"].isNull())
			listItemObject.queueId = dataNodeListlistItem["QueueId"].asString();
		if(!dataNodeListlistItem["Simulation"].isNull())
			listItemObject.simulation = dataNodeListlistItem["Simulation"].asString() == "true";
		data_.list.push_back(listItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListCampaignsResult::getMessage()const
{
	return message_;
}

long ListCampaignsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCampaignsResult::Data ListCampaignsResult::getData()const
{
	return data_;
}

std::string ListCampaignsResult::getCode()const
{
	return code_;
}

bool ListCampaignsResult::getSuccess()const
{
	return success_;
}

