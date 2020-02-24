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

#include <alibabacloud/outboundbot/model/GenerateOverallStatisticsReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GenerateOverallStatisticsReportResult::GenerateOverallStatisticsReportResult() :
	ServiceResult()
{}

GenerateOverallStatisticsReportResult::GenerateOverallStatisticsReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateOverallStatisticsReportResult::~GenerateOverallStatisticsReportResult()
{}

void GenerateOverallStatisticsReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto overallStatisticsReportNode = value["OverallStatisticsReport"];
	auto allIndicatorsNode = overallStatisticsReportNode["Indicators"]["KeyValuePair"];
	for (auto overallStatisticsReportNodeIndicatorsKeyValuePair : allIndicatorsNode)
	{
		OverallStatisticsReport::KeyValuePair keyValuePairObject;
		if(!overallStatisticsReportNodeIndicatorsKeyValuePair["Key"].isNull())
			keyValuePairObject.key = overallStatisticsReportNodeIndicatorsKeyValuePair["Key"].asString();
		if(!overallStatisticsReportNodeIndicatorsKeyValuePair["Value"].isNull())
			keyValuePairObject.value = overallStatisticsReportNodeIndicatorsKeyValuePair["Value"].asString();
		overallStatisticsReport_.indicators.push_back(keyValuePairObject);
	}
	auto allBriefsNode = overallStatisticsReportNode["Briefs"]["KeyValuePair"];
	for (auto overallStatisticsReportNodeBriefsKeyValuePair : allBriefsNode)
	{
		OverallStatisticsReport::KeyValuePair keyValuePairObject;
		if(!overallStatisticsReportNodeBriefsKeyValuePair["Key"].isNull())
			keyValuePairObject.key = overallStatisticsReportNodeBriefsKeyValuePair["Key"].asString();
		if(!overallStatisticsReportNodeBriefsKeyValuePair["Value"].isNull())
			keyValuePairObject.value = overallStatisticsReportNodeBriefsKeyValuePair["Value"].asString();
		overallStatisticsReport_.briefs.push_back(keyValuePairObject);
	}
	auto allSummariesNode = overallStatisticsReportNode["Summaries"]["KeyValuePair"];
	for (auto overallStatisticsReportNodeSummariesKeyValuePair : allSummariesNode)
	{
		OverallStatisticsReport::KeyValuePair keyValuePairObject;
		if(!overallStatisticsReportNodeSummariesKeyValuePair["Key"].isNull())
			keyValuePairObject.key = overallStatisticsReportNodeSummariesKeyValuePair["Key"].asString();
		if(!overallStatisticsReportNodeSummariesKeyValuePair["Value"].isNull())
			keyValuePairObject.value = overallStatisticsReportNodeSummariesKeyValuePair["Value"].asString();
		overallStatisticsReport_.summaries.push_back(keyValuePairObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

GenerateOverallStatisticsReportResult::OverallStatisticsReport GenerateOverallStatisticsReportResult::getOverallStatisticsReport()const
{
	return overallStatisticsReport_;
}

std::string GenerateOverallStatisticsReportResult::getMessage()const
{
	return message_;
}

int GenerateOverallStatisticsReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GenerateOverallStatisticsReportResult::getCode()const
{
	return code_;
}

bool GenerateOverallStatisticsReportResult::getSuccess()const
{
	return success_;
}

