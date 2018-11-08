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

#include <alibabacloud/ess/model/EnableAlarmRequest.h>

using AlibabaCloud::Ess::Model::EnableAlarmRequest;

EnableAlarmRequest::EnableAlarmRequest() :
	RpcServiceRequest("ess", "2014-08-28", "EnableAlarm")
{}

EnableAlarmRequest::~EnableAlarmRequest()
{}

std::string EnableAlarmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EnableAlarmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EnableAlarmRequest::getRegionId()const
{
	return regionId_;
}

void EnableAlarmRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long EnableAlarmRequest::getOwnerId()const
{
	return ownerId_;
}

void EnableAlarmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EnableAlarmRequest::getAlarmTaskId()const
{
	return alarmTaskId_;
}

void EnableAlarmRequest::setAlarmTaskId(const std::string& alarmTaskId)
{
	alarmTaskId_ = alarmTaskId;
	setParameter("AlarmTaskId", alarmTaskId);
}

std::string EnableAlarmRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EnableAlarmRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

