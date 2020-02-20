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

#include <alibabacloud/reid/model/ListPersonByImageRequest.h>

using AlibabaCloud::Reid::Model::ListPersonByImageRequest;

ListPersonByImageRequest::ListPersonByImageRequest() :
	RpcServiceRequest("reid", "2019-09-28", "ListPersonByImage")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonByImageRequest::~ListPersonByImageRequest()
{}

long ListPersonByImageRequest::getStoreId()const
{
	return storeId_;
}

void ListPersonByImageRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string ListPersonByImageRequest::getImageUrl()const
{
	return imageUrl_;
}

void ListPersonByImageRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

