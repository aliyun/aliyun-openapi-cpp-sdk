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

#include <alibabacloud/ccc/model/GetCampaignResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetCampaignResult::GetCampaignResult() :
	ServiceResult()
{}

GetCampaignResult::GetCampaignResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCampaignResult::~GetCampaignResult()
{}

void GetCampaignResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ActualEndTime"].isNull())
		data_.actualEndTime = std::stol(dataNode["ActualEndTime"].asString());
	if(!dataNode["ActualStartTime"].isNull())
		data_.actualStartTime = std::stol(dataNode["ActualStartTime"].asString());
	if(!dataNode["CasesAborted"].isNull())
		data_.casesAborted = std::stol(dataNode["CasesAborted"].asString());
	if(!dataNode["CasesUncompleted"].isNull())
		data_.casesUncompleted = std::stol(dataNode["CasesUncompleted"].asString());
	if(!dataNode["CasesConnected"].isNull())
		data_.casesConnected = std::stol(dataNode["CasesConnected"].asString());
	if(!dataNode["MaxAttemptCount"].isNull())
		data_.maxAttemptCount = std::stol(dataNode["MaxAttemptCount"].asString());
	if(!dataNode["MinAttemptInterval"].isNull())
		data_.minAttemptInterval = std::stol(dataNode["MinAttemptInterval"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["PlanedEndTime"].isNull())
		data_.planedEndTime = std::stol(dataNode["PlanedEndTime"].asString());
	if(!dataNode["PlanedStartTime"].isNull())
		data_.planedStartTime = std::stol(dataNode["PlanedStartTime"].asString());
	if(!dataNode["QueueName"].isNull())
		data_.queueName = dataNode["QueueName"].asString();
	if(!dataNode["TotalCases"].isNull())
		data_.totalCases = std::stol(dataNode["TotalCases"].asString());
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
	if(!dataNode["CampaignId"].isNull())
		data_.campaignId = dataNode["CampaignId"].asString();
	if(!dataNode["StrategyType"].isNull())
		data_.strategyType = dataNode["StrategyType"].asString();
	if(!dataNode["StrategyParameters"].isNull())
		data_.strategyParameters = dataNode["StrategyParameters"].asString();
	if(!dataNode["QueueId"].isNull())
		data_.queueId = dataNode["QueueId"].asString();
	if(!dataNode["Simulation"].isNull())
		data_.simulation = dataNode["Simulation"].asString() == "true";
	if(!dataNode["SimulationParameters"].isNull())
		data_.simulationParameters = dataNode["SimulationParameters"].asString();
	if(!dataNode["CasesUncompletedAfterAttempted"].isNull())
		data_.casesUncompletedAfterAttempted = std::stol(dataNode["CasesUncompletedAfterAttempted"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

long GetCampaignResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetCampaignResult::Data GetCampaignResult::getData()const
{
	return data_;
}

std::string GetCampaignResult::getCode()const
{
	return code_;
}

