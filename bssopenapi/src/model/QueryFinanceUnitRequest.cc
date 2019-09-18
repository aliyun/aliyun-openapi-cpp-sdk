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

#include <alibabacloud/bssopenapi/model/QueryFinanceUnitRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryFinanceUnitRequest;

QueryFinanceUnitRequest::QueryFinanceUnitRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryFinanceUnit")
{}

QueryFinanceUnitRequest::~QueryFinanceUnitRequest()
{}

int QueryFinanceUnitRequest::getPageNum()const
{
	return pageNum_;
}

void QueryFinanceUnitRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int QueryFinanceUnitRequest::getPageSize()const
{
	return pageSize_;
}

void QueryFinanceUnitRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryFinanceUnitRequest::getUnitId()const
{
	return unitId_;
}

void QueryFinanceUnitRequest::setUnitId(long unitId)
{
	unitId_ = unitId;
	setCoreParameter("UnitId", std::to_string(unitId));
}

long QueryFinanceUnitRequest::getOwnerUid()const
{
	return ownerUid_;
}

void QueryFinanceUnitRequest::setOwnerUid(long ownerUid)
{
	ownerUid_ = ownerUid;
	setCoreParameter("OwnerUid", std::to_string(ownerUid));
}

