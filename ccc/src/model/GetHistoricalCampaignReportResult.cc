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

#include <alibabacloud/ccc/model/GetHistoricalCampaignReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetHistoricalCampaignReportResult::GetHistoricalCampaignReportResult() :
	ServiceResult()
{}

GetHistoricalCampaignReportResult::GetHistoricalCampaignReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHistoricalCampaignReportResult::~GetHistoricalCampaignReportResult()
{}

void GetHistoricalCampaignReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CallsConnected"].isNull())
		data_.callsConnected = std::stol(dataNode["CallsConnected"].asString());
	if(!dataNode["CallsDialed"].isNull())
		data_.callsDialed = std::stol(dataNode["CallsDialed"].asString());
	if(!dataNode["CallsAbandoned"].isNull())
		data_.callsAbandoned = std::stol(dataNode["CallsAbandoned"].asString());
	if(!dataNode["ConnectedRate"].isNull())
		data_.connectedRate = std::stof(dataNode["ConnectedRate"].asString());
	if(!dataNode["AbandonedRate"].isNull())
		data_.abandonedRate = std::stof(dataNode["AbandonedRate"].asString());
	if(!dataNode["OccupancyRate"].isNull())
		data_.occupancyRate = std::stof(dataNode["OccupancyRate"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetHistoricalCampaignReportResult::getMessage()const
{
	return message_;
}

int GetHistoricalCampaignReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetHistoricalCampaignReportResult::Data GetHistoricalCampaignReportResult::getData()const
{
	return data_;
}

std::string GetHistoricalCampaignReportResult::getCode()const
{
	return code_;
}

