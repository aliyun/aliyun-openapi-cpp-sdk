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

#include <alibabacloud/scsp/model/GetAuthInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetAuthInfoResult::GetAuthInfoResult() :
	ServiceResult()
{}

GetAuthInfoResult::GetAuthInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAuthInfoResult::~GetAuthInfoResult()
{}

void GetAuthInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["Time"].isNull())
		data_.time = std::stol(dataNode["Time"].asString());
	if(!dataNode["AppKey"].isNull())
		data_.appKey = dataNode["AppKey"].asString();
	if(!dataNode["App"].isNull())
		data_.app = dataNode["App"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!dataNode["SessionId"].isNull())
		data_.sessionId = dataNode["SessionId"].asString();
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = dataNode["TenantId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAuthInfoResult::getMessage()const
{
	return message_;
}

GetAuthInfoResult::Data GetAuthInfoResult::getData()const
{
	return data_;
}

std::string GetAuthInfoResult::getCode()const
{
	return code_;
}

bool GetAuthInfoResult::getSuccess()const
{
	return success_;
}

