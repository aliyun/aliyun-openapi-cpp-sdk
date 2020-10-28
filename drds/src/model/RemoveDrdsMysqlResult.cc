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

#include <alibabacloud/drds/model/RemoveDrdsMysqlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

RemoveDrdsMysqlResult::RemoveDrdsMysqlResult() :
	ServiceResult()
{}

RemoveDrdsMysqlResult::RemoveDrdsMysqlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemoveDrdsMysqlResult::~RemoveDrdsMysqlResult()
{}

void RemoveDrdsMysqlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Result"].isNull())
		data_.result = dataNode["Result"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

RemoveDrdsMysqlResult::Data RemoveDrdsMysqlResult::getData()const
{
	return data_;
}

bool RemoveDrdsMysqlResult::getSuccess()const
{
	return success_;
}

