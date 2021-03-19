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

#include <alibabacloud/oos/model/ListParametersRequest.h>

using AlibabaCloud::Oos::Model::ListParametersRequest;

ListParametersRequest::ListParametersRequest() :
	RpcServiceRequest("oos", "2019-06-01", "ListParameters")
{
	setMethod(HttpRequest::Method::Post);
}

ListParametersRequest::~ListParametersRequest()
{}

std::string ListParametersRequest::getType()const
{
	return type_;
}

void ListParametersRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

bool ListParametersRequest::getRecursive()const
{
	return recursive_;
}

void ListParametersRequest::setRecursive(bool recursive)
{
	recursive_ = recursive;
	setParameter("Recursive", recursive ? "true" : "false");
}

std::string ListParametersRequest::getPath()const
{
	return path_;
}

void ListParametersRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string ListParametersRequest::getRegionId()const
{
	return regionId_;
}

void ListParametersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListParametersRequest::getNextToken()const
{
	return nextToken_;
}

void ListParametersRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListParametersRequest::getSortOrder()const
{
	return sortOrder_;
}

void ListParametersRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setParameter("SortOrder", sortOrder);
}

std::string ListParametersRequest::getTags()const
{
	return tags_;
}

void ListParametersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string ListParametersRequest::getName()const
{
	return name_;
}

void ListParametersRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListParametersRequest::getMaxResults()const
{
	return maxResults_;
}

void ListParametersRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListParametersRequest::getSortField()const
{
	return sortField_;
}

void ListParametersRequest::setSortField(const std::string& sortField)
{
	sortField_ = sortField;
	setParameter("SortField", sortField);
}

