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

#include <alibabacloud/vs/model/PutBucketRequest.h>

using AlibabaCloud::Vs::Model::PutBucketRequest;

PutBucketRequest::PutBucketRequest() :
	RpcServiceRequest("vs", "2018-12-12", "PutBucket")
{
	setMethod(HttpRequest::Method::Post);
}

PutBucketRequest::~PutBucketRequest()
{}

std::string PutBucketRequest::getDataRedundancyType()const
{
	return dataRedundancyType_;
}

void PutBucketRequest::setDataRedundancyType(const std::string& dataRedundancyType)
{
	dataRedundancyType_ = dataRedundancyType;
	setParameter("DataRedundancyType", dataRedundancyType);
}

std::string PutBucketRequest::getEndpoint()const
{
	return endpoint_;
}

void PutBucketRequest::setEndpoint(const std::string& endpoint)
{
	endpoint_ = endpoint;
	setParameter("Endpoint", endpoint);
}

std::string PutBucketRequest::getBucketName()const
{
	return bucketName_;
}

void PutBucketRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

std::string PutBucketRequest::getShowLog()const
{
	return showLog_;
}

void PutBucketRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string PutBucketRequest::getBucketAcl()const
{
	return bucketAcl_;
}

void PutBucketRequest::setBucketAcl(const std::string& bucketAcl)
{
	bucketAcl_ = bucketAcl;
	setParameter("BucketAcl", bucketAcl);
}

std::string PutBucketRequest::getDispatcherType()const
{
	return dispatcherType_;
}

void PutBucketRequest::setDispatcherType(const std::string& dispatcherType)
{
	dispatcherType_ = dispatcherType;
	setParameter("DispatcherType", dispatcherType);
}

long PutBucketRequest::getOwnerId()const
{
	return ownerId_;
}

void PutBucketRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string PutBucketRequest::getResourceType()const
{
	return resourceType_;
}

void PutBucketRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string PutBucketRequest::getStorageClass()const
{
	return storageClass_;
}

void PutBucketRequest::setStorageClass(const std::string& storageClass)
{
	storageClass_ = storageClass;
	setParameter("StorageClass", storageClass);
}

std::string PutBucketRequest::getComment()const
{
	return comment_;
}

void PutBucketRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

