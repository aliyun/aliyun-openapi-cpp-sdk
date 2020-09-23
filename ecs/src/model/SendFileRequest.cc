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

#include <alibabacloud/ecs/model/SendFileRequest.h>

using AlibabaCloud::Ecs::Model::SendFileRequest;

SendFileRequest::SendFileRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "SendFile")
{
	setMethod(HttpRequest::Method::Post);
}

SendFileRequest::~SendFileRequest()
{}

long SendFileRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SendFileRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SendFileRequest::getDescription()const
{
	return description_;
}

void SendFileRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long SendFileRequest::getTimeout()const
{
	return timeout_;
}

void SendFileRequest::setTimeout(long timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

std::string SendFileRequest::getContent()const
{
	return content_;
}

void SendFileRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string SendFileRequest::getRegionId()const
{
	return regionId_;
}

void SendFileRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SendFileRequest::getFileOwner()const
{
	return fileOwner_;
}

void SendFileRequest::setFileOwner(const std::string& fileOwner)
{
	fileOwner_ = fileOwner;
	setParameter("FileOwner", fileOwner);
}

bool SendFileRequest::getOverwrite()const
{
	return overwrite_;
}

void SendFileRequest::setOverwrite(bool overwrite)
{
	overwrite_ = overwrite;
	setParameter("Overwrite", overwrite ? "true" : "false");
}

std::string SendFileRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SendFileRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SendFileRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SendFileRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SendFileRequest::getFileMode()const
{
	return fileMode_;
}

void SendFileRequest::setFileMode(const std::string& fileMode)
{
	fileMode_ = fileMode;
	setParameter("FileMode", fileMode);
}

long SendFileRequest::getOwnerId()const
{
	return ownerId_;
}

void SendFileRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SendFileRequest::getContentType()const
{
	return contentType_;
}

void SendFileRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setParameter("ContentType", contentType);
}

std::vector<std::string> SendFileRequest::getInstanceId()const
{
	return instanceId_;
}

void SendFileRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

std::string SendFileRequest::getName()const
{
	return name_;
}

void SendFileRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string SendFileRequest::getFileGroup()const
{
	return fileGroup_;
}

void SendFileRequest::setFileGroup(const std::string& fileGroup)
{
	fileGroup_ = fileGroup;
	setParameter("FileGroup", fileGroup);
}

std::string SendFileRequest::getTargetDir()const
{
	return targetDir_;
}

void SendFileRequest::setTargetDir(const std::string& targetDir)
{
	targetDir_ = targetDir;
	setParameter("TargetDir", targetDir);
}

