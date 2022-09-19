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

#include <alibabacloud/viapi-regen/model/DownloadFileNameListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

DownloadFileNameListResult::DownloadFileNameListResult() :
	ServiceResult()
{}

DownloadFileNameListResult::DownloadFileNameListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DownloadFileNameListResult::~DownloadFileNameListResult()
{}

void DownloadFileNameListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OssHttpUrl"].isNull())
		data_.ossHttpUrl = dataNode["OssHttpUrl"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string DownloadFileNameListResult::getMessage()const
{
	return message_;
}

DownloadFileNameListResult::Data DownloadFileNameListResult::getData()const
{
	return data_;
}

std::string DownloadFileNameListResult::getCode()const
{
	return code_;
}

