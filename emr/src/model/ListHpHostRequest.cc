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

#include <alibabacloud/emr/model/ListHpHostRequest.h>

using AlibabaCloud::Emr::Model::ListHpHostRequest;

ListHpHostRequest::ListHpHostRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListHpHost")
{}

ListHpHostRequest::~ListHpHostRequest()
{}

long ListHpHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListHpHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListHpHostRequest::getRole()const
{
	return role_;
}

void ListHpHostRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", role);
}

std::string ListHpHostRequest::getRegionId()const
{
	return regionId_;
}

void ListHpHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListHpHostRequest::getPageSize()const
{
	return pageSize_;
}

void ListHpHostRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListHpHostRequest::getHpBizId()const
{
	return hpBizId_;
}

void ListHpHostRequest::setHpBizId(const std::string& hpBizId)
{
	hpBizId_ = hpBizId;
	setCoreParameter("HpBizId", hpBizId);
}

int ListHpHostRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListHpHostRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListHpHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListHpHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListHpHostRequest::getStatus()const
{
	return status_;
}

void ListHpHostRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

