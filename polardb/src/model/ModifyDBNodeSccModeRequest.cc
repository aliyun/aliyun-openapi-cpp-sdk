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

#include <alibabacloud/polardb/model/ModifyDBNodeSccModeRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodeSccModeRequest;

ModifyDBNodeSccModeRequest::ModifyDBNodeSccModeRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodeSccMode")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBNodeSccModeRequest::~ModifyDBNodeSccModeRequest()
{}

long ModifyDBNodeSccModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBNodeSccModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBNodeSccModeRequest::getDBNodeId()const
{
	return dBNodeId_;
}

void ModifyDBNodeSccModeRequest::setDBNodeId(const std::string& dBNodeId)
{
	dBNodeId_ = dBNodeId;
	setParameter("DBNodeId", dBNodeId);
}

std::string ModifyDBNodeSccModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBNodeSccModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBNodeSccModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBNodeSccModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBNodeSccModeRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBNodeSccModeRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBNodeSccModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBNodeSccModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBNodeSccModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBNodeSccModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBNodeSccModeRequest::getSccMode()const
{
	return sccMode_;
}

void ModifyDBNodeSccModeRequest::setSccMode(const std::string& sccMode)
{
	sccMode_ = sccMode;
	setParameter("SccMode", sccMode);
}

