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

#include <alibabacloud/mts/model/QueryAnnotationJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryAnnotationJobListRequest;

QueryAnnotationJobListRequest::QueryAnnotationJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryAnnotationJobList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryAnnotationJobListRequest::~QueryAnnotationJobListRequest()
{}

long QueryAnnotationJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryAnnotationJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryAnnotationJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryAnnotationJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryAnnotationJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryAnnotationJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryAnnotationJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryAnnotationJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryAnnotationJobListRequest::getAnnotationJobIds()const
{
	return annotationJobIds_;
}

void QueryAnnotationJobListRequest::setAnnotationJobIds(const std::string& annotationJobIds)
{
	annotationJobIds_ = annotationJobIds;
	setParameter("AnnotationJobIds", annotationJobIds);
}

std::string QueryAnnotationJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryAnnotationJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

