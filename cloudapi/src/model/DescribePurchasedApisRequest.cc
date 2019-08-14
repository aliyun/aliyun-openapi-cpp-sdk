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

#include <alibabacloud/cloudapi/model/DescribePurchasedApisRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribePurchasedApisRequest;

DescribePurchasedApisRequest::DescribePurchasedApisRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribePurchasedApis")
{}

DescribePurchasedApisRequest::~DescribePurchasedApisRequest()
{}

std::string DescribePurchasedApisRequest::getStageName()const
{
	return stageName_;
}

void DescribePurchasedApisRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string DescribePurchasedApisRequest::getApiName()const
{
	return apiName_;
}

void DescribePurchasedApisRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setCoreParameter("ApiName", apiName);
}

std::string DescribePurchasedApisRequest::getVisibility()const
{
	return visibility_;
}

void DescribePurchasedApisRequest::setVisibility(const std::string& visibility)
{
	visibility_ = visibility;
	setCoreParameter("Visibility", visibility);
}

std::string DescribePurchasedApisRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePurchasedApisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribePurchasedApisRequest::getGroupId()const
{
	return groupId_;
}

void DescribePurchasedApisRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int DescribePurchasedApisRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePurchasedApisRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePurchasedApisRequest::getApiId()const
{
	return apiId_;
}

void DescribePurchasedApisRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

int DescribePurchasedApisRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribePurchasedApisRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribePurchasedApisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePurchasedApisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

