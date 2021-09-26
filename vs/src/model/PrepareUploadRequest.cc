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

#include <alibabacloud/vs/model/PrepareUploadRequest.h>

using AlibabaCloud::Vs::Model::PrepareUploadRequest;

PrepareUploadRequest::PrepareUploadRequest() :
	RpcServiceRequest("vs", "2018-12-12", "PrepareUpload")
{
	setMethod(HttpRequest::Method::Post);
}

PrepareUploadRequest::~PrepareUploadRequest()
{}

std::string PrepareUploadRequest::getBucketName()const
{
	return bucketName_;
}

void PrepareUploadRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

std::string PrepareUploadRequest::getClientIp()const
{
	return clientIp_;
}

void PrepareUploadRequest::setClientIp(const std::string& clientIp)
{
	clientIp_ = clientIp;
	setParameter("ClientIp", clientIp);
}

std::string PrepareUploadRequest::getShowLog()const
{
	return showLog_;
}

void PrepareUploadRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long PrepareUploadRequest::getOwnerId()const
{
	return ownerId_;
}

void PrepareUploadRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string PrepareUploadRequest::getAdditionType()const
{
	return additionType_;
}

void PrepareUploadRequest::setAdditionType(const std::string& additionType)
{
	additionType_ = additionType;
	setParameter("AdditionType", additionType);
}

