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

#include <alibabacloud/ess/model/ModifyAlarmRequest.h>

using AlibabaCloud::Ess::Model::ModifyAlarmRequest;

ModifyAlarmRequest::ModifyAlarmRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyAlarm")
{}

ModifyAlarmRequest::~ModifyAlarmRequest()
{}

std::string ModifyAlarmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAlarmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAlarmRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAlarmRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyAlarmRequest::getName()const
{
	return name_;
}

void ModifyAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyAlarmRequest::getDescription()const
{
	return description_;
}

void ModifyAlarmRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::vector<std::string> ModifyAlarmRequest::getAlarmAction()const
{
	return alarmAction_;
}

void ModifyAlarmRequest::setAlarmAction(const std::vector<std::string>& alarmAction)
{
	alarmAction_ = alarmAction;
	for(int i = 0; i!= alarmAction.size(); i++)
		setParameter("AlarmAction."+ std::to_string(i), alarmAction.at(i));
}

long ModifyAlarmRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAlarmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAlarmRequest::getAlarmTaskId()const
{
	return alarmTaskId_;
}

void ModifyAlarmRequest::setAlarmTaskId(const std::string& alarmTaskId)
{
	alarmTaskId_ = alarmTaskId;
	setParameter("AlarmTaskId", alarmTaskId);
}

std::string ModifyAlarmRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAlarmRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

