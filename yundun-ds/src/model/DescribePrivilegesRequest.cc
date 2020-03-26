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
{
	setMethod(HttpRequest::Method::Post);
}

DescribePrivilegesRequest::~DescribePrivilegesRequest()
{}

long DescribePrivilegesRequest::getAccountId()const
{
	return accountId_;
}

void DescribePrivilegesRequest::setAccountId(long accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", std::to_string(accountId));
}

std::string DescribePrivilegesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePrivilegesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribePrivilegesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePrivilegesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePrivilegesRequest::getLang()const
{
	return lang_;
}

void DescribePrivilegesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribePrivilegesRequest::getKey()const
{
	return key_;
}

void DescribePrivilegesRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

long DescribePrivilegesRequest::getUseAccountId()const
{
	return useAccountId_;
}

void DescribePrivilegesRequest::setUseAccountId(long useAccountId)
{
	useAccountId_ = useAccountId;
	setParameter("UseAccountId", std::to_string(useAccountId));
}

int DescribePrivilegesRequest::getFeatureType()const
{
	return featureType_;
}

void DescribePrivilegesRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribePrivilegesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePrivilegesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribePrivilegesRequest::getDataTypeIds()const
{
	return dataTypeIds_;
}

void DescribePrivilegesRequest::setDataTypeIds(const std::string& dataTypeIds)
{
	dataTypeIds_ = dataTypeIds;
	setParameter("DataTypeIds", dataTypeIds);
}

