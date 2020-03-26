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

#include <alibabacloud/cloudwf/model/UpLoadMapRequest.h>

using AlibabaCloud::Cloudwf::Model::UpLoadMapRequest;

UpLoadMapRequest::UpLoadMapRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UpLoadMap")
{
	setMethod(HttpRequest::Method::Post);
}

UpLoadMapRequest::~UpLoadMapRequest()
{}

std::string UpLoadMapRequest::getUploadId()const
{
	return uploadId_;
}

void UpLoadMapRequest::setUploadId(const std::string& uploadId)
{
	uploadId_ = uploadId;
	setParameter("UploadId", uploadId);
}

std::string UpLoadMapRequest::getObjectName()const
{
	return objectName_;
}

void UpLoadMapRequest::setObjectName(const std::string& objectName)
{
	objectName_ = objectName;
	setParameter("ObjectName", objectName);
}

std::string UpLoadMapRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpLoadMapRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpLoadMapRequest::getFileName()const
{
	return fileName_;
}

void UpLoadMapRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setParameter("FileName", fileName);
}

int UpLoadMapRequest::getChunkIndex()const
{
	return chunkIndex_;
}

void UpLoadMapRequest::setChunkIndex(int chunkIndex)
{
	chunkIndex_ = chunkIndex;
	setParameter("ChunkIndex", std::to_string(chunkIndex));
}

int UpLoadMapRequest::getChunkCnt()const
{
	return chunkCnt_;
}

void UpLoadMapRequest::setChunkCnt(int chunkCnt)
{
	chunkCnt_ = chunkCnt;
	setParameter("ChunkCnt", std::to_string(chunkCnt));
}

