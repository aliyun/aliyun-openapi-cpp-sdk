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

#include <alibabacloud/alidns/model/DescribeIspFlushCacheInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeIspFlushCacheInstancesResult::DescribeIspFlushCacheInstancesResult() :
	ServiceResult()
{}

DescribeIspFlushCacheInstancesResult::DescribeIspFlushCacheInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIspFlushCacheInstancesResult::~DescribeIspFlushCacheInstancesResult()
{}

void DescribeIspFlushCacheInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspFlushCacheInstancesNode = value["IspFlushCacheInstances"]["IspFlushCacheInstance"];
	for (auto valueIspFlushCacheInstancesIspFlushCacheInstance : allIspFlushCacheInstancesNode)
	{
		IspFlushCacheInstance ispFlushCacheInstancesObject;
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["Isp"].isNull())
			ispFlushCacheInstancesObject.isp = valueIspFlushCacheInstancesIspFlushCacheInstance["Isp"].asString();
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["ExpireTime"].isNull())
			ispFlushCacheInstancesObject.expireTime = valueIspFlushCacheInstancesIspFlushCacheInstance["ExpireTime"].asString();
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["InstanceId"].isNull())
			ispFlushCacheInstancesObject.instanceId = valueIspFlushCacheInstancesIspFlushCacheInstance["InstanceId"].asString();
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["ExpireTimestamp"].isNull())
			ispFlushCacheInstancesObject.expireTimestamp = std::stol(valueIspFlushCacheInstancesIspFlushCacheInstance["ExpireTimestamp"].asString());
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["InstanceName"].isNull())
			ispFlushCacheInstancesObject.instanceName = valueIspFlushCacheInstancesIspFlushCacheInstance["InstanceName"].asString();
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["VersionCode"].isNull())
			ispFlushCacheInstancesObject.versionCode = valueIspFlushCacheInstancesIspFlushCacheInstance["VersionCode"].asString();
		if(!valueIspFlushCacheInstancesIspFlushCacheInstance["Status"].isNull())
			ispFlushCacheInstancesObject.status = valueIspFlushCacheInstancesIspFlushCacheInstance["Status"].asString();
		auto quotaInfoNode = value["QuotaInfo"];
		if(!quotaInfoNode["InstanceQuota"].isNull())
			ispFlushCacheInstancesObject.quotaInfo.instanceQuota = std::stoi(quotaInfoNode["InstanceQuota"].asString());
		if(!quotaInfoNode["InstanceQuotaUsed"].isNull())
			ispFlushCacheInstancesObject.quotaInfo.instanceQuotaUsed = std::stoi(quotaInfoNode["InstanceQuotaUsed"].asString());
		ispFlushCacheInstances_.push_back(ispFlushCacheInstancesObject);
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

std::vector<DescribeIspFlushCacheInstancesResult::IspFlushCacheInstance> DescribeIspFlushCacheInstancesResult::getIspFlushCacheInstances()const
{
	return ispFlushCacheInstances_;
}

int DescribeIspFlushCacheInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIspFlushCacheInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeIspFlushCacheInstancesResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeIspFlushCacheInstancesResult::getTotalItems()const
{
	return totalItems_;
}

