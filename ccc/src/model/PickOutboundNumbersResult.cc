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

#include <alibabacloud/ccc/model/PickOutboundNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

PickOutboundNumbersResult::PickOutboundNumbersResult() :
	ServiceResult()
{}

PickOutboundNumbersResult::PickOutboundNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PickOutboundNumbersResult::~PickOutboundNumbersResult()
{}

void PickOutboundNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NumberPair"];
	for (auto valueDataNumberPair : allDataNode)
	{
		NumberPair dataObject;
		auto calleeNode = value["Callee"];
		if(!calleeNode["Number"].isNull())
			dataObject.callee.number = calleeNode["Number"].asString();
		if(!calleeNode["City"].isNull())
			dataObject.callee.city = calleeNode["City"].asString();
		if(!calleeNode["Province"].isNull())
			dataObject.callee.province = calleeNode["Province"].asString();
		auto callerNode = value["Caller"];
		if(!callerNode["Number"].isNull())
			dataObject.caller.number = callerNode["Number"].asString();
		if(!callerNode["City"].isNull())
			dataObject.caller.city = callerNode["City"].asString();
		if(!callerNode["Province"].isNull())
			dataObject.caller.province = callerNode["Province"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PickOutboundNumbersResult::getMessage()const
{
	return message_;
}

int PickOutboundNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<PickOutboundNumbersResult::NumberPair> PickOutboundNumbersResult::getData()const
{
	return data_;
}

std::string PickOutboundNumbersResult::getCode()const
{
	return code_;
}

