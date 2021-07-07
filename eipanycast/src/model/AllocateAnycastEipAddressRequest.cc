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

#include <alibabacloud/eipanycast/model/AllocateAnycastEipAddressRequest.h>

using AlibabaCloud::Eipanycast::Model::AllocateAnycastEipAddressRequest;

AllocateAnycastEipAddressRequest::AllocateAnycastEipAddressRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "AllocateAnycastEipAddress")
{
	setMethod(HttpRequest::Method::Post);
}

AllocateAnycastEipAddressRequest::~AllocateAnycastEipAddressRequest()
{}

std::string AllocateAnycastEipAddressRequest::getBandwidth()const
{
	return bandwidth_;
}

void AllocateAnycastEipAddressRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string AllocateAnycastEipAddressRequest::getServiceLocation()const
{
	return serviceLocation_;
}

void AllocateAnycastEipAddressRequest::setServiceLocation(const std::string& serviceLocation)
{
	serviceLocation_ = serviceLocation;
	setParameter("ServiceLocation", serviceLocation);
}

std::string AllocateAnycastEipAddressRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateAnycastEipAddressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AllocateAnycastEipAddressRequest::getDescription()const
{
	return description_;
}

void AllocateAnycastEipAddressRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AllocateAnycastEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void AllocateAnycastEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AllocateAnycastEipAddressRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void AllocateAnycastEipAddressRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string AllocateAnycastEipAddressRequest::getName()const
{
	return name_;
}

void AllocateAnycastEipAddressRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AllocateAnycastEipAddressRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void AllocateAnycastEipAddressRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

