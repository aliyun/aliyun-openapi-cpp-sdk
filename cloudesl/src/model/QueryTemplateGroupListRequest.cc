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

#include <alibabacloud/cloudesl/model/QueryTemplateGroupListRequest.h>

using AlibabaCloud::Cloudesl::Model::QueryTemplateGroupListRequest;

QueryTemplateGroupListRequest::QueryTemplateGroupListRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "QueryTemplateGroupList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTemplateGroupListRequest::~QueryTemplateGroupListRequest()
{}

int QueryTemplateGroupListRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryTemplateGroupListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryTemplateGroupListRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void QueryTemplateGroupListRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

int QueryTemplateGroupListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTemplateGroupListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTemplateGroupListRequest::getEslModelId()const
{
	return eslModelId_;
}

void QueryTemplateGroupListRequest::setEslModelId(const std::string& eslModelId)
{
	eslModelId_ = eslModelId;
	setBodyParameter("EslModelId", eslModelId);
}

int QueryTemplateGroupListRequest::getWidthPx()const
{
	return widthPx_;
}

void QueryTemplateGroupListRequest::setWidthPx(int widthPx)
{
	widthPx_ = widthPx;
	setBodyParameter("WidthPx", std::to_string(widthPx));
}

std::string QueryTemplateGroupListRequest::getGroupIds()const
{
	return groupIds_;
}

void QueryTemplateGroupListRequest::setGroupIds(const std::string& groupIds)
{
	groupIds_ = groupIds;
	setBodyParameter("GroupIds", groupIds);
}

int QueryTemplateGroupListRequest::getHeightPx()const
{
	return heightPx_;
}

void QueryTemplateGroupListRequest::setHeightPx(int heightPx)
{
	heightPx_ = heightPx;
	setBodyParameter("HeightPx", std::to_string(heightPx));
}

