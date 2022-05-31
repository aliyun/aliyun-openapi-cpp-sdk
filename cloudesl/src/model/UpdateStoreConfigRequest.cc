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

#include <alibabacloud/cloudesl/model/UpdateStoreConfigRequest.h>

using AlibabaCloud::Cloudesl::Model::UpdateStoreConfigRequest;

UpdateStoreConfigRequest::UpdateStoreConfigRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "UpdateStoreConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateStoreConfigRequest::~UpdateStoreConfigRequest()
{}

std::string UpdateStoreConfigRequest::getExtraParams()const
{
	return extraParams_;
}

void UpdateStoreConfigRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string UpdateStoreConfigRequest::getStoreId()const
{
	return storeId_;
}

void UpdateStoreConfigRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string UpdateStoreConfigRequest::getSubscribeContents()const
{
	return subscribeContents_;
}

void UpdateStoreConfigRequest::setSubscribeContents(const std::string& subscribeContents)
{
	subscribeContents_ = subscribeContents;
	setBodyParameter("SubscribeContents", subscribeContents);
}

bool UpdateStoreConfigRequest::getEnableNotification()const
{
	return enableNotification_;
}

void UpdateStoreConfigRequest::setEnableNotification(bool enableNotification)
{
	enableNotification_ = enableNotification;
	setBodyParameter("EnableNotification", enableNotification ? "true" : "false");
}

std::string UpdateStoreConfigRequest::getNotificationWebHook()const
{
	return notificationWebHook_;
}

void UpdateStoreConfigRequest::setNotificationWebHook(const std::string& notificationWebHook)
{
	notificationWebHook_ = notificationWebHook;
	setBodyParameter("NotificationWebHook", notificationWebHook);
}

std::string UpdateStoreConfigRequest::getNotificationSilentTimes()const
{
	return notificationSilentTimes_;
}

void UpdateStoreConfigRequest::setNotificationSilentTimes(const std::string& notificationSilentTimes)
{
	notificationSilentTimes_ = notificationSilentTimes;
	setBodyParameter("NotificationSilentTimes", notificationSilentTimes);
}

