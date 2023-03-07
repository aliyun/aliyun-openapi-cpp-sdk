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

#include <alibabacloud/bssopenapi/model/QueryResellerUserAlarmThresholdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryResellerUserAlarmThresholdResult::QueryResellerUserAlarmThresholdResult() :
	ServiceResult()
{}

QueryResellerUserAlarmThresholdResult::QueryResellerUserAlarmThresholdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryResellerUserAlarmThresholdResult::~QueryResellerUserAlarmThresholdResult()
{}

void QueryResellerUserAlarmThresholdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ThresholdType"].isNull())
			dataObject.thresholdType = std::stoi(valueDataDataItem["ThresholdType"].asString());
		if(!valueDataDataItem["ThresholdAmount"].isNull())
			dataObject.thresholdAmount = valueDataDataItem["ThresholdAmount"].asString();
		if(!valueDataDataItem["Numerator"].isNull())
			dataObject.numerator = std::stoi(valueDataDataItem["Numerator"].asString());
		if(!valueDataDataItem["Denominator"].isNull())
			dataObject.denominator = std::stoi(valueDataDataItem["Denominator"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryResellerUserAlarmThresholdResult::getMessage()const
{
	return message_;
}

std::vector<QueryResellerUserAlarmThresholdResult::DataItem> QueryResellerUserAlarmThresholdResult::getData()const
{
	return data_;
}

int QueryResellerUserAlarmThresholdResult::getCount()const
{
	return count_;
}

std::string QueryResellerUserAlarmThresholdResult::getCode()const
{
	return code_;
}

bool QueryResellerUserAlarmThresholdResult::getSuccess()const
{
	return success_;
}

