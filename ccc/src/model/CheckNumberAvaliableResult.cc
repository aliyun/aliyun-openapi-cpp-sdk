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

#include <alibabacloud/ccc/model/CheckNumberAvaliableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CheckNumberAvaliableResult::CheckNumberAvaliableResult() :
	ServiceResult()
{}

CheckNumberAvaliableResult::CheckNumberAvaliableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckNumberAvaliableResult::~CheckNumberAvaliableResult()
{}

void CheckNumberAvaliableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto callerAvaliableNode = value["CallerAvaliable"];
	if(!callerAvaliableNode["Avaliable"].isNull())
		callerAvaliable_.avaliable = callerAvaliableNode["Avaliable"].asString() == "true";
	if(!callerAvaliableNode["Reason"].isNull())
		callerAvaliable_.reason = callerAvaliableNode["Reason"].asString();
	auto calleeAvaliableNode = value["CalleeAvaliable"];
	if(!calleeAvaliableNode["Avaliable"].isNull())
		calleeAvaliable_.avaliable = calleeAvaliableNode["Avaliable"].asString() == "true";
	if(!calleeAvaliableNode["Reason"].isNull())
		calleeAvaliable_.reason = calleeAvaliableNode["Reason"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CheckNumberAvaliableResult::getMessage()const
{
	return message_;
}

int CheckNumberAvaliableResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CheckNumberAvaliableResult::CallerAvaliable CheckNumberAvaliableResult::getCallerAvaliable()const
{
	return callerAvaliable_;
}

std::string CheckNumberAvaliableResult::getCode()const
{
	return code_;
}

bool CheckNumberAvaliableResult::getSuccess()const
{
	return success_;
}

CheckNumberAvaliableResult::CalleeAvaliable CheckNumberAvaliableResult::getCalleeAvaliable()const
{
	return calleeAvaliable_;
}

