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

#include <alibabacloud/cams/model/GetFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetFlowResult::GetFlowResult() :
	ServiceResult()
{}

GetFlowResult::GetFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFlowResult::~GetFlowResult()
{}

void GetFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["FlowId"].isNull())
		data_.flowId = dataNode["FlowId"].asString();
	if(!dataNode["FlowName"].isNull())
		data_.flowName = dataNode["FlowName"].asString();
	if(!dataNode["JSONVersion"].isNull())
		data_.jSONVersion = dataNode["JSONVersion"].asString();
	if(!dataNode["DataApiVersion"].isNull())
		data_.dataApiVersion = dataNode["DataApiVersion"].asString();
	if(!dataNode["PreviewUrl"].isNull())
		data_.previewUrl = dataNode["PreviewUrl"].asString();
	if(!dataNode["PreviewUrlExpires"].isNull())
		data_.previewUrlExpires = std::stol(dataNode["PreviewUrlExpires"].asString());
		auto allCategories = dataNode["Categories"]["目录"];
		for (auto value : allCategories)
			data_.categories.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetFlowResult::getMessage()const
{
	return message_;
}

GetFlowResult::Data GetFlowResult::getData()const
{
	return data_;
}

std::string GetFlowResult::getCode()const
{
	return code_;
}

