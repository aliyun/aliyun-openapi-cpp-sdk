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

#include <alibabacloud/nas/model/EnableSmbAclRequest.h>

using AlibabaCloud::NAS::Model::EnableSmbAclRequest;

EnableSmbAclRequest::EnableSmbAclRequest() :
	RpcServiceRequest("nas", "2017-06-26", "EnableSmbAcl")
{
	setMethod(HttpRequest::Method::Post);
}

EnableSmbAclRequest::~EnableSmbAclRequest()
{}

std::string EnableSmbAclRequest::getKeytab()const
{
	return keytab_;
}

void EnableSmbAclRequest::setKeytab(const std::string& keytab)
{
	keytab_ = keytab;
	setParameter("Keytab", keytab);
}

std::string EnableSmbAclRequest::getKeytabMd5()const
{
	return keytabMd5_;
}

void EnableSmbAclRequest::setKeytabMd5(const std::string& keytabMd5)
{
	keytabMd5_ = keytabMd5;
	setParameter("KeytabMd5", keytabMd5);
}

std::string EnableSmbAclRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void EnableSmbAclRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

