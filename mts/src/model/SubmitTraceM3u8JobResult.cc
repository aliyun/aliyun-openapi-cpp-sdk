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

#include <alibabacloud/mts/model/SubmitTraceM3u8JobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitTraceM3u8JobResult::SubmitTraceM3u8JobResult() :
	ServiceResult()
{}

SubmitTraceM3u8JobResult::SubmitTraceM3u8JobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitTraceM3u8JobResult::~SubmitTraceM3u8JobResult()
{}

void SubmitTraceM3u8JobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string SubmitTraceM3u8JobResult::getMessage()const
{
	return message_;
}

SubmitTraceM3u8JobResult::Data SubmitTraceM3u8JobResult::getData()const
{
	return data_;
}

