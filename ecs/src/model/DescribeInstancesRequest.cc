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
	setCoreParameter("InnerIpAddresses", std::to_string(innerIpAddresses));
}

long DescribeInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeInstancesRequest::getImageId()const
{
	return imageId_;
}

void DescribeInstancesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", std::to_string(imageId));
}

std::string DescribeInstancesRequest::getPrivateIpAddresses()const
{
	return privateIpAddresses_;
}

void DescribeInstancesRequest::setPrivateIpAddresses(const std::string& privateIpAddresses)
{
	privateIpAddresses_ = privateIpAddresses;
	setCoreParameter("PrivateIpAddresses", std::to_string(privateIpAddresses));
}

std::string DescribeInstancesRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void DescribeInstancesRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", std::to_string(hpcClusterId));
}

std::string DescribeInstancesRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeInstancesRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setCoreParameter("Filter2Value", std::to_string(filter2Value));
}

std::string DescribeInstancesRequest::getFilter4Value()const
{
	return filter4Value_;
}

void DescribeInstancesRequest::setFilter4Value(const std::string& filter4Value)
{
	filter4Value_ = filter4Value;
	setCoreParameter("Filter4Value", std::to_string(filter4Value));
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
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

std::string DescribeInstancesRequest::getKeyPairName()const
{
	return keyPairName_;
}

void DescribeInstancesRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", std::to_string(keyPairName));
}

std::string DescribeInstancesRequest::getFilter4Key()const
{
	return filter4Key_;
}

void DescribeInstancesRequest::setFilter4Key(const std::string& filter4Key)
{
	filter4Key_ = filter4Key;
	setCoreParameter("Filter4Key", std::to_string(filter4Key));
}

int DescribeInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeInstancesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstancesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribeInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeInstancesRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeInstancesRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setCoreParameter("LockReason", std::to_string(lockReason));
}

std::string DescribeInstancesRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeInstancesRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setCoreParameter("Filter1Key", std::to_string(filter1Key));
}

std::string DescribeInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeInstancesRequest::getRdmaIpAddresses()const
{
	return rdmaIpAddresses_;
}

void DescribeInstancesRequest::setRdmaIpAddresses(const std::string& rdmaIpAddresses)
{
	rdmaIpAddresses_ = rdmaIpAddresses;
	setCoreParameter("RdmaIpAddresses", std::to_string(rdmaIpAddresses));
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
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeInstancesRequest::getPublicIpAddresses()const
{
	return publicIpAddresses_;
}

void DescribeInstancesRequest::setPublicIpAddresses(const std::string& publicIpAddresses)
{
	publicIpAddresses_ = publicIpAddresses;
	setCoreParameter("PublicIpAddresses", std::to_string(publicIpAddresses));
}

std::string DescribeInstancesRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeInstancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
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
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeInstancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeInstancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", std::to_string(instanceChargeType));
}

std::string DescribeInstancesRequest::getFilter3Value()const
{
	return filter3Value_;
}

void DescribeInstancesRequest::setFilter3Value(const std::string& filter3Value)
{
	filter3Value_ = filter3Value;
	setCoreParameter("Filter3Value", std::to_string(filter3Value));
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
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeInstancesRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeInstancesRequest::setInstanceTypeFamily(const std::string& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	setCoreParameter("InstanceTypeFamily", std::to_string(instanceTypeFamily));
}

std::string DescribeInstancesRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeInstancesRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setCoreParameter("Filter1Value", std::to_string(filter1Value));
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
	setCoreParameter("Filter2Key", std::to_string(filter2Key));
}

long DescribeInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string DescribeInstancesRequest::getEipAddresses()const
{
	return eipAddresses_;
}

void DescribeInstancesRequest::setEipAddresses(const std::string& eipAddresses)
{
	eipAddresses_ = eipAddresses;
	setCoreParameter("EipAddresses", std::to_string(eipAddresses));
}

std::string DescribeInstancesRequest::getInstanceName()const
{
	return instanceName_;
}

void DescribeInstancesRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

std::string DescribeInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", std::to_string(instanceIds));
}

std::string DescribeInstancesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeInstancesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string DescribeInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string DescribeInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string DescribeInstancesRequest::getFilter3Key()const
{
	return filter3Key_;
}

void DescribeInstancesRequest::setFilter3Key(const std::string& filter3Key)
{
	filter3Key_ = filter3Key;
	setCoreParameter("Filter3Key", std::to_string(filter3Key));
}

std::string DescribeInstancesRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribeInstancesRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", std::to_string(instanceNetworkType));
}

std::string DescribeInstancesRequest::getStatus()const
{
	return status_;
}

void DescribeInstancesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

