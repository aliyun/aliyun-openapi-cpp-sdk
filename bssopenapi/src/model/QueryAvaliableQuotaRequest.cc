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

#include <alibabacloud/bssopenapi/model/QueryAvaliableQuotaRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryAvaliableQuotaRequest;

QueryAvaliableQuotaRequest::QueryAvaliableQuotaRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryAvaliableQuota")
{}

QueryAvaliableQuotaRequest::~QueryAvaliableQuotaRequest()
{}

long QueryAvaliableQuotaRequest::getUid()const
{
	return uid_;
}

void QueryAvaliableQuotaRequest::setUid(long uid)
{
	uid_ = uid;
	setParameter("Uid", std::to_string(uid));
}

std::string QueryAvaliableQuotaRequest::getItemCodes()const
{
	return itemCodes_;
}

void QueryAvaliableQuotaRequest::setItemCodes(const std::string& itemCodes)
{
	itemCodes_ = itemCodes;
	setParameter("ItemCodes", itemCodes);
}

std::string QueryAvaliableQuotaRequest::getBid()const
{
	return bid_;
}

void QueryAvaliableQuotaRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setParameter("Bid", bid);
}

