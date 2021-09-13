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

#include <alibabacloud/linkwan/model/GetNotificationRequest.h>

using AlibabaCloud::LinkWAN::Model::GetNotificationRequest;

GetNotificationRequest::GetNotificationRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetNotification")
{
	setMethod(HttpRequest::Method::Post);
}

GetNotificationRequest::~GetNotificationRequest()
{}

std::string GetNotificationRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetNotificationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetNotificationRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetNotificationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetNotificationRequest::getNotificationId()const
{
	return notificationId_;
}

void GetNotificationRequest::setNotificationId(const std::string& notificationId)
{
	notificationId_ = notificationId;
	setParameter("NotificationId", notificationId);
}

