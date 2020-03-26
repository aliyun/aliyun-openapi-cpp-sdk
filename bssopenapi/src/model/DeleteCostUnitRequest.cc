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

#include <alibabacloud/bssopenapi/model/DeleteCostUnitRequest.h>

using AlibabaCloud::BssOpenApi::Model::DeleteCostUnitRequest;

DeleteCostUnitRequest::DeleteCostUnitRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "DeleteCostUnit")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteCostUnitRequest::~DeleteCostUnitRequest()
{}

long DeleteCostUnitRequest::getUnitId()const
{
	return unitId_;
}

void DeleteCostUnitRequest::setUnitId(long unitId)
{
	unitId_ = unitId;
	setParameter("UnitId", std::to_string(unitId));
}

long DeleteCostUnitRequest::getOwnerUid()const
{
	return ownerUid_;
}

void DeleteCostUnitRequest::setOwnerUid(long ownerUid)
{
	ownerUid_ = ownerUid;
	setParameter("OwnerUid", std::to_string(ownerUid));
}

