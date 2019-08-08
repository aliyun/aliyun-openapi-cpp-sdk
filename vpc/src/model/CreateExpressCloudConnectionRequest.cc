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

#include <alibabacloud/vpc/model/CreateExpressCloudConnectionRequest.h>

using AlibabaCloud::Vpc::Model::CreateExpressCloudConnectionRequest;

CreateExpressCloudConnectionRequest::CreateExpressCloudConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateExpressCloudConnection")
{}

CreateExpressCloudConnectionRequest::~CreateExpressCloudConnectionRequest()
{}

long CreateExpressCloudConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateExpressCloudConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateExpressCloudConnectionRequest::getPeerLocation()const
{
	return peerLocation_;
}

void CreateExpressCloudConnectionRequest::setPeerLocation(const std::string& peerLocation)
{
	peerLocation_ = peerLocation;
	setCoreParameter("PeerLocation", peerLocation);
}

std::string CreateExpressCloudConnectionRequest::getPortType()const
{
	return portType_;
}

void CreateExpressCloudConnectionRequest::setPortType(const std::string& portType)
{
	portType_ = portType;
	setCoreParameter("PortType", portType);
}

std::string CreateExpressCloudConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateExpressCloudConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateExpressCloudConnectionRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateExpressCloudConnectionRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateExpressCloudConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateExpressCloudConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateExpressCloudConnectionRequest::getDescription()const
{
	return description_;
}

void CreateExpressCloudConnectionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateExpressCloudConnectionRequest::getPeerCity()const
{
	return peerCity_;
}

void CreateExpressCloudConnectionRequest::setPeerCity(const std::string& peerCity)
{
	peerCity_ = peerCity;
	setCoreParameter("PeerCity", peerCity);
}

std::string CreateExpressCloudConnectionRequest::getIDCardNo()const
{
	return iDCardNo_;
}

void CreateExpressCloudConnectionRequest::setIDCardNo(const std::string& iDCardNo)
{
	iDCardNo_ = iDCardNo;
	setCoreParameter("IDCardNo", iDCardNo);
}

std::string CreateExpressCloudConnectionRequest::getRedundantEccId()const
{
	return redundantEccId_;
}

void CreateExpressCloudConnectionRequest::setRedundantEccId(const std::string& redundantEccId)
{
	redundantEccId_ = redundantEccId;
	setCoreParameter("RedundantEccId", redundantEccId);
}

long CreateExpressCloudConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateExpressCloudConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateExpressCloudConnectionRequest::getContactMail()const
{
	return contactMail_;
}

void CreateExpressCloudConnectionRequest::setContactMail(const std::string& contactMail)
{
	contactMail_ = contactMail;
	setCoreParameter("ContactMail", contactMail);
}

std::string CreateExpressCloudConnectionRequest::getContactTel()const
{
	return contactTel_;
}

void CreateExpressCloudConnectionRequest::setContactTel(const std::string& contactTel)
{
	contactTel_ = contactTel;
	setCoreParameter("ContactTel", contactTel);
}

std::string CreateExpressCloudConnectionRequest::getIdcSP()const
{
	return idcSP_;
}

void CreateExpressCloudConnectionRequest::setIdcSP(const std::string& idcSP)
{
	idcSP_ = idcSP;
	setCoreParameter("IdcSP", idcSP);
}

std::string CreateExpressCloudConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CreateExpressCloudConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateExpressCloudConnectionRequest::getName()const
{
	return name_;
}

void CreateExpressCloudConnectionRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

