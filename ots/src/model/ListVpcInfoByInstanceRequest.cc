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

#include <alibabacloud/ots/model/ListVpcInfoByInstanceRequest.h>

using AlibabaCloud::Ots::Model::ListVpcInfoByInstanceRequest;

ListVpcInfoByInstanceRequest::ListVpcInfoByInstanceRequest() :
	RpcServiceRequest("ots", "2016-06-20", "ListVpcInfoByInstance")
{}

ListVpcInfoByInstanceRequest::~ListVpcInfoByInstanceRequest()
{}

std::string ListVpcInfoByInstanceRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ListVpcInfoByInstanceRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long ListVpcInfoByInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListVpcInfoByInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListVpcInfoByInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void ListVpcInfoByInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

long ListVpcInfoByInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListVpcInfoByInstanceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long ListVpcInfoByInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void ListVpcInfoByInstanceRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

