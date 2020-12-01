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

#include <alibabacloud/openanalytics-open/model/UpgradeInstanceRequest.h>

using AlibabaCloud::Openanalytics_open::Model::UpgradeInstanceRequest;

UpgradeInstanceRequest::UpgradeInstanceRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "UpgradeInstance")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeInstanceRequest::~UpgradeInstanceRequest()
{}

std::string UpgradeInstanceRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string UpgradeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void UpgradeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string UpgradeInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void UpgradeInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setBodyParameter("ChargeType", chargeType);
}

std::string UpgradeInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void UpgradeInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setBodyParameter("InstanceType", instanceType);
}

std::string UpgradeInstanceRequest::getComponent()const
{
	return component_;
}

void UpgradeInstanceRequest::setComponent(const std::string& component)
{
	component_ = component;
	setBodyParameter("Component", component);
}

