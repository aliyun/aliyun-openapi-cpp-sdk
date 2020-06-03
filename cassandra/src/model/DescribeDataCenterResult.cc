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

#include <alibabacloud/cassandra/model/DescribeDataCenterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeDataCenterResult::DescribeDataCenterResult() :
	ServiceResult()
{}

DescribeDataCenterResult::DescribeDataCenterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataCenterResult::~DescribeDataCenterResult()
{}

void DescribeDataCenterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DataCenterId"].isNull())
		dataCenterId_ = value["DataCenterId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["DataCenterName"].isNull())
		dataCenterName_ = value["DataCenterName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["NodeCount"].isNull())
		nodeCount_ = std::stoi(value["NodeCount"].asString());
	if(!value["DiskType"].isNull())
		diskType_ = value["DiskType"].asString();
	if(!value["DiskSize"].isNull())
		diskSize_ = std::stoi(value["DiskSize"].asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VswitchId"].isNull())
		vswitchId_ = value["VswitchId"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["CommodityInstance"].isNull())
		commodityInstance_ = value["CommodityInstance"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["AutoRenewal"].isNull())
		autoRenewal_ = value["AutoRenewal"].asString() == "true";
	if(!value["AutoRenewPeriod"].isNull())
		autoRenewPeriod_ = std::stoi(value["AutoRenewPeriod"].asString());

}

std::string DescribeDataCenterResult::getStatus()const
{
	return status_;
}

int DescribeDataCenterResult::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

std::string DescribeDataCenterResult::getDataCenterId()const
{
	return dataCenterId_;
}

std::string DescribeDataCenterResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeDataCenterResult::getCommodityInstance()const
{
	return commodityInstance_;
}

std::string DescribeDataCenterResult::getZoneId()const
{
	return zoneId_;
}

int DescribeDataCenterResult::getNodeCount()const
{
	return nodeCount_;
}

std::string DescribeDataCenterResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeDataCenterResult::getPayType()const
{
	return payType_;
}

std::string DescribeDataCenterResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeDataCenterResult::getDataCenterName()const
{
	return dataCenterName_;
}

std::string DescribeDataCenterResult::getVswitchId()const
{
	return vswitchId_;
}

std::string DescribeDataCenterResult::getDiskType()const
{
	return diskType_;
}

std::string DescribeDataCenterResult::getVpcId()const
{
	return vpcId_;
}

bool DescribeDataCenterResult::getAutoRenewal()const
{
	return autoRenewal_;
}

int DescribeDataCenterResult::getDiskSize()const
{
	return diskSize_;
}

std::string DescribeDataCenterResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDataCenterResult::getInstanceType()const
{
	return instanceType_;
}

std::string DescribeDataCenterResult::getExpireTime()const
{
	return expireTime_;
}

