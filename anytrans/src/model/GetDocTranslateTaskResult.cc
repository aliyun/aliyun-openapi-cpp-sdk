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

#include <alibabacloud/anytrans/model/GetDocTranslateTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AnyTrans;
using namespace AlibabaCloud::AnyTrans::Model;

GetDocTranslateTaskResult::GetDocTranslateTaskResult() :
	ServiceResult()
{}

GetDocTranslateTaskResult::GetDocTranslateTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDocTranslateTaskResult::~GetDocTranslateTaskResult()
{}

void GetDocTranslateTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["taskId"].isNull())
		data_.taskId = dataNode["taskId"].asString();
	if(!dataNode["status"].isNull())
		data_.status = dataNode["status"].asString();
	if(!dataNode["charactersCount"].isNull())
		data_.charactersCount = std::stoi(dataNode["charactersCount"].asString());
	if(!dataNode["pageCount"].isNull())
		data_.pageCount = std::stoi(dataNode["pageCount"].asString());
	if(!dataNode["translateFileUrl"].isNull())
		data_.translateFileUrl = dataNode["translateFileUrl"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = value["httpStatusCode"].asString();

}

std::string GetDocTranslateTaskResult::getMessage()const
{
	return message_;
}

std::string GetDocTranslateTaskResult::getRequestId()const
{
	return requestId_;
}

std::string GetDocTranslateTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetDocTranslateTaskResult::Data GetDocTranslateTaskResult::getData()const
{
	return data_;
}

std::string GetDocTranslateTaskResult::getCode()const
{
	return code_;
}

bool GetDocTranslateTaskResult::getSuccess()const
{
	return success_;
}

