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

#include <alibabacloud/chatbot/model/CreateCategoryRequest.h>

using AlibabaCloud::Chatbot::Model::CreateCategoryRequest;

CreateCategoryRequest::CreateCategoryRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "CreateCategory")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCategoryRequest::~CreateCategoryRequest()
{}

long CreateCategoryRequest::getParentCategoryId()const
{
	return parentCategoryId_;
}

void CreateCategoryRequest::setParentCategoryId(long parentCategoryId)
{
	parentCategoryId_ = parentCategoryId;
	setParameter("ParentCategoryId", std::to_string(parentCategoryId));
}

std::string CreateCategoryRequest::getName()const
{
	return name_;
}

void CreateCategoryRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

