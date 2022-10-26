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

#include <alibabacloud/polardb/model/DescribeDBClusterBasicInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterBasicInfoResult::DescribeDBClusterBasicInfoResult() :
	ServiceResult()
{}

DescribeDBClusterBasicInfoResult::DescribeDBClusterBasicInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterBasicInfoResult::~DescribeDBClusterBasicInfoResult()
{}

void DescribeDBClusterBasicInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DeletionLock"].isNull())
		deletionLock_ = std::stoi(value["DeletionLock"].asString());
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["DBClusterNetworkType"].isNull())
		dBClusterNetworkType_ = value["DBClusterNetworkType"].asString();
	if(!value["StorageMax"].isNull())
		storageMax_ = std::stol(value["StorageMax"].asString());
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["MaintainTime"].isNull())
		maintainTime_ = value["MaintainTime"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["VPCId"].isNull())
		vPCId_ = value["VPCId"].asString();
	if(!value["DBClusterStatus"].isNull())
		dBClusterStatus_ = value["DBClusterStatus"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["DBClusterDescription"].isNull())
		dBClusterDescription_ = value["DBClusterDescription"].asString();
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["DBVersionStatus"].isNull())
		dBVersionStatus_ = value["DBVersionStatus"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["SQLSize"].isNull())
		sQLSize_ = std::stol(value["SQLSize"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["SubCategory"].isNull())
		subCategory_ = value["SubCategory"].asString();
	if(!value["IsProxyLatestVersion"].isNull())
		isProxyLatestVersion_ = value["IsProxyLatestVersion"].asString() == "true";
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();
	if(!value["ProxyCpuCores"].isNull())
		proxyCpuCores_ = value["ProxyCpuCores"].asString();
	if(!value["ProxyStandardCpuCores"].isNull())
		proxyStandardCpuCores_ = value["ProxyStandardCpuCores"].asString();
	if(!value["ProxyType"].isNull())
		proxyType_ = value["ProxyType"].asString();
	if(!value["ProxyStatus"].isNull())
		proxyStatus_ = value["ProxyStatus"].asString();

}

int DescribeDBClusterBasicInfoResult::getDeletionLock()const
{
	return deletionLock_;
}

std::string DescribeDBClusterBasicInfoResult::getCategory()const
{
	return category_;
}

std::string DescribeDBClusterBasicInfoResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeDBClusterBasicInfoResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterBasicInfoResult::getProxyStatus()const
{
	return proxyStatus_;
}

std::string DescribeDBClusterBasicInfoResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBClusterBasicInfoResult::getDBClusterNetworkType()const
{
	return dBClusterNetworkType_;
}

std::string DescribeDBClusterBasicInfoResult::getProxyStandardCpuCores()const
{
	return proxyStandardCpuCores_;
}

long DescribeDBClusterBasicInfoResult::getStorageMax()const
{
	return storageMax_;
}

std::string DescribeDBClusterBasicInfoResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBClusterBasicInfoResult::getMaintainTime()const
{
	return maintainTime_;
}

std::string DescribeDBClusterBasicInfoResult::getEngine()const
{
	return engine_;
}

std::string DescribeDBClusterBasicInfoResult::getStorageType()const
{
	return storageType_;
}

std::string DescribeDBClusterBasicInfoResult::getVPCId()const
{
	return vPCId_;
}

std::string DescribeDBClusterBasicInfoResult::getDBClusterStatus()const
{
	return dBClusterStatus_;
}

std::string DescribeDBClusterBasicInfoResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeDBClusterBasicInfoResult::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

std::string DescribeDBClusterBasicInfoResult::getExpired()const
{
	return expired_;
}

std::string DescribeDBClusterBasicInfoResult::getProxyCpuCores()const
{
	return proxyCpuCores_;
}

std::string DescribeDBClusterBasicInfoResult::getLockMode()const
{
	return lockMode_;
}

bool DescribeDBClusterBasicInfoResult::getIsProxyLatestVersion()const
{
	return isProxyLatestVersion_;
}

std::string DescribeDBClusterBasicInfoResult::getDBVersionStatus()const
{
	return dBVersionStatus_;
}

std::string DescribeDBClusterBasicInfoResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeDBClusterBasicInfoResult::getSubCategory()const
{
	return subCategory_;
}

long DescribeDBClusterBasicInfoResult::getSQLSize()const
{
	return sQLSize_;
}

std::string DescribeDBClusterBasicInfoResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDBClusterBasicInfoResult::getProxyType()const
{
	return proxyType_;
}

std::string DescribeDBClusterBasicInfoResult::getExpireTime()const
{
	return expireTime_;
}

