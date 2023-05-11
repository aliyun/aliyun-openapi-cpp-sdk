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

#include <alibabacloud/alidns/model/DescribePdnsThreatStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsThreatStatisticResult::DescribePdnsThreatStatisticResult() :
	ServiceResult()
{}

DescribePdnsThreatStatisticResult::DescribePdnsThreatStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsThreatStatisticResult::~DescribePdnsThreatStatisticResult()
{}

void DescribePdnsThreatStatisticResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["StatisticItem"];
	for (auto valueDataStatisticItem : allDataNode)
	{
		StatisticItem dataObject;
		if(!valueDataStatisticItem["TotalCount"].isNull())
			dataObject.totalCount = std::stol(valueDataStatisticItem["TotalCount"].asString());
		if(!valueDataStatisticItem["Timestamp"].isNull())
			dataObject.timestamp = std::stol(valueDataStatisticItem["Timestamp"].asString());
		if(!valueDataStatisticItem["ThreatType"].isNull())
			dataObject.threatType = valueDataStatisticItem["ThreatType"].asString();
		if(!valueDataStatisticItem["ThreatLevel"].isNull())
			dataObject.threatLevel = valueDataStatisticItem["ThreatLevel"].asString();
		if(!valueDataStatisticItem["DohTotalCount"].isNull())
			dataObject.dohTotalCount = std::stol(valueDataStatisticItem["DohTotalCount"].asString());
		if(!valueDataStatisticItem["UdpTotalCount"].isNull())
			dataObject.udpTotalCount = std::stol(valueDataStatisticItem["UdpTotalCount"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribePdnsThreatStatisticResult::StatisticItem> DescribePdnsThreatStatisticResult::getData()const
{
	return data_;
}

