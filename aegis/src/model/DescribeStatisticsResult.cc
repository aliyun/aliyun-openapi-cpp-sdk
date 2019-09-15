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

#include <alibabacloud/aegis/model/DescribeStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeStatisticsResult::DescribeStatisticsResult() :
	ServiceResult()
{}

DescribeStatisticsResult::DescribeStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStatisticsResult::~DescribeStatisticsResult()
{}

void DescribeStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statisticsNode = value["Statistics"];
	if(!statisticsNode["VulAsapSum"].isNull())
		statistics_.vulAsapSum = std::stoi(statisticsNode["VulAsapSum"].asString());
	if(!statisticsNode["VulNntfSum"].isNull())
		statistics_.vulNntfSum = std::stoi(statisticsNode["VulNntfSum"].asString());
	if(!statisticsNode["HealthTotal"].isNull())
		statistics_.healthTotal = std::stoi(statisticsNode["HealthTotal"].asString());
	if(!statisticsNode["SuspiciousmediumTotal"].isNull())
		statistics_.suspiciousmediumTotal = std::stoi(statisticsNode["SuspiciousmediumTotal"].asString());
	if(!statisticsNode["Health"].isNull())
		statistics_.health = std::stoi(statisticsNode["Health"].asString());
	if(!statisticsNode["HealthdealedTotal"].isNull())
		statistics_.healthdealedTotal = std::stoi(statisticsNode["HealthdealedTotal"].asString());
	if(!statisticsNode["Trojan"].isNull())
		statistics_.trojan = std::stoi(statisticsNode["Trojan"].asString());
	if(!statisticsNode["VulLaterSum"].isNull())
		statistics_.vulLaterSum = std::stoi(statisticsNode["VulLaterSum"].asString());
	if(!statisticsNode["Suspicious"].isNull())
		statistics_.suspicious = std::stoi(statisticsNode["Suspicious"].asString());
	if(!statisticsNode["Vul"].isNull())
		statistics_.vul = std::stoi(statisticsNode["Vul"].asString());
	if(!statisticsNode["HealthhighTotal"].isNull())
		statistics_.healthhighTotal = std::stoi(statisticsNode["HealthhighTotal"].asString());
	if(!statisticsNode["HealthlowTotal"].isNull())
		statistics_.healthlowTotal = std::stoi(statisticsNode["HealthlowTotal"].asString());
	if(!statisticsNode["HealthseriousTotal"].isNull())
		statistics_.healthseriousTotal = std::stoi(statisticsNode["HealthseriousTotal"].asString());
	if(!statisticsNode["VulDealedTotal"].isNull())
		statistics_.vulDealedTotal = std::stoi(statisticsNode["VulDealedTotal"].asString());
	if(!statisticsNode["Patch"].isNull())
		statistics_.patch = std::stoi(statisticsNode["Patch"].asString());
	if(!statisticsNode["SuspicioushighTotal"].isNull())
		statistics_.suspicioushighTotal = std::stoi(statisticsNode["SuspicioushighTotal"].asString());
	if(!statisticsNode["SuspiciouslowTotal"].isNull())
		statistics_.suspiciouslowTotal = std::stoi(statisticsNode["SuspiciouslowTotal"].asString());
	if(!statisticsNode["SuspiciousTotal"].isNull())
		statistics_.suspiciousTotal = std::stoi(statisticsNode["SuspiciousTotal"].asString());
	if(!statisticsNode["VulTotal"].isNull())
		statistics_.vulTotal = std::stoi(statisticsNode["VulTotal"].asString());
	if(!statisticsNode["SuspiciousseriousTotal"].isNull())
		statistics_.suspiciousseriousTotal = std::stoi(statisticsNode["SuspiciousseriousTotal"].asString());
	if(!statisticsNode["HealthmediumTotal"].isNull())
		statistics_.healthmediumTotal = std::stoi(statisticsNode["HealthmediumTotal"].asString());
	if(!statisticsNode["Online"].isNull())
		statistics_.online = statisticsNode["Online"].asString() == "true";
	if(!statisticsNode["SuspiciousdealedTotal"].isNull())
		statistics_.suspiciousdealedTotal = std::stoi(statisticsNode["SuspiciousdealedTotal"].asString());
	if(!statisticsNode["Account"].isNull())
		statistics_.account = std::stoi(statisticsNode["Account"].asString());

}

DescribeStatisticsResult::Statistics DescribeStatisticsResult::getStatistics()const
{
	return statistics_;
}

