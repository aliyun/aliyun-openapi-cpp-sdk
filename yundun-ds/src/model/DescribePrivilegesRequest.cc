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

#include <alibabacloud/yundun-ds/model/DescribePrivilegesRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribePrivilegesRequest;

DescribePrivilegesRequest::DescribePrivilegesRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribePrivileges")
{}

DescribePrivilegesRequest::~DescribePrivilegesRequest()
{}

long DescribePrivilegesRequest::getAccountId()const
{
	return accountId_;
}

void DescribePrivilegesRequest::setAccountId(long accountId)
{
	accountId_ = accountId;
	setCoreParameter("AccountId", accountId);
}

long DescribePrivilegesRequest::getUseAccountId()const
{
	return useAccountId_;
}

void DescribePrivilegesRequest::setUseAccountId(long useAccountId)
{
	useAccountId_ = useAccountId;
	setCoreParameter("UseAccountId", useAccountId);
}

std::string DescribePrivilegesRequest::getDataTypeIds()const
{
	return dataTypeIds_;
}

void DescribePrivilegesRequest::setDataTypeIds(const std::string& dataTypeIds)
{
	dataTypeIds_ = dataTypeIds;
	setCoreParameter("DataTypeIds", std::to_string(dataTypeIds));
}

std::string DescribePrivilegesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePrivilegesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribePrivilegesRequest::getFeatureType()const
{
	return featureType_;
}

void DescribePrivilegesRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

int DescribePrivilegesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePrivilegesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribePrivilegesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePrivilegesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribePrivilegesRequest::getLang()const
{
	return lang_;
}

void DescribePrivilegesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribePrivilegesRequest::getKey()const
{
	return key_;
}

void DescribePrivilegesRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", std::to_string(key));
}

