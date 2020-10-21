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

#include <alibabacloud/sgw/model/DescribeVSwitchesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeVSwitchesRequest;

DescribeVSwitchesRequest::DescribeVSwitchesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeVSwitches")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchesRequest::~DescribeVSwitchesRequest()
{}

int DescribeVSwitchesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVSwitchesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVSwitchesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVSwitchesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVSwitchesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeVSwitchesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string DescribeVSwitchesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVSwitchesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeVSwitchesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeVSwitchesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

int DescribeVSwitchesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVSwitchesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVSwitchesRequest::getStorageBundleId()const
{
	return storageBundleId_;
}

void DescribeVSwitchesRequest::setStorageBundleId(const std::string& storageBundleId)
{
	storageBundleId_ = storageBundleId;
	setParameter("StorageBundleId", storageBundleId);
}

