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

#include <alibabacloud/smartag/model/DisassociateQosRequest.h>

using AlibabaCloud::Smartag::Model::DisassociateQosRequest;

DisassociateQosRequest::DisassociateQosRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DisassociateQos")
{
	setMethod(HttpRequest::Method::Post);
}

DisassociateQosRequest::~DisassociateQosRequest()
{}

long DisassociateQosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DisassociateQosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DisassociateQosRequest::getRegionId()const
{
	return regionId_;
}

void DisassociateQosRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DisassociateQosRequest::getQosId()const
{
	return qosId_;
}

void DisassociateQosRequest::setQosId(const std::string& qosId)
{
	qosId_ = qosId;
	setParameter("QosId", qosId);
}

std::string DisassociateQosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DisassociateQosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DisassociateQosRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DisassociateQosRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DisassociateQosRequest::getOwnerId()const
{
	return ownerId_;
}

void DisassociateQosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DisassociateQosRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DisassociateQosRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

