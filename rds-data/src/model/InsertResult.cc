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

#include <alibabacloud/rds-data/model/InsertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds_data;
using namespace AlibabaCloud::Rds_data::Model;

InsertResult::InsertResult() :
	ServiceResult()
{}

InsertResult::InsertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InsertResult::~InsertResult()
{}

void InsertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NumberOfRecordsUpdated"].isNull())
		data_.numberOfRecordsUpdated = std::stol(dataNode["NumberOfRecordsUpdated"].asString());
	if(!dataNode["AutoIncrementKey"].isNull())
		data_.autoIncrementKey = std::stol(dataNode["AutoIncrementKey"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InsertResult::getMessage()const
{
	return message_;
}

InsertResult::Data InsertResult::getData()const
{
	return data_;
}

std::string InsertResult::getCode()const
{
	return code_;
}

bool InsertResult::getSuccess()const
{
	return success_;
}

