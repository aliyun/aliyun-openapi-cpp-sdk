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

#include <alibabacloud/companyreg/model/ListProduceAuthorizationRequest.h>

using AlibabaCloud::Companyreg::Model::ListProduceAuthorizationRequest;

ListProduceAuthorizationRequest::ListProduceAuthorizationRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "ListProduceAuthorization")
{
	setMethod(HttpRequest::Method::Post);
}

ListProduceAuthorizationRequest::~ListProduceAuthorizationRequest()
{}

int ListProduceAuthorizationRequest::getPageNum()const
{
	return pageNum_;
}

void ListProduceAuthorizationRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListProduceAuthorizationRequest::getBizType()const
{
	return bizType_;
}

void ListProduceAuthorizationRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string ListProduceAuthorizationRequest::getBizId()const
{
	return bizId_;
}

void ListProduceAuthorizationRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListProduceAuthorizationRequest::getPageSize()const
{
	return pageSize_;
}

void ListProduceAuthorizationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

