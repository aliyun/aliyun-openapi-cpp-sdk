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

#include <alibabacloud/airec/model/ListLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListLogsResult::ListLogsResult() :
	ServiceResult()
{}

ListLogsResult::ListLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogsResult::~ListLogsResult()
{}

void ListLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto headersNode = value["headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());
	auto allresult = value["result"]["Result"];
	for (const auto &item : allresult)
		result_.push_back(item.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::string ListLogsResult::getRequestId()const
{
	return requestId_;
}

std::string ListLogsResult::getMessage()const
{
	return message_;
}

ListLogsResult::Headers ListLogsResult::getHeaders()const
{
	return headers_;
}

std::string ListLogsResult::getCode()const
{
	return code_;
}

std::vector<std::string> ListLogsResult::getResult()const
{
	return result_;
}

