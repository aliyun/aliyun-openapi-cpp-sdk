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

#include <alibabacloud/selectdb/model/DescribeDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeDBInstancesResult::DescribeDBInstancesResult() :
	ServiceResult()
{}

DescribeDBInstancesResult::DescribeDBInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesResult::~DescribeDBInstancesResult()
{}

void DescribeDBInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstance"];
	for (auto valueItemsDBInstance : allItemsNode)
	{
		DBInstance itemsObject;
		if(!valueItemsDBInstance["connectionString"].isNull())
			itemsObject.connectionString = valueItemsDBInstance["connectionString"].asString();
		if(!valueItemsDBInstance["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstance["DBInstanceId"].asString();
		if(!valueItemsDBInstance["Description"].isNull())
			itemsObject.description = valueItemsDBInstance["Description"].asString();
		if(!valueItemsDBInstance["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstance["Engine"].asString();
		if(!valueItemsDBInstance["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstance["EngineVersion"].asString();
		if(!valueItemsDBInstance["InstanceUsedType"].isNull())
			itemsObject.instanceUsedType = valueItemsDBInstance["InstanceUsedType"].asString();
		if(!valueItemsDBInstance["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstance["RegionId"].asString();
		if(!valueItemsDBInstance["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstance["ZoneId"].asString();
		if(!valueItemsDBInstance["ChargeType"].isNull())
			itemsObject.chargeType = valueItemsDBInstance["ChargeType"].asString();
		if(!valueItemsDBInstance["Category"].isNull())
			itemsObject.category = valueItemsDBInstance["Category"].asString();
		if(!valueItemsDBInstance["Status"].isNull())
			itemsObject.status = valueItemsDBInstance["Status"].asString();
		if(!valueItemsDBInstance["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstance["VpcId"].asString();
		if(!valueItemsDBInstance["VswitchId"].isNull())
			itemsObject.vswitchId = valueItemsDBInstance["VswitchId"].asString();
		if(!valueItemsDBInstance["ResourceCpu"].isNull())
			itemsObject.resourceCpu = std::stol(valueItemsDBInstance["ResourceCpu"].asString());
		if(!valueItemsDBInstance["ResourceMemory"].isNull())
			itemsObject.resourceMemory = std::stol(valueItemsDBInstance["ResourceMemory"].asString());
		if(!valueItemsDBInstance["ScaleMin"].isNull())
			itemsObject.scaleMin = std::stol(valueItemsDBInstance["ScaleMin"].asString());
		if(!valueItemsDBInstance["ScaleMax"].isNull())
			itemsObject.scaleMax = std::stol(valueItemsDBInstance["ScaleMax"].asString());
		if(!valueItemsDBInstance["ScaleReplica"].isNull())
			itemsObject.scaleReplica = std::stol(valueItemsDBInstance["ScaleReplica"].asString());
		if(!valueItemsDBInstance["StorageSize"].isNull())
			itemsObject.storageSize = std::stol(valueItemsDBInstance["StorageSize"].asString());
		if(!valueItemsDBInstance["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBInstance["StorageType"].asString();
		if(!valueItemsDBInstance["ObjectStoreSize"].isNull())
			itemsObject.objectStoreSize = std::stol(valueItemsDBInstance["ObjectStoreSize"].asString());
		if(!valueItemsDBInstance["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstance["ExpireTime"].asString();
		if(!valueItemsDBInstance["LockMode"].isNull())
			itemsObject.lockMode = std::stol(valueItemsDBInstance["LockMode"].asString());
		if(!valueItemsDBInstance["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstance["LockReason"].asString();
		if(!valueItemsDBInstance["IsDeleted"].isNull())
			itemsObject.isDeleted = valueItemsDBInstance["IsDeleted"].asString() == "true";
		if(!valueItemsDBInstance["MaintainStarttime"].isNull())
			itemsObject.maintainStarttime = valueItemsDBInstance["MaintainStarttime"].asString();
		if(!valueItemsDBInstance["MaintainEndtime"].isNull())
			itemsObject.maintainEndtime = valueItemsDBInstance["MaintainEndtime"].asString();
		if(!valueItemsDBInstance["GmtCreated"].isNull())
			itemsObject.gmtCreated = valueItemsDBInstance["GmtCreated"].asString();
		if(!valueItemsDBInstance["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsDBInstance["GmtModified"].asString();
		if(!valueItemsDBInstance["ParentInstance"].isNull())
			itemsObject.parentInstance = valueItemsDBInstance["ParentInstance"].asString();
		if(!valueItemsDBInstance["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBInstance["ResourceGroupId"].asString();
		if(!valueItemsDBInstance["MaintainStartTimeStr"].isNull())
			itemsObject.maintainStartTimeStr = valueItemsDBInstance["MaintainStartTimeStr"].asString();
		if(!valueItemsDBInstance["MaintainEndTimeStr"].isNull())
			itemsObject.maintainEndTimeStr = valueItemsDBInstance["MaintainEndTimeStr"].asString();
		if(!valueItemsDBInstance["TenantClusterId"].isNull())
			itemsObject.tenantClusterId = valueItemsDBInstance["TenantClusterId"].asString();
		if(!valueItemsDBInstance["TenantToken"].isNull())
			itemsObject.tenantToken = valueItemsDBInstance["TenantToken"].asString();
		if(!valueItemsDBInstance["TenantUserId"].isNull())
			itemsObject.tenantUserId = valueItemsDBInstance["TenantUserId"].asString();
		if(!valueItemsDBInstance["ClusterCount"].isNull())
			itemsObject.clusterCount = std::stoi(valueItemsDBInstance["ClusterCount"].asString());
		auto allTagsNode = valueItemsDBInstance["Tags"]["TagsItem"];
		for (auto valueItemsDBInstanceTagsTagsItem : allTagsNode)
		{
			DBInstance::TagsItem tagsObject;
			if(!valueItemsDBInstanceTagsTagsItem["TagKey"].isNull())
				tagsObject.tagKey = valueItemsDBInstanceTagsTagsItem["TagKey"].asString();
			if(!valueItemsDBInstanceTagsTagsItem["TagValue"].isNull())
				tagsObject.tagValue = valueItemsDBInstanceTagsTagsItem["TagValue"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeDBInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

long DescribeDBInstancesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancesResult::DBInstance> DescribeDBInstancesResult::getItems()const
{
	return items_;
}

