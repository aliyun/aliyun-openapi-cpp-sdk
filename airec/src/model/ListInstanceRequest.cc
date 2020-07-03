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

#include <alibabacloud/airec/model/ListInstanceRequest.h>

using AlibabaCloud::Airec::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest() :
	RoaServiceRequest("airec", "2018-10-12")
{
	setResourcePath("/openapi/instances");
	setMethod(HttpRequest::Method::Get);
}

ListInstanceRequest::~ListInstanceRequest()
{}

int ListInstanceRequest::getSize()const
{
	return size_;
}

void ListInstanceRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

int ListInstanceRequest::getPage()const
{
	return page_;
}

void ListInstanceRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

