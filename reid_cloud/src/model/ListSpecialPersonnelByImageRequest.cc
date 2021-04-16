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

#include <alibabacloud/reid_cloud/model/ListSpecialPersonnelByImageRequest.h>

using AlibabaCloud::Reid_cloud::Model::ListSpecialPersonnelByImageRequest;

ListSpecialPersonnelByImageRequest::ListSpecialPersonnelByImageRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "ListSpecialPersonnelByImage")
{
	setMethod(HttpRequest::Method::Post);
}

ListSpecialPersonnelByImageRequest::~ListSpecialPersonnelByImageRequest()
{}

long ListSpecialPersonnelByImageRequest::getSource()const
{
	return source_;
}

void ListSpecialPersonnelByImageRequest::setSource(long source)
{
	source_ = source;
	setBodyParameter("Source", std::to_string(source));
}

long ListSpecialPersonnelByImageRequest::getStoreId()const
{
	return storeId_;
}

void ListSpecialPersonnelByImageRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string ListSpecialPersonnelByImageRequest::getPersonType()const
{
	return personType_;
}

void ListSpecialPersonnelByImageRequest::setPersonType(const std::string& personType)
{
	personType_ = personType;
	setBodyParameter("PersonType", personType);
}

std::string ListSpecialPersonnelByImageRequest::getImageUrl()const
{
	return imageUrl_;
}

void ListSpecialPersonnelByImageRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

