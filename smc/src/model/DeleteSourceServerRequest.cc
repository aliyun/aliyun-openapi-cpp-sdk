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

#include <alibabacloud/smc/model/DeleteSourceServerRequest.h>

using AlibabaCloud::Smc::Model::DeleteSourceServerRequest;

DeleteSourceServerRequest::DeleteSourceServerRequest() :
	RpcServiceRequest("smc", "2019-06-01", "DeleteSourceServer")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSourceServerRequest::~DeleteSourceServerRequest()
{}

std::string DeleteSourceServerRequest::getSourceId()const
{
	return sourceId_;
}

void DeleteSourceServerRequest::setSourceId(const std::string& sourceId)
{
	sourceId_ = sourceId;
	setParameter("SourceId", sourceId);
}

std::string DeleteSourceServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSourceServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteSourceServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSourceServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteSourceServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteSourceServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DeleteSourceServerRequest::getForce()const
{
	return force_;
}

void DeleteSourceServerRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

