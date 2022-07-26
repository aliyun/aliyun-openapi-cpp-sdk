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

#include <alibabacloud/oos/model/ListParameterVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListParameterVersionsResult::ListParameterVersionsResult() :
	ServiceResult()
{}

ListParameterVersionsResult::ListParameterVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListParameterVersionsResult::~ListParameterVersionsResult()
{}

void ListParameterVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParameterVersionsNode = value["ParameterVersions"]["ParameterVersion"];
	for (auto valueParameterVersionsParameterVersion : allParameterVersionsNode)
	{
		ParameterVersion parameterVersionsObject;
		if(!valueParameterVersionsParameterVersion["ParameterVersion"].isNull())
			parameterVersionsObject.parameterVersion = std::stoi(valueParameterVersionsParameterVersion["ParameterVersion"].asString());
		if(!valueParameterVersionsParameterVersion["Value"].isNull())
			parameterVersionsObject.value = valueParameterVersionsParameterVersion["Value"].asString();
		if(!valueParameterVersionsParameterVersion["UpdatedDate"].isNull())
			parameterVersionsObject.updatedDate = valueParameterVersionsParameterVersion["UpdatedDate"].asString();
		if(!valueParameterVersionsParameterVersion["UpdatedBy"].isNull())
			parameterVersionsObject.updatedBy = valueParameterVersionsParameterVersion["UpdatedBy"].asString();
		parameterVersions_.push_back(parameterVersionsObject);
	}
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["CreatedBy"].isNull())
		createdBy_ = value["CreatedBy"].asString();
	if(!value["CreatedDate"].isNull())
		createdDate_ = value["CreatedDate"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();

}

std::vector<ListParameterVersionsResult::ParameterVersion> ListParameterVersionsResult::getParameterVersions()const
{
	return parameterVersions_;
}

std::string ListParameterVersionsResult::getType()const
{
	return type_;
}

int ListParameterVersionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListParameterVersionsResult::getDescription()const
{
	return description_;
}

std::string ListParameterVersionsResult::getCreatedBy()const
{
	return createdBy_;
}

std::string ListParameterVersionsResult::getNextToken()const
{
	return nextToken_;
}

int ListParameterVersionsResult::getMaxResults()const
{
	return maxResults_;
}

std::string ListParameterVersionsResult::getCreatedDate()const
{
	return createdDate_;
}

std::string ListParameterVersionsResult::getId()const
{
	return id_;
}

std::string ListParameterVersionsResult::getName()const
{
	return name_;
}

