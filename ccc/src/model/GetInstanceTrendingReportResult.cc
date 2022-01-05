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

#include <alibabacloud/ccc/model/GetInstanceTrendingReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetInstanceTrendingReportResult::GetInstanceTrendingReportResult() :
	ServiceResult()
{}

GetInstanceTrendingReportResult::GetInstanceTrendingReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceTrendingReportResult::~GetInstanceTrendingReportResult()
{}

void GetInstanceTrendingReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allInboundNode = dataNode["Inbound"]["InboundItem"];
	for (auto dataNodeInboundInboundItem : allInboundNode)
	{
		Data::InboundItem inboundItemObject;
		if(!dataNodeInboundInboundItem["StatsTime"].isNull())
			inboundItemObject.statsTime = std::stol(dataNodeInboundInboundItem["StatsTime"].asString());
		if(!dataNodeInboundInboundItem["CallsQueued"].isNull())
			inboundItemObject.callsQueued = std::stol(dataNodeInboundInboundItem["CallsQueued"].asString());
		if(!dataNodeInboundInboundItem["CallsAbandonedInRing"].isNull())
			inboundItemObject.callsAbandonedInRing = std::stol(dataNodeInboundInboundItem["CallsAbandonedInRing"].asString());
		if(!dataNodeInboundInboundItem["CallsHandled"].isNull())
			inboundItemObject.callsHandled = std::stol(dataNodeInboundInboundItem["CallsHandled"].asString());
		if(!dataNodeInboundInboundItem["TotalCalls"].isNull())
			inboundItemObject.totalCalls = std::stol(dataNodeInboundInboundItem["TotalCalls"].asString());
		if(!dataNodeInboundInboundItem["CallsAbandonedInIVR"].isNull())
			inboundItemObject.callsAbandonedInIVR = std::stol(dataNodeInboundInboundItem["CallsAbandonedInIVR"].asString());
		if(!dataNodeInboundInboundItem["CallsAbandonedInQueue"].isNull())
			inboundItemObject.callsAbandonedInQueue = std::stol(dataNodeInboundInboundItem["CallsAbandonedInQueue"].asString());
		data_.inbound.push_back(inboundItemObject);
	}
	auto allOutboundNode = dataNode["Outbound"]["OutboundItem"];
	for (auto dataNodeOutboundOutboundItem : allOutboundNode)
	{
		Data::OutboundItem outboundItemObject;
		if(!dataNodeOutboundOutboundItem["StatsTime"].isNull())
			outboundItemObject.statsTime = std::stol(dataNodeOutboundOutboundItem["StatsTime"].asString());
		if(!dataNodeOutboundOutboundItem["CallsAnswered"].isNull())
			outboundItemObject.callsAnswered = std::stol(dataNodeOutboundOutboundItem["CallsAnswered"].asString());
		if(!dataNodeOutboundOutboundItem["TotalCalls"].isNull())
			outboundItemObject.totalCalls = std::stol(dataNodeOutboundOutboundItem["TotalCalls"].asString());
		data_.outbound.push_back(outboundItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetInstanceTrendingReportResult::getMessage()const
{
	return message_;
}

int GetInstanceTrendingReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetInstanceTrendingReportResult::Data GetInstanceTrendingReportResult::getData()const
{
	return data_;
}

std::string GetInstanceTrendingReportResult::getCode()const
{
	return code_;
}

