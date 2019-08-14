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

#include <alibabacloud/ecs/model/DescribeInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstances")
{}

DescribeInstancesRequest::~DescribeInstancesRequest()
{}

std::string DescribeInstancesRequest::getInnerIpAddresses()const
{
	return innerIpAddresses_;
}

void DescribeInstancesRequest::setInnerIpAddresses(const std::string& innerIpAddresses)
{
	innerIpAddresses_ = innerIpAddresses;
	setCoreParameter("InnerIpAddresses", innerIpAddresses);
}

long DescribeInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstancesRequest::getImageId()const
{
	return imageId_;
}

void DescribeInstancesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string DescribeInstancesRequest::getPrivateIpAddresses()const
{
	return privateIpAddresses_;
}

void DescribeInstancesRequest::setPrivateIpAddresses(const std::string& privateIpAddresses)
{
	privateIpAddresses_ = privateIpAddresses;
	setCoreParameter("PrivateIpAddresses", privateIpAddresses);
}

std::string DescribeInstancesRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void DescribeInstancesRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", hpcClusterId);
}

std::string DescribeInstancesRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeInstancesRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setCoreParameter("Filter2Value", filter2Value);
}

std::string DescribeInstancesRequest::getFilter4Value()const
{
	return filter4Value_;
}

void DescribeInstancesRequest::setFilter4Value(const std::string& filter4Value)
{
	filter4Value_ = filter4Value;
	setCoreParameter("Filter4Value", filter4Value);
}

bool DescribeInstancesRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeInstancesRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string DescribeInstancesRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeInstancesRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

std::string DescribeInstancesRequest::getKeyPairName()const
{
	return keyPairName_;
}

void DescribeInstancesRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string DescribeInstancesRequest::getFilter4Key()const
{
	return filter4Key_;
}

void DescribeInstancesRequest::setFilter4Key(const std::string& filter4Key)
{
	filter4Key_ = filter4Key;
	setCoreParameter("Filter4Key", filter4Key);
}

int DescribeInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstancesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstancesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeInstancesRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeInstancesRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setCoreParameter("LockReason", lockReason);
}

std::string DescribeInstancesRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeInstancesRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setCoreParameter("Filter1Key", filter1Key);
}

std::string DescribeInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstancesRequest::getRdmaIpAddresses()const
{
	return rdmaIpAddresses_;
}

void DescribeInstancesRequest::setRdmaIpAddresses(const std::string& rdmaIpAddresses)
{
	rdmaIpAddresses_ = rdmaIpAddresses;
	setCoreParameter("RdmaIpAddresses", rdmaIpAddresses);
}

bool DescribeInstancesRequest::getDeviceAvailable()const
{
	return deviceAvailable_;
}

void DescribeInstancesRequest::setDeviceAvailable(bool deviceAvailable)
{
	deviceAvailable_ = deviceAvailable;
	setCoreParameter("DeviceAvailable", deviceAvailable ? "true" : "false");
}

int DescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstancesRequest::getPublicIpAddresses()const
{
	return publicIpAddresses_;
}

void DescribeInstancesRequest::setPublicIpAddresses(const std::string& publicIpAddresses)
{
	publicIpAddresses_ = publicIpAddresses;
	setCoreParameter("PublicIpAddresses", publicIpAddresses);
}

std::string DescribeInstancesRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeInstancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string DescribeInstancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeInstancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeInstancesRequest::getFilter3Value()const
{
	return filter3Value_;
}

void DescribeInstancesRequest::setFilter3Value(const std::string& filter3Value)
{
	filter3Value_ = filter3Value;
	setCoreParameter("Filter3Value", filter3Value);
}

bool DescribeInstancesRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeInstancesRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstancesRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeInstancesRequest::setInstanceTypeFamily(const std::string& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	setCoreParameter("InstanceTypeFamily", instanceTypeFamily);
}

std::string DescribeInstancesRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeInstancesRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setCoreParameter("Filter1Value", filter1Value);
}

bool DescribeInstancesRequest::getNeedSaleCycle()const
{
	return needSaleCycle_;
}

void DescribeInstancesRequest::setNeedSaleCycle(bool needSaleCycle)
{
	needSaleCycle_ = needSaleCycle;
	setCoreParameter("NeedSaleCycle", needSaleCycle ? "true" : "false");
}

std::string DescribeInstancesRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeInstancesRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setCoreParameter("Filter2Key", filter2Key);
}

long DescribeInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string DescribeInstancesRequest::getEipAddresses()const
{
	return eipAddresses_;
}

void DescribeInstancesRequest::setEipAddresses(const std::string& eipAddresses)
{
	eipAddresses_ = eipAddresses;
	setCoreParameter("EipAddresses", eipAddresses);
}

std::string DescribeInstancesRequest::getInstanceName()const
{
	return instanceName_;
}

void DescribeInstancesRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string DescribeInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string DescribeInstancesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeInstancesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string DescribeInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string DescribeInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string DescribeInstancesRequest::getFilter3Key()const
{
	return filter3Key_;
}

void DescribeInstancesRequest::setFilter3Key(const std::string& filter3Key)
{
	filter3Key_ = filter3Key;
	setCoreParameter("Filter3Key", filter3Key);
}

std::string DescribeInstancesRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribeInstancesRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

std::string DescribeInstancesRequest::getStatus()const
{
	return status_;
}

void DescribeInstancesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

