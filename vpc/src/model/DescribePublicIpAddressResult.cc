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

#include <alibabacloud/vpc/model/DescribePublicIpAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribePublicIpAddressResult::DescribePublicIpAddressResult() :
	ServiceResult()
{}

DescribePublicIpAddressResult::DescribePublicIpAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePublicIpAddressResult::~DescribePublicIpAddressResult()
{}

void DescribePublicIpAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpRange = value["IpRange"]["IpRange"];
	for (const auto &item : allIpRange)
		ipRange_.push_back(item.asString());
	auto allPublicIpAddress = value["PublicIpAddress"]["ipAddress"];
	for (const auto &item : allPublicIpAddress)
		publicIpAddress_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<std::string> DescribePublicIpAddressResult::getIpRange()const
{
	return ipRange_;
}

std::vector<std::string> DescribePublicIpAddressResult::getPublicIpAddress()const
{
	return publicIpAddress_;
}

int DescribePublicIpAddressResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribePublicIpAddressResult::getMessage()const
{
	return message_;
}

int DescribePublicIpAddressResult::getPageSize()const
{
	return pageSize_;
}

int DescribePublicIpAddressResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribePublicIpAddressResult::getRegionId()const
{
	return regionId_;
}

std::string DescribePublicIpAddressResult::getCode()const
{
	return code_;
}

bool DescribePublicIpAddressResult::getSuccess()const
{
	return success_;
}

