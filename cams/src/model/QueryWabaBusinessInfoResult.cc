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

#include <alibabacloud/cams/model/QueryWabaBusinessInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

QueryWabaBusinessInfoResult::QueryWabaBusinessInfoResult() :
	ServiceResult()
{}

QueryWabaBusinessInfoResult::QueryWabaBusinessInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryWabaBusinessInfoResult::~QueryWabaBusinessInfoResult()
{}

void QueryWabaBusinessInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Vertical"].isNull())
		data_.vertical = dataNode["Vertical"].asString();
	if(!dataNode["VerificationStatus"].isNull())
		data_.verificationStatus = dataNode["VerificationStatus"].asString();
	if(!dataNode["BusinessName"].isNull())
		data_.businessName = dataNode["BusinessName"].asString();
	if(!dataNode["BusinessId"].isNull())
		data_.businessId = dataNode["BusinessId"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryWabaBusinessInfoResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string QueryWabaBusinessInfoResult::getMessage()const
{
	return message_;
}

QueryWabaBusinessInfoResult::Data QueryWabaBusinessInfoResult::getData()const
{
	return data_;
}

std::string QueryWabaBusinessInfoResult::getCode()const
{
	return code_;
}

bool QueryWabaBusinessInfoResult::getSuccess()const
{
	return success_;
}

