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

#include <alibabacloud/appmallsservice/model/TaobaoFilmIssueOrderRequest.h>

using AlibabaCloud::AppMallsService::Model::TaobaoFilmIssueOrderRequest;

TaobaoFilmIssueOrderRequest::TaobaoFilmIssueOrderRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "TaobaoFilmIssueOrder")
{
	setMethod(HttpRequest::Method::Post);
}

TaobaoFilmIssueOrderRequest::~TaobaoFilmIssueOrderRequest()
{}

std::string TaobaoFilmIssueOrderRequest::getLockSeatApplyKey()const
{
	return lockSeatApplyKey_;
}

void TaobaoFilmIssueOrderRequest::setLockSeatApplyKey(const std::string& lockSeatApplyKey)
{
	lockSeatApplyKey_ = lockSeatApplyKey;
	setParameter("LockSeatApplyKey", lockSeatApplyKey);
}

std::string TaobaoFilmIssueOrderRequest::getExtUserId()const
{
	return extUserId_;
}

void TaobaoFilmIssueOrderRequest::setExtUserId(const std::string& extUserId)
{
	extUserId_ = extUserId;
	setParameter("ExtUserId", extUserId);
}

std::string TaobaoFilmIssueOrderRequest::getExtOrderId()const
{
	return extOrderId_;
}

void TaobaoFilmIssueOrderRequest::setExtOrderId(const std::string& extOrderId)
{
	extOrderId_ = extOrderId;
	setParameter("ExtOrderId", extOrderId);
}

long TaobaoFilmIssueOrderRequest::getTotalPrice()const
{
	return totalPrice_;
}

void TaobaoFilmIssueOrderRequest::setTotalPrice(long totalPrice)
{
	totalPrice_ = totalPrice;
	setParameter("TotalPrice", std::to_string(totalPrice));
}

std::string TaobaoFilmIssueOrderRequest::getParamsJson()const
{
	return paramsJson_;
}

void TaobaoFilmIssueOrderRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setParameter("ParamsJson", paramsJson);
}

