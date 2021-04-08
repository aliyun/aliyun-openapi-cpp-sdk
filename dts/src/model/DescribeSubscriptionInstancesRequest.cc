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

#include <alibabacloud/dts/model/DescribeSubscriptionInstancesRequest.h>

using AlibabaCloud::Dts::Model::DescribeSubscriptionInstancesRequest;

DescribeSubscriptionInstancesRequest::DescribeSubscriptionInstancesRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeSubscriptionInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSubscriptionInstancesRequest::~DescribeSubscriptionInstancesRequest()
{}

std::string DescribeSubscriptionInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeSubscriptionInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeSubscriptionInstancesRequest::getInstFilterRegion()const
{
	return instFilterRegion_;
}

void DescribeSubscriptionInstancesRequest::setInstFilterRegion(const std::string& instFilterRegion)
{
	instFilterRegion_ = instFilterRegion;
	setParameter("InstFilterRegion", instFilterRegion);
}

int DescribeSubscriptionInstancesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeSubscriptionInstancesRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeSubscriptionInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSubscriptionInstancesRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeSubscriptionInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSubscriptionInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSubscriptionInstancesRequest::getAccountId()const
{
	return accountId_;
}

void DescribeSubscriptionInstancesRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

int DescribeSubscriptionInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSubscriptionInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSubscriptionInstancesRequest::getSubscriptionInstanceName()const
{
	return subscriptionInstanceName_;
}

void DescribeSubscriptionInstancesRequest::setSubscriptionInstanceName(const std::string& subscriptionInstanceName)
{
	subscriptionInstanceName_ = subscriptionInstanceName;
	setParameter("SubscriptionInstanceName", subscriptionInstanceName);
}

std::vector<DescribeSubscriptionInstancesRequest::Tag> DescribeSubscriptionInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeSubscriptionInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

