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

#include <alibabacloud/dysmsapi/model/QuerySmsProdStatusRequest.h>

using AlibabaCloud::Dysmsapi::Model::QuerySmsProdStatusRequest;

QuerySmsProdStatusRequest::QuerySmsProdStatusRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "QuerySmsProdStatus")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySmsProdStatusRequest::~QuerySmsProdStatusRequest()
{}

long QuerySmsProdStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySmsProdStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySmsProdStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySmsProdStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySmsProdStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySmsProdStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QuerySmsProdStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySmsProdStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long QuerySmsProdStatusRequest::getAliyUid()const
{
	return aliyUid_;
}

void QuerySmsProdStatusRequest::setAliyUid(long aliyUid)
{
	aliyUid_ = aliyUid;
	setCoreParameter("AliyUid", std::to_string(aliyUid));
}

