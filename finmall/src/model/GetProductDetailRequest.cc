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

#include <alibabacloud/finmall/model/GetProductDetailRequest.h>

using AlibabaCloud::Finmall::Model::GetProductDetailRequest;

GetProductDetailRequest::GetProductDetailRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "GetProductDetail")
{}

GetProductDetailRequest::~GetProductDetailRequest()
{}

std::string GetProductDetailRequest::getProductId()const
{
	return productId_;
}

void GetProductDetailRequest::setProductId(const std::string& productId)
{
	productId_ = productId;
	setParameter("ProductId", productId);
}

std::string GetProductDetailRequest::getFundPartyId()const
{
	return fundPartyId_;
}

void GetProductDetailRequest::setFundPartyId(const std::string& fundPartyId)
{
	fundPartyId_ = fundPartyId;
	setParameter("FundPartyId", fundPartyId);
}

std::string GetProductDetailRequest::getUserId()const
{
	return userId_;
}

void GetProductDetailRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

