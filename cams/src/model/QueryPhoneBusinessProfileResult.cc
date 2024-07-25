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

#include <alibabacloud/cams/model/QueryPhoneBusinessProfileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

QueryPhoneBusinessProfileResult::QueryPhoneBusinessProfileResult() :
	ServiceResult()
{}

QueryPhoneBusinessProfileResult::QueryPhoneBusinessProfileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPhoneBusinessProfileResult::~QueryPhoneBusinessProfileResult()
{}

void QueryPhoneBusinessProfileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Vertical"].isNull())
		data_.vertical = dataNode["Vertical"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Email"].isNull())
		data_.email = dataNode["Email"].asString();
	if(!dataNode["Address"].isNull())
		data_.address = dataNode["Address"].asString();
	if(!dataNode["ProfilePictureUrl"].isNull())
		data_.profilePictureUrl = dataNode["ProfilePictureUrl"].asString();
	if(!dataNode["About"].isNull())
		data_.about = dataNode["About"].asString();
		auto allWebsites = dataNode["Websites"]["websites"];
		for (auto value : allWebsites)
			data_.websites.push_back(value.asString());
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryPhoneBusinessProfileResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string QueryPhoneBusinessProfileResult::getMessage()const
{
	return message_;
}

QueryPhoneBusinessProfileResult::Data QueryPhoneBusinessProfileResult::getData()const
{
	return data_;
}

std::string QueryPhoneBusinessProfileResult::getCode()const
{
	return code_;
}

bool QueryPhoneBusinessProfileResult::getSuccess()const
{
	return success_;
}

