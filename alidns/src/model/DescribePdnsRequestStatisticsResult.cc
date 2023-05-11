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

#include <alibabacloud/alidns/model/DescribePdnsRequestStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsRequestStatisticsResult::DescribePdnsRequestStatisticsResult() :
	ServiceResult()
{}

DescribePdnsRequestStatisticsResult::DescribePdnsRequestStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsRequestStatisticsResult::~DescribePdnsRequestStatisticsResult()
{}

void DescribePdnsRequestStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["StatisticItem"];
	for (auto valueDataStatisticItem : allDataNode)
	{
		StatisticItem dataObject;
		if(!valueDataStatisticItem["DomainName"].isNull())
			dataObject.domainName = valueDataStatisticItem["DomainName"].asString();
		if(!valueDataStatisticItem["SubDomain"].isNull())
			dataObject.subDomain = valueDataStatisticItem["SubDomain"].asString();
		if(!valueDataStatisticItem["V6HttpCount"].isNull())
			dataObject.v6HttpCount = std::stol(valueDataStatisticItem["V6HttpCount"].asString());
		if(!valueDataStatisticItem["V6HttpsCount"].isNull())
			dataObject.v6HttpsCount = std::stol(valueDataStatisticItem["V6HttpsCount"].asString());
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
		if(!valueDataStatisticItem["ThreatCount"].isNull())
			dataObject.threatCount = std::stol(valueDataStatisticItem["ThreatCount"].asString());
		if(!valueDataStatisticItem["MaxThreatLevel"].isNull())
			dataObject.maxThreatLevel = valueDataStatisticItem["MaxThreatLevel"].asString();
		auto allThreatInfoNode = valueDataStatisticItem["ThreatInfo"]["ThreatItem"];
		for (auto valueDataStatisticItemThreatInfoThreatItem : allThreatInfoNode)
		{
			StatisticItem::ThreatItem threatInfoObject;
			if(!valueDataStatisticItemThreatInfoThreatItem["ThreatType"].isNull())
				threatInfoObject.threatType = valueDataStatisticItemThreatInfoThreatItem["ThreatType"].asString();
			if(!valueDataStatisticItemThreatInfoThreatItem["ThreatLevel"].isNull())
				threatInfoObject.threatLevel = valueDataStatisticItemThreatInfoThreatItem["ThreatLevel"].asString();
			dataObject.threatInfo.push_back(threatInfoObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribePdnsRequestStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePdnsRequestStatisticsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePdnsRequestStatisticsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePdnsRequestStatisticsResult::StatisticItem> DescribePdnsRequestStatisticsResult::getData()const
{
	return data_;
}

