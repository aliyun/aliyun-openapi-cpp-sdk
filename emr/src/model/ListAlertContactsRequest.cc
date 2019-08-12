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

#include <alibabacloud/emr/model/ListAlertContactsRequest.h>

using AlibabaCloud::Emr::Model::ListAlertContactsRequest;

ListAlertContactsRequest::ListAlertContactsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListAlertContacts")
{}

ListAlertContactsRequest::~ListAlertContactsRequest()
{}

long ListAlertContactsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAlertContactsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAlertContactsRequest::getFromApp()const
{
	return fromApp_;
}

void ListAlertContactsRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setCoreParameter("FromApp", fromApp);
}

std::string ListAlertContactsRequest::getRegionId()const
{
	return regionId_;
}

void ListAlertContactsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListAlertContactsRequest::getIds()const
{
	return ids_;
}

void ListAlertContactsRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setCoreParameter("Ids", ids);
}

std::string ListAlertContactsRequest::getUserId()const
{
	return userId_;
}

void ListAlertContactsRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string ListAlertContactsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAlertContactsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

