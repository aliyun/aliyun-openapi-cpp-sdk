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

#include <alibabacloud/idaas-doraemon/model/FetchAccessTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

FetchAccessTokenResult::FetchAccessTokenResult() :
	ServiceResult()
{}

FetchAccessTokenResult::FetchAccessTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FetchAccessTokenResult::~FetchAccessTokenResult()
{}

void FetchAccessTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Access_token"].isNull())
		data_.access_token = dataNode["Access_token"].asString();
	if(!dataNode["Token_type"].isNull())
		data_.token_type = dataNode["Token_type"].asString();
	if(!dataNode["Scope"].isNull())
		data_.scope = dataNode["Scope"].asString();
	if(!dataNode["Expires_in"].isNull())
		data_.expires_in = dataNode["Expires_in"].asString();
	if(!dataNode["Refresh_token"].isNull())
		data_.refresh_token = dataNode["Refresh_token"].asString();
	if(!dataNode["Id_token"].isNull())
		data_.id_token = dataNode["Id_token"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string FetchAccessTokenResult::getMessage()const
{
	return message_;
}

FetchAccessTokenResult::Data FetchAccessTokenResult::getData()const
{
	return data_;
}

std::string FetchAccessTokenResult::getCode()const
{
	return code_;
}

bool FetchAccessTokenResult::getSuccess()const
{
	return success_;
}

