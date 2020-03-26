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

#include <alibabacloud/cloudwf/model/ShopGroupShowListRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopGroupShowListRequest;

ShopGroupShowListRequest::ShopGroupShowListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopGroupShowList")
{
	setMethod(HttpRequest::Method::Post);
}

ShopGroupShowListRequest::~ShopGroupShowListRequest()
{}

std::string ShopGroupShowListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopGroupShowListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ShopGroupShowListRequest::getPage()const
{
	return page_;
}

void ShopGroupShowListRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ShopGroupShowListRequest::getBid()const
{
	return bid_;
}

void ShopGroupShowListRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

int ShopGroupShowListRequest::getPer()const
{
	return per_;
}

void ShopGroupShowListRequest::setPer(int per)
{
	per_ = per;
	setParameter("Per", std::to_string(per));
}

