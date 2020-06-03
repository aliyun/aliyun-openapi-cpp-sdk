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

#include <alibabacloud/hbase/model/DescribeDeletedInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeDeletedInstancesResult::DescribeDeletedInstancesResult() :
	ServiceResult()
{}

DescribeDeletedInstancesResult::DescribeDeletedInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeletedInstancesResult::~DescribeDeletedInstancesResult()
{}

void DescribeDeletedInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["MajorVersion"].isNull())
			instancesObject.majorVersion = valueInstancesInstance["MajorVersion"].asString();
		if(!valueInstancesInstance["Engine"].isNull())
			instancesObject.engine = valueInstancesInstance["Engine"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["CreatedTime"].isNull())
			instancesObject.createdTime = valueInstancesInstance["CreatedTime"].asString();
		if(!valueInstancesInstance["DeleteTime"].isNull())
			instancesObject.deleteTime = valueInstancesInstance["DeleteTime"].asString();
		if(!valueInstancesInstance["ClusterType"].isNull())
			instancesObject.clusterType = valueInstancesInstance["ClusterType"].asString();
		if(!valueInstancesInstance["ModuleStackVersion"].isNull())
			instancesObject.moduleStackVersion = valueInstancesInstance["ModuleStackVersion"].asString();
		if(!valueInstancesInstance["ParentId"].isNull())
			instancesObject.parentId = valueInstancesInstance["ParentId"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeDeletedInstancesResult::Instance> DescribeDeletedInstancesResult::getInstances()const
{
	return instances_;
}

long DescribeDeletedInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDeletedInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDeletedInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

