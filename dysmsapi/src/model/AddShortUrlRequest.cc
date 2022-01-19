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

#include <alibabacloud/dysmsapi/model/AddShortUrlRequest.h>

using AlibabaCloud::Dysmsapi::Model::AddShortUrlRequest;

AddShortUrlRequest::AddShortUrlRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "AddShortUrl")
{
	setMethod(HttpRequest::Method::Post);
}

AddShortUrlRequest::~AddShortUrlRequest()
{}

long AddShortUrlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddShortUrlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddShortUrlRequest::getShortUrlName()const
{
	return shortUrlName_;
}

void AddShortUrlRequest::setShortUrlName(const std::string& shortUrlName)
{
	shortUrlName_ = shortUrlName;
	setBodyParameter("ShortUrlName", shortUrlName);
}

std::string AddShortUrlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddShortUrlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddShortUrlRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddShortUrlRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddShortUrlRequest::getEffectiveDays()const
{
	return effectiveDays_;
}

void AddShortUrlRequest::setEffectiveDays(const std::string& effectiveDays)
{
	effectiveDays_ = effectiveDays;
	setBodyParameter("EffectiveDays", effectiveDays);
}

std::string AddShortUrlRequest::getProdCode()const
{
	return prodCode_;
}

void AddShortUrlRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setBodyParameter("ProdCode", prodCode);
}

long AddShortUrlRequest::getOwnerId()const
{
	return ownerId_;
}

void AddShortUrlRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddShortUrlRequest::getSourceUrl()const
{
	return sourceUrl_;
}

void AddShortUrlRequest::setSourceUrl(const std::string& sourceUrl)
{
	sourceUrl_ = sourceUrl;
	setBodyParameter("SourceUrl", sourceUrl);
}

