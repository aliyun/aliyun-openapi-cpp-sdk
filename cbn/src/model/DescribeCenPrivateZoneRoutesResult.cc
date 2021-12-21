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

#include <alibabacloud/cbn/model/DescribeCenPrivateZoneRoutesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenPrivateZoneRoutesResult::DescribeCenPrivateZoneRoutesResult() :
	ServiceResult()
{}

DescribeCenPrivateZoneRoutesResult::DescribeCenPrivateZoneRoutesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenPrivateZoneRoutesResult::~DescribeCenPrivateZoneRoutesResult()
{}

void DescribeCenPrivateZoneRoutesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrivateZoneInfosNode = value["PrivateZoneInfos"]["PrivateZoneInfo"];
	for (auto valuePrivateZoneInfosPrivateZoneInfo : allPrivateZoneInfosNode)
	{
		PrivateZoneInfo privateZoneInfosObject;
		if(!valuePrivateZoneInfosPrivateZoneInfo["Status"].isNull())
			privateZoneInfosObject.status = valuePrivateZoneInfosPrivateZoneInfo["Status"].asString();
		if(!valuePrivateZoneInfosPrivateZoneInfo["AccessRegionId"].isNull())
			privateZoneInfosObject.accessRegionId = valuePrivateZoneInfosPrivateZoneInfo["AccessRegionId"].asString();
		if(!valuePrivateZoneInfosPrivateZoneInfo["HostRegionId"].isNull())
			privateZoneInfosObject.hostRegionId = valuePrivateZoneInfosPrivateZoneInfo["HostRegionId"].asString();
		if(!valuePrivateZoneInfosPrivateZoneInfo["HostVpcId"].isNull())
			privateZoneInfosObject.hostVpcId = valuePrivateZoneInfosPrivateZoneInfo["HostVpcId"].asString();
		privateZoneInfos_.push_back(privateZoneInfosObject);
	}
	if(!value["PrivateZoneDnsServers"].isNull())
		privateZoneDnsServers_ = value["PrivateZoneDnsServers"].asString();
	if(!value["CenId"].isNull())
		cenId_ = value["CenId"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCenPrivateZoneRoutesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCenPrivateZoneRoutesResult::PrivateZoneInfo> DescribeCenPrivateZoneRoutesResult::getPrivateZoneInfos()const
{
	return privateZoneInfos_;
}

int DescribeCenPrivateZoneRoutesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenPrivateZoneRoutesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeCenPrivateZoneRoutesResult::getCenId()const
{
	return cenId_;
}

std::string DescribeCenPrivateZoneRoutesResult::getPrivateZoneDnsServers()const
{
	return privateZoneDnsServers_;
}

