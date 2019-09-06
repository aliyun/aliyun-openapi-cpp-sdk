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
	auto allIpv6Translators = value["Ipv6Translators"]["Ipv6Translator"];
	for (auto value : allIpv6Translators)
	{
		Ipv6Translator ipv6TranslatorsObject;
		if(!value["Ipv6TranslatorId"].isNull())
			ipv6TranslatorsObject.ipv6TranslatorId = value["Ipv6TranslatorId"].asString();
		if(!value["CreateTime"].isNull())
			ipv6TranslatorsObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["EndTime"].isNull())
			ipv6TranslatorsObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Spec"].isNull())
			ipv6TranslatorsObject.spec = value["Spec"].asString();
		if(!value["Name"].isNull())
			ipv6TranslatorsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			ipv6TranslatorsObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			ipv6TranslatorsObject.status = value["Status"].asString();
		if(!value["BusinessStatus"].isNull())
			ipv6TranslatorsObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["PayType"].isNull())
			ipv6TranslatorsObject.payType = value["PayType"].asString();
		if(!value["Bandwidth"].isNull())
			ipv6TranslatorsObject.bandwidth = std::stoi(value["Bandwidth"].asString());
		if(!value["AllocateIpv6Addr"].isNull())
			ipv6TranslatorsObject.allocateIpv6Addr = value["AllocateIpv6Addr"].asString();
		if(!value["AllocateIpv4Addr"].isNull())
			ipv6TranslatorsObject.allocateIpv4Addr = value["AllocateIpv4Addr"].asString();
		if(!value["AvailableBandwidth"].isNull())
			ipv6TranslatorsObject.availableBandwidth = value["AvailableBandwidth"].asString();
		if(!value["RegionId"].isNull())
			ipv6TranslatorsObject.regionId = value["RegionId"].asString();
		auto allIpv6TranslatorEntryIds = value["Ipv6TranslatorEntryIds"]["Ipv6TranslatorEntryId"];
		for (auto value : allIpv6TranslatorEntryIds)
			ipv6TranslatorsObject.ipv6TranslatorEntryIds.push_back(value.asString());
		ipv6Translators_.push_back(ipv6TranslatorsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

