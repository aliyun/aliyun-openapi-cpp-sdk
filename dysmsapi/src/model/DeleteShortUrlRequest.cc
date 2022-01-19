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

#include <alibabacloud/dysmsapi/model/DeleteShortUrlRequest.h>

using AlibabaCloud::Dysmsapi::Model::DeleteShortUrlRequest;

DeleteShortUrlRequest::DeleteShortUrlRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "DeleteShortUrl")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteShortUrlRequest::~DeleteShortUrlRequest()
{}

long DeleteShortUrlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteShortUrlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteShortUrlRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteShortUrlRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteShortUrlRequest::getProdCode()const
{
	return prodCode_;
}

void DeleteShortUrlRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setBodyParameter("ProdCode", prodCode);
}

long DeleteShortUrlRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteShortUrlRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteShortUrlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteShortUrlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteShortUrlRequest::getSourceUrl()const
{
	return sourceUrl_;
}

void DeleteShortUrlRequest::setSourceUrl(const std::string& sourceUrl)
{
	sourceUrl_ = sourceUrl;
	setBodyParameter("SourceUrl", sourceUrl);
}

