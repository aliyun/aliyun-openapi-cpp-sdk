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

#include <alibabacloud/elasticsearch/model/GetEmonMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

GetEmonMonitorDataResult::GetEmonMonitorDataResult() :
	ServiceResult()
{}

GetEmonMonitorDataResult::GetEmonMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEmonMonitorDataResult::~GetEmonMonitorDataResult()
{}

void GetEmonMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["resultItem"];
	for (auto valueResultresultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultresultItem["integrity"].isNull())
			resultObject.integrity = std::stof(valueResultresultItem["integrity"].asString());
		if(!valueResultresultItem["summary"].isNull())
			resultObject.summary = std::stof(valueResultresultItem["summary"].asString());
		if(!valueResultresultItem["messageWatermark"].isNull())
			resultObject.messageWatermark = std::stol(valueResultresultItem["messageWatermark"].asString());
		if(!valueResultresultItem["dps"].isNull())
			resultObject.dps = valueResultresultItem["dps"].asString();
		if(!valueResultresultItem["tags"].isNull())
			resultObject.tags = valueResultresultItem["tags"].asString();
		if(!valueResultresultItem["metric"].isNull())
			resultObject.metric = valueResultresultItem["metric"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetEmonMonitorDataResult::getMessage()const
{
	return message_;
}

std::string GetEmonMonitorDataResult::getCode()const
{
	return code_;
}

bool GetEmonMonitorDataResult::getSuccess()const
{
	return success_;
}

std::vector<GetEmonMonitorDataResult::ResultItem> GetEmonMonitorDataResult::getResult()const
{
	return result_;
}

