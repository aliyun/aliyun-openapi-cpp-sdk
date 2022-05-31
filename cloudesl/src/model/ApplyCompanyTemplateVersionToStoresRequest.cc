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

#include <alibabacloud/cloudesl/model/ApplyCompanyTemplateVersionToStoresRequest.h>

using AlibabaCloud::Cloudesl::Model::ApplyCompanyTemplateVersionToStoresRequest;

ApplyCompanyTemplateVersionToStoresRequest::ApplyCompanyTemplateVersionToStoresRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "ApplyCompanyTemplateVersionToStores")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyCompanyTemplateVersionToStoresRequest::~ApplyCompanyTemplateVersionToStoresRequest()
{}

std::string ApplyCompanyTemplateVersionToStoresRequest::getStores()const
{
	return stores_;
}

void ApplyCompanyTemplateVersionToStoresRequest::setStores(const std::string& stores)
{
	stores_ = stores;
	setBodyParameter("Stores", stores);
}

std::string ApplyCompanyTemplateVersionToStoresRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void ApplyCompanyTemplateVersionToStoresRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

