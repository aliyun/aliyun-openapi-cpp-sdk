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

#include <alibabacloud/waf-openapi/model/CreateIPBlockRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateIPBlockRequest;

CreateIPBlockRequest::CreateIPBlockRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "CreateIPBlock")
{
	setMethod(HttpRequest::Method::Post);
}

CreateIPBlockRequest::~CreateIPBlockRequest()
{}

std::string CreateIPBlockRequest::getDomainList()const
{
	return domainList_;
}

void CreateIPBlockRequest::setDomainList(const std::string& domainList)
{
	domainList_ = domainList;
	setParameter("DomainList", domainList);
}

std::string CreateIPBlockRequest::getIPList()const
{
	return iPList_;
}

void CreateIPBlockRequest::setIPList(const std::string& iPList)
{
	iPList_ = iPList;
	setParameter("IPList", iPList);
}

std::string CreateIPBlockRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateIPBlockRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateIPBlockRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateIPBlockRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long CreateIPBlockRequest::getBlockInterval()const
{
	return blockInterval_;
}

void CreateIPBlockRequest::setBlockInterval(long blockInterval)
{
	blockInterval_ = blockInterval;
	setParameter("BlockInterval", std::to_string(blockInterval));
}

std::string CreateIPBlockRequest::getLang()const
{
	return lang_;
}

void CreateIPBlockRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateIPBlockRequest::getOperationType()const
{
	return operationType_;
}

void CreateIPBlockRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setParameter("OperationType", operationType);
}

std::string CreateIPBlockRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateIPBlockRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

