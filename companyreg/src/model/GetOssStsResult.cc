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

#include <alibabacloud/companyreg/model/GetOssStsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetOssStsResult::GetOssStsResult() :
	ServiceResult()
{}

GetOssStsResult::GetOssStsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOssStsResult::~GetOssStsResult()
{}

void GetOssStsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AccessId"].isNull())
		accessId_ = value["AccessId"].asString();
	if(!value["EncodedPolicy"].isNull())
		encodedPolicy_ = value["EncodedPolicy"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["FilePath"].isNull())
		filePath_ = value["FilePath"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = std::stol(value["ExpireTime"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["OssHost"].isNull())
		ossHost_ = value["OssHost"].asString();

}

std::string GetOssStsResult::getFilePath()const
{
	return filePath_;
}

std::string GetOssStsResult::getEncodedPolicy()const
{
	return encodedPolicy_;
}

std::string GetOssStsResult::getAccessId()const
{
	return accessId_;
}

std::string GetOssStsResult::getSignature()const
{
	return signature_;
}

std::string GetOssStsResult::getOssHost()const
{
	return ossHost_;
}

std::string GetOssStsResult::getHost()const
{
	return host_;
}

long GetOssStsResult::getExpireTime()const
{
	return expireTime_;
}

