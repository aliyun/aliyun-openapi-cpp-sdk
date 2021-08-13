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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSmartAccessGatewayAttributeResult::DescribeSmartAccessGatewayAttributeResult() :
	ServiceResult()
{}

DescribeSmartAccessGatewayAttributeResult::DescribeSmartAccessGatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartAccessGatewayAttributeResult::~DescribeSmartAccessGatewayAttributeResult()
{}

void DescribeSmartAccessGatewayAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["Device"];
	for (auto valueDevicesDevice : allDevicesNode)
	{
		Device devicesObject;
		if(!valueDevicesDevice["SerialNumber"].isNull())
			devicesObject.serialNumber = valueDevicesDevice["SerialNumber"].asString();
		if(!valueDevicesDevice["HaState"].isNull())
			devicesObject.haState = valueDevicesDevice["HaState"].asString();
		if(!valueDevicesDevice["SecretKey"].isNull())
			devicesObject.secretKey = valueDevicesDevice["SecretKey"].asString();
		if(!valueDevicesDevice["DpiSignatureDbVersion"].isNull())
			devicesObject.dpiSignatureDbVersion = valueDevicesDevice["DpiSignatureDbVersion"].asString();
		if(!valueDevicesDevice["SoftwareVersion"].isNull())
			devicesObject.softwareVersion = valueDevicesDevice["SoftwareVersion"].asString();
		if(!valueDevicesDevice["DistributeSkStatus"].isNull())
			devicesObject.distributeSkStatus = std::stoi(valueDevicesDevice["DistributeSkStatus"].asString());
		if(!valueDevicesDevice["MonitorVersion"].isNull())
			devicesObject.monitorVersion = valueDevicesDevice["MonitorVersion"].asString();
		if(!valueDevicesDevice["HcState"].isNull())
			devicesObject.hcState = valueDevicesDevice["HcState"].asString();
		devices_.push_back(devicesObject);
	}
	auto allLinksNode = value["Links"]["Link"];
	for (auto valueLinksLink : allLinksNode)
	{
		Link linksObject;
		if(!valueLinksLink["HealthCheckTargetIp"].isNull())
			linksObject.healthCheckTargetIp = valueLinksLink["HealthCheckTargetIp"].asString();
		if(!valueLinksLink["EndTime"].isNull())
			linksObject.endTime = std::stol(valueLinksLink["EndTime"].asString());
		if(!valueLinksLink["Status"].isNull())
			linksObject.status = valueLinksLink["Status"].asString();
		if(!valueLinksLink["Type"].isNull())
			linksObject.type = valueLinksLink["Type"].asString();
		if(!valueLinksLink["Bandwidth"].isNull())
			linksObject.bandwidth = valueLinksLink["Bandwidth"].asString();
		if(!valueLinksLink["RelateInstanceRegionId"].isNull())
			linksObject.relateInstanceRegionId = valueLinksLink["RelateInstanceRegionId"].asString();
		if(!valueLinksLink["RelateInstanceId"].isNull())
			linksObject.relateInstanceId = valueLinksLink["RelateInstanceId"].asString();
		if(!valueLinksLink["InstanceId"].isNull())
			linksObject.instanceId = valueLinksLink["InstanceId"].asString();
		if(!valueLinksLink["CommodityType"].isNull())
			linksObject.commodityType = valueLinksLink["CommodityType"].asString();
		links_.push_back(linksObject);
	}
	auto applicationBandwidthPackageOperationLocksNode = value["ApplicationBandwidthPackageOperationLocks"];
	if(!applicationBandwidthPackageOperationLocksNode["LockType"].isNull())
		applicationBandwidthPackageOperationLocks_.lockType = applicationBandwidthPackageOperationLocksNode["LockType"].asString();
	if(!applicationBandwidthPackageOperationLocksNode["LockReason"].isNull())
		applicationBandwidthPackageOperationLocks_.lockReason = applicationBandwidthPackageOperationLocksNode["LockReason"].asString();
	auto allQosIds = value["QosIds"]["QosId"];
	for (const auto &item : allQosIds)
		qosIds_.push_back(item.asString());
	auto allFlowLogIds = value["FlowLogIds"]["FlowLogId"];
	for (const auto &item : allFlowLogIds)
		flowLogIds_.push_back(item.asString());
	auto allAclIds = value["AclIds"]["AclId"];
	for (const auto &item : allAclIds)
		aclIds_.push_back(item.asString());
	if(!value["UpBandwidth4G"].isNull())
		upBandwidth4G_ = std::stoi(value["UpBandwidth4G"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["UserCount"].isNull())
		userCount_ = std::stoi(value["UserCount"].asString());
	if(!value["AssociatedCcnName"].isNull())
		associatedCcnName_ = value["AssociatedCcnName"].asString();
	if(!value["MaxBandwidth"].isNull())
		maxBandwidth_ = value["MaxBandwidth"].asString();
	if(!value["VpnStatus"].isNull())
		vpnStatus_ = value["VpnStatus"].asString();
	if(!value["BoxControllerIp"].isNull())
		boxControllerIp_ = value["BoxControllerIp"].asString();
	if(!value["UpBandwidthWan"].isNull())
		upBandwidthWan_ = std::stoi(value["UpBandwidthWan"].asString());
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["OptimizationType"].isNull())
		optimizationType_ = value["OptimizationType"].asString() == "true";
	if(!value["IpsecStatus"].isNull())
		ipsecStatus_ = value["IpsecStatus"].asString();
	if(!value["RoutingStrategy"].isNull())
		routingStrategy_ = value["RoutingStrategy"].asString();
	if(!value["AssociatedCcnId"].isNull())
		associatedCcnId_ = value["AssociatedCcnId"].asString();
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["ResellerUid"].isNull())
		resellerUid_ = value["ResellerUid"].asString();
	if(!value["SecurityLockThreshold"].isNull())
		securityLockThreshold_ = std::stoi(value["SecurityLockThreshold"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["DataPlan"].isNull())
		dataPlan_ = std::stol(value["DataPlan"].asString());
	if(!value["EnableOptimization"].isNull())
		enableOptimization_ = value["EnableOptimization"].asString() == "true";
	if(!value["City"].isNull())
		city_ = value["City"].asString();
	if(!value["ResellerInstanceId"].isNull())
		resellerInstanceId_ = value["ResellerInstanceId"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["BackupBoxControllerIp"].isNull())
		backupBoxControllerIp_ = value["BackupBoxControllerIp"].asString();
	if(!value["TrafficMasterSn"].isNull())
		trafficMasterSn_ = value["TrafficMasterSn"].asString();
	if(!value["AccessPointId"].isNull())
		accessPointId_ = value["AccessPointId"].asString();
	if(!value["ApplicationBandwidthPackageId"].isNull())
		applicationBandwidthPackageId_ = value["ApplicationBandwidthPackageId"].asString();
	if(!value["ApplicationBandwidthPackageName"].isNull())
		applicationBandwidthPackageName_ = value["ApplicationBandwidthPackageName"].asString();
	if(!value["AccelerateBandwidth"].isNull())
		accelerateBandwidth_ = std::stol(value["AccelerateBandwidth"].asString());
	if(!value["ApplicationBandwidthPackageBussinessStatus"].isNull())
		applicationBandwidthPackageBussinessStatus_ = value["ApplicationBandwidthPackageBussinessStatus"].asString();

}

int DescribeSmartAccessGatewayAttributeResult::getUpBandwidth4G()const
{
	return upBandwidth4G_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getDescription()const
{
	return description_;
}

long DescribeSmartAccessGatewayAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int DescribeSmartAccessGatewayAttributeResult::getUserCount()const
{
	return userCount_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getAssociatedCcnName()const
{
	return associatedCcnName_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getMaxBandwidth()const
{
	return maxBandwidth_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getVpnStatus()const
{
	return vpnStatus_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getBoxControllerIp()const
{
	return boxControllerIp_;
}

std::vector<std::string> DescribeSmartAccessGatewayAttributeResult::getQosIds()const
{
	return qosIds_;
}

int DescribeSmartAccessGatewayAttributeResult::getUpBandwidthWan()const
{
	return upBandwidthWan_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::vector<DescribeSmartAccessGatewayAttributeResult::Device> DescribeSmartAccessGatewayAttributeResult::getDevices()const
{
	return devices_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getName()const
{
	return name_;
}

bool DescribeSmartAccessGatewayAttributeResult::getOptimizationType()const
{
	return optimizationType_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getApplicationBandwidthPackageName()const
{
	return applicationBandwidthPackageName_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getIpsecStatus()const
{
	return ipsecStatus_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getRoutingStrategy()const
{
	return routingStrategy_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getApplicationBandwidthPackageId()const
{
	return applicationBandwidthPackageId_;
}

std::vector<std::string> DescribeSmartAccessGatewayAttributeResult::getFlowLogIds()const
{
	return flowLogIds_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getAssociatedCcnId()const
{
	return associatedCcnId_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getSmartAGId()const
{
	return smartAGId_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getInstanceType()const
{
	return instanceType_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getResellerUid()const
{
	return resellerUid_;
}

int DescribeSmartAccessGatewayAttributeResult::getSecurityLockThreshold()const
{
	return securityLockThreshold_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getStatus()const
{
	return status_;
}

long DescribeSmartAccessGatewayAttributeResult::getCreateTime()const
{
	return createTime_;
}

long DescribeSmartAccessGatewayAttributeResult::getDataPlan()const
{
	return dataPlan_;
}

bool DescribeSmartAccessGatewayAttributeResult::getEnableOptimization()const
{
	return enableOptimization_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getApplicationBandwidthPackageBussinessStatus()const
{
	return applicationBandwidthPackageBussinessStatus_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getCity()const
{
	return city_;
}

DescribeSmartAccessGatewayAttributeResult::ApplicationBandwidthPackageOperationLocks DescribeSmartAccessGatewayAttributeResult::getApplicationBandwidthPackageOperationLocks()const
{
	return applicationBandwidthPackageOperationLocks_;
}

long DescribeSmartAccessGatewayAttributeResult::getAccelerateBandwidth()const
{
	return accelerateBandwidth_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getResellerInstanceId()const
{
	return resellerInstanceId_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getBackupBoxControllerIp()const
{
	return backupBoxControllerIp_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getTrafficMasterSn()const
{
	return trafficMasterSn_;
}

std::string DescribeSmartAccessGatewayAttributeResult::getAccessPointId()const
{
	return accessPointId_;
}

std::vector<DescribeSmartAccessGatewayAttributeResult::Link> DescribeSmartAccessGatewayAttributeResult::getLinks()const
{
	return links_;
}

std::vector<std::string> DescribeSmartAccessGatewayAttributeResult::getAclIds()const
{
	return aclIds_;
}

