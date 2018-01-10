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

#include <alibabacloud/ecs/model/ModifyImageSharePermissionRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ModifyImageSharePermissionRequest::ModifyImageSharePermissionRequest() :
	EcsRequest("ModifyImageSharePermission")
{}

ModifyImageSharePermissionRequest::~ModifyImageSharePermissionRequest()
{}

std::string ModifyImageSharePermissionRequest::getAddAccount1()const
{
	return addAccount1_;
}

void ModifyImageSharePermissionRequest::setAddAccount1(const std::string& addAccount1)
{
	addAccount1_ = addAccount1;
	setParameter("AddAccount1", addAccount1);
}

long ModifyImageSharePermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyImageSharePermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyImageSharePermissionRequest::getImageId()const
{
	return imageId_;
}

void ModifyImageSharePermissionRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string ModifyImageSharePermissionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyImageSharePermissionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyImageSharePermissionRequest::getAddAccount9()const
{
	return addAccount9_;
}

void ModifyImageSharePermissionRequest::setAddAccount9(const std::string& addAccount9)
{
	addAccount9_ = addAccount9;
	setParameter("AddAccount9", addAccount9);
}

std::string ModifyImageSharePermissionRequest::getAddAccount8()const
{
	return addAccount8_;
}

void ModifyImageSharePermissionRequest::setAddAccount8(const std::string& addAccount8)
{
	addAccount8_ = addAccount8;
	setParameter("AddAccount8", addAccount8);
}

std::string ModifyImageSharePermissionRequest::getAddAccount7()const
{
	return addAccount7_;
}

void ModifyImageSharePermissionRequest::setAddAccount7(const std::string& addAccount7)
{
	addAccount7_ = addAccount7;
	setParameter("AddAccount7", addAccount7);
}

std::string ModifyImageSharePermissionRequest::getAddAccount6()const
{
	return addAccount6_;
}

void ModifyImageSharePermissionRequest::setAddAccount6(const std::string& addAccount6)
{
	addAccount6_ = addAccount6;
	setParameter("AddAccount6", addAccount6);
}

std::string ModifyImageSharePermissionRequest::getAddAccount5()const
{
	return addAccount5_;
}

void ModifyImageSharePermissionRequest::setAddAccount5(const std::string& addAccount5)
{
	addAccount5_ = addAccount5;
	setParameter("AddAccount5", addAccount5);
}

std::string ModifyImageSharePermissionRequest::getAddAccount10()const
{
	return addAccount10_;
}

void ModifyImageSharePermissionRequest::setAddAccount10(const std::string& addAccount10)
{
	addAccount10_ = addAccount10;
	setParameter("AddAccount10", addAccount10);
}

std::string ModifyImageSharePermissionRequest::getAddAccount4()const
{
	return addAccount4_;
}

void ModifyImageSharePermissionRequest::setAddAccount4(const std::string& addAccount4)
{
	addAccount4_ = addAccount4;
	setParameter("AddAccount4", addAccount4);
}

std::string ModifyImageSharePermissionRequest::getAddAccount3()const
{
	return addAccount3_;
}

void ModifyImageSharePermissionRequest::setAddAccount3(const std::string& addAccount3)
{
	addAccount3_ = addAccount3;
	setParameter("AddAccount3", addAccount3);
}

std::string ModifyImageSharePermissionRequest::getAddAccount2()const
{
	return addAccount2_;
}

void ModifyImageSharePermissionRequest::setAddAccount2(const std::string& addAccount2)
{
	addAccount2_ = addAccount2;
	setParameter("AddAccount2", addAccount2);
}

std::string ModifyImageSharePermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyImageSharePermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyImageSharePermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyImageSharePermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount1()const
{
	return removeAccount1_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount1(const std::string& removeAccount1)
{
	removeAccount1_ = removeAccount1;
	setParameter("RemoveAccount1", removeAccount1);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount2()const
{
	return removeAccount2_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount2(const std::string& removeAccount2)
{
	removeAccount2_ = removeAccount2;
	setParameter("RemoveAccount2", removeAccount2);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount3()const
{
	return removeAccount3_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount3(const std::string& removeAccount3)
{
	removeAccount3_ = removeAccount3;
	setParameter("RemoveAccount3", removeAccount3);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount4()const
{
	return removeAccount4_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount4(const std::string& removeAccount4)
{
	removeAccount4_ = removeAccount4;
	setParameter("RemoveAccount4", removeAccount4);
}

long ModifyImageSharePermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyImageSharePermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount9()const
{
	return removeAccount9_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount9(const std::string& removeAccount9)
{
	removeAccount9_ = removeAccount9;
	setParameter("RemoveAccount9", removeAccount9);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount5()const
{
	return removeAccount5_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount5(const std::string& removeAccount5)
{
	removeAccount5_ = removeAccount5;
	setParameter("RemoveAccount5", removeAccount5);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount6()const
{
	return removeAccount6_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount6(const std::string& removeAccount6)
{
	removeAccount6_ = removeAccount6;
	setParameter("RemoveAccount6", removeAccount6);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount7()const
{
	return removeAccount7_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount7(const std::string& removeAccount7)
{
	removeAccount7_ = removeAccount7;
	setParameter("RemoveAccount7", removeAccount7);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount8()const
{
	return removeAccount8_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount8(const std::string& removeAccount8)
{
	removeAccount8_ = removeAccount8;
	setParameter("RemoveAccount8", removeAccount8);
}

std::string ModifyImageSharePermissionRequest::getRemoveAccount10()const
{
	return removeAccount10_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount10(const std::string& removeAccount10)
{
	removeAccount10_ = removeAccount10;
	setParameter("RemoveAccount10", removeAccount10);
}

