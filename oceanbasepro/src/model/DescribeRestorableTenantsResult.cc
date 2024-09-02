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

#include <alibabacloud/oceanbasepro/model/DescribeRestorableTenantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeRestorableTenantsResult::DescribeRestorableTenantsResult() :
	ServiceResult()
{}

DescribeRestorableTenantsResult::DescribeRestorableTenantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestorableTenantsResult::~DescribeRestorableTenantsResult()
{}

void DescribeRestorableTenantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantsNode = value["Tenants"]["Data"];
	for (auto valueTenantsData : allTenantsNode)
	{
		Data tenantsObject;
		if(!valueTenantsData["TenantName"].isNull())
			tenantsObject.tenantName = valueTenantsData["TenantName"].asString();
		if(!valueTenantsData["Method"].isNull())
			tenantsObject.method = valueTenantsData["Method"].asString();
		if(!valueTenantsData["TenantId"].isNull())
			tenantsObject.tenantId = valueTenantsData["TenantId"].asString();
		if(!valueTenantsData["ClusterId"].isNull())
			tenantsObject.clusterId = valueTenantsData["ClusterId"].asString();
		if(!valueTenantsData["ObRpmVersion"].isNull())
			tenantsObject.obRpmVersion = valueTenantsData["ObRpmVersion"].asString();
		if(!valueTenantsData["ObVersion"].isNull())
			tenantsObject.obVersion = valueTenantsData["ObVersion"].asString();
		if(!valueTenantsData["SourceRegion"].isNull())
			tenantsObject.sourceRegion = valueTenantsData["SourceRegion"].asString();
		if(!valueTenantsData["TenantAlias"].isNull())
			tenantsObject.tenantAlias = valueTenantsData["TenantAlias"].asString();
		if(!valueTenantsData["CpuNum"].isNull())
			tenantsObject.cpuNum = std::stol(valueTenantsData["CpuNum"].asString());
		if(!valueTenantsData["MemoryNum"].isNull())
			tenantsObject.memoryNum = std::stol(valueTenantsData["MemoryNum"].asString());
		if(!valueTenantsData["BackupBucketName"].isNull())
			tenantsObject.backupBucketName = valueTenantsData["BackupBucketName"].asString();
		if(!valueTenantsData["ObTenantId"].isNull())
			tenantsObject.obTenantId = valueTenantsData["ObTenantId"].asString();
		if(!valueTenantsData["ClusterName"].isNull())
			tenantsObject.clusterName = valueTenantsData["ClusterName"].asString();
		if(!valueTenantsData["UsedDisk"].isNull())
			tenantsObject.usedDisk = std::stol(valueTenantsData["UsedDisk"].asString());
		if(!valueTenantsData["UnitNum"].isNull())
			tenantsObject.unitNum = std::stol(valueTenantsData["UnitNum"].asString());
		if(!valueTenantsData["TenantMode"].isNull())
			tenantsObject.tenantMode = valueTenantsData["TenantMode"].asString();
		if(!valueTenantsData["TenantDataBackupRemainDays"].isNull())
			tenantsObject.tenantDataBackupRemainDays = std::stoi(valueTenantsData["TenantDataBackupRemainDays"].asString());
		auto allTimeIntervalListNode = valueTenantsData["TimeIntervalList"]["TimeIntervalListItem"];
		for (auto valueTenantsDataTimeIntervalListTimeIntervalListItem : allTimeIntervalListNode)
		{
			Data::TimeIntervalListItem timeIntervalListObject;
			if(!valueTenantsDataTimeIntervalListTimeIntervalListItem["StartTime"].isNull())
				timeIntervalListObject.startTime = valueTenantsDataTimeIntervalListTimeIntervalListItem["StartTime"].asString();
			if(!valueTenantsDataTimeIntervalListTimeIntervalListItem["EndTime"].isNull())
				timeIntervalListObject.endTime = valueTenantsDataTimeIntervalListTimeIntervalListItem["EndTime"].asString();
			if(!valueTenantsDataTimeIntervalListTimeIntervalListItem["FromArchive"].isNull())
				timeIntervalListObject.fromArchive = valueTenantsDataTimeIntervalListTimeIntervalListItem["FromArchive"].asString() == "true";
			if(!valueTenantsDataTimeIntervalListTimeIntervalListItem["StorageType"].isNull())
				timeIntervalListObject.storageType = valueTenantsDataTimeIntervalListTimeIntervalListItem["StorageType"].asString();
			tenantsObject.timeIntervalList.push_back(timeIntervalListObject);
		}
		auto allBackupSetsNode = valueTenantsData["BackupSets"]["BackupSetsItem"];
		for (auto valueTenantsDataBackupSetsBackupSetsItem : allBackupSetsNode)
		{
			Data::BackupSetsItem backupSetsObject;
			if(!valueTenantsDataBackupSetsBackupSetsItem["Checkpoint"].isNull())
				backupSetsObject.checkpoint = valueTenantsDataBackupSetsBackupSetsItem["Checkpoint"].asString();
			if(!valueTenantsDataBackupSetsBackupSetsItem["SetId"].isNull())
				backupSetsObject.setId = valueTenantsDataBackupSetsBackupSetsItem["SetId"].asString();
			if(!valueTenantsDataBackupSetsBackupSetsItem["BackupSetId"].isNull())
				backupSetsObject.backupSetId = valueTenantsDataBackupSetsBackupSetsItem["BackupSetId"].asString();
			if(!valueTenantsDataBackupSetsBackupSetsItem["TenantId"].isNull())
				backupSetsObject.tenantId = valueTenantsDataBackupSetsBackupSetsItem["TenantId"].asString();
			tenantsObject.backupSets.push_back(backupSetsObject);
		}
		tenants_.push_back(tenantsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRestorableTenantsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeRestorableTenantsResult::Data> DescribeRestorableTenantsResult::getTenants()const
{
	return tenants_;
}

