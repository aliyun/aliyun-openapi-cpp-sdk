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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIPv6TranslatorsResult::DescribeIPv6TranslatorsResult() :
	ServiceResult()
{}

DescribeIPv6TranslatorsResult::DescribeIPv6TranslatorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIPv6TranslatorsResult::~DescribeIPv6TranslatorsResult()
{}

void DescribeIPv6TranslatorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv6TranslatorsNode = value["Ipv6Translators"]["Ipv6Translator"];
	for (auto valueIpv6TranslatorsIpv6Translator : allIpv6TranslatorsNode)
	{
		Ipv6Translator ipv6TranslatorsObject;
		if(!valueIpv6TranslatorsIpv6Translator["Status"].isNull())
			ipv6TranslatorsObject.status = valueIpv6TranslatorsIpv6Translator["Status"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["Spec"].isNull())
			ipv6TranslatorsObject.spec = valueIpv6TranslatorsIpv6Translator["Spec"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["CreateTime"].isNull())
			ipv6TranslatorsObject.createTime = std::stol(valueIpv6TranslatorsIpv6Translator["CreateTime"].asString());
		if(!valueIpv6TranslatorsIpv6Translator["PayType"].isNull())
			ipv6TranslatorsObject.payType = valueIpv6TranslatorsIpv6Translator["PayType"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["Ipv6TranslatorId"].isNull())
			ipv6TranslatorsObject.ipv6TranslatorId = valueIpv6TranslatorsIpv6Translator["Ipv6TranslatorId"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["AllocateIpv4Addr"].isNull())
			ipv6TranslatorsObject.allocateIpv4Addr = valueIpv6TranslatorsIpv6Translator["AllocateIpv4Addr"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["AvailableBandwidth"].isNull())
			ipv6TranslatorsObject.availableBandwidth = valueIpv6TranslatorsIpv6Translator["AvailableBandwidth"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["RegionId"].isNull())
			ipv6TranslatorsObject.regionId = valueIpv6TranslatorsIpv6Translator["RegionId"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["EndTime"].isNull())
			ipv6TranslatorsObject.endTime = std::stol(valueIpv6TranslatorsIpv6Translator["EndTime"].asString());
		if(!valueIpv6TranslatorsIpv6Translator["Description"].isNull())
			ipv6TranslatorsObject.description = valueIpv6TranslatorsIpv6Translator["Description"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["Bandwidth"].isNull())
			ipv6TranslatorsObject.bandwidth = std::stoi(valueIpv6TranslatorsIpv6Translator["Bandwidth"].asString());
		if(!valueIpv6TranslatorsIpv6Translator["BusinessStatus"].isNull())
			ipv6TranslatorsObject.businessStatus = valueIpv6TranslatorsIpv6Translator["BusinessStatus"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["AllocateIpv6Addr"].isNull())
			ipv6TranslatorsObject.allocateIpv6Addr = valueIpv6TranslatorsIpv6Translator["AllocateIpv6Addr"].asString();
		if(!valueIpv6TranslatorsIpv6Translator["Name"].isNull())
			ipv6TranslatorsObject.name = valueIpv6TranslatorsIpv6Translator["Name"].asString();
		auto allIpv6TranslatorEntryIds = value["Ipv6TranslatorEntryIds"]["Ipv6TranslatorEntryId"];
		for (auto value : allIpv6TranslatorEntryIds)
			ipv6TranslatorsObject.ipv6TranslatorEntryIds.push_back(value.asString());
		ipv6Translators_.push_back(ipv6TranslatorsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeIPv6TranslatorsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIPv6TranslatorsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIPv6TranslatorsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIPv6TranslatorsResult::Ipv6Translator> DescribeIPv6TranslatorsResult::getIpv6Translators()const
{
	return ipv6Translators_;
}

