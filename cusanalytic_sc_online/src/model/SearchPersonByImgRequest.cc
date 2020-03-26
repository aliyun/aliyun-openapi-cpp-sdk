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

#include <alibabacloud/cusanalytic_sc_online/model/SearchPersonByImgRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::SearchPersonByImgRequest;

SearchPersonByImgRequest::SearchPersonByImgRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "SearchPersonByImg")
{
	setMethod(HttpRequest::Method::Post);
}

SearchPersonByImgRequest::~SearchPersonByImgRequest()
{}

long SearchPersonByImgRequest::getStoreId()const
{
	return storeId_;
}

void SearchPersonByImgRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string SearchPersonByImgRequest::getImgUrl()const
{
	return imgUrl_;
}

void SearchPersonByImgRequest::setImgUrl(const std::string& imgUrl)
{
	imgUrl_ = imgUrl;
	setBodyParameter("ImgUrl", imgUrl);
}

