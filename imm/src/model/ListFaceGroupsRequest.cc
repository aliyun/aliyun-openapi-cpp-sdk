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

#include <alibabacloud/imm/model/ListFaceGroupsRequest.h>

using AlibabaCloud::Imm::Model::ListFaceGroupsRequest;

ListFaceGroupsRequest::ListFaceGroupsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListFaceGroups")
{}

ListFaceGroupsRequest::~ListFaceGroupsRequest()
{}

std::string ListFaceGroupsRequest::getRegionId()const
{
	return regionId_;
}

void ListFaceGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListFaceGroupsRequest::getMarker()const
{
	return marker_;
}

void ListFaceGroupsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

int ListFaceGroupsRequest::getLimit()const
{
	return limit_;
}

void ListFaceGroupsRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string ListFaceGroupsRequest::getProject()const
{
	return project_;
}

void ListFaceGroupsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string ListFaceGroupsRequest::getSetId()const
{
	return setId_;
}

void ListFaceGroupsRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string ListFaceGroupsRequest::getOrderBy()const
{
	return orderBy_;
}

void ListFaceGroupsRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", std::to_string(orderBy));
}

std::string ListFaceGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFaceGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ListFaceGroupsRequest::getOrder()const
{
	return order_;
}

void ListFaceGroupsRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

