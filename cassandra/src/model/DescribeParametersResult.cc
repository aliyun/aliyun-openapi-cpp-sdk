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

#include <alibabacloud/cassandra/model/DescribeParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeParametersResult::DescribeParametersResult() :
	ServiceResult()
{}

DescribeParametersResult::DescribeParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParametersResult::~DescribeParametersResult()
{}

void DescribeParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParametersNode = value["Parameters"]["Parameter"];
	for (auto valueParametersParameter : allParametersNode)
	{
		_Parameter parametersObject;
		if(!valueParametersParameter["Name"].isNull())
			parametersObject.name = valueParametersParameter["Name"].asString();
		if(!valueParametersParameter["Value"].isNull())
			parametersObject.value = valueParametersParameter["Value"].asString();
		if(!valueParametersParameter["DefaultValue"].isNull())
			parametersObject.defaultValue = valueParametersParameter["DefaultValue"].asString();
		if(!valueParametersParameter["DataType"].isNull())
			parametersObject.dataType = valueParametersParameter["DataType"].asString();
		if(!valueParametersParameter["AllowedValues"].isNull())
			parametersObject.allowedValues = valueParametersParameter["AllowedValues"].asString();
		if(!valueParametersParameter["Description"].isNull())
			parametersObject.description = valueParametersParameter["Description"].asString();
		parameters_.push_back(parametersObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeParametersResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeParametersResult::_Parameter> DescribeParametersResult::getParameters()const
{
	return parameters_;
}

int DescribeParametersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeParametersResult::getPageNumber()const
{
	return pageNumber_;
}

