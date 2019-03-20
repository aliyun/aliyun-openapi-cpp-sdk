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
	auto allGtmInstances = value["GtmInstances"]["GtmInstance"];
	for (auto value : allGtmInstances)
	{
		GtmInstance gtmInstancesObject;
		if(!value["InstanceId"].isNull())
			gtmInstancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			gtmInstancesObject.instanceName = value["InstanceName"].asString();
		if(!value["Cname"].isNull())
			gtmInstancesObject.cname = value["Cname"].asString();
		if(!value["UserDomainName"].isNull())
			gtmInstancesObject.userDomainName = value["UserDomainName"].asString();
		if(!value["VersionCode"].isNull())
			gtmInstancesObject.versionCode = value["VersionCode"].asString();
		if(!value["Ttl"].isNull())
			gtmInstancesObject.ttl = std::stoi(value["Ttl"].asString());
		if(!value["LbaStrategy"].isNull())
			gtmInstancesObject.lbaStrategy = value["LbaStrategy"].asString();
		if(!value["CreateTime"].isNull())
			gtmInstancesObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimestamp"].isNull())
			gtmInstancesObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["ExpireTime"].isNull())
			gtmInstancesObject.expireTime = value["ExpireTime"].asString();
		if(!value["ExpireTimestamp"].isNull())
			gtmInstancesObject.expireTimestamp = std::stol(value["ExpireTimestamp"].asString());
		if(!value["AlertGroup"].isNull())
			gtmInstancesObject.alertGroup = value["AlertGroup"].asString();
		gtmInstances_.push_back(gtmInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());

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

