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

#include <alibabacloud/vcs/model/UpdateProfileCatalogRequest.h>

using AlibabaCloud::Vcs::Model::UpdateProfileCatalogRequest;

UpdateProfileCatalogRequest::UpdateProfileCatalogRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateProfileCatalog")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateProfileCatalogRequest::~UpdateProfileCatalogRequest()
{}

std::string UpdateProfileCatalogRequest::getIsvSubId()const
{
	return isvSubId_;
}

void UpdateProfileCatalogRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string UpdateProfileCatalogRequest::getCorpId()const
{
	return corpId_;
}

void UpdateProfileCatalogRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateProfileCatalogRequest::getCatalogName()const
{
	return catalogName_;
}

void UpdateProfileCatalogRequest::setCatalogName(const std::string& catalogName)
{
	catalogName_ = catalogName;
	setBodyParameter("CatalogName", catalogName);
}

long UpdateProfileCatalogRequest::getCatalogId()const
{
	return catalogId_;
}

void UpdateProfileCatalogRequest::setCatalogId(long catalogId)
{
	catalogId_ = catalogId;
	setBodyParameter("CatalogId", std::to_string(catalogId));
}

