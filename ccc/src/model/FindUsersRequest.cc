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

#include <alibabacloud/ccc/model/FindUsersRequest.h>

using AlibabaCloud::CCC::Model::FindUsersRequest;

FindUsersRequest::FindUsersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "FindUsers")
{}

FindUsersRequest::~FindUsersRequest()
{}

std::string FindUsersRequest::getInstanceId()const
{
	return instanceId_;
}

void FindUsersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string FindUsersRequest::getCriteria()const
{
	return criteria_;
}

void FindUsersRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setCoreParameter("Criteria", std::to_string(criteria));
}

int FindUsersRequest::getPageSize()const
{
	return pageSize_;
}

void FindUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int FindUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void FindUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string FindUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FindUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

