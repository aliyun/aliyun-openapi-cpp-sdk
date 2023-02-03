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

#include <alibabacloud/mse/model/GetAppMessageQueueRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetAppMessageQueueRouteResult::GetAppMessageQueueRouteResult() :
	ServiceResult()
{}

GetAppMessageQueueRouteResult::GetAppMessageQueueRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppMessageQueueRouteResult::~GetAppMessageQueueRouteResult()
{}

void GetAppMessageQueueRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["FilterSide"].isNull())
		data_.filterSide = dataNode["FilterSide"].asString();
		auto allTags = dataNode["Tags"]["tag"];
		for (auto value : allTags)
			data_.tags.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAppMessageQueueRouteResult::getMessage()const
{
	return message_;
}

int GetAppMessageQueueRouteResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetAppMessageQueueRouteResult::Data GetAppMessageQueueRouteResult::getData()const
{
	return data_;
}

int GetAppMessageQueueRouteResult::getCode()const
{
	return code_;
}

bool GetAppMessageQueueRouteResult::getSuccess()const
{
	return success_;
}

