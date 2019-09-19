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

#include <alibabacloud/teslastream/model/BatchGetJobMetricInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaStream;
using namespace AlibabaCloud::TeslaStream::Model;

BatchGetJobMetricInfoResult::BatchGetJobMetricInfoResult() :
	ServiceResult()
{}

BatchGetJobMetricInfoResult::BatchGetJobMetricInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetJobMetricInfoResult::~BatchGetJobMetricInfoResult()
{}

void BatchGetJobMetricInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Job"];
	for (auto valueDataJob : allDataNode)
	{
		Job dataObject;
		if(!valueDataJob["Delay"].isNull())
			dataObject.delay = std::stoi(valueDataJob["Delay"].asString());
		if(!valueDataJob["TpsOut"].isNull())
			dataObject.tpsOut = std::stoi(valueDataJob["TpsOut"].asString());
		if(!valueDataJob["MemRequest"].isNull())
			dataObject.memRequest = std::stoi(valueDataJob["MemRequest"].asString());
		if(!valueDataJob["JobUniqKey"].isNull())
			dataObject.jobUniqKey = valueDataJob["JobUniqKey"].asString();
		if(!valueDataJob["MemUsed"].isNull())
			dataObject.memUsed = std::stof(valueDataJob["MemUsed"].asString());
		if(!valueDataJob["CpuUsed"].isNull())
			dataObject.cpuUsed = std::stof(valueDataJob["CpuUsed"].asString());
		if(!valueDataJob["CpuRequest"].isNull())
			dataObject.cpuRequest = std::stoi(valueDataJob["CpuRequest"].asString());
		if(!valueDataJob["Nickname"].isNull())
			dataObject.nickname = valueDataJob["Nickname"].asString();
		if(!valueDataJob["TpsIn"].isNull())
			dataObject.tpsIn = std::stoi(valueDataJob["TpsIn"].asString());
		if(!valueDataJob["Priority"].isNull())
			dataObject.priority = valueDataJob["Priority"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string BatchGetJobMetricInfoResult::getMessage()const
{
	return message_;
}

std::vector<BatchGetJobMetricInfoResult::Job> BatchGetJobMetricInfoResult::getData()const
{
	return data_;
}

int BatchGetJobMetricInfoResult::getCode()const
{
	return code_;
}

