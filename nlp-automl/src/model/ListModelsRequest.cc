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

#include <alibabacloud/nlp-automl/model/ListModelsRequest.h>

using AlibabaCloud::Nlp_automl::Model::ListModelsRequest;

ListModelsRequest::ListModelsRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "ListModels")
{
	setMethod(HttpRequest::Method::Post);
}

ListModelsRequest::~ListModelsRequest()
{}

std::string ListModelsRequest::getProduct()const
{
	return product_;
}

void ListModelsRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

int ListModelsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListModelsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int ListModelsRequest::getPageSize()const
{
	return pageSize_;
}

void ListModelsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

long ListModelsRequest::getProjectId()const
{
	return projectId_;
}

void ListModelsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

