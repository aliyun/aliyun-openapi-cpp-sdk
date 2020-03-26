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

#include <alibabacloud/dyvmsapi/model/QueryRobotInfoListRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRobotInfoListRequest;

QueryRobotInfoListRequest::QueryRobotInfoListRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRobotInfoList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryRobotInfoListRequest::~QueryRobotInfoListRequest()
{}

long QueryRobotInfoListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRobotInfoListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryRobotInfoListRequest::getAuditStatus()const
{
	return auditStatus_;
}

void QueryRobotInfoListRequest::setAuditStatus(const std::string& auditStatus)
{
	auditStatus_ = auditStatus;
	setParameter("AuditStatus", auditStatus);
}

std::string QueryRobotInfoListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRobotInfoListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QueryRobotInfoListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRobotInfoListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryRobotInfoListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRobotInfoListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

