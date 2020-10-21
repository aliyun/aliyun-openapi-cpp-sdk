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

#include <alibabacloud/sgw/model/DescribeExpressSyncSharesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeExpressSyncSharesRequest;

DescribeExpressSyncSharesRequest::DescribeExpressSyncSharesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeExpressSyncShares")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeExpressSyncSharesRequest::~DescribeExpressSyncSharesRequest()
{}

bool DescribeExpressSyncSharesRequest::getIsExternal()const
{
	return isExternal_;
}

void DescribeExpressSyncSharesRequest::setIsExternal(bool isExternal)
{
	isExternal_ = isExternal;
	setParameter("IsExternal", isExternal ? "true" : "false");
}

std::string DescribeExpressSyncSharesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeExpressSyncSharesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeExpressSyncSharesRequest::getExpressSyncIds()const
{
	return expressSyncIds_;
}

void DescribeExpressSyncSharesRequest::setExpressSyncIds(const std::string& expressSyncIds)
{
	expressSyncIds_ = expressSyncIds;
	setParameter("ExpressSyncIds", expressSyncIds);
}

bool DescribeExpressSyncSharesRequest::getIsCrossRegion()const
{
	return isCrossRegion_;
}

void DescribeExpressSyncSharesRequest::setIsCrossRegion(bool isCrossRegion)
{
	isCrossRegion_ = isCrossRegion;
	setParameter("IsCrossRegion", isCrossRegion ? "true" : "false");
}

std::string DescribeExpressSyncSharesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeExpressSyncSharesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

