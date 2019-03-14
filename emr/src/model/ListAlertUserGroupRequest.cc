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

#include <alibabacloud/emr/model/ListAlertUserGroupRequest.h>

using AlibabaCloud::Emr::Model::ListAlertUserGroupRequest;

ListAlertUserGroupRequest::ListAlertUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListAlertUserGroup")
{}

ListAlertUserGroupRequest::~ListAlertUserGroupRequest()
{}

long ListAlertUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAlertUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListAlertUserGroupRequest::getFromApp()const
{
	return fromApp_;
}

void ListAlertUserGroupRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setParameter("FromApp", fromApp);
}

std::string ListAlertUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void ListAlertUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListAlertUserGroupRequest::getIds()const
{
	return ids_;
}

void ListAlertUserGroupRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}

std::string ListAlertUserGroupRequest::getUserId()const
{
	return userId_;
}

void ListAlertUserGroupRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string ListAlertUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAlertUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

