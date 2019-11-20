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
{
	setMethod(HttpRequest::Method::Post);
}

AddMCTemplateRequest::~AddMCTemplateRequest()
{}

std::string AddMCTemplateRequest::getPolitics()const
{
	return politics_;
}

void AddMCTemplateRequest::setPolitics(const std::string& politics)
{
	politics_ = politics;
	setCoreParameter("Politics", politics);
}

long AddMCTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddMCTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddMCTemplateRequest::getAbuse()const
{
	return abuse_;
}

void AddMCTemplateRequest::setAbuse(const std::string& abuse)
{
	abuse_ = abuse;
	setCoreParameter("Abuse", abuse);
}

std::string AddMCTemplateRequest::getQrcode()const
{
	return qrcode_;
}

void AddMCTemplateRequest::setQrcode(const std::string& qrcode)
{
	qrcode_ = qrcode;
	setCoreParameter("Qrcode", qrcode);
}

std::string AddMCTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddMCTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddMCTemplateRequest::getPorn()const
{
	return porn_;
}

void AddMCTemplateRequest::setPorn(const std::string& porn)
{
	porn_ = porn;
	setCoreParameter("Porn", porn);
}

std::string AddMCTemplateRequest::getTerrorism()const
{
	return terrorism_;
}

void AddMCTemplateRequest::setTerrorism(const std::string& terrorism)
{
	terrorism_ = terrorism;
	setCoreParameter("Terrorism", terrorism);
}

std::string AddMCTemplateRequest::getLogo()const
{
	return logo_;
}

void AddMCTemplateRequest::setLogo(const std::string& logo)
{
	logo_ = logo;
	setCoreParameter("Logo", logo);
}

std::string AddMCTemplateRequest::getLive()const
{
	return live_;
}

void AddMCTemplateRequest::setLive(const std::string& live)
{
	live_ = live;
	setCoreParameter("Live", live);
}

std::string AddMCTemplateRequest::getContraband()const
{
	return contraband_;
}

void AddMCTemplateRequest::setContraband(const std::string& contraband)
{
	contraband_ = contraband;
	setCoreParameter("Contraband", contraband);
}

std::string AddMCTemplateRequest::getAd()const
{
	return ad_;
}

void AddMCTemplateRequest::setAd(const std::string& ad)
{
	ad_ = ad;
	setCoreParameter("Ad", ad);
}

std::string AddMCTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddMCTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddMCTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddMCTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AddMCTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddMCTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddMCTemplateRequest::getName()const
{
	return name_;
}

void AddMCTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string AddMCTemplateRequest::getSpam()const
{
	return spam_;
}

void AddMCTemplateRequest::setSpam(const std::string& spam)
{
	spam_ = spam;
	setCoreParameter("Spam", spam);
}

