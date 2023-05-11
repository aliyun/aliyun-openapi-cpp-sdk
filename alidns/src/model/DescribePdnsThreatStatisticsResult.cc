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

#include <alibabacloud/alidns/model/DescribePdnsThreatStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsThreatStatisticsResult::DescribePdnsThreatStatisticsResult() :
	ServiceResult()
{}

DescribePdnsThreatStatisticsResult::DescribePdnsThreatStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsThreatStatisticsResult::~DescribePdnsThreatStatisticsResult()
{}

void DescribePdnsThreatStatisticsResult::parse(const std::string &payload)
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
		if(!valueDataStatisticItem["LatestThreatTime"].isNull())
			dataObject.latestThreatTime = std::stol(valueDataStatisticItem["LatestThreatTime"].asString());
		if(!valueDataStatisticItem["TotalCount"].isNull())
			dataObject.totalCount = std::stol(valueDataStatisticItem["TotalCount"].asString());
		if(!valueDataStatisticItem["DohTotalCount"].isNull())
			dataObject.dohTotalCount = std::stol(valueDataStatisticItem["DohTotalCount"].asString());
		if(!valueDataStatisticItem["UdpTotalCount"].isNull())
			dataObject.udpTotalCount = std::stol(valueDataStatisticItem["UdpTotalCount"].asString());
		if(!valueDataStatisticItem["MaxThreatLevel"].isNull())
			dataObject.maxThreatLevel = valueDataStatisticItem["MaxThreatLevel"].asString();
		if(!valueDataStatisticItem["DomainCount"].isNull())
			dataObject.domainCount = std::stol(valueDataStatisticItem["DomainCount"].asString());
		if(!valueDataStatisticItem["SourceIp"].isNull())
			dataObject.sourceIp = valueDataStatisticItem["SourceIp"].asString();
		if(!valueDataStatisticItem["ThreatType"].isNull())
			dataObject.threatType = valueDataStatisticItem["ThreatType"].asString();
		if(!valueDataStatisticItem["ThreatLevel"].isNull())
			dataObject.threatLevel = valueDataStatisticItem["ThreatLevel"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribePdnsThreatStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePdnsThreatStatisticsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePdnsThreatStatisticsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePdnsThreatStatisticsResult::StatisticItem> DescribePdnsThreatStatisticsResult::getData()const
{
	return data_;
}

