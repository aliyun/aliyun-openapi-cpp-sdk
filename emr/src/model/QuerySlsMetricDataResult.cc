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

#include <alibabacloud/emr/model/QuerySlsMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

QuerySlsMetricDataResult::QuerySlsMetricDataResult() :
	ServiceResult()
{}

QuerySlsMetricDataResult::QuerySlsMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySlsMetricDataResult::~QuerySlsMetricDataResult()
{}

void QuerySlsMetricDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDatapoints = value["Datapoints"]["SlsDataPoint"];
	for (auto value : allDatapoints)
	{
		SlsDataPoint datapointsObject;
		if(!value["Role"].isNull())
			datapointsObject.role = value["Role"].asString();
		if(!value["Value"].isNull())
			datapointsObject.value = value["Value"].asString();
		if(!value["Timestamp"].isNull())
			datapointsObject.timestamp = std::stol(value["Timestamp"].asString());
		datapoints_.push_back(datapointsObject);
	}

}

std::vector<QuerySlsMetricDataResult::SlsDataPoint> QuerySlsMetricDataResult::getDatapoints()const
{
	return datapoints_;
}

