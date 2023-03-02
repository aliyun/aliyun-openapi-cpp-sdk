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

#include <alibabacloud/lto/model/DescribeTotalStatInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

DescribeTotalStatInfoResult::DescribeTotalStatInfoResult() :
	ServiceResult()
{}

DescribeTotalStatInfoResult::DescribeTotalStatInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTotalStatInfoResult::~DescribeTotalStatInfoResult()
{}

void DescribeTotalStatInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AuthorizedCount"].isNull())
		data_.authorizedCount = std::stol(dataNode["AuthorizedCount"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!dataNode["UsedCount"].isNull())
		data_.usedCount = std::stol(dataNode["UsedCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeTotalStatInfoResult::getMessage()const
{
	return message_;
}

int DescribeTotalStatInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeTotalStatInfoResult::Data DescribeTotalStatInfoResult::getData()const
{
	return data_;
}

std::string DescribeTotalStatInfoResult::getCode()const
{
	return code_;
}

bool DescribeTotalStatInfoResult::getSuccess()const
{
	return success_;
}

