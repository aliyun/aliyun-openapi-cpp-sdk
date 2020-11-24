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

#include <alibabacloud/hitsdb/model/DescribeHiTSDBInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

DescribeHiTSDBInstanceResult::DescribeHiTSDBInstanceResult() :
	ServiceResult()
{}

DescribeHiTSDBInstanceResult::DescribeHiTSDBInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHiTSDBInstanceResult::~DescribeHiTSDBInstanceResult()
{}

void DescribeHiTSDBInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityIpListNode = value["SecurityIpList"]["SecurityIp"];
	for (auto valueSecurityIpListSecurityIp : allSecurityIpListNode)
	{
		SecurityIp securityIpListObject;
		if(!valueSecurityIpListSecurityIp["Ip"].isNull())
			securityIpListObject.ip = valueSecurityIpListSecurityIp["Ip"].asString();
		securityIpList_.push_back(securityIpListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceAlias"].isNull())
		instanceAlias_ = value["InstanceAlias"].asString();
	if(!value["InstanceDescription"].isNull())
		instanceDescription_ = value["InstanceDescription"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["GmtCreated"].isNull())
		gmtCreated_ = value["GmtCreated"].asString();
	if(!value["GmtExpire"].isNull())
		gmtExpire_ = value["GmtExpire"].asString();
	if(!value["InstanceClass"].isNull())
		instanceClass_ = value["InstanceClass"].asString();
	if(!value["MaxTimelineLimit"].isNull())
		maxTimelineLimit_ = value["MaxTimelineLimit"].asString();
	if(!value["InstanceStorage"].isNull())
		instanceStorage_ = value["InstanceStorage"].asString();
	if(!value["InstanceTps"].isNull())
		instanceTps_ = value["InstanceTps"].asString();
	if(!value["ReverseVpcIp"].isNull())
		reverseVpcIp_ = value["ReverseVpcIp"].asString();
	if(!value["ReverseVpcPort"].isNull())
		reverseVpcPort_ = value["ReverseVpcPort"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VswitchId"].isNull())
		vswitchId_ = value["VswitchId"].asString();
	if(!value["ConnectionString"].isNull())
		connectionString_ = value["ConnectionString"].asString();
	if(!value["PublicConnectionString"].isNull())
		publicConnectionString_ = value["PublicConnectionString"].asString();
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString() == "true";
	if(!value["EngineType"].isNull())
		engineType_ = value["EngineType"].asString();
	if(!value["CpuNumber"].isNull())
		cpuNumber_ = value["CpuNumber"].asString();
	if(!value["MemSize"].isNull())
		memSize_ = value["MemSize"].asString();
	if(!value["Series"].isNull())
		series_ = std::stoi(value["Series"].asString());
	if(!value["RDSStatus"].isNull())
		rDSStatus_ = value["RDSStatus"].asString();
	if(!value["DiskCategory"].isNull())
		diskCategory_ = value["DiskCategory"].asString();

}

bool DescribeHiTSDBInstanceResult::getAutoRenew()const
{
	return autoRenew_;
}

std::string DescribeHiTSDBInstanceResult::getGmtCreated()const
{
	return gmtCreated_;
}

std::string DescribeHiTSDBInstanceResult::getCpuNumber()const
{
	return cpuNumber_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceAlias()const
{
	return instanceAlias_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceStatus()const
{
	return instanceStatus_;
}

std::string DescribeHiTSDBInstanceResult::getNetworkType()const
{
	return networkType_;
}

std::string DescribeHiTSDBInstanceResult::getGmtExpire()const
{
	return gmtExpire_;
}

std::string DescribeHiTSDBInstanceResult::getMemSize()const
{
	return memSize_;
}

std::string DescribeHiTSDBInstanceResult::getMaxTimelineLimit()const
{
	return maxTimelineLimit_;
}

std::string DescribeHiTSDBInstanceResult::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

std::string DescribeHiTSDBInstanceResult::getPublicConnectionString()const
{
	return publicConnectionString_;
}

std::string DescribeHiTSDBInstanceResult::getEngineType()const
{
	return engineType_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceTps()const
{
	return instanceTps_;
}

std::string DescribeHiTSDBInstanceResult::getRDSStatus()const
{
	return rDSStatus_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceStorage()const
{
	return instanceStorage_;
}

std::string DescribeHiTSDBInstanceResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeHiTSDBInstanceResult::getDiskCategory()const
{
	return diskCategory_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceClass()const
{
	return instanceClass_;
}

std::string DescribeHiTSDBInstanceResult::getVswitchId()const
{
	return vswitchId_;
}

int DescribeHiTSDBInstanceResult::getSeries()const
{
	return series_;
}

std::string DescribeHiTSDBInstanceResult::getVpcId()const
{
	return vpcId_;
}

std::vector<DescribeHiTSDBInstanceResult::SecurityIp> DescribeHiTSDBInstanceResult::getSecurityIpList()const
{
	return securityIpList_;
}

std::string DescribeHiTSDBInstanceResult::getChargeType()const
{
	return chargeType_;
}

std::string DescribeHiTSDBInstanceResult::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

std::string DescribeHiTSDBInstanceResult::getInstanceDescription()const
{
	return instanceDescription_;
}

std::string DescribeHiTSDBInstanceResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeHiTSDBInstanceResult::getConnectionString()const
{
	return connectionString_;
}

