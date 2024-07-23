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

#include <alibabacloud/mts/model/QueryCopyrightExtractJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryCopyrightExtractJobResult::QueryCopyrightExtractJobResult() :
	ServiceResult()
{}

QueryCopyrightExtractJobResult::QueryCopyrightExtractJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCopyrightExtractJobResult::~QueryCopyrightExtractJobResult()
{}

void QueryCopyrightExtractJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StatusCode"].isNull())
		statusCode_ = std::stol(value["StatusCode"].asString());

}

std::string QueryCopyrightExtractJobResult::getMessage()const
{
	return message_;
}

QueryCopyrightExtractJobResult::Data QueryCopyrightExtractJobResult::getData()const
{
	return data_;
}

long QueryCopyrightExtractJobResult::getStatusCode()const
{
	return statusCode_;
}

