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

#include <alibabacloud/sae/model/QueryResourceStaticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

QueryResourceStaticsResult::QueryResourceStaticsResult() :
	ServiceResult()
{}

QueryResourceStaticsResult::QueryResourceStaticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryResourceStaticsResult::~QueryResourceStaticsResult()
{}

void QueryResourceStaticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Workload"].isNull())
		data_.workload = dataNode["Workload"].asString();
	auto summaryNode = dataNode["Summary"];
	if(!summaryNode["Cpu"].isNull())
		data_.summary.cpu = std::stof(summaryNode["Cpu"].asString());
	if(!summaryNode["Memory"].isNull())
		data_.summary.memory = std::stof(summaryNode["Memory"].asString());
	auto realTimeResNode = dataNode["RealTimeRes"];
	if(!realTimeResNode["Cpu"].isNull())
		data_.realTimeRes.cpu = std::stof(realTimeResNode["Cpu"].asString());
	if(!realTimeResNode["Memory"].isNull())
		data_.realTimeRes.memory = std::stof(realTimeResNode["Memory"].asString());
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

std::string QueryResourceStaticsResult::getMessage()const
{
	return message_;
}

std::string QueryResourceStaticsResult::getTraceId()const
{
	return traceId_;
}

QueryResourceStaticsResult::Data QueryResourceStaticsResult::getData()const
{
	return data_;
}

std::string QueryResourceStaticsResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryResourceStaticsResult::getCode()const
{
	return code_;
}

bool QueryResourceStaticsResult::getSuccess()const
{
	return success_;
}

