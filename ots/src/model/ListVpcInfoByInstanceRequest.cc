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
{
	setMethod(HttpRequest::Method::Get);
}

ListVpcInfoByInstanceRequest::~ListVpcInfoByInstanceRequest()
{}

long ListVpcInfoByInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListVpcInfoByInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListVpcInfoByInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void ListVpcInfoByInstanceRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListVpcInfoByInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListVpcInfoByInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListVpcInfoByInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void ListVpcInfoByInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

long ListVpcInfoByInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListVpcInfoByInstanceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

