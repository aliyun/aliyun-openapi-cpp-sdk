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

#include <alibabacloud/rds/model/DescribeResourceDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeResourceDetailsResult::DescribeResourceDetailsResult() :
	ServiceResult()
{}

DescribeResourceDetailsResult::DescribeResourceDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceDetailsResult::~DescribeResourceDetailsResult()
{}

void DescribeResourceDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRdsEcsSecurityGroupRelNode = value["RdsEcsSecurityGroupRel"]["RdsEcsSecurityGroupRelItem"];
	for (auto valueRdsEcsSecurityGroupRelRdsEcsSecurityGroupRelItem : allRdsEcsSecurityGroupRelNode)
	{
		RdsEcsSecurityGroupRelItem rdsEcsSecurityGroupRelObject;
		if(!valueRdsEcsSecurityGroupRelRdsEcsSecurityGroupRelItem["SecurityGroupName"].isNull())
			rdsEcsSecurityGroupRelObject.securityGroupName = valueRdsEcsSecurityGroupRelRdsEcsSecurityGroupRelItem["SecurityGroupName"].asString();
		rdsEcsSecurityGroupRel_.push_back(rdsEcsSecurityGroupRelObject);
	}
	if(!value["BackupDataSize"].isNull())
		backupDataSize_ = std::stol(value["BackupDataSize"].asString());
	if(!value["BackupLogSize"].isNull())
		backupLogSize_ = std::stol(value["BackupLogSize"].asString());
	if(!value["BackupSize"].isNull())
		backupSize_ = std::stol(value["BackupSize"].asString());
	if(!value["DbInstanceStorage"].isNull())
		dbInstanceStorage_ = std::stol(value["DbInstanceStorage"].asString());
	if(!value["DbProxyInstanceName"].isNull())
		dbProxyInstanceName_ = value["DbProxyInstanceName"].asString();
	if(!value["DiskUsed"].isNull())
		diskUsed_ = std::stol(value["DiskUsed"].asString());
	if(!value["InstanceStorageType"].isNull())
		instanceStorageType_ = value["InstanceStorageType"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["SecurityIPList"].isNull())
		securityIPList_ = value["SecurityIPList"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();

}

std::string DescribeResourceDetailsResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long DescribeResourceDetailsResult::getBackupSize()const
{
	return backupSize_;
}

std::string DescribeResourceDetailsResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::vector<DescribeResourceDetailsResult::RdsEcsSecurityGroupRelItem> DescribeResourceDetailsResult::getRdsEcsSecurityGroupRel()const
{
	return rdsEcsSecurityGroupRel_;
}

std::string DescribeResourceDetailsResult::getDbProxyInstanceName()const
{
	return dbProxyInstanceName_;
}

long DescribeResourceDetailsResult::getDbInstanceStorage()const
{
	return dbInstanceStorage_;
}

std::string DescribeResourceDetailsResult::getInstanceStorageType()const
{
	return instanceStorageType_;
}

std::string DescribeResourceDetailsResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeResourceDetailsResult::getSecurityIPList()const
{
	return securityIPList_;
}

long DescribeResourceDetailsResult::getBackupDataSize()const
{
	return backupDataSize_;
}

long DescribeResourceDetailsResult::getBackupLogSize()const
{
	return backupLogSize_;
}

std::string DescribeResourceDetailsResult::getRegion()const
{
	return region_;
}

long DescribeResourceDetailsResult::getDiskUsed()const
{
	return diskUsed_;
}

