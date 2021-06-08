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

#include <alibabacloud/workorder/model/ListCategoriesRequest.h>

using AlibabaCloud::Workorder::Model::ListCategoriesRequest;

ListCategoriesRequest::ListCategoriesRequest() :
	RpcServiceRequest("workorder", "2021-06-10", "ListCategories")
{
	setMethod(HttpRequest::Method::Post);
}

ListCategoriesRequest::~ListCategoriesRequest()
{}

long ListCategoriesRequest::getProductId()const
{
	return productId_;
}

void ListCategoriesRequest::setProductId(long productId)
{
	productId_ = productId;
	setBodyParameter("ProductId", std::to_string(productId));
}

std::string ListCategoriesRequest::getName()const
{
	return name_;
}

void ListCategoriesRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

