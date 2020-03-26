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

#include <alibabacloud/jarvis/model/DeleteCdnIpRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteCdnIpRequest;

DeleteCdnIpRequest::DeleteCdnIpRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteCdnIp")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteCdnIpRequest::~DeleteCdnIpRequest()
{}

long DeleteCdnIpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteCdnIpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteCdnIpRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteCdnIpRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

int DeleteCdnIpRequest::getItemId()const
{
	return itemId_;
}

void DeleteCdnIpRequest::setItemId(int itemId)
{
	itemId_ = itemId;
	setParameter("ItemId", std::to_string(itemId));
}

std::string DeleteCdnIpRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteCdnIpRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteCdnIpRequest::getCdnIp()const
{
	return cdnIp_;
}

void DeleteCdnIpRequest::setCdnIp(const std::string& cdnIp)
{
	cdnIp_ = cdnIp;
	setParameter("CdnIp", cdnIp);
}

std::string DeleteCdnIpRequest::getLang()const
{
	return lang_;
}

void DeleteCdnIpRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

