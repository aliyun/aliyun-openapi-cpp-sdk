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
{}

CreateGWSInstanceRequest::~CreateGWSInstanceRequest()
{}

std::string CreateGWSInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateGWSInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateGWSInstanceRequest::getImageId()const
{
	return imageId_;
}

void CreateGWSInstanceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

bool CreateGWSInstanceRequest::getAllocatePublicAddress()const
{
	return allocatePublicAddress_;
}

void CreateGWSInstanceRequest::setAllocatePublicAddress(bool allocatePublicAddress)
{
	allocatePublicAddress_ = allocatePublicAddress;
	setCoreParameter("AllocatePublicAddress", allocatePublicAddress ? "true" : "false");
}

std::string CreateGWSInstanceRequest::getAppList()const
{
	return appList_;
}

void CreateGWSInstanceRequest::setAppList(const std::string& appList)
{
	appList_ = appList;
	setCoreParameter("AppList", appList);
}

int CreateGWSInstanceRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateGWSInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateGWSInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateGWSInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateGWSInstanceRequest::getWorkMode()const
{
	return workMode_;
}

void CreateGWSInstanceRequest::setWorkMode(const std::string& workMode)
{
	workMode_ = workMode;
	setCoreParameter("WorkMode", workMode);
}

std::string CreateGWSInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGWSInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateGWSInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateGWSInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

bool CreateGWSInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateGWSInstanceRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateGWSInstanceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateGWSInstanceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateGWSInstanceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateGWSInstanceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

int CreateGWSInstanceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateGWSInstanceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateGWSInstanceRequest::getName()const
{
	return name_;
}

void CreateGWSInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateGWSInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateGWSInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string CreateGWSInstanceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateGWSInstanceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

int CreateGWSInstanceRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateGWSInstanceRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

