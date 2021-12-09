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

#include <alibabacloud/sae/model/DeleteGreyTagRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DeleteGreyTagRouteResult::DeleteGreyTagRouteResult() :
	ServiceResult()
{}

DeleteGreyTagRouteResult::DeleteGreyTagRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteGreyTagRouteResult::~DeleteGreyTagRouteResult()
{}

void DeleteGreyTagRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GreyTagRouteId"].isNull())
		data_.greyTagRouteId = std::stol(dataNode["GreyTagRouteId"].asString());
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

std::string DeleteGreyTagRouteResult::getMessage()const
{
	return message_;
}

std::string DeleteGreyTagRouteResult::getTraceId()const
{
	return traceId_;
}

DeleteGreyTagRouteResult::Data DeleteGreyTagRouteResult::getData()const
{
	return data_;
}

std::string DeleteGreyTagRouteResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteGreyTagRouteResult::getCode()const
{
	return code_;
}

bool DeleteGreyTagRouteResult::getSuccess()const
{
	return success_;
}

