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

#include <alibabacloud/industry-brain/model/GetAlgorithmHistoryResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Industry_brain;
using namespace AlibabaCloud::Industry_brain::Model;

GetAlgorithmHistoryResultResult::GetAlgorithmHistoryResultResult() :
	ServiceResult()
{}

GetAlgorithmHistoryResultResult::GetAlgorithmHistoryResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAlgorithmHistoryResultResult::~GetAlgorithmHistoryResultResult()
{}

void GetAlgorithmHistoryResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Region"];
	for (auto valueDataRegion : allDataNode)
	{
		Region dataObject;
		if(!valueDataRegion["Output"].isNull())
			dataObject.output = valueDataRegion["Output"].asString();
		if(!valueDataRegion["Input"].isNull())
			dataObject.input = valueDataRegion["Input"].asString();
		if(!valueDataRegion["InvokeTime"].isNull())
			dataObject.invokeTime = valueDataRegion["InvokeTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string GetAlgorithmHistoryResultResult::getMessage()const
{
	return message_;
}

std::string GetAlgorithmHistoryResultResult::getTraceId()const
{
	return traceId_;
}

std::vector<GetAlgorithmHistoryResultResult::Region> GetAlgorithmHistoryResultResult::getData()const
{
	return data_;
}

std::string GetAlgorithmHistoryResultResult::getCode()const
{
	return code_;
}

