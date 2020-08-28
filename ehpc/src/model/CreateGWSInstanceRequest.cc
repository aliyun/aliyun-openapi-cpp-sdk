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

#include <alibabacloud/ehpc/model/CreateGWSInstanceRequest.h>

using AlibabaCloud::EHPC::Model::CreateGWSInstanceRequest;

CreateGWSInstanceRequest::CreateGWSInstanceRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "CreateGWSInstance")
{
	setMethod(HttpRequest::Method::Get);
}

CreateGWSInstanceRequest::~CreateGWSInstanceRequest()
{}

std::string CreateGWSInstanceRequest::getImageId()const
{
	return imageId_;
}

void CreateGWSInstanceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

bool CreateGWSInstanceRequest::getAllocatePublicAddress()const
{
	return allocatePublicAddress_;
}

void CreateGWSInstanceRequest::setAllocatePublicAddress(bool allocatePublicAddress)
{
	allocatePublicAddress_ = allocatePublicAddress;
	setParameter("AllocatePublicAddress", allocatePublicAddress ? "true" : "false");
}

std::string CreateGWSInstanceRequest::getAppList()const
{
	return appList_;
}

void CreateGWSInstanceRequest::setAppList(const std::string& appList)
{
	appList_ = appList;
	setParameter("AppList", appList);
}

int CreateGWSInstanceRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateGWSInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateGWSInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGWSInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGWSInstanceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateGWSInstanceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

int CreateGWSInstanceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateGWSInstanceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateGWSInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateGWSInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateGWSInstanceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateGWSInstanceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string CreateGWSInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateGWSInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateGWSInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateGWSInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateGWSInstanceRequest::getWorkMode()const
{
	return workMode_;
}

void CreateGWSInstanceRequest::setWorkMode(const std::string& workMode)
{
	workMode_ = workMode;
	setParameter("WorkMode", workMode);
}

std::string CreateGWSInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateGWSInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateGWSInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateGWSInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool CreateGWSInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateGWSInstanceRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateGWSInstanceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateGWSInstanceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateGWSInstanceRequest::getName()const
{
	return name_;
}

void CreateGWSInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreateGWSInstanceRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateGWSInstanceRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

