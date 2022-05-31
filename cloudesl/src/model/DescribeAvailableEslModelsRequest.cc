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

#include <alibabacloud/cloudesl/model/DescribeAvailableEslModelsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeAvailableEslModelsRequest;

DescribeAvailableEslModelsRequest::DescribeAvailableEslModelsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeAvailableEslModels")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableEslModelsRequest::~DescribeAvailableEslModelsRequest()
{}

std::string DescribeAvailableEslModelsRequest::getModelId()const
{
	return modelId_;
}

void DescribeAvailableEslModelsRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setBodyParameter("ModelId", modelId);
}

int DescribeAvailableEslModelsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAvailableEslModelsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAvailableEslModelsRequest::getName()const
{
	return name_;
}

void DescribeAvailableEslModelsRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

int DescribeAvailableEslModelsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAvailableEslModelsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

