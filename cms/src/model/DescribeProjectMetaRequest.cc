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

#include <alibabacloud/cms/model/DescribeProjectMetaRequest.h>

using AlibabaCloud::Cms::Model::DescribeProjectMetaRequest;

DescribeProjectMetaRequest::DescribeProjectMetaRequest() :
	RpcServiceRequest("cms", "2019-01-01", "DescribeProjectMeta")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeProjectMetaRequest::~DescribeProjectMetaRequest()
{}

int DescribeProjectMetaRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeProjectMetaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeProjectMetaRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeProjectMetaRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeProjectMetaRequest::getLabels()const
{
	return labels_;
}

void DescribeProjectMetaRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setParameter("Labels", labels);
}

