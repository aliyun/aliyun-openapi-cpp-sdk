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

#include <alibabacloud/oos/model/ListPatchBaselinesRequest.h>

using AlibabaCloud::Oos::Model::ListPatchBaselinesRequest;

ListPatchBaselinesRequest::ListPatchBaselinesRequest() :
	RpcServiceRequest("oos", "2019-06-01", "ListPatchBaselines")
{
	setMethod(HttpRequest::Method::Post);
}

ListPatchBaselinesRequest::~ListPatchBaselinesRequest()
{}

std::string ListPatchBaselinesRequest::getOperationSystem()const
{
	return operationSystem_;
}

void ListPatchBaselinesRequest::setOperationSystem(const std::string& operationSystem)
{
	operationSystem_ = operationSystem;
	setParameter("OperationSystem", operationSystem);
}

std::string ListPatchBaselinesRequest::getRegionId()const
{
	return regionId_;
}

void ListPatchBaselinesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListPatchBaselinesRequest::getNextToken()const
{
	return nextToken_;
}

void ListPatchBaselinesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListPatchBaselinesRequest::getName()const
{
	return name_;
}

void ListPatchBaselinesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListPatchBaselinesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListPatchBaselinesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListPatchBaselinesRequest::getShareType()const
{
	return shareType_;
}

void ListPatchBaselinesRequest::setShareType(const std::string& shareType)
{
	shareType_ = shareType;
	setParameter("ShareType", shareType);
}

