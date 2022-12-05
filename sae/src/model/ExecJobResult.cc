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

#include <alibabacloud/sae/model/ExecJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ExecJobResult::ExecJobResult() :
	ServiceResult()
{}

ExecJobResult::ExecJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExecJobResult::~ExecJobResult()
{}

void ExecJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Data"].isNull())
		data_.data = dataNode["Data"].asString();
	if(!dataNode["Msg"].isNull())
		data_.msg = dataNode["Msg"].asString();
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString();
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ExecJobResult::getMessage()const
{
	return message_;
}

std::string ExecJobResult::getTraceId()const
{
	return traceId_;
}

ExecJobResult::Data ExecJobResult::getData()const
{
	return data_;
}

std::string ExecJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string ExecJobResult::getCode()const
{
	return code_;
}

bool ExecJobResult::getSuccess()const
{
	return success_;
}

