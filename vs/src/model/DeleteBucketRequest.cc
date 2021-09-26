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

#include <alibabacloud/vs/model/DeleteBucketRequest.h>

using AlibabaCloud::Vs::Model::DeleteBucketRequest;

DeleteBucketRequest::DeleteBucketRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DeleteBucket")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteBucketRequest::~DeleteBucketRequest()
{}

std::string DeleteBucketRequest::getBucketName()const
{
	return bucketName_;
}

void DeleteBucketRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

std::string DeleteBucketRequest::getShowLog()const
{
	return showLog_;
}

void DeleteBucketRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DeleteBucketRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteBucketRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

