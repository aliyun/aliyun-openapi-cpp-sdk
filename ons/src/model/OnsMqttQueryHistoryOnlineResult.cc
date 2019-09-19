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

#include <alibabacloud/ons/model/OnsMqttQueryHistoryOnlineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMqttQueryHistoryOnlineResult::OnsMqttQueryHistoryOnlineResult() :
	ServiceResult()
{}

OnsMqttQueryHistoryOnlineResult::OnsMqttQueryHistoryOnlineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMqttQueryHistoryOnlineResult::~OnsMqttQueryHistoryOnlineResult()
{}

void OnsMqttQueryHistoryOnlineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Title"].isNull())
		data_.title = dataNode["Title"].asString();
	if(!dataNode["XUnit"].isNull())
		data_.xUnit = dataNode["XUnit"].asString();
	if(!dataNode["YUnit"].isNull())
		data_.yUnit = dataNode["YUnit"].asString();
	auto allRecordsNode = dataNode["Records"]["StatsDataDo"];
	for (auto dataNodeRecordsStatsDataDo : allRecordsNode)
	{
		Data::StatsDataDo statsDataDoObject;
		if(!dataNodeRecordsStatsDataDo["X"].isNull())
			statsDataDoObject.x = std::stol(dataNodeRecordsStatsDataDo["X"].asString());
		if(!dataNodeRecordsStatsDataDo["Y"].isNull())
			statsDataDoObject.y = std::stof(dataNodeRecordsStatsDataDo["Y"].asString());
		data_.records.push_back(statsDataDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsMqttQueryHistoryOnlineResult::Data OnsMqttQueryHistoryOnlineResult::getData()const
{
	return data_;
}

std::string OnsMqttQueryHistoryOnlineResult::getHelpUrl()const
{
	return helpUrl_;
}

