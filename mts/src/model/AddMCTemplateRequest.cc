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

#include <alibabacloud/mts/model/AddMCTemplateRequest.h>

using AlibabaCloud::Mts::Model::AddMCTemplateRequest;

AddMCTemplateRequest::AddMCTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddMCTemplate")
{}

AddMCTemplateRequest::~AddMCTemplateRequest()
{}

std::string AddMCTemplateRequest::getPolitics()const
{
	return politics_;
}

void AddMCTemplateRequest::setPolitics(const std::string& politics)
{
	politics_ = politics;
	setCoreParameter("Politics", std::to_string(politics));
}

long AddMCTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddMCTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddMCTemplateRequest::getContraband()const
{
	return contraband_;
}

void AddMCTemplateRequest::setContraband(const std::string& contraband)
{
	contraband_ = contraband;
	setCoreParameter("Contraband", std::to_string(contraband));
}

std::string AddMCTemplateRequest::getAd()const
{
	return ad_;
}

void AddMCTemplateRequest::setAd(const std::string& ad)
{
	ad_ = ad;
	setCoreParameter("Ad", std::to_string(ad));
}

std::string AddMCTemplateRequest::getAbuse()const
{
	return abuse_;
}

void AddMCTemplateRequest::setAbuse(const std::string& abuse)
{
	abuse_ = abuse;
	setCoreParameter("Abuse", std::to_string(abuse));
}

std::string AddMCTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddMCTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AddMCTemplateRequest::getQrcode()const
{
	return qrcode_;
}

void AddMCTemplateRequest::setQrcode(const std::string& qrcode)
{
	qrcode_ = qrcode;
	setCoreParameter("Qrcode", std::to_string(qrcode));
}

std::string AddMCTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddMCTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long AddMCTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddMCTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddMCTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddMCTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string AddMCTemplateRequest::getPorn()const
{
	return porn_;
}

void AddMCTemplateRequest::setPorn(const std::string& porn)
{
	porn_ = porn;
	setCoreParameter("Porn", std::to_string(porn));
}

std::string AddMCTemplateRequest::getTerrorism()const
{
	return terrorism_;
}

void AddMCTemplateRequest::setTerrorism(const std::string& terrorism)
{
	terrorism_ = terrorism;
	setCoreParameter("Terrorism", std::to_string(terrorism));
}

std::string AddMCTemplateRequest::getName()const
{
	return name_;
}

void AddMCTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string AddMCTemplateRequest::getLogo()const
{
	return logo_;
}

void AddMCTemplateRequest::setLogo(const std::string& logo)
{
	logo_ = logo;
	setCoreParameter("Logo", std::to_string(logo));
}

std::string AddMCTemplateRequest::getSpam()const
{
	return spam_;
}

void AddMCTemplateRequest::setSpam(const std::string& spam)
{
	spam_ = spam;
	setCoreParameter("Spam", std::to_string(spam));
}

std::string AddMCTemplateRequest::getLive()const
{
	return live_;
}

void AddMCTemplateRequest::setLive(const std::string& live)
{
	live_ = live;
	setCoreParameter("Live", std::to_string(live));
}

