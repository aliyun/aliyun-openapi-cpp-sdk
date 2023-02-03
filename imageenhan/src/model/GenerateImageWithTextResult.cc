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

#include <alibabacloud/imageenhan/model/GenerateImageWithTextResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageenhan;
using namespace AlibabaCloud::Imageenhan::Model;

GenerateImageWithTextResult::GenerateImageWithTextResult() :
	ServiceResult()
{}

GenerateImageWithTextResult::GenerateImageWithTextResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateImageWithTextResult::~GenerateImageWithTextResult()
{}

void GenerateImageWithTextResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
		auto allImageUrls = dataNode["ImageUrls"]["imageUrls"];
		for (auto value : allImageUrls)
			data_.imageUrls.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GenerateImageWithTextResult::getMessage()const
{
	return message_;
}

GenerateImageWithTextResult::Data GenerateImageWithTextResult::getData()const
{
	return data_;
}

std::string GenerateImageWithTextResult::getCode()const
{
	return code_;
}

