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

#include <alibabacloud/edas/model/ScaleoutApplicationWithNewInstancesRequest.h>

using AlibabaCloud::Edas::Model::ScaleoutApplicationWithNewInstancesRequest;

ScaleoutApplicationWithNewInstancesRequest::ScaleoutApplicationWithNewInstancesRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/scaling/scale_out");
	setMethod(HttpRequest::Method::Post);
}

ScaleoutApplicationWithNewInstancesRequest::~ScaleoutApplicationWithNewInstancesRequest()
{}

int ScaleoutApplicationWithNewInstancesRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void ScaleoutApplicationWithNewInstancesRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

std::string ScaleoutApplicationWithNewInstancesRequest::getTemplateInstanceId()const
{
	return templateInstanceId_;
}

void ScaleoutApplicationWithNewInstancesRequest::setTemplateInstanceId(const std::string& templateInstanceId)
{
	templateInstanceId_ = templateInstanceId;
	setParameter("TemplateInstanceId", templateInstanceId);
}

std::string ScaleoutApplicationWithNewInstancesRequest::getGroupId()const
{
	return groupId_;
}

void ScaleoutApplicationWithNewInstancesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string ScaleoutApplicationWithNewInstancesRequest::getInstanceChargePeriodUnit()const
{
	return instanceChargePeriodUnit_;
}

void ScaleoutApplicationWithNewInstancesRequest::setInstanceChargePeriodUnit(const std::string& instanceChargePeriodUnit)
{
	instanceChargePeriodUnit_ = instanceChargePeriodUnit;
	setParameter("InstanceChargePeriodUnit", instanceChargePeriodUnit);
}

std::string ScaleoutApplicationWithNewInstancesRequest::getClusterId()const
{
	return clusterId_;
}

void ScaleoutApplicationWithNewInstancesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ScaleoutApplicationWithNewInstancesRequest::getScalingNum()const
{
	return scalingNum_;
}

void ScaleoutApplicationWithNewInstancesRequest::setScalingNum(int scalingNum)
{
	scalingNum_ = scalingNum;
	setParameter("ScalingNum", std::to_string(scalingNum));
}

std::string ScaleoutApplicationWithNewInstancesRequest::getTemplateId()const
{
	return templateId_;
}

void ScaleoutApplicationWithNewInstancesRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string ScaleoutApplicationWithNewInstancesRequest::getScalingPolicy()const
{
	return scalingPolicy_;
}

void ScaleoutApplicationWithNewInstancesRequest::setScalingPolicy(const std::string& scalingPolicy)
{
	scalingPolicy_ = scalingPolicy;
	setParameter("ScalingPolicy", scalingPolicy);
}

std::string ScaleoutApplicationWithNewInstancesRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void ScaleoutApplicationWithNewInstancesRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setParameter("TemplateVersion", templateVersion);
}

bool ScaleoutApplicationWithNewInstancesRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ScaleoutApplicationWithNewInstancesRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string ScaleoutApplicationWithNewInstancesRequest::getAppId()const
{
	return appId_;
}

void ScaleoutApplicationWithNewInstancesRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

int ScaleoutApplicationWithNewInstancesRequest::getInstanceChargePeriod()const
{
	return instanceChargePeriod_;
}

void ScaleoutApplicationWithNewInstancesRequest::setInstanceChargePeriod(int instanceChargePeriod)
{
	instanceChargePeriod_ = instanceChargePeriod;
	setParameter("InstanceChargePeriod", std::to_string(instanceChargePeriod));
}

std::string ScaleoutApplicationWithNewInstancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ScaleoutApplicationWithNewInstancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

