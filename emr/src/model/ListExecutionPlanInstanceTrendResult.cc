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

#include <alibabacloud/emr/model/ListExecutionPlanInstanceTrendResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListExecutionPlanInstanceTrendResult::ListExecutionPlanInstanceTrendResult() :
	ServiceResult()
{}

ListExecutionPlanInstanceTrendResult::ListExecutionPlanInstanceTrendResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionPlanInstanceTrendResult::~ListExecutionPlanInstanceTrendResult()
{}

void ListExecutionPlanInstanceTrendResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTrends = value["Trends"]["Trend"];
	for (auto value : allTrends)
	{
		Trend trendsObject;
		if(!value["Day"].isNull())
			trendsObject.day = value["Day"].asString();
		if(!value["Count"].isNull())
			trendsObject.count = std::stoi(value["Count"].asString());
		if(!value["Status"].isNull())
			trendsObject.status = value["Status"].asString();
		trends_.push_back(trendsObject);
	}

}

std::vector<ListExecutionPlanInstanceTrendResult::Trend> ListExecutionPlanInstanceTrendResult::getTrends()const
{
	return trends_;
}

