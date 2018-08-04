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

#include <alibabacloud/mts/model/RegisterMediaDetailPersonRequest.h>

using AlibabaCloud::Mts::Model::RegisterMediaDetailPersonRequest;

RegisterMediaDetailPersonRequest::RegisterMediaDetailPersonRequest() :
	RpcServiceRequest("mts", "2014-06-18", "RegisterMediaDetailPerson")
{}

RegisterMediaDetailPersonRequest::~RegisterMediaDetailPersonRequest()
{}

long RegisterMediaDetailPersonRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RegisterMediaDetailPersonRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RegisterMediaDetailPersonRequest::getImages()const
{
	return images_;
}

void RegisterMediaDetailPersonRequest::setImages(const std::string& images)
{
	images_ = images;
	setParameter("Images", images);
}

std::string RegisterMediaDetailPersonRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RegisterMediaDetailPersonRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RegisterMediaDetailPersonRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RegisterMediaDetailPersonRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RegisterMediaDetailPersonRequest::getPersonLib()const
{
	return personLib_;
}

void RegisterMediaDetailPersonRequest::setPersonLib(const std::string& personLib)
{
	personLib_ = personLib;
	setParameter("PersonLib", personLib);
}

long RegisterMediaDetailPersonRequest::getOwnerId()const
{
	return ownerId_;
}

void RegisterMediaDetailPersonRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RegisterMediaDetailPersonRequest::getCategory()const
{
	return category_;
}

void RegisterMediaDetailPersonRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string RegisterMediaDetailPersonRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegisterMediaDetailPersonRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RegisterMediaDetailPersonRequest::getPersonName()const
{
	return personName_;
}

void RegisterMediaDetailPersonRequest::setPersonName(const std::string& personName)
{
	personName_ = personName;
	setParameter("PersonName", personName);
}

