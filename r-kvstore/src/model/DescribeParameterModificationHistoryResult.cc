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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHistoricalParameters = value["HistoricalParameters"]["HistoricalParameter"];
	for (auto value : allHistoricalParameters)
	{
		HistoricalParameter historicalParametersObject;
		if(!value["ParameterName"].isNull())
			historicalParametersObject.parameterName = value["ParameterName"].asString();
		if(!value["ModifyTime"].isNull())
			historicalParametersObject.modifyTime = value["ModifyTime"].asString();
		if(!value["OldParameterValue"].isNull())
			historicalParametersObject.oldParameterValue = value["OldParameterValue"].asString();
		if(!value["NewParameterValue"].isNull())
			historicalParametersObject.newParameterValue = value["NewParameterValue"].asString();
		historicalParameters_.push_back(historicalParametersObject);
	}

}

std::vector<DescribeParameterModificationHistoryResult::HistoricalParameter> DescribeParameterModificationHistoryResult::getHistoricalParameters()const
{
	return historicalParameters_;
}

