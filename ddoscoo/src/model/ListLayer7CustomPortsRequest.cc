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

#include <alibabacloud/ddoscoo/model/ListLayer7CustomPortsRequest.h>

using AlibabaCloud::Ddoscoo::Model::ListLayer7CustomPortsRequest;

ListLayer7CustomPortsRequest::ListLayer7CustomPortsRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ListLayer7CustomPorts")
{
	setMethod(HttpRequest::Method::Post);
}

ListLayer7CustomPortsRequest::~ListLayer7CustomPortsRequest()
{}

std::string ListLayer7CustomPortsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListLayer7CustomPortsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListLayer7CustomPortsRequest::getSourceIp()const
{
	return sourceIp_;
}

void ListLayer7CustomPortsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ListLayer7CustomPortsRequest::getLang()const
{
	return lang_;
}

void ListLayer7CustomPortsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

