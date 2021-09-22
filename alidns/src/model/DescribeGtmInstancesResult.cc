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

#include <alibabacloud/alidns/model/DescribeGtmInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmInstancesResult::DescribeGtmInstancesResult() :
	ServiceResult()
{}

DescribeGtmInstancesResult::DescribeGtmInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmInstancesResult::~DescribeGtmInstancesResult()
{}

void DescribeGtmInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGtmInstancesNode = value["GtmInstances"]["GtmInstance"];
	for (auto valueGtmInstancesGtmInstance : allGtmInstancesNode)
	{
		GtmInstance gtmInstancesObject;
		if(!valueGtmInstancesGtmInstance["ExpireTime"].isNull())
			gtmInstancesObject.expireTime = valueGtmInstancesGtmInstance["ExpireTime"].asString();
		if(!valueGtmInstancesGtmInstance["AccessStrategyNum"].isNull())
			gtmInstancesObject.accessStrategyNum = std::stoi(valueGtmInstancesGtmInstance["AccessStrategyNum"].asString());
		if(!valueGtmInstancesGtmInstance["CreateTime"].isNull())
			gtmInstancesObject.createTime = valueGtmInstancesGtmInstance["CreateTime"].asString();
		if(!valueGtmInstancesGtmInstance["CnameMode"].isNull())
			gtmInstancesObject.cnameMode = valueGtmInstancesGtmInstance["CnameMode"].asString();
		if(!valueGtmInstancesGtmInstance["InstanceId"].isNull())
			gtmInstancesObject.instanceId = valueGtmInstancesGtmInstance["InstanceId"].asString();
		if(!valueGtmInstancesGtmInstance["ExpireTimestamp"].isNull())
			gtmInstancesObject.expireTimestamp = std::stol(valueGtmInstancesGtmInstance["ExpireTimestamp"].asString());
		if(!valueGtmInstancesGtmInstance["Ttl"].isNull())
			gtmInstancesObject.ttl = std::stoi(valueGtmInstancesGtmInstance["Ttl"].asString());
		if(!valueGtmInstancesGtmInstance["AlertGroup"].isNull())
			gtmInstancesObject.alertGroup = valueGtmInstancesGtmInstance["AlertGroup"].asString();
		if(!valueGtmInstancesGtmInstance["AddressPoolNum"].isNull())
			gtmInstancesObject.addressPoolNum = std::stoi(valueGtmInstancesGtmInstance["AddressPoolNum"].asString());
		if(!valueGtmInstancesGtmInstance["InstanceName"].isNull())
			gtmInstancesObject.instanceName = valueGtmInstancesGtmInstance["InstanceName"].asString();
		if(!valueGtmInstancesGtmInstance["LbaStrategy"].isNull())
			gtmInstancesObject.lbaStrategy = valueGtmInstancesGtmInstance["LbaStrategy"].asString();
		if(!valueGtmInstancesGtmInstance["Cname"].isNull())
			gtmInstancesObject.cname = valueGtmInstancesGtmInstance["Cname"].asString();
		if(!valueGtmInstancesGtmInstance["VersionCode"].isNull())
			gtmInstancesObject.versionCode = valueGtmInstancesGtmInstance["VersionCode"].asString();
		if(!valueGtmInstancesGtmInstance["UserDomainName"].isNull())
			gtmInstancesObject.userDomainName = valueGtmInstancesGtmInstance["UserDomainName"].asString();
		if(!valueGtmInstancesGtmInstance["CreateTimestamp"].isNull())
			gtmInstancesObject.createTimestamp = std::stol(valueGtmInstancesGtmInstance["CreateTimestamp"].asString());
		if(!valueGtmInstancesGtmInstance["ResourceGroupId"].isNull())
			gtmInstancesObject.resourceGroupId = valueGtmInstancesGtmInstance["ResourceGroupId"].asString();
		gtmInstances_.push_back(gtmInstancesObject);
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

int DescribeGtmInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGtmInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGtmInstancesResult::GtmInstance> DescribeGtmInstancesResult::getGtmInstances()const
{
	return gtmInstances_;
}

int DescribeGtmInstancesResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeGtmInstancesResult::getTotalItems()const
{
	return totalItems_;
}

