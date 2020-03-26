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

#include <alibabacloud/mts/model/UpdateMCTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateMCTemplateRequest;

UpdateMCTemplateRequest::UpdateMCTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateMCTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateMCTemplateRequest::~UpdateMCTemplateRequest()
{}

std::string UpdateMCTemplateRequest::getPolitics()const
{
	return politics_;
}

void UpdateMCTemplateRequest::setPolitics(const std::string& politics)
{
	politics_ = politics;
	setParameter("Politics", politics);
}

long UpdateMCTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateMCTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateMCTemplateRequest::getAbuse()const
{
	return abuse_;
}

void UpdateMCTemplateRequest::setAbuse(const std::string& abuse)
{
	abuse_ = abuse;
	setParameter("Abuse", abuse);
}

std::string UpdateMCTemplateRequest::getQrcode()const
{
	return qrcode_;
}

void UpdateMCTemplateRequest::setQrcode(const std::string& qrcode)
{
	qrcode_ = qrcode;
	setParameter("Qrcode", qrcode);
}

std::string UpdateMCTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateMCTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateMCTemplateRequest::getPorn()const
{
	return porn_;
}

void UpdateMCTemplateRequest::setPorn(const std::string& porn)
{
	porn_ = porn;
	setParameter("Porn", porn);
}

std::string UpdateMCTemplateRequest::getTerrorism()const
{
	return terrorism_;
}

void UpdateMCTemplateRequest::setTerrorism(const std::string& terrorism)
{
	terrorism_ = terrorism;
	setParameter("Terrorism", terrorism);
}

std::string UpdateMCTemplateRequest::getLogo()const
{
	return logo_;
}

void UpdateMCTemplateRequest::setLogo(const std::string& logo)
{
	logo_ = logo;
	setParameter("Logo", logo);
}

std::string UpdateMCTemplateRequest::getLive()const
{
	return live_;
}

void UpdateMCTemplateRequest::setLive(const std::string& live)
{
	live_ = live;
	setParameter("Live", live);
}

std::string UpdateMCTemplateRequest::getContraband()const
{
	return contraband_;
}

void UpdateMCTemplateRequest::setContraband(const std::string& contraband)
{
	contraband_ = contraband;
	setParameter("Contraband", contraband);
}

std::string UpdateMCTemplateRequest::getAd()const
{
	return ad_;
}

void UpdateMCTemplateRequest::setAd(const std::string& ad)
{
	ad_ = ad;
	setParameter("Ad", ad);
}

std::string UpdateMCTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateMCTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateMCTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateMCTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpdateMCTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateMCTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateMCTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateMCTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string UpdateMCTemplateRequest::getName()const
{
	return name_;
}

void UpdateMCTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateMCTemplateRequest::getSpam()const
{
	return spam_;
}

void UpdateMCTemplateRequest::setSpam(const std::string& spam)
{
	spam_ = spam;
	setParameter("Spam", spam);
}

