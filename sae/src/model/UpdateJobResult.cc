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

#include <alibabacloud/sae/model/UpdateJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

UpdateJobResult::UpdateJobResult() :
	ServiceResult()
{}

UpdateJobResult::UpdateJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateJobResult::~UpdateJobResult()
{}

void UpdateJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ChangeOrderId"].isNull())
		data_.changeOrderId = dataNode["ChangeOrderId"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
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

std::string UpdateJobResult::getMessage()const
{
	return message_;
}

std::string UpdateJobResult::getTraceId()const
{
	return traceId_;
}

UpdateJobResult::Data UpdateJobResult::getData()const
{
	return data_;
}

std::string UpdateJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateJobResult::getCode()const
{
	return code_;
}

bool UpdateJobResult::getSuccess()const
{
	return success_;
}

