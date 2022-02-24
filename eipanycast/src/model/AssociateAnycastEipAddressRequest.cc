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

#include <alibabacloud/eipanycast/model/AssociateAnycastEipAddressRequest.h>

using AlibabaCloud::Eipanycast::Model::AssociateAnycastEipAddressRequest;

AssociateAnycastEipAddressRequest::AssociateAnycastEipAddressRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "AssociateAnycastEipAddress")
{
	setMethod(HttpRequest::Method::Post);
}

AssociateAnycastEipAddressRequest::~AssociateAnycastEipAddressRequest()
{}

bool AssociateAnycastEipAddressRequest::getDryRun()const
{
	return dryRun_;
}

void AssociateAnycastEipAddressRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string AssociateAnycastEipAddressRequest::getAssociationMode()const
{
	return associationMode_;
}

void AssociateAnycastEipAddressRequest::setAssociationMode(const std::string& associationMode)
{
	associationMode_ = associationMode;
	setParameter("AssociationMode", associationMode);
}

std::string AssociateAnycastEipAddressRequest::getClientToken()const
{
	return clientToken_;
}

void AssociateAnycastEipAddressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array AssociateAnycastEipAddressRequest::getPopLocations()const
{
	return popLocations_;
}

void AssociateAnycastEipAddressRequest::setPopLocations(const Array& popLocations)
{
	popLocations_ = popLocations;
	setParameter("PopLocations", std::to_string(popLocations));
}

std::string AssociateAnycastEipAddressRequest::getBindInstanceType()const
{
	return bindInstanceType_;
}

void AssociateAnycastEipAddressRequest::setBindInstanceType(const std::string& bindInstanceType)
{
	bindInstanceType_ = bindInstanceType;
	setParameter("BindInstanceType", bindInstanceType);
}

std::string AssociateAnycastEipAddressRequest::getBindInstanceRegionId()const
{
	return bindInstanceRegionId_;
}

void AssociateAnycastEipAddressRequest::setBindInstanceRegionId(const std::string& bindInstanceRegionId)
{
	bindInstanceRegionId_ = bindInstanceRegionId;
	setParameter("BindInstanceRegionId", bindInstanceRegionId);
}

std::string AssociateAnycastEipAddressRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void AssociateAnycastEipAddressRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string AssociateAnycastEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void AssociateAnycastEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateAnycastEipAddressRequest::getAnycastId()const
{
	return anycastId_;
}

void AssociateAnycastEipAddressRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

std::string AssociateAnycastEipAddressRequest::getBindInstanceId()const
{
	return bindInstanceId_;
}

void AssociateAnycastEipAddressRequest::setBindInstanceId(const std::string& bindInstanceId)
{
	bindInstanceId_ = bindInstanceId;
	setParameter("BindInstanceId", bindInstanceId);
}

