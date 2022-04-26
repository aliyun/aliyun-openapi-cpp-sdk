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

#include <alibabacloud/ccc/model/GetRealtimeCampaignStatsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetRealtimeCampaignStatsResult::GetRealtimeCampaignStatsResult() :
	ServiceResult()
{}

GetRealtimeCampaignStatsResult::GetRealtimeCampaignStatsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRealtimeCampaignStatsResult::~GetRealtimeCampaignStatsResult()
{}

void GetRealtimeCampaignStatsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LoggedInAgents"].isNull())
		data_.loggedInAgents = std::stol(dataNode["LoggedInAgents"].asString());
	if(!dataNode["ReadyAgents"].isNull())
		data_.readyAgents = std::stol(dataNode["ReadyAgents"].asString());
	if(!dataNode["BreakingAgents"].isNull())
		data_.breakingAgents = std::stol(dataNode["BreakingAgents"].asString());
	if(!dataNode["TalkingAgents"].isNull())
		data_.talkingAgents = std::stol(dataNode["TalkingAgents"].asString());
	if(!dataNode["WorkingAgents"].isNull())
		data_.workingAgents = std::stol(dataNode["WorkingAgents"].asString());
	if(!dataNode["Caps"].isNull())
		data_.caps = std::stol(dataNode["Caps"].asString());
	if(!dataNode["TotalAgents"].isNull())
		data_.totalAgents = std::stol(dataNode["TotalAgents"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetRealtimeCampaignStatsResult::getMessage()const
{
	return message_;
}

int GetRealtimeCampaignStatsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetRealtimeCampaignStatsResult::Data GetRealtimeCampaignStatsResult::getData()const
{
	return data_;
}

std::string GetRealtimeCampaignStatsResult::getCode()const
{
	return code_;
}

