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

#include <alibabacloud/adb/model/CreateOssSubDirectoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

CreateOssSubDirectoryResult::CreateOssSubDirectoryResult() :
	ServiceResult()
{}

CreateOssSubDirectoryResult::CreateOssSubDirectoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOssSubDirectoryResult::~CreateOssSubDirectoryResult()
{}

void CreateOssSubDirectoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClientCRC"].isNull())
		data_.clientCRC = std::stol(dataNode["ClientCRC"].asString());
	if(!dataNode["ETag"].isNull())
		data_.eTag = dataNode["ETag"].asString();
	if(!dataNode["RequestId"].isNull())
		data_.requestId = dataNode["RequestId"].asString();
	if(!dataNode["ServerCRC"].isNull())
		data_.serverCRC = std::stol(dataNode["ServerCRC"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateOssSubDirectoryResult::getMessage()const
{
	return message_;
}

long CreateOssSubDirectoryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateOssSubDirectoryResult::Data CreateOssSubDirectoryResult::getData()const
{
	return data_;
}

bool CreateOssSubDirectoryResult::getSuccess()const
{
	return success_;
}

