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

#include <alibabacloud/emr/model/ModifyHpHostRequest.h>

using AlibabaCloud::Emr::Model::ModifyHpHostRequest;

ModifyHpHostRequest::ModifyHpHostRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyHpHost")
{}

ModifyHpHostRequest::~ModifyHpHostRequest()
{}

int ModifyHpHostRequest::getCpuCore()const
{
	return cpuCore_;
}

void ModifyHpHostRequest::setCpuCore(int cpuCore)
{
	cpuCore_ = cpuCore;
	setCoreParameter("CpuCore", cpuCore);
}

int ModifyHpHostRequest::getMemSize()const
{
	return memSize_;
}

void ModifyHpHostRequest::setMemSize(int memSize)
{
	memSize_ = memSize;
	setCoreParameter("MemSize", memSize);
}

long ModifyHpHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyHpHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyHpHostRequest::getRackInfo()const
{
	return rackInfo_;
}

void ModifyHpHostRequest::setRackInfo(const std::string& rackInfo)
{
	rackInfo_ = rackInfo;
	setCoreParameter("RackInfo", rackInfo);
}

std::string ModifyHpHostRequest::getRole()const
{
	return role_;
}

void ModifyHpHostRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", role);
}

std::string ModifyHpHostRequest::getSerialNumber()const
{
	return serialNumber_;
}

void ModifyHpHostRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", serialNumber);
}

std::string ModifyHpHostRequest::getHostType()const
{
	return hostType_;
}

void ModifyHpHostRequest::setHostType(const std::string& hostType)
{
	hostType_ = hostType;
	setCoreParameter("HostType", hostType);
}

std::string ModifyHpHostRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyHpHostRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

std::vector<ModifyHpHostRequest::HpHostDisk> ModifyHpHostRequest::getHpHostDisk()const
{
	return hpHostDisk_;
}

void ModifyHpHostRequest::setHpHostDisk(const std::vector<HpHostDisk>& hpHostDisk)
{
	hpHostDisk_ = hpHostDisk;
	int i = 0;
	for(int i = 0; i!= hpHostDisk.size(); i++)	{
		auto obj = hpHostDisk.at(i);
		std::string str ="HpHostDisk."+ std::to_string(i);
		setCoreParameter(str + ".DiskSize", std::to_string(obj.diskSize));
		setCoreParameter(str + ".MountPath", std::to_string(obj.mountPath));
		setCoreParameter(str + ".DiskDevice", std::to_string(obj.diskDevice));
	}
}

std::string ModifyHpHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyHpHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyHpHostRequest::getVswitchId()const
{
	return vswitchId_;
}

void ModifyHpHostRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setCoreParameter("VswitchId", vswitchId);
}

std::string ModifyHpHostRequest::getHpHostBizId()const
{
	return hpHostBizId_;
}

void ModifyHpHostRequest::setHpHostBizId(const std::string& hpHostBizId)
{
	hpHostBizId_ = hpHostBizId;
	setCoreParameter("HpHostBizId", hpHostBizId);
}

std::string ModifyHpHostRequest::getExternalKey()const
{
	return externalKey_;
}

void ModifyHpHostRequest::setExternalKey(const std::string& externalKey)
{
	externalKey_ = externalKey;
	setCoreParameter("ExternalKey", externalKey);
}

std::string ModifyHpHostRequest::getHostName()const
{
	return hostName_;
}

void ModifyHpHostRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string ModifyHpHostRequest::getRegionId()const
{
	return regionId_;
}

void ModifyHpHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyHpHostRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyHpHostRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string ModifyHpHostRequest::getInnerIp()const
{
	return innerIp_;
}

void ModifyHpHostRequest::setInnerIp(const std::string& innerIp)
{
	innerIp_ = innerIp;
	setCoreParameter("InnerIp", innerIp);
}

std::string ModifyHpHostRequest::getExternalIp()const
{
	return externalIp_;
}

void ModifyHpHostRequest::setExternalIp(const std::string& externalIp)
{
	externalIp_ = externalIp;
	setCoreParameter("ExternalIp", externalIp);
}

