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

#include <alibabacloud/sas/model/GetOpaDefenceDetailRequest.h>

using AlibabaCloud::Sas::Model::GetOpaDefenceDetailRequest;

GetOpaDefenceDetailRequest::GetOpaDefenceDetailRequest() :
	RpcServiceRequest("sas", "2018-12-03", "GetOpaDefenceDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetOpaDefenceDetailRequest::~GetOpaDefenceDetailRequest()
{}

long GetOpaDefenceDetailRequest::getInterceptionId()const
{
	return interceptionId_;
}

void GetOpaDefenceDetailRequest::setInterceptionId(long interceptionId)
{
	interceptionId_ = interceptionId;
	setParameter("InterceptionId", std::to_string(interceptionId));
}

int GetOpaDefenceDetailRequest::getPageSize()const
{
	return pageSize_;
}

void GetOpaDefenceDetailRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int GetOpaDefenceDetailRequest::getCurrentPage()const
{
	return currentPage_;
}

void GetOpaDefenceDetailRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

