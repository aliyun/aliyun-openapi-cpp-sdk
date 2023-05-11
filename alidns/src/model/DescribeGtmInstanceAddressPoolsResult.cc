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

#include <alibabacloud/alidns/model/DescribeGtmInstanceAddressPoolsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmInstanceAddressPoolsResult::DescribeGtmInstanceAddressPoolsResult() :
	ServiceResult()
{}

DescribeGtmInstanceAddressPoolsResult::DescribeGtmInstanceAddressPoolsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmInstanceAddressPoolsResult::~DescribeGtmInstanceAddressPoolsResult()
{}

void DescribeGtmInstanceAddressPoolsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAddrPoolsNode = value["AddrPools"]["AddrPool"];
	for (auto valueAddrPoolsAddrPool : allAddrPoolsNode)
	{
		AddrPool addrPoolsObject;
		if(!valueAddrPoolsAddrPool["Type"].isNull())
			addrPoolsObject.type = valueAddrPoolsAddrPool["Type"].asString();
		if(!valueAddrPoolsAddrPool["Status"].isNull())
			addrPoolsObject.status = valueAddrPoolsAddrPool["Status"].asString();
		if(!valueAddrPoolsAddrPool["UpdateTime"].isNull())
			addrPoolsObject.updateTime = valueAddrPoolsAddrPool["UpdateTime"].asString();
		if(!valueAddrPoolsAddrPool["CreateTime"].isNull())
			addrPoolsObject.createTime = valueAddrPoolsAddrPool["CreateTime"].asString();
		if(!valueAddrPoolsAddrPool["MonitorConfigId"].isNull())
			addrPoolsObject.monitorConfigId = valueAddrPoolsAddrPool["MonitorConfigId"].asString();
		if(!valueAddrPoolsAddrPool["MinAvailableAddrNum"].isNull())
			addrPoolsObject.minAvailableAddrNum = std::stoi(valueAddrPoolsAddrPool["MinAvailableAddrNum"].asString());
		if(!valueAddrPoolsAddrPool["UpdateTimestamp"].isNull())
			addrPoolsObject.updateTimestamp = std::stol(valueAddrPoolsAddrPool["UpdateTimestamp"].asString());
		if(!valueAddrPoolsAddrPool["MonitorStatus"].isNull())
			addrPoolsObject.monitorStatus = valueAddrPoolsAddrPool["MonitorStatus"].asString();
		if(!valueAddrPoolsAddrPool["AddrPoolId"].isNull())
			addrPoolsObject.addrPoolId = valueAddrPoolsAddrPool["AddrPoolId"].asString();
		if(!valueAddrPoolsAddrPool["Name"].isNull())
			addrPoolsObject.name = valueAddrPoolsAddrPool["Name"].asString();
		if(!valueAddrPoolsAddrPool["AddrCount"].isNull())
			addrPoolsObject.addrCount = std::stoi(valueAddrPoolsAddrPool["AddrCount"].asString());
		if(!valueAddrPoolsAddrPool["CreateTimestamp"].isNull())
			addrPoolsObject.createTimestamp = std::stol(valueAddrPoolsAddrPool["CreateTimestamp"].asString());
		addrPools_.push_back(addrPoolsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

int DescribeGtmInstanceAddressPoolsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGtmInstanceAddressPoolsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeGtmInstanceAddressPoolsResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeGtmInstanceAddressPoolsResult::getTotalItems()const
{
	return totalItems_;
}

std::vector<DescribeGtmInstanceAddressPoolsResult::AddrPool> DescribeGtmInstanceAddressPoolsResult::getAddrPools()const
{
	return addrPools_;
}

