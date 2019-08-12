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

#include <alibabacloud/vpc/model/ApplyPhysicalConnectionLOARequest.h>

using AlibabaCloud::Vpc::Model::ApplyPhysicalConnectionLOARequest;

ApplyPhysicalConnectionLOARequest::ApplyPhysicalConnectionLOARequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ApplyPhysicalConnectionLOA")
{}

ApplyPhysicalConnectionLOARequest::~ApplyPhysicalConnectionLOARequest()
{}

long ApplyPhysicalConnectionLOARequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ApplyPhysicalConnectionLOARequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ApplyPhysicalConnectionLOARequest::getPeerLocation()const
{
	return peerLocation_;
}

void ApplyPhysicalConnectionLOARequest::setPeerLocation(const std::string& peerLocation)
{
	peerLocation_ = peerLocation;
	setCoreParameter("PeerLocation", peerLocation);
}

std::string ApplyPhysicalConnectionLOARequest::getClientToken()const
{
	return clientToken_;
}

void ApplyPhysicalConnectionLOARequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ApplyPhysicalConnectionLOARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ApplyPhysicalConnectionLOARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ApplyPhysicalConnectionLOARequest::getBandwidth()const
{
	return bandwidth_;
}

void ApplyPhysicalConnectionLOARequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string ApplyPhysicalConnectionLOARequest::getLineType()const
{
	return lineType_;
}

void ApplyPhysicalConnectionLOARequest::setLineType(const std::string& lineType)
{
	lineType_ = lineType;
	setCoreParameter("LineType", lineType);
}

std::string ApplyPhysicalConnectionLOARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ApplyPhysicalConnectionLOARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ApplyPhysicalConnectionLOARequest::getConstructionTime()const
{
	return constructionTime_;
}

void ApplyPhysicalConnectionLOARequest::setConstructionTime(const std::string& constructionTime)
{
	constructionTime_ = constructionTime;
	setCoreParameter("ConstructionTime", constructionTime);
}

long ApplyPhysicalConnectionLOARequest::getOwnerId()const
{
	return ownerId_;
}

void ApplyPhysicalConnectionLOARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ApplyPhysicalConnectionLOARequest::getInstanceId()const
{
	return instanceId_;
}

void ApplyPhysicalConnectionLOARequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ApplyPhysicalConnectionLOARequest::getRegionId()const
{
	return regionId_;
}

void ApplyPhysicalConnectionLOARequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ApplyPhysicalConnectionLOARequest::getCompanyName()const
{
	return companyName_;
}

void ApplyPhysicalConnectionLOARequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setCoreParameter("CompanyName", companyName);
}

std::string ApplyPhysicalConnectionLOARequest::getSi()const
{
	return si_;
}

void ApplyPhysicalConnectionLOARequest::setSi(const std::string& si)
{
	si_ = si;
	setCoreParameter("Si", si);
}

std::vector<ApplyPhysicalConnectionLOARequest::PMInfo> ApplyPhysicalConnectionLOARequest::getPMInfo()const
{
	return pMInfo_;
}

void ApplyPhysicalConnectionLOARequest::setPMInfo(const std::vector<PMInfo>& pMInfo)
{
	pMInfo_ = pMInfo;
	int i = 0;
	for(int i = 0; i!= pMInfo.size(); i++)	{
		auto obj = pMInfo.at(i);
		std::string str ="PMInfo."+ std::to_string(i);
		setCoreParameter(str + ".PMCertificateNo", std::to_string(obj.pMCertificateNo));
		setCoreParameter(str + ".PMName", std::to_string(obj.pMName));
		setCoreParameter(str + ".PMCertificateType", std::to_string(obj.pMCertificateType));
		setCoreParameter(str + ".PMContactInfo", std::to_string(obj.pMContactInfo));
		setCoreParameter(str + ".PMGender", std::to_string(obj.pMGender));
	}
}

