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

#include <alibabacloud/sae/model/CreateIngressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

CreateIngressResult::CreateIngressResult() :
	ServiceResult()
{}

CreateIngressResult::CreateIngressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIngressResult::~CreateIngressResult()
{}

void CreateIngressResult::parse(const std::string &payload)
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

std::string CreateIngressResult::getMessage()const
{
	return message_;
}

std::string CreateIngressResult::getTraceId()const
{
	return traceId_;
}

CreateIngressResult::Data CreateIngressResult::getData()const
{
	return data_;
}

std::string CreateIngressResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateIngressResult::getCode()const
{
	return code_;
}

bool CreateIngressResult::getSuccess()const
{
	return success_;
}

