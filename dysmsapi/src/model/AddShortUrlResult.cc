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

#include <alibabacloud/dysmsapi/model/AddShortUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

AddShortUrlResult::AddShortUrlResult() :
	ServiceResult()
{}

AddShortUrlResult::AddShortUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddShortUrlResult::~AddShortUrlResult()
{}

void AddShortUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SourceUrl"].isNull())
		data_.sourceUrl = dataNode["SourceUrl"].asString();
	if(!dataNode["ExpireDate"].isNull())
		data_.expireDate = dataNode["ExpireDate"].asString();
	if(!dataNode["ShortUrl"].isNull())
		data_.shortUrl = dataNode["ShortUrl"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddShortUrlResult::getMessage()const
{
	return message_;
}

AddShortUrlResult::Data AddShortUrlResult::getData()const
{
	return data_;
}

std::string AddShortUrlResult::getCode()const
{
	return code_;
}

