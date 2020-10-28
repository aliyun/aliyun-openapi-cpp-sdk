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

#include <alibabacloud/oos/model/ListInventoryEntriesRequest.h>

using AlibabaCloud::Oos::Model::ListInventoryEntriesRequest;

ListInventoryEntriesRequest::ListInventoryEntriesRequest() :
	RpcServiceRequest("oos", "2019-06-01", "ListInventoryEntries")
{
	setMethod(HttpRequest::Method::Post);
}

ListInventoryEntriesRequest::~ListInventoryEntriesRequest()
{}

std::vector<ListInventoryEntriesRequest::Filter> ListInventoryEntriesRequest::getFilter()const
{
	return filter_;
}

void ListInventoryEntriesRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	for(int dep1 = 0; dep1!= filter.size(); dep1++) {
		auto filterObj = filter.at(dep1);
		std::string filterObjStr = "Filter." + std::to_string(dep1 + 1);
		setParameter(filterObjStr + ".Name", filterObj.name);
		for(int dep2 = 0; dep2!= filterObj.value.size(); dep2++) {
			setParameter(filterObjStr + ".Value."+ std::to_string(dep2), filterObj.value.at(dep2));
		}
		setParameter(filterObjStr + "._Operator", filterObj._operator);
	}
}

std::string ListInventoryEntriesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListInventoryEntriesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListInventoryEntriesRequest::getNextToken()const
{
	return nextToken_;
}

void ListInventoryEntriesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListInventoryEntriesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListInventoryEntriesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListInventoryEntriesRequest::getTypeName()const
{
	return typeName_;
}

void ListInventoryEntriesRequest::setTypeName(const std::string& typeName)
{
	typeName_ = typeName;
	setParameter("TypeName", typeName);
}

