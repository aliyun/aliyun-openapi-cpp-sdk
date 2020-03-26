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

#include <alibabacloud/bssopenapi/model/QueryResellerAvailableQuotaRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryResellerAvailableQuotaRequest;

QueryResellerAvailableQuotaRequest::QueryResellerAvailableQuotaRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryResellerAvailableQuota")
{
	setMethod(HttpRequest::Method::Post);
}

QueryResellerAvailableQuotaRequest::~QueryResellerAvailableQuotaRequest()
{}

std::string QueryResellerAvailableQuotaRequest::getItemCodes()const
{
	return itemCodes_;
}

void QueryResellerAvailableQuotaRequest::setItemCodes(const std::string& itemCodes)
{
	itemCodes_ = itemCodes;
	setParameter("ItemCodes", itemCodes);
}

long QueryResellerAvailableQuotaRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryResellerAvailableQuotaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

