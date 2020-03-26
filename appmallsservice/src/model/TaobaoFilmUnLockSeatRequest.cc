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

#include <alibabacloud/appmallsservice/model/TaobaoFilmUnLockSeatRequest.h>

using AlibabaCloud::AppMallsService::Model::TaobaoFilmUnLockSeatRequest;

TaobaoFilmUnLockSeatRequest::TaobaoFilmUnLockSeatRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "TaobaoFilmUnLockSeat")
{
	setMethod(HttpRequest::Method::Post);
}

TaobaoFilmUnLockSeatRequest::~TaobaoFilmUnLockSeatRequest()
{}

std::string TaobaoFilmUnLockSeatRequest::getLockSeatApplyKey()const
{
	return lockSeatApplyKey_;
}

void TaobaoFilmUnLockSeatRequest::setLockSeatApplyKey(const std::string& lockSeatApplyKey)
{
	lockSeatApplyKey_ = lockSeatApplyKey;
	setParameter("LockSeatApplyKey", lockSeatApplyKey);
}

std::string TaobaoFilmUnLockSeatRequest::getExtUserId()const
{
	return extUserId_;
}

void TaobaoFilmUnLockSeatRequest::setExtUserId(const std::string& extUserId)
{
	extUserId_ = extUserId;
	setParameter("ExtUserId", extUserId);
}

std::string TaobaoFilmUnLockSeatRequest::getParamsJson()const
{
	return paramsJson_;
}

void TaobaoFilmUnLockSeatRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setParameter("ParamsJson", paramsJson);
}

