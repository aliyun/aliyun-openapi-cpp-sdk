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

#include <alibabacloud/ivpd/model/GetRenderResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

GetRenderResultResult::GetRenderResultResult() :
	ServiceResult()
{}

GetRenderResultResult::GetRenderResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRenderResultResult::~GetRenderResultResult()
{}

void GetRenderResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Completed"].isNull())
		data_.completed = dataNode["Completed"].asString() == "true";
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stof(dataNode["Progress"].asString());
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto resultDataNode = dataNode["ResultData"];
	if(!resultDataNode["ImageUrl"].isNull())
		data_.resultData.imageUrl = resultDataNode["ImageUrl"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetRenderResultResult::getMessage()const
{
	return message_;
}

GetRenderResultResult::Data GetRenderResultResult::getData()const
{
	return data_;
}

std::string GetRenderResultResult::getCode()const
{
	return code_;
}

