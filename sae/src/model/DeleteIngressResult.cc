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

#include <alibabacloud/sae/model/DeleteIngressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DeleteIngressResult::DeleteIngressResult() :
	ServiceResult()
{}

DeleteIngressResult::DeleteIngressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteIngressResult::~DeleteIngressResult()
{}

void DeleteIngressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IngressId"].isNull())
		data_.ingressId = std::stol(dataNode["IngressId"].asString());
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

std::string DeleteIngressResult::getMessage()const
{
	return message_;
}

std::string DeleteIngressResult::getTraceId()const
{
	return traceId_;
}

DeleteIngressResult::Data DeleteIngressResult::getData()const
{
	return data_;
}

std::string DeleteIngressResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteIngressResult::getCode()const
{
	return code_;
}

bool DeleteIngressResult::getSuccess()const
{
	return success_;
}

