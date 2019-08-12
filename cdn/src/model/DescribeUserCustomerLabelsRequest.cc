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

#include <alibabacloud/cdn/model/DescribeUserCustomerLabelsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserCustomerLabelsRequest;

DescribeUserCustomerLabelsRequest::DescribeUserCustomerLabelsRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeUserCustomerLabels")
{}

DescribeUserCustomerLabelsRequest::~DescribeUserCustomerLabelsRequest()
{}

long DescribeUserCustomerLabelsRequest::getUid()const
{
	return uid_;
}

void DescribeUserCustomerLabelsRequest::setUid(long uid)
{
	uid_ = uid;
	setCoreParameter("Uid", uid);
}

std::string DescribeUserCustomerLabelsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserCustomerLabelsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

long DescribeUserCustomerLabelsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserCustomerLabelsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeUserCustomerLabelsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserCustomerLabelsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

