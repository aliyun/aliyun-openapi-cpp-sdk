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

#include <alibabacloud/alidns/model/DescribePdnsRequestStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsRequestStatisticResult::DescribePdnsRequestStatisticResult() :
	ServiceResult()
{}

DescribePdnsRequestStatisticResult::DescribePdnsRequestStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsRequestStatisticResult::~DescribePdnsRequestStatisticResult()
{}

void DescribePdnsRequestStatisticResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["StatisticItem"];
	for (auto valueDataStatisticItem : allDataNode)
	{
		StatisticItem dataObject;
		if(!valueDataStatisticItem["V6HttpCount"].isNull())
			dataObject.v6HttpCount = std::stol(valueDataStatisticItem["V6HttpCount"].asString());
		if(!valueDataStatisticItem["V6HttpsCount"].isNull())
			dataObject.v6HttpsCount = std::stol(valueDataStatisticItem["V6HttpsCount"].asString());
		if(!valueDataStatisticItem["Timestamp"].isNull())
			dataObject.timestamp = std::stol(valueDataStatisticItem["Timestamp"].asString());
		if(!valueDataStatisticItem["TotalCount"].isNull())
			dataObject.totalCount = std::stol(valueDataStatisticItem["TotalCount"].asString());
		if(!valueDataStatisticItem["V4HttpCount"].isNull())
			dataObject.v4HttpCount = std::stol(valueDataStatisticItem["V4HttpCount"].asString());
		if(!valueDataStatisticItem["V4HttpsCount"].isNull())
			dataObject.v4HttpsCount = std::stol(valueDataStatisticItem["V4HttpsCount"].asString());
		if(!valueDataStatisticItem["V4Count"].isNull())
			dataObject.v4Count = std::stol(valueDataStatisticItem["V4Count"].asString());
		if(!valueDataStatisticItem["V6Count"].isNull())
			dataObject.v6Count = std::stol(valueDataStatisticItem["V6Count"].asString());
		if(!valueDataStatisticItem["HttpCount"].isNull())
			dataObject.httpCount = std::stol(valueDataStatisticItem["HttpCount"].asString());
		if(!valueDataStatisticItem["HttpsCount"].isNull())
			dataObject.httpsCount = std::stol(valueDataStatisticItem["HttpsCount"].asString());
		if(!valueDataStatisticItem["DohTotalCount"].isNull())
			dataObject.dohTotalCount = std::stol(valueDataStatisticItem["DohTotalCount"].asString());
		if(!valueDataStatisticItem["UdpTotalCount"].isNull())
			dataObject.udpTotalCount = std::stol(valueDataStatisticItem["UdpTotalCount"].asString());
		if(!valueDataStatisticItem["IpCount"].isNull())
			dataObject.ipCount = std::stol(valueDataStatisticItem["IpCount"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribePdnsRequestStatisticResult::StatisticItem> DescribePdnsRequestStatisticResult::getData()const
{
	return data_;
}

