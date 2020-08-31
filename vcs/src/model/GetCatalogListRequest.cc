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

#include <alibabacloud/vcs/model/GetCatalogListRequest.h>

using AlibabaCloud::Vcs::Model::GetCatalogListRequest;

GetCatalogListRequest::GetCatalogListRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetCatalogList")
{
	setMethod(HttpRequest::Method::Post);
}

GetCatalogListRequest::~GetCatalogListRequest()
{}

std::string GetCatalogListRequest::getIsvSubId()const
{
	return isvSubId_;
}

void GetCatalogListRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setParameter("IsvSubId", isvSubId);
}

std::string GetCatalogListRequest::getCorpId()const
{
	return corpId_;
}

void GetCatalogListRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setParameter("CorpId", corpId);
}

