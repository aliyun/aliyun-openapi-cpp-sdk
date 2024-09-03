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

#include <alibabacloud/cams/model/QueryChatappBindWabaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

QueryChatappBindWabaResult::QueryChatappBindWabaResult() :
	ServiceResult()
{}

QueryChatappBindWabaResult::QueryChatappBindWabaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryChatappBindWabaResult::~QueryChatappBindWabaResult()
{}

void QueryChatappBindWabaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AuthInternationalRateEligibility"].isNull())
		data_.authInternationalRateEligibility = dataNode["AuthInternationalRateEligibility"].asString();
	if(!dataNode["BusinessName"].isNull())
		data_.businessName = dataNode["BusinessName"].asString();
	if(!dataNode["Currency"].isNull())
		data_.currency = dataNode["Currency"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["AccountReviewStatus"].isNull())
		data_.accountReviewStatus = dataNode["AccountReviewStatus"].asString();
	if(!dataNode["MessageTemplateNamespace"].isNull())
		data_.messageTemplateNamespace = dataNode["MessageTemplateNamespace"].asString();
	if(!dataNode["BusinessId"].isNull())
		data_.businessId = dataNode["BusinessId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["PrimaryBusinessLocation"].isNull())
		data_.primaryBusinessLocation = dataNode["PrimaryBusinessLocation"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryChatappBindWabaResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string QueryChatappBindWabaResult::getMessage()const
{
	return message_;
}

QueryChatappBindWabaResult::Data QueryChatappBindWabaResult::getData()const
{
	return data_;
}

std::string QueryChatappBindWabaResult::getCode()const
{
	return code_;
}

bool QueryChatappBindWabaResult::getSuccess()const
{
	return success_;
}

