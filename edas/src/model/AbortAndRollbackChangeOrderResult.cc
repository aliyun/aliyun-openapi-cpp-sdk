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

#include <alibabacloud/edas/model/AbortAndRollbackChangeOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

AbortAndRollbackChangeOrderResult::AbortAndRollbackChangeOrderResult() :
	ServiceResult()
{}

AbortAndRollbackChangeOrderResult::AbortAndRollbackChangeOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AbortAndRollbackChangeOrderResult::~AbortAndRollbackChangeOrderResult()
{}

void AbortAndRollbackChangeOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ChangeOrderId"].isNull())
		data_.changeOrderId = dataNode["ChangeOrderId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string AbortAndRollbackChangeOrderResult::getMessage()const
{
	return message_;
}

std::string AbortAndRollbackChangeOrderResult::getTraceId()const
{
	return traceId_;
}

AbortAndRollbackChangeOrderResult::Data AbortAndRollbackChangeOrderResult::getData()const
{
	return data_;
}

std::string AbortAndRollbackChangeOrderResult::getErrorCode()const
{
	return errorCode_;
}

int AbortAndRollbackChangeOrderResult::getCode()const
{
	return code_;
}

