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

#include <alibabacloud/trademark/model/SubmitSupplementRequest.h>

using AlibabaCloud::Trademark::Model::SubmitSupplementRequest;

SubmitSupplementRequest::SubmitSupplementRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "SubmitSupplement")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSupplementRequest::~SubmitSupplementRequest()
{}

std::string SubmitSupplementRequest::getUploadOssKeyList()const
{
	return uploadOssKeyList_;
}

void SubmitSupplementRequest::setUploadOssKeyList(const std::string& uploadOssKeyList)
{
	uploadOssKeyList_ = uploadOssKeyList;
	setParameter("UploadOssKeyList", uploadOssKeyList);
}

long SubmitSupplementRequest::getId()const
{
	return id_;
}

void SubmitSupplementRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string SubmitSupplementRequest::getContent()const
{
	return content_;
}

void SubmitSupplementRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

