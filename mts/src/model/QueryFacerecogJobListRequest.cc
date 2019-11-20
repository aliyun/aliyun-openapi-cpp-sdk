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

#include <alibabacloud/mts/model/QueryFacerecogJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryFacerecogJobListRequest;

QueryFacerecogJobListRequest::QueryFacerecogJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryFacerecogJobList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryFacerecogJobListRequest::~QueryFacerecogJobListRequest()
{}

long QueryFacerecogJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryFacerecogJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryFacerecogJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryFacerecogJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryFacerecogJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryFacerecogJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string QueryFacerecogJobListRequest::getFacerecogJobIds()const
{
	return facerecogJobIds_;
}

void QueryFacerecogJobListRequest::setFacerecogJobIds(const std::string& facerecogJobIds)
{
	facerecogJobIds_ = facerecogJobIds;
	setCoreParameter("FacerecogJobIds", facerecogJobIds);
}

long QueryFacerecogJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryFacerecogJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryFacerecogJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryFacerecogJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

