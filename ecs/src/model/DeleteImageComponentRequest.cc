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

#include <alibabacloud/ecs/model/DeleteImageComponentRequest.h>

using AlibabaCloud::Ecs::Model::DeleteImageComponentRequest;

DeleteImageComponentRequest::DeleteImageComponentRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteImageComponent")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteImageComponentRequest::~DeleteImageComponentRequest()
{}

long DeleteImageComponentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteImageComponentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteImageComponentRequest::getImageComponentId()const
{
	return imageComponentId_;
}

void DeleteImageComponentRequest::setImageComponentId(const std::string& imageComponentId)
{
	imageComponentId_ = imageComponentId;
	setParameter("ImageComponentId", imageComponentId);
}

std::string DeleteImageComponentRequest::getRegionId()const
{
	return regionId_;
}

void DeleteImageComponentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<DeleteImageComponentRequest::TemplateTag> DeleteImageComponentRequest::getTemplateTag()const
{
	return templateTag_;
}

void DeleteImageComponentRequest::setTemplateTag(const std::vector<TemplateTag>& templateTag)
{
	templateTag_ = templateTag;
	for(int dep1 = 0; dep1!= templateTag.size(); dep1++) {
		auto templateTagObj = templateTag.at(dep1);
		std::string templateTagObjStr = "TemplateTag." + std::to_string(dep1 + 1);
		setParameter(templateTagObjStr + ".Key", templateTagObj.key);
		setParameter(templateTagObjStr + ".Value", templateTagObj.value);
	}
}

std::string DeleteImageComponentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteImageComponentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteImageComponentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteImageComponentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteImageComponentRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteImageComponentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

