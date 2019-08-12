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

#include <alibabacloud/polardb/model/DescribeDBClusterAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult() :
	ServiceResult()
{}

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAttributeResult::~DescribeDBClusterAttributeResult()
{}

void DescribeDBClusterAttributeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTags = value["Tags"]["Tag"];
	for (auto value : allTags)
	{
		Tag tagsObject;
		if(!value["Key"].isNull())
			tagsObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			tagsObject.value = value["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allDBNodes = value["DBNodes"]["DBNode"];
	for (auto value : allDBNodes)
	{
		DBNode dBNodesObject;
		if(!value["DBNodeId"].isNull())
			dBNodesObject.dBNodeId = value["DBNodeId"].asString();
		if(!value["ZoneId"].isNull())
			dBNodesObject.zoneId = value["ZoneId"].asString();
		if(!value["DBNodeStatus"].isNull())
			dBNodesObject.dBNodeStatus = value["DBNodeStatus"].asString();
		if(!value["CreationTime"].isNull())
			dBNodesObject.creationTime = value["CreationTime"].asString();
		if(!value["DBNodeClass"].isNull())
			dBNodesObject.dBNodeClass = value["DBNodeClass"].asString();
		if(!value["DBNodeRole"].isNull())
			dBNodesObject.dBNodeRole = value["DBNodeRole"].asString();
		if(!value["MaxIOPS"].isNull())
			dBNodesObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
		if(!value["MaxConnections"].isNull())
			dBNodesObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		dBNodes_.push_back(dBNodesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["DBClusterNetworkType"].isNull())
		dBClusterNetworkType_ = value["DBClusterNetworkType"].asString();
	if(!value["VPCId"].isNull())
		vPCId_ = value["VPCId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["DBClusterStatus"].isNull())
		dBClusterStatus_ = value["DBClusterStatus"].asString();
	if(!value["DBClusterDescription"].isNull())
		dBClusterDescription_ = value["DBClusterDescription"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["DeletionLock"].isNull())
		deletionLock_ = std::stoi(value["DeletionLock"].asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString();
	if(!value["MaintainTime"].isNull())
		maintainTime_ = value["MaintainTime"].asString();
	if(!value["StorageUsed"].isNull())
		storageUsed_ = std::stol(value["StorageUsed"].asString());
	if(!value["StorageMax"].isNull())
		storageMax_ = std::stol(value["StorageMax"].asString());
	if(!value["ZoneIds"].isNull())
		zoneIds_ = value["ZoneIds"].asString();
	if(!value["SQLSize"].isNull())
		sQLSize_ = std::stol(value["SQLSize"].asString());
	if(!value["IsLatestVersion"].isNull())
		isLatestVersion_ = value["IsLatestVersion"].asString() == "true";

}

int DescribeDBClusterAttributeResult::getDeletionLock()const
{
	return deletionLock_;
}

std::string DescribeDBClusterAttributeResult::getVPCId()const
{
	return vPCId_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterStatus()const
{
	return dBClusterStatus_;
}

std::string DescribeDBClusterAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

std::string DescribeDBClusterAttributeResult::getExpired()const
{
	return expired_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterNetworkType()const
{
	return dBClusterNetworkType_;
}

std::string DescribeDBClusterAttributeResult::getPayType()const
{
	return payType_;
}

std::string DescribeDBClusterAttributeResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBClusterAttributeResult::getLockMode()const
{
	return lockMode_;
}

long DescribeDBClusterAttributeResult::getStorageUsed()const
{
	return storageUsed_;
}

bool DescribeDBClusterAttributeResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeDBClusterAttributeResult::getDBVersion()const
{
	return dBVersion_;
}

long DescribeDBClusterAttributeResult::getStorageMax()const
{
	return storageMax_;
}

std::vector<DescribeDBClusterAttributeResult::DBNode> DescribeDBClusterAttributeResult::getDBNodes()const
{
	return dBNodes_;
}

std::string DescribeDBClusterAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeDBClusterAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDBClusterAttributeResult::getZoneIds()const
{
	return zoneIds_;
}

long DescribeDBClusterAttributeResult::getSQLSize()const
{
	return sQLSize_;
}

std::string DescribeDBClusterAttributeResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeDBClusterAttributeResult::getMaintainTime()const
{
	return maintainTime_;
}

std::vector<DescribeDBClusterAttributeResult::Tag> DescribeDBClusterAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeDBClusterAttributeResult::getEngine()const
{
	return engine_;
}

