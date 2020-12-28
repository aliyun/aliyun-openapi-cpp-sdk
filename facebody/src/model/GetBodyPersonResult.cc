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

#include <alibabacloud/facebody/model/GetBodyPersonResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

GetBodyPersonResult::GetBodyPersonResult() :
	ServiceResult()
{}

GetBodyPersonResult::GetBodyPersonResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBodyPersonResult::~GetBodyPersonResult()
{}

void GetBodyPersonResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TraceCount"].isNull())
		data_.traceCount = std::stol(dataNode["TraceCount"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = std::stol(dataNode["InstanceId"].asString());
	if(!dataNode["DbId"].isNull())
		data_.dbId = std::stol(dataNode["DbId"].asString());
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	auto allTraceListNode = dataNode["TraceList"]["Trace"];
	for (auto dataNodeTraceListTrace : allTraceListNode)
	{
		Data::Trace traceObject;
		if(!dataNodeTraceListTrace["ExtraData"].isNull())
			traceObject.extraData = dataNodeTraceListTrace["ExtraData"].asString();
		if(!dataNodeTraceListTrace["Id"].isNull())
			traceObject.id = std::stol(dataNodeTraceListTrace["Id"].asString());
		data_.traceList.push_back(traceObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GetBodyPersonResult::getMessage()const
{
	return message_;
}

GetBodyPersonResult::Data GetBodyPersonResult::getData()const
{
	return data_;
}

std::string GetBodyPersonResult::getCode()const
{
	return code_;
}

