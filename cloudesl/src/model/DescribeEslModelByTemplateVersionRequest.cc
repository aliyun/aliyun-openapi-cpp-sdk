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

#include <alibabacloud/cloudesl/model/DescribeEslModelByTemplateVersionRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeEslModelByTemplateVersionRequest;

DescribeEslModelByTemplateVersionRequest::DescribeEslModelByTemplateVersionRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeEslModelByTemplateVersion")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEslModelByTemplateVersionRequest::~DescribeEslModelByTemplateVersionRequest()
{}

int DescribeEslModelByTemplateVersionRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEslModelByTemplateVersionRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEslModelByTemplateVersionRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void DescribeEslModelByTemplateVersionRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

int DescribeEslModelByTemplateVersionRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEslModelByTemplateVersionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

