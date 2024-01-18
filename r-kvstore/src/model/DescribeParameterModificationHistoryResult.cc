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

#include <alibabacloud/r-kvstore/model/DescribeParameterModificationHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeParameterModificationHistoryResult::DescribeParameterModificationHistoryResult() :
	ServiceResult()
{}

DescribeParameterModificationHistoryResult::DescribeParameterModificationHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParameterModificationHistoryResult::~DescribeParameterModificationHistoryResult()
{}

void DescribeParameterModificationHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHistoricalParametersNode = value["HistoricalParameters"]["HistoricalParameter"];
	for (auto valueHistoricalParametersHistoricalParameter : allHistoricalParametersNode)
	{
		HistoricalParameter historicalParametersObject;
		if(!valueHistoricalParametersHistoricalParameter["OldParameterValue"].isNull())
			historicalParametersObject.oldParameterValue = valueHistoricalParametersHistoricalParameter["OldParameterValue"].asString();
		if(!valueHistoricalParametersHistoricalParameter["ParameterName"].isNull())
			historicalParametersObject.parameterName = valueHistoricalParametersHistoricalParameter["ParameterName"].asString();
		if(!valueHistoricalParametersHistoricalParameter["NewParameterValue"].isNull())
			historicalParametersObject.newParameterValue = valueHistoricalParametersHistoricalParameter["NewParameterValue"].asString();
		if(!valueHistoricalParametersHistoricalParameter["ModifyTime"].isNull())
			historicalParametersObject.modifyTime = valueHistoricalParametersHistoricalParameter["ModifyTime"].asString();
		historicalParameters_.push_back(historicalParametersObject);
	}

}

std::vector<DescribeParameterModificationHistoryResult::HistoricalParameter> DescribeParameterModificationHistoryResult::getHistoricalParameters()const
{
	return historicalParameters_;
}

