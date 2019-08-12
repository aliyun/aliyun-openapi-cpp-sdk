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

#include <alibabacloud/cloudphoto/model/CreateTransactionRequest.h>

using AlibabaCloud::CloudPhoto::Model::CreateTransactionRequest;

CreateTransactionRequest::CreateTransactionRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "CreateTransaction")
{}

CreateTransactionRequest::~CreateTransactionRequest()
{}

std::string CreateTransactionRequest::getExt()const
{
	return ext_;
}

void CreateTransactionRequest::setExt(const std::string& ext)
{
	ext_ = ext;
	setCoreParameter("Ext", std::to_string(ext));
}

long CreateTransactionRequest::getSize()const
{
	return size_;
}

void CreateTransactionRequest::setSize(long size)
{
	size_ = size;
	setCoreParameter("Size", size);
}

std::string CreateTransactionRequest::getLibraryId()const
{
	return libraryId_;
}

void CreateTransactionRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

std::string CreateTransactionRequest::getStoreName()const
{
	return storeName_;
}

void CreateTransactionRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

std::string CreateTransactionRequest::getForce()const
{
	return force_;
}

void CreateTransactionRequest::setForce(const std::string& force)
{
	force_ = force;
	setCoreParameter("Force", std::to_string(force));
}

std::string CreateTransactionRequest::getMd5()const
{
	return md5_;
}

void CreateTransactionRequest::setMd5(const std::string& md5)
{
	md5_ = md5;
	setCoreParameter("Md5", std::to_string(md5));
}

