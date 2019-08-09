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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAddrPools = value["AddrPools"]["AddrPool"];
	for (auto value : allAddrPools)
	{
		AddrPool addrPoolsObject;
		if(!value["AddrPoolId"].isNull())
			addrPoolsObject.addrPoolId = value["AddrPoolId"].asString();
		if(!value["CreateTime"].isNull())
			addrPoolsObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimestamp"].isNull())
			addrPoolsObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["UpdateTime"].isNull())
			addrPoolsObject.updateTime = value["UpdateTime"].asString();
		if(!value["UpdateTimestamp"].isNull())
			addrPoolsObject.updateTimestamp = std::stol(value["UpdateTimestamp"].asString());
		if(!value["AddrCount"].isNull())
			addrPoolsObject.addrCount = std::stoi(value["AddrCount"].asString());
		if(!value["MinAvailableAddrNum"].isNull())
			addrPoolsObject.minAvailableAddrNum = std::stoi(value["MinAvailableAddrNum"].asString());
		if(!value["MonitorConfigId"].isNull())
			addrPoolsObject.monitorConfigId = value["MonitorConfigId"].asString();
		if(!value["MonitorStatus"].isNull())
			addrPoolsObject.monitorStatus = value["MonitorStatus"].asString();
		if(!value["Name"].isNull())
			addrPoolsObject.name = value["Name"].asString();
		if(!value["Status"].isNull())
			addrPoolsObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			addrPoolsObject.type = value["Type"].asString();
		addrPools_.push_back(addrPoolsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

