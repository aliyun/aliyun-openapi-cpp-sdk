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

#include <alibabacloud/dyvmsapi/model/CreateCallTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CreateCallTaskRequest;

CreateCallTaskRequest::CreateCallTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CreateCallTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCallTaskRequest::~CreateCallTaskRequest()
{}

long CreateCallTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCallTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCallTaskRequest::getScheduleType()const
{
	return scheduleType_;
}

void CreateCallTaskRequest::setScheduleType(const std::string& scheduleType)
{
	scheduleType_ = scheduleType;
	setParameter("ScheduleType", scheduleType);
}

std::string CreateCallTaskRequest::getData()const
{
	return data_;
}

void CreateCallTaskRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string CreateCallTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateCallTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateCallTaskRequest::getStopTime()const
{
	return stopTime_;
}

void CreateCallTaskRequest::setStopTime(const std::string& stopTime)
{
	stopTime_ = stopTime;
	setParameter("StopTime", stopTime);
}

std::string CreateCallTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateCallTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateCallTaskRequest::getDataType()const
{
	return dataType_;
}

void CreateCallTaskRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setParameter("DataType", dataType);
}

std::string CreateCallTaskRequest::getTemplateName()const
{
	return templateName_;
}

void CreateCallTaskRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string CreateCallTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCallTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCallTaskRequest::getResource()const
{
	return resource_;
}

void CreateCallTaskRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setParameter("Resource", resource);
}

long CreateCallTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCallTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateCallTaskRequest::getResourceType()const
{
	return resourceType_;
}

void CreateCallTaskRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string CreateCallTaskRequest::getBizType()const
{
	return bizType_;
}

void CreateCallTaskRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CreateCallTaskRequest::getFireTime()const
{
	return fireTime_;
}

void CreateCallTaskRequest::setFireTime(const std::string& fireTime)
{
	fireTime_ = fireTime;
	setParameter("FireTime", fireTime);
}

std::string CreateCallTaskRequest::getTemplateCode()const
{
	return templateCode_;
}

void CreateCallTaskRequest::setTemplateCode(const std::string& templateCode)
{
	templateCode_ = templateCode;
	setParameter("TemplateCode", templateCode);
}

