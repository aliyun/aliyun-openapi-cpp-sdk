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

#include <alibabacloud/bssopenapi/model/AllocateFinanceUnitResourceRequest.h>

using AlibabaCloud::BssOpenApi::Model::AllocateFinanceUnitResourceRequest;

AllocateFinanceUnitResourceRequest::AllocateFinanceUnitResourceRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "AllocateFinanceUnitResource")
{}

AllocateFinanceUnitResourceRequest::~AllocateFinanceUnitResourceRequest()
{}

std::vector<AllocateFinanceUnitResourceRequest::ResourceInstanceList> AllocateFinanceUnitResourceRequest::getResourceInstanceList()const
{
	return resourceInstanceList_;
}

void AllocateFinanceUnitResourceRequest::setResourceInstanceList(const std::vector<ResourceInstanceList>& resourceInstanceList)
{
	resourceInstanceList_ = resourceInstanceList;
	int i = 0;
	for(int i = 0; i!= resourceInstanceList.size(); i++)	{
		auto obj = resourceInstanceList.at(i);
		std::string str ="ResourceInstanceList."+ std::to_string(i);
		setCoreParameter(str + ".ResourceId", obj.resourceId);
		setCoreParameter(str + ".CommodityCode", obj.commodityCode);
		setCoreParameter(str + ".ResourceUserId", std::to_string(obj.resourceUserId));
	}
}

long AllocateFinanceUnitResourceRequest::getFromUnitId()const
{
	return fromUnitId_;
}

void AllocateFinanceUnitResourceRequest::setFromUnitId(long fromUnitId)
{
	fromUnitId_ = fromUnitId;
	setCoreParameter("FromUnitId", std::to_string(fromUnitId));
}

long AllocateFinanceUnitResourceRequest::getToUnitId()const
{
	return toUnitId_;
}

void AllocateFinanceUnitResourceRequest::setToUnitId(long toUnitId)
{
	toUnitId_ = toUnitId;
	setCoreParameter("ToUnitId", std::to_string(toUnitId));
}

long AllocateFinanceUnitResourceRequest::getFromUnitUserId()const
{
	return fromUnitUserId_;
}

void AllocateFinanceUnitResourceRequest::setFromUnitUserId(long fromUnitUserId)
{
	fromUnitUserId_ = fromUnitUserId;
	setCoreParameter("FromUnitUserId", std::to_string(fromUnitUserId));
}

long AllocateFinanceUnitResourceRequest::getToUnitUserId()const
{
	return toUnitUserId_;
}

void AllocateFinanceUnitResourceRequest::setToUnitUserId(long toUnitUserId)
{
	toUnitUserId_ = toUnitUserId;
	setCoreParameter("ToUnitUserId", std::to_string(toUnitUserId));
}

