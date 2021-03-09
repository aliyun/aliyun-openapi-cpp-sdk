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

#include <alibabacloud/ccc/model/PickGlobalOutboundNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

PickGlobalOutboundNumbersResult::PickGlobalOutboundNumbersResult() :
	ServiceResult()
{}

PickGlobalOutboundNumbersResult::PickGlobalOutboundNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PickGlobalOutboundNumbersResult::~PickGlobalOutboundNumbersResult()
{}

void PickGlobalOutboundNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDialNumberPairsNode = value["DialNumberPairs"]["DialNumberPair"];
	for (auto valueDialNumberPairsDialNumberPair : allDialNumberPairsNode)
	{
		DialNumberPair dialNumberPairsObject;
		auto calleeNode = value["Callee"];
		if(!calleeNode["Number"].isNull())
			dialNumberPairsObject.callee.number = calleeNode["Number"].asString();
		if(!calleeNode["Province"].isNull())
			dialNumberPairsObject.callee.province = calleeNode["Province"].asString();
		if(!calleeNode["City"].isNull())
			dialNumberPairsObject.callee.city = calleeNode["City"].asString();
		auto callerNode = value["Caller"];
		if(!callerNode["Number"].isNull())
			dialNumberPairsObject.caller.number = callerNode["Number"].asString();
		if(!callerNode["Province"].isNull())
			dialNumberPairsObject.caller.province = callerNode["Province"].asString();
		if(!callerNode["City"].isNull())
			dialNumberPairsObject.caller.city = callerNode["City"].asString();
		dialNumberPairs_.push_back(dialNumberPairsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string PickGlobalOutboundNumbersResult::getMessage()const
{
	return message_;
}

int PickGlobalOutboundNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string PickGlobalOutboundNumbersResult::getCode()const
{
	return code_;
}

bool PickGlobalOutboundNumbersResult::getSuccess()const
{
	return success_;
}

std::vector<PickGlobalOutboundNumbersResult::DialNumberPair> PickGlobalOutboundNumbersResult::getDialNumberPairs()const
{
	return dialNumberPairs_;
}

