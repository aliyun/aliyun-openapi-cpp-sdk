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

#include <alibabacloud/oceanbasepro/model/DescribeParametersHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeParametersHistoryResult::DescribeParametersHistoryResult() :
	ServiceResult()
{}

DescribeParametersHistoryResult::DescribeParametersHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParametersHistoryResult::~DescribeParametersHistoryResult()
{}

void DescribeParametersHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRespondNode = value["Respond"]["Data"];
	for (auto valueRespondData : allRespondNode)
	{
		Data respondObject;
		if(!valueRespondData["TotalCount"].isNull())
			respondObject.totalCount = std::stoi(valueRespondData["TotalCount"].asString());
		if(!valueRespondData["PageNumber"].isNull())
			respondObject.pageNumber = std::stoi(valueRespondData["PageNumber"].asString());
		auto allParametersNode = valueRespondData["Parameters"]["ParametersItem"];
		for (auto valueRespondDataParametersParametersItem : allParametersNode)
		{
			Data::ParametersItem parametersObject;
			if(!valueRespondDataParametersParametersItem["Status"].isNull())
				parametersObject.status = valueRespondDataParametersParametersItem["Status"].asString();
			if(!valueRespondDataParametersParametersItem["OldValue"].isNull())
				parametersObject.oldValue = valueRespondDataParametersParametersItem["OldValue"].asString();
			if(!valueRespondDataParametersParametersItem["UpdateTime"].isNull())
				parametersObject.updateTime = valueRespondDataParametersParametersItem["UpdateTime"].asString();
			if(!valueRespondDataParametersParametersItem["CreateTime"].isNull())
				parametersObject.createTime = valueRespondDataParametersParametersItem["CreateTime"].asString();
			if(!valueRespondDataParametersParametersItem["DimensionValue"].isNull())
				parametersObject.dimensionValue = valueRespondDataParametersParametersItem["DimensionValue"].asString();
			if(!valueRespondDataParametersParametersItem["Name"].isNull())
				parametersObject.name = valueRespondDataParametersParametersItem["Name"].asString();
			if(!valueRespondDataParametersParametersItem["NewValue"].isNull())
				parametersObject.newValue = valueRespondDataParametersParametersItem["NewValue"].asString();
			respondObject.parameters.push_back(parametersObject);
		}
		respond_.push_back(respondObject);
	}

}

std::vector<DescribeParametersHistoryResult::Data> DescribeParametersHistoryResult::getRespond()const
{
	return respond_;
}

