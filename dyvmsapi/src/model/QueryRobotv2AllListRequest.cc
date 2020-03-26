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

#include <alibabacloud/dyvmsapi/model/QueryRobotv2AllListRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRobotv2AllListRequest;

QueryRobotv2AllListRequest::QueryRobotv2AllListRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRobotv2AllList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryRobotv2AllListRequest::~QueryRobotv2AllListRequest()
{}

long QueryRobotv2AllListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRobotv2AllListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryRobotv2AllListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRobotv2AllListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QueryRobotv2AllListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRobotv2AllListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryRobotv2AllListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRobotv2AllListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

