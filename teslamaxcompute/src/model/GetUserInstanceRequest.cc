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

#include <alibabacloud/teslamaxcompute/model/GetUserInstanceRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::GetUserInstanceRequest;

GetUserInstanceRequest::GetUserInstanceRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "GetUserInstance")
{
	setMethod(HttpRequest::Method::Get);
}

GetUserInstanceRequest::~GetUserInstanceRequest()
{}

int GetUserInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void GetUserInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int GetUserInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void GetUserInstanceRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string GetUserInstanceRequest::getRegion()const
{
	return region_;
}

void GetUserInstanceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetUserInstanceRequest::getUser()const
{
	return user_;
}

void GetUserInstanceRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

std::string GetUserInstanceRequest::getStatus()const
{
	return status_;
}

void GetUserInstanceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

