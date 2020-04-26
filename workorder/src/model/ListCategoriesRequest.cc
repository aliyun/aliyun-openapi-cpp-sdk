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
	RpcServiceRequest("workorder", "2020-03-26", "ListCategories")
{
	setMethod(HttpRequest::Method::Post);
}

ListCategoriesRequest::~ListCategoriesRequest()
{}

std::string ListCategoriesRequest::getProductCode()const
{
	return productCode_;
}

void ListCategoriesRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string ListCategoriesRequest::getLanguage()const
{
	return language_;
}

void ListCategoriesRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

