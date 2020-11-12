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

#include <alibabacloud/openanalytics-open/model/CreateInstanceRequest.h>

using AlibabaCloud::Openanalytics_open::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "CreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest()
{}

std::string CreateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string CreateInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setBodyParameter("ChargeType", chargeType);
}

std::string CreateInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setBodyParameter("InstanceType", instanceType);
}

std::string CreateInstanceRequest::getComponent()const
{
	return component_;
}

void CreateInstanceRequest::setComponent(const std::string& component)
{
	component_ = component;
	setBodyParameter("Component", component);
}

