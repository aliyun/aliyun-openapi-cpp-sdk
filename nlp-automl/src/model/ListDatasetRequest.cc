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

#include <alibabacloud/nlp-automl/model/ListDatasetRequest.h>

using AlibabaCloud::Nlp_automl::Model::ListDatasetRequest;

ListDatasetRequest::ListDatasetRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "ListDataset")
{
	setMethod(HttpRequest::Method::Post);
}

ListDatasetRequest::~ListDatasetRequest()
{}

std::string ListDatasetRequest::getProduct()const
{
	return product_;
}

void ListDatasetRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

int ListDatasetRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDatasetRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int ListDatasetRequest::getPageSize()const
{
	return pageSize_;
}

void ListDatasetRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

long ListDatasetRequest::getProjectId()const
{
	return projectId_;
}

void ListDatasetRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

