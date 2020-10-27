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

#include <alibabacloud/cloudesl/model/DescribeUsersRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeUsersRequest;

DescribeUsersRequest::DescribeUsersRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeUsers")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUsersRequest::~DescribeUsersRequest()
{}

std::string DescribeUsersRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeUsersRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribeUsersRequest::getUserId()const
{
	return userId_;
}

void DescribeUsersRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

int DescribeUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeUsersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeUsersRequest::getUserType()const
{
	return userType_;
}

void DescribeUsersRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setBodyParameter("UserType", userType);
}

std::string DescribeUsersRequest::getUserName()const
{
	return userName_;
}

void DescribeUsersRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setBodyParameter("UserName", userName);
}

