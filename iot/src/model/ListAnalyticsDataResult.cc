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

#include <alibabacloud/iot/model/ListAnalyticsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListAnalyticsDataResult::ListAnalyticsDataResult() :
	ServiceResult()
{}

ListAnalyticsDataResult::ListAnalyticsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAnalyticsDataResult::~ListAnalyticsDataResult()
{}

void ListAnalyticsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HasNext"].isNull())
		data_.hasNext = dataNode["HasNext"].asString() == "true";
	if(!dataNode["ResultJson"].isNull())
		data_.resultJson = dataNode["ResultJson"].asString();
	if(!dataNode["Count"].isNull())
		data_.count = std::stol(dataNode["Count"].asString());
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListAnalyticsDataResult::Data ListAnalyticsDataResult::getData()const
{
	return data_;
}

std::string ListAnalyticsDataResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListAnalyticsDataResult::getCode()const
{
	return code_;
}

bool ListAnalyticsDataResult::getSuccess()const
{
	return success_;
}

