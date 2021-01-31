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

#include <alibabacloud/hbase/model/DescribeServerlessClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeServerlessClusterResult::DescribeServerlessClusterResult() :
	ServiceResult()
{}

DescribeServerlessClusterResult::DescribeServerlessClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServerlessClusterResult::~DescribeServerlessClusterResult()
{}

void DescribeServerlessClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["MainVersion"].isNull())
		mainVersion_ = value["MainVersion"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ClusterType"].isNull())
		clusterType_ = value["ClusterType"].asString();
	if(!value["HasUser"].isNull())
		hasUser_ = value["HasUser"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["HaType"].isNull())
		haType_ = value["HaType"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["InnerEndpoint"].isNull())
		innerEndpoint_ = value["InnerEndpoint"].asString();
	if(!value["OuterEndpoint"].isNull())
		outerEndpoint_ = value["OuterEndpoint"].asString();
	if(!value["ReserverMinQpsNum"].isNull())
		reserverMinQpsNum_ = value["ReserverMinQpsNum"].asString();
	if(!value["ReserverMaxQpsNum"].isNull())
		reserverMaxQpsNum_ = value["ReserverMaxQpsNum"].asString();
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["UpdateStatus"].isNull())
		updateStatus_ = value["UpdateStatus"].asString();
	if(!value["IsDeletionProtection"].isNull())
		isDeletionProtection_ = value["IsDeletionProtection"].asString();
	if(!value["DiskSize"].isNull())
		diskSize_ = value["DiskSize"].asString();
	if(!value["CuSize"].isNull())
		cuSize_ = value["CuSize"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeServerlessClusterResult::getUpdateStatus()const
{
	return updateStatus_;
}

std::string DescribeServerlessClusterResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeServerlessClusterResult::getOuterEndpoint()const
{
	return outerEndpoint_;
}

std::string DescribeServerlessClusterResult::getAutoRenew()const
{
	return autoRenew_;
}

std::string DescribeServerlessClusterResult::getReserverMinQpsNum()const
{
	return reserverMinQpsNum_;
}

std::string DescribeServerlessClusterResult::getIsDeletionProtection()const
{
	return isDeletionProtection_;
}

std::string DescribeServerlessClusterResult::getDiskSize()const
{
	return diskSize_;
}

std::string DescribeServerlessClusterResult::getReserverMaxQpsNum()const
{
	return reserverMaxQpsNum_;
}

std::string DescribeServerlessClusterResult::getCuSize()const
{
	return cuSize_;
}

std::string DescribeServerlessClusterResult::getStatus()const
{
	return status_;
}

std::string DescribeServerlessClusterResult::getInnerEndpoint()const
{
	return innerEndpoint_;
}

std::string DescribeServerlessClusterResult::getMainVersion()const
{
	return mainVersion_;
}

std::string DescribeServerlessClusterResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeServerlessClusterResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeServerlessClusterResult::getHasUser()const
{
	return hasUser_;
}

std::string DescribeServerlessClusterResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeServerlessClusterResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeServerlessClusterResult::getHaType()const
{
	return haType_;
}

std::string DescribeServerlessClusterResult::getClusterType()const
{
	return clusterType_;
}

std::string DescribeServerlessClusterResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeServerlessClusterResult::getPayType()const
{
	return payType_;
}

std::string DescribeServerlessClusterResult::getInstanceName()const
{
	return instanceName_;
}

std::string DescribeServerlessClusterResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeServerlessClusterResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeServerlessClusterResult::getExpireTime()const
{
	return expireTime_;
}

