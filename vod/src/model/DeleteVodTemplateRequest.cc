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

#include <alibabacloud/vod/model/DeleteVodTemplateRequest.h>

using AlibabaCloud::Vod::Model::DeleteVodTemplateRequest;

DeleteVodTemplateRequest::DeleteVodTemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteVodTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteVodTemplateRequest::~DeleteVodTemplateRequest()
{}

long DeleteVodTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteVodTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteVodTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteVodTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteVodTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteVodTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteVodTemplateRequest::getVodTemplateId()const
{
	return vodTemplateId_;
}

void DeleteVodTemplateRequest::setVodTemplateId(const std::string& vodTemplateId)
{
	vodTemplateId_ = vodTemplateId;
	setParameter("VodTemplateId", vodTemplateId);
}

