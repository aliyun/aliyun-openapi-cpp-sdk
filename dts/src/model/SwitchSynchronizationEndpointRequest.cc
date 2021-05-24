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

#include <alibabacloud/dts/model/SwitchSynchronizationEndpointRequest.h>

using AlibabaCloud::Dts::Model::SwitchSynchronizationEndpointRequest;

SwitchSynchronizationEndpointRequest::SwitchSynchronizationEndpointRequest() :
	RpcServiceRequest("dts", "2020-01-01", "SwitchSynchronizationEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchSynchronizationEndpointRequest::~SwitchSynchronizationEndpointRequest()
{}

std::string SwitchSynchronizationEndpointRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchSynchronizationEndpointRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SwitchSynchronizationEndpointRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void SwitchSynchronizationEndpointRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointType()const
{
	return endpointType_;
}

void SwitchSynchronizationEndpointRequest::setEndpointType(const std::string& endpointType)
{
	endpointType_ = endpointType;
	setParameter("EndpointType", endpointType);
}

std::string SwitchSynchronizationEndpointRequest::getAccountId()const
{
	return accountId_;
}

void SwitchSynchronizationEndpointRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string SwitchSynchronizationEndpointRequest::getRegionId()const
{
	return regionId_;
}

void SwitchSynchronizationEndpointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointPort()const
{
	return endpointPort_;
}

void SwitchSynchronizationEndpointRequest::setEndpointPort(const std::string& endpointPort)
{
	endpointPort_ = endpointPort;
	setParameter("EndpointPort", endpointPort);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointInstanceType()const
{
	return endpointInstanceType_;
}

void SwitchSynchronizationEndpointRequest::setEndpointInstanceType(const std::string& endpointInstanceType)
{
	endpointInstanceType_ = endpointInstanceType;
	setParameter("EndpointInstanceType", endpointInstanceType);
}

std::string SwitchSynchronizationEndpointRequest::getSourceEndpointOwnerID()const
{
	return sourceEndpointOwnerID_;
}

void SwitchSynchronizationEndpointRequest::setSourceEndpointOwnerID(const std::string& sourceEndpointOwnerID)
{
	sourceEndpointOwnerID_ = sourceEndpointOwnerID;
	setParameter("SourceEndpointOwnerID", sourceEndpointOwnerID);
}

std::string SwitchSynchronizationEndpointRequest::getSourceEndpointRole()const
{
	return sourceEndpointRole_;
}

void SwitchSynchronizationEndpointRequest::setSourceEndpointRole(const std::string& sourceEndpointRole)
{
	sourceEndpointRole_ = sourceEndpointRole;
	setParameter("SourceEndpointRole", sourceEndpointRole);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointIP()const
{
	return endpointIP_;
}

void SwitchSynchronizationEndpointRequest::setEndpointIP(const std::string& endpointIP)
{
	endpointIP_ = endpointIP;
	setParameter("EndpointIP", endpointIP);
}

std::string SwitchSynchronizationEndpointRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchSynchronizationEndpointRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointInstanceId()const
{
	return endpointInstanceId_;
}

void SwitchSynchronizationEndpointRequest::setEndpointInstanceId(const std::string& endpointInstanceId)
{
	endpointInstanceId_ = endpointInstanceId;
	setParameter("EndpointInstanceId", endpointInstanceId);
}

std::string SwitchSynchronizationEndpointRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void SwitchSynchronizationEndpointRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

