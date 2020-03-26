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

#include <alibabacloud/live/model/EditHtmlResourceRequest.h>

using AlibabaCloud::Live::Model::EditHtmlResourceRequest;

EditHtmlResourceRequest::EditHtmlResourceRequest() :
	RpcServiceRequest("live", "2016-11-01", "EditHtmlResource")
{
	setMethod(HttpRequest::Method::Post);
}

EditHtmlResourceRequest::~EditHtmlResourceRequest()
{}

std::string EditHtmlResourceRequest::getHtmlUrl()const
{
	return htmlUrl_;
}

void EditHtmlResourceRequest::setHtmlUrl(const std::string& htmlUrl)
{
	htmlUrl_ = htmlUrl;
	setParameter("HtmlUrl", htmlUrl);
}

std::string EditHtmlResourceRequest::getCasterId()const
{
	return casterId_;
}

void EditHtmlResourceRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setParameter("CasterId", casterId);
}

std::string EditHtmlResourceRequest::getHtmlContent()const
{
	return htmlContent_;
}

void EditHtmlResourceRequest::setHtmlContent(const std::string& htmlContent)
{
	htmlContent_ = htmlContent;
	setParameter("HtmlContent", htmlContent);
}

long EditHtmlResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void EditHtmlResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EditHtmlResourceRequest::getHtmlResourceId()const
{
	return htmlResourceId_;
}

void EditHtmlResourceRequest::setHtmlResourceId(const std::string& htmlResourceId)
{
	htmlResourceId_ = htmlResourceId;
	setParameter("HtmlResourceId", htmlResourceId);
}

std::string EditHtmlResourceRequest::getConfig()const
{
	return config_;
}

void EditHtmlResourceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}

