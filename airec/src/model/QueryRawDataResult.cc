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

#include <alibabacloud/airec/model/QueryRawDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

QueryRawDataResult::QueryRawDataResult() :
	ServiceResult()
{}

QueryRawDataResult::QueryRawDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRawDataResult::~QueryRawDataResult()
{}

void QueryRawDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["result"].isNull())
		result_ = value["result"].asString();

}

std::string QueryRawDataResult::getMessage()const
{
	return message_;
}

std::string QueryRawDataResult::getRequestId()const
{
	return requestId_;
}

std::string QueryRawDataResult::getCode()const
{
	return code_;
}

std::string QueryRawDataResult::getResult()const
{
	return result_;
}

