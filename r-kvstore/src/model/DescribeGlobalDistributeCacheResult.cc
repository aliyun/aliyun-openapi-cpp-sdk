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
		if(!valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceId"].isNull())
			globalDistributeCachesObject.globalInstanceId = valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceId"].asString();
		if(!valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceName"].isNull())
			globalDistributeCachesObject.globalInstanceName = valueGlobalDistributeCachesGlobalDistributeCache["GlobalInstanceName"].asString();
		if(!valueGlobalDistributeCachesGlobalDistributeCache["Status"].isNull())
			globalDistributeCachesObject.status = valueGlobalDistributeCachesGlobalDistributeCache["Status"].asString();
		auto allSubInstancesNode = allGlobalDistributeCachesNode["SubInstances"]["SubInstance"];
		for (auto allGlobalDistributeCachesNodeSubInstancesSubInstance : allSubInstancesNode)
		{
			GlobalDistributeCache::SubInstance subInstancesObject;
			if(!allGlobalDistributeCachesNodeSubInstancesSubInstance["GlobalInstanceId"].isNull())
				subInstancesObject.globalInstanceId = allGlobalDistributeCachesNodeSubInstancesSubInstance["GlobalInstanceId"].asString();
			if(!allGlobalDistributeCachesNodeSubInstancesSubInstance["InstanceID"].isNull())
				subInstancesObject.instanceID = allGlobalDistributeCachesNodeSubInstancesSubInstance["InstanceID"].asString();
			if(!allGlobalDistributeCachesNodeSubInstancesSubInstance["RegionId"].isNull())
				subInstancesObject.regionId = allGlobalDistributeCachesNodeSubInstancesSubInstance["RegionId"].asString();
			if(!allGlobalDistributeCachesNodeSubInstancesSubInstance["InstanceStatus"].isNull())
				subInstancesObject.instanceStatus = allGlobalDistributeCachesNodeSubInstancesSubInstance["InstanceStatus"].asString();
			globalDistributeCachesObject.subInstances.push_back(subInstancesObject);
		}
		globalDistributeCaches_.push_back(globalDistributeCachesObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

