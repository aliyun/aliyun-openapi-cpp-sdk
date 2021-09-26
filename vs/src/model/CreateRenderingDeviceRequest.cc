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

#include <alibabacloud/vs/model/CreateRenderingDeviceRequest.h>

using AlibabaCloud::Vs::Model::CreateRenderingDeviceRequest;

CreateRenderingDeviceRequest::CreateRenderingDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateRenderingDevice")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRenderingDeviceRequest::~CreateRenderingDeviceRequest()
{}

std::string CreateRenderingDeviceRequest::getImageId()const
{
	return imageId_;
}

void CreateRenderingDeviceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CreateRenderingDeviceRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateRenderingDeviceRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateRenderingDeviceRequest::getDescription()const
{
	return description_;
}

void CreateRenderingDeviceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateRenderingDeviceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateRenderingDeviceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string CreateRenderingDeviceRequest::getShowLog()const
{
	return showLog_;
}

void CreateRenderingDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

int CreateRenderingDeviceRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateRenderingDeviceRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateRenderingDeviceRequest::getPeriod()const
{
	return period_;
}

void CreateRenderingDeviceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int CreateRenderingDeviceRequest::getCount()const
{
	return count_;
}

void CreateRenderingDeviceRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

std::string CreateRenderingDeviceRequest::getSpecification()const
{
	return specification_;
}

void CreateRenderingDeviceRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

std::string CreateRenderingDeviceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateRenderingDeviceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long CreateRenderingDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRenderingDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRenderingDeviceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateRenderingDeviceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool CreateRenderingDeviceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateRenderingDeviceRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateRenderingDeviceRequest::getEdgeNodeName()const
{
	return edgeNodeName_;
}

void CreateRenderingDeviceRequest::setEdgeNodeName(const std::string& edgeNodeName)
{
	edgeNodeName_ = edgeNodeName;
	setParameter("EdgeNodeName", edgeNodeName);
}

