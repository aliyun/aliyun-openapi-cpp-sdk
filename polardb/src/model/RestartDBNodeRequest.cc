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

#include <alibabacloud/polardb/model/RestartDBNodeRequest.h>

using AlibabaCloud::Polardb::Model::RestartDBNodeRequest;

RestartDBNodeRequest::RestartDBNodeRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "RestartDBNode")
{
	setMethod(HttpRequest::Method::Post);
}

RestartDBNodeRequest::~RestartDBNodeRequest()
{}

long RestartDBNodeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestartDBNodeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestartDBNodeRequest::getDBNodeId()const
{
	return dBNodeId_;
}

void RestartDBNodeRequest::setDBNodeId(const std::string& dBNodeId)
{
	dBNodeId_ = dBNodeId;
	setCoreParameter("DBNodeId", dBNodeId);
}

std::string RestartDBNodeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartDBNodeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RestartDBNodeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestartDBNodeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestartDBNodeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestartDBNodeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RestartDBNodeRequest::getOwnerId()const
{
	return ownerId_;
}

void RestartDBNodeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

