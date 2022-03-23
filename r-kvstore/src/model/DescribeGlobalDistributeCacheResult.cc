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

#include <alibabacloud/r-kvstore/model/DescribeGlobalDistributeCacheResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeGlobalDistributeCacheResult::DescribeGlobalDistributeCacheResult() :
	ServiceResult()
{}

DescribeGlobalDistributeCacheResult::DescribeGlobalDistributeCacheResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalDistributeCacheResult::~DescribeGlobalDistributeCacheResult()
{}

void DescribeGlobalDistributeCacheResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGlobalDistributeCachesNode = value["GlobalDistributeCaches"]["GlobalDistributeCache"];
	for (auto valueGlobalDistributeCachesGlobalDistributeCache : allGlobalDistributeCachesNode)
	{
		GlobalDistributeCache globalDistributeCachesObject;
		if(!valueGlobalDistributeCachesGlobalDistributeCache["Status"].isNull())
			globalDistributeCachesObject.status = valueGlobalDistributeCachesGlobalDistributeCache["Status"].asString();
		if(!valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceName"].isNull())
			globalDistributeCachesObject.globalInstanceName = valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceName"].asString();
		if(!valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceId"].isNull())
			globalDistributeCachesObject.globalInstanceId = valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceId"].asString();
		auto allSubInstancesNode = valueGlobalDistributeCachesGlobalDistributeCache["SubInstances"]["SubInstance"];
		for (auto valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance : allSubInstancesNode)
		{
			GlobalDistributeCache::SubInstance subInstancesObject;
			if(!valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["InstanceStatus"].isNull())
				subInstancesObject.instanceStatus = valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["InstanceStatus"].asString();
			if(!valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["InstanceID"].isNull())
				subInstancesObject.instanceID = valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["InstanceID"].asString();
			if(!valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["InstanceClass"].isNull())
				subInstancesObject.instanceClass = valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["InstanceClass"].asString();
			if(!valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["GlobalInstanceId"].isNull())
				subInstancesObject.globalInstanceId = valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["GlobalInstanceId"].asString();
			if(!valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["RegionId"].isNull())
				subInstancesObject.regionId = valueGlobalDistributeCachesGlobalDistributeCacheSubInstancesSubInstance["RegionId"].asString();
			globalDistributeCachesObject.subInstances.push_back(subInstancesObject);
		}
		globalDistributeCaches_.push_back(globalDistributeCachesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeGlobalDistributeCacheResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeGlobalDistributeCacheResult::GlobalDistributeCache> DescribeGlobalDistributeCacheResult::getGlobalDistributeCaches()const
{
	return globalDistributeCaches_;
}

int DescribeGlobalDistributeCacheResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGlobalDistributeCacheResult::getPageNumber()const
{
	return pageNumber_;
}

