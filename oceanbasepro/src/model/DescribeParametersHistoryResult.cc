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
	auto respondNode = value["Respond"];
	if(!respondNode["TotalCount"].isNull())
		respond_.totalCount = std::stoi(respondNode["TotalCount"].asString());
	if(!respondNode["PageNumber"].isNull())
		respond_.pageNumber = std::stoi(respondNode["PageNumber"].asString());
	auto allParametersNode = respondNode["Parameters"]["ParametersItem"];
	for (auto respondNodeParametersParametersItem : allParametersNode)
	{
		Respond::ParametersItem parametersItemObject;
		if(!respondNodeParametersParametersItem["Status"].isNull())
			parametersItemObject.status = respondNodeParametersParametersItem["Status"].asString();
		if(!respondNodeParametersParametersItem["OldValue"].isNull())
			parametersItemObject.oldValue = respondNodeParametersParametersItem["OldValue"].asString();
		if(!respondNodeParametersParametersItem["UpdateTime"].isNull())
			parametersItemObject.updateTime = respondNodeParametersParametersItem["UpdateTime"].asString();
		if(!respondNodeParametersParametersItem["CreateTime"].isNull())
			parametersItemObject.createTime = respondNodeParametersParametersItem["CreateTime"].asString();
		if(!respondNodeParametersParametersItem["DimensionValue"].isNull())
			parametersItemObject.dimensionValue = respondNodeParametersParametersItem["DimensionValue"].asString();
		if(!respondNodeParametersParametersItem["Name"].isNull())
			parametersItemObject.name = respondNodeParametersParametersItem["Name"].asString();
		if(!respondNodeParametersParametersItem["NewValue"].isNull())
			parametersItemObject.newValue = respondNodeParametersParametersItem["NewValue"].asString();
		respond_.parameters.push_back(parametersItemObject);
	}

}

DescribeParametersHistoryResult::Respond DescribeParametersHistoryResult::getRespond()const
{
	return respond_;
}

