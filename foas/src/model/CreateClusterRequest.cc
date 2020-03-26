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

#include <alibabacloud/foas/model/CreateClusterRequest.h>

using AlibabaCloud::Foas::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters");
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string CreateClusterRequest::getOrderId()const
{
	return orderId_;
}

void CreateClusterRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setBodyParameter("OrderId", orderId);
}

std::string CreateClusterRequest::getUserOssBucket()const
{
	return userOssBucket_;
}

void CreateClusterRequest::setUserOssBucket(const std::string& userOssBucket)
{
	userOssBucket_ = userOssBucket;
	setBodyParameter("UserOssBucket", userOssBucket);
}

std::string CreateClusterRequest::getDisplayName()const
{
	return displayName_;
}

void CreateClusterRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setBodyParameter("DisplayName", displayName);
}

std::string CreateClusterRequest::getUserVpcId()const
{
	return userVpcId_;
}

void CreateClusterRequest::setUserVpcId(const std::string& userVpcId)
{
	userVpcId_ = userVpcId;
	setBodyParameter("UserVpcId", userVpcId);
}

std::string CreateClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setBodyParameter("ZoneId", zoneId);
}

std::string CreateClusterRequest::getDescription()const
{
	return description_;
}

void CreateClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateClusterRequest::getUserVSwitch()const
{
	return userVSwitch_;
}

void CreateClusterRequest::setUserVSwitch(const std::string& userVSwitch)
{
	userVSwitch_ = userVSwitch;
	setBodyParameter("UserVSwitch", userVSwitch);
}

