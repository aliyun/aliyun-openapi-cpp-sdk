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

#include <alibabacloud/cbn/model/ListTransitRouterCidrAllocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterCidrAllocationResult::ListTransitRouterCidrAllocationResult() :
	ServiceResult()
{}

ListTransitRouterCidrAllocationResult::ListTransitRouterCidrAllocationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterCidrAllocationResult::~ListTransitRouterCidrAllocationResult()
{}

void ListTransitRouterCidrAllocationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterCidrAllocationsNode = value["TransitRouterCidrAllocations"]["TransitRouterCidrAllocation"];
	for (auto valueTransitRouterCidrAllocationsTransitRouterCidrAllocation : allTransitRouterCidrAllocationsNode)
	{
		TransitRouterCidrAllocation transitRouterCidrAllocationsObject;
		if(!valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["TransitRouterCidrId"].isNull())
			transitRouterCidrAllocationsObject.transitRouterCidrId = valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["TransitRouterCidrId"].asString();
		if(!valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["AllocatedCidrBlock"].isNull())
			transitRouterCidrAllocationsObject.allocatedCidrBlock = valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["AllocatedCidrBlock"].asString();
		if(!valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["AttachmentId"].isNull())
			transitRouterCidrAllocationsObject.attachmentId = valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["AttachmentId"].asString();
		if(!valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["Cidr"].isNull())
			transitRouterCidrAllocationsObject.cidr = valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["Cidr"].asString();
		if(!valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["AttachmentName"].isNull())
			transitRouterCidrAllocationsObject.attachmentName = valueTransitRouterCidrAllocationsTransitRouterCidrAllocation["AttachmentName"].asString();
		transitRouterCidrAllocations_.push_back(transitRouterCidrAllocationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterCidrAllocationResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterCidrAllocationResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterCidrAllocationResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterCidrAllocationResult::TransitRouterCidrAllocation> ListTransitRouterCidrAllocationResult::getTransitRouterCidrAllocations()const
{
	return transitRouterCidrAllocations_;
}

