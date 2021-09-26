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

#include <alibabacloud/sddp/model/DescribeInstanceSourcesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeInstanceSourcesRequest;

DescribeInstanceSourcesRequest::DescribeInstanceSourcesRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeInstanceSources")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceSourcesRequest::~DescribeInstanceSourcesRequest()
{}

long DescribeInstanceSourcesRequest::getProductId()const
{
	return productId_;
}

void DescribeInstanceSourcesRequest::setProductId(long productId)
{
	productId_ = productId;
	setParameter("ProductId", std::to_string(productId));
}

std::string DescribeInstanceSourcesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeInstanceSourcesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeInstanceSourcesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceSourcesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstanceSourcesRequest::getLang()const
{
	return lang_;
}

void DescribeInstanceSourcesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeInstanceSourcesRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void DescribeInstanceSourcesRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setParameter("ServiceRegionId", serviceRegionId);
}

std::string DescribeInstanceSourcesRequest::getEngineType()const
{
	return engineType_;
}

void DescribeInstanceSourcesRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

int DescribeInstanceSourcesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeInstanceSourcesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

bool DescribeInstanceSourcesRequest::getAuthed()const
{
	return authed_;
}

void DescribeInstanceSourcesRequest::setAuthed(bool authed)
{
	authed_ = authed;
	setParameter("Authed", authed ? "true" : "false");
}

std::string DescribeInstanceSourcesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceSourcesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeInstanceSourcesRequest::getDbName()const
{
	return dbName_;
}

void DescribeInstanceSourcesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

