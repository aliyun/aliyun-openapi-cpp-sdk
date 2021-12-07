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

#include <alibabacloud/hbase/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesInstance["VpcId"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["ModuleId"].isNull())
			instancesObject.moduleId = std::stoi(valueInstancesInstance["ModuleId"].asString());
		if(!valueInstancesInstance["VswitchId"].isNull())
			instancesObject.vswitchId = valueInstancesInstance["VswitchId"].asString();
		if(!valueInstancesInstance["BackupStatus"].isNull())
			instancesObject.backupStatus = valueInstancesInstance["BackupStatus"].asString();
		if(!valueInstancesInstance["PayType"].isNull())
			instancesObject.payType = valueInstancesInstance["PayType"].asString();
		if(!valueInstancesInstance["CoreDiskType"].isNull())
			instancesObject.coreDiskType = valueInstancesInstance["CoreDiskType"].asString();
		if(!valueInstancesInstance["MasterNodeCount"].isNull())
			instancesObject.masterNodeCount = std::stoi(valueInstancesInstance["MasterNodeCount"].asString());
		if(!valueInstancesInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesInstance["NetworkType"].asString();
		if(!valueInstancesInstance["CreatedTimeUTC"].isNull())
			instancesObject.createdTimeUTC = valueInstancesInstance["CreatedTimeUTC"].asString();
		if(!valueInstancesInstance["ParentId"].isNull())
			instancesObject.parentId = valueInstancesInstance["ParentId"].asString();
		if(!valueInstancesInstance["ExpireTimeUTC"].isNull())
			instancesObject.expireTimeUTC = valueInstancesInstance["ExpireTimeUTC"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["MasterInstanceType"].isNull())
			instancesObject.masterInstanceType = valueInstancesInstance["MasterInstanceType"].asString();
		if(!valueInstancesInstance["CoreInstanceType"].isNull())
			instancesObject.coreInstanceType = valueInstancesInstance["CoreInstanceType"].asString();
		if(!valueInstancesInstance["CreatedTime"].isNull())
			instancesObject.createdTime = valueInstancesInstance["CreatedTime"].asString();
		if(!valueInstancesInstance["CoreDiskSize"].isNull())
			instancesObject.coreDiskSize = std::stoi(valueInstancesInstance["CoreDiskSize"].asString());
		if(!valueInstancesInstance["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstance["ClusterId"].asString();
		if(!valueInstancesInstance["ExpireTime"].isNull())
			instancesObject.expireTime = valueInstancesInstance["ExpireTime"].asString();
		if(!valueInstancesInstance["IsHa"].isNull())
			instancesObject.isHa = valueInstancesInstance["IsHa"].asString() == "true";
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["ColdStorageStatus"].isNull())
			instancesObject.coldStorageStatus = valueInstancesInstance["ColdStorageStatus"].asString();
		if(!valueInstancesInstance["IsDeletionProtection"].isNull())
			instancesObject.isDeletionProtection = valueInstancesInstance["IsDeletionProtection"].asString() == "true";
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["MasterDiskSize"].isNull())
			instancesObject.masterDiskSize = std::stoi(valueInstancesInstance["MasterDiskSize"].asString());
		if(!valueInstancesInstance["MasterDiskType"].isNull())
			instancesObject.masterDiskType = valueInstancesInstance["MasterDiskType"].asString();
		if(!valueInstancesInstance["AutoRenewal"].isNull())
			instancesObject.autoRenewal = valueInstancesInstance["AutoRenewal"].asString() == "true";
		if(!valueInstancesInstance["ClusterType"].isNull())
			instancesObject.clusterType = valueInstancesInstance["ClusterType"].asString();
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		if(!valueInstancesInstance["ClusterName"].isNull())
			instancesObject.clusterName = valueInstancesInstance["ClusterName"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["Duration"].isNull())
			instancesObject.duration = std::stoi(valueInstancesInstance["Duration"].asString());
		if(!valueInstancesInstance["ModuleStackVersion"].isNull())
			instancesObject.moduleStackVersion = valueInstancesInstance["ModuleStackVersion"].asString();
		if(!valueInstancesInstance["Engine"].isNull())
			instancesObject.engine = valueInstancesInstance["Engine"].asString();
		if(!valueInstancesInstance["MajorVersion"].isNull())
			instancesObject.majorVersion = valueInstancesInstance["MajorVersion"].asString();
		if(!valueInstancesInstance["CoreDiskCount"].isNull())
			instancesObject.coreDiskCount = valueInstancesInstance["CoreDiskCount"].asString();
		if(!valueInstancesInstance["CoreNodeCount"].isNull())
			instancesObject.coreNodeCount = std::stoi(valueInstancesInstance["CoreNodeCount"].asString());
		auto allTagsNode = valueInstancesInstance["Tags"]["Tag"];
		for (auto valueInstancesInstanceTagsTag : allTagsNode)
		{
			Instance::Tag tagsObject;
			if(!valueInstancesInstanceTagsTag["Key"].isNull())
				tagsObject.key = valueInstancesInstanceTagsTag["Key"].asString();
			if(!valueInstancesInstanceTagsTag["Value"].isNull())
				tagsObject.value = valueInstancesInstanceTagsTag["Value"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeInstancesResult::Instance> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

long DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

