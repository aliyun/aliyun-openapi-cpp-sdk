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

#include <alibabacloud/hitsdb/model/GetLindormInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

GetLindormInstanceResult::GetLindormInstanceResult() :
	ServiceResult()
{}

GetLindormInstanceResult::GetLindormInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLindormInstanceResult::~GetLindormInstanceResult()
{}

void GetLindormInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEngineListNode = value["EngineList"]["Engine"];
	for (auto valueEngineListEngine : allEngineListNode)
	{
		Engine engineListObject;
		if(!valueEngineListEngine["Version"].isNull())
			engineListObject.version = valueEngineListEngine["Version"].asString();
		if(!valueEngineListEngine["CpuCount"].isNull())
			engineListObject.cpuCount = valueEngineListEngine["CpuCount"].asString();
		if(!valueEngineListEngine["CoreCount"].isNull())
			engineListObject.coreCount = valueEngineListEngine["CoreCount"].asString();
		if(!valueEngineListEngine["Engine"].isNull())
			engineListObject.engine = valueEngineListEngine["Engine"].asString();
		if(!valueEngineListEngine["MemorySize"].isNull())
			engineListObject.memorySize = valueEngineListEngine["MemorySize"].asString();
		if(!valueEngineListEngine["IsLastVersion"].isNull())
			engineListObject.isLastVersion = valueEngineListEngine["IsLastVersion"].asString() == "true";
		if(!valueEngineListEngine["LatestVersion"].isNull())
			engineListObject.latestVersion = valueEngineListEngine["LatestVersion"].asString();
		engineList_.push_back(engineListObject);
	}
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VswitchId"].isNull())
		vswitchId_ = value["VswitchId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["ServiceType"].isNull())
		serviceType_ = value["ServiceType"].asString();
	if(!value["EnableKms"].isNull())
		enableKms_ = value["EnableKms"].asString() == "true";
	if(!value["DiskUsage"].isNull())
		diskUsage_ = value["DiskUsage"].asString();
	if(!value["DiskCategory"].isNull())
		diskCategory_ = value["DiskCategory"].asString();
	if(!value["ColdStorage"].isNull())
		coldStorage_ = std::stoi(value["ColdStorage"].asString());
	if(!value["ExpiredMilliseconds"].isNull())
		expiredMilliseconds_ = std::stol(value["ExpiredMilliseconds"].asString());
	if(!value["EngineType"].isNull())
		engineType_ = std::stoi(value["EngineType"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString() == "true";
	if(!value["DeletionProtection"].isNull())
		deletionProtection_ = value["DeletionProtection"].asString();
	if(!value["InstanceStorage"].isNull())
		instanceStorage_ = value["InstanceStorage"].asString();
	if(!value["AliUid"].isNull())
		aliUid_ = std::stol(value["AliUid"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["EnableFS"].isNull())
		enableFS_ = value["EnableFS"].asString() == "true";
	if(!value["CreateMilliseconds"].isNull())
		createMilliseconds_ = std::stol(value["CreateMilliseconds"].asString());
	if(!value["InstanceAlias"].isNull())
		instanceAlias_ = value["InstanceAlias"].asString();
	if(!value["EnableBDS"].isNull())
		enableBDS_ = value["EnableBDS"].asString() == "true";
	if(!value["EnablePhoenix"].isNull())
		enablePhoenix_ = value["EnablePhoenix"].asString() == "true";
	if(!value["DiskThreshold"].isNull())
		diskThreshold_ = value["DiskThreshold"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["EnableCompute"].isNull())
		enableCompute_ = value["EnableCompute"].asString() == "true";
	if(!value["EnableSSL"].isNull())
		enableSSL_ = value["EnableSSL"].asString() == "true";
	if(!value["EnableCdc"].isNull())
		enableCdc_ = value["EnableCdc"].asString() == "true";

}

long GetLindormInstanceResult::getExpiredMilliseconds()const
{
	return expiredMilliseconds_;
}

std::vector<GetLindormInstanceResult::Engine> GetLindormInstanceResult::getEngineList()const
{
	return engineList_;
}

std::string GetLindormInstanceResult::getDiskThreshold()const
{
	return diskThreshold_;
}

bool GetLindormInstanceResult::getEnableBDS()const
{
	return enableBDS_;
}

bool GetLindormInstanceResult::getAutoRenew()const
{
	return autoRenew_;
}

std::string GetLindormInstanceResult::getDiskUsage()const
{
	return diskUsage_;
}

bool GetLindormInstanceResult::getEnableFS()const
{
	return enableFS_;
}

bool GetLindormInstanceResult::getEnableCompute()const
{
	return enableCompute_;
}

std::string GetLindormInstanceResult::getNetworkType()const
{
	return networkType_;
}

std::string GetLindormInstanceResult::getServiceType()const
{
	return serviceType_;
}

std::string GetLindormInstanceResult::getInstanceAlias()const
{
	return instanceAlias_;
}

std::string GetLindormInstanceResult::getInstanceStatus()const
{
	return instanceStatus_;
}

int GetLindormInstanceResult::getEngineType()const
{
	return engineType_;
}

long GetLindormInstanceResult::getCreateMilliseconds()const
{
	return createMilliseconds_;
}

bool GetLindormInstanceResult::getEnableSSL()const
{
	return enableSSL_;
}

std::string GetLindormInstanceResult::getInstanceStorage()const
{
	return instanceStorage_;
}

std::string GetLindormInstanceResult::getZoneId()const
{
	return zoneId_;
}

bool GetLindormInstanceResult::getEnableKms()const
{
	return enableKms_;
}

std::string GetLindormInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string GetLindormInstanceResult::getCreateTime()const
{
	return createTime_;
}

int GetLindormInstanceResult::getColdStorage()const
{
	return coldStorage_;
}

std::string GetLindormInstanceResult::getDiskCategory()const
{
	return diskCategory_;
}

std::string GetLindormInstanceResult::getPayType()const
{
	return payType_;
}

std::string GetLindormInstanceResult::getDeletionProtection()const
{
	return deletionProtection_;
}

std::string GetLindormInstanceResult::getVswitchId()const
{
	return vswitchId_;
}

std::string GetLindormInstanceResult::getVpcId()const
{
	return vpcId_;
}

bool GetLindormInstanceResult::getEnableCdc()const
{
	return enableCdc_;
}

bool GetLindormInstanceResult::getEnablePhoenix()const
{
	return enablePhoenix_;
}

std::string GetLindormInstanceResult::getRegionId()const
{
	return regionId_;
}

std::string GetLindormInstanceResult::getExpireTime()const
{
	return expireTime_;
}

long GetLindormInstanceResult::getAliUid()const
{
	return aliUid_;
}

