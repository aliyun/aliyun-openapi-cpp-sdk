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

#include <alibabacloud/cms/model/QueryErrorDistributionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryErrorDistributionResult::QueryErrorDistributionResult() :
	ServiceResult()
{}

QueryErrorDistributionResult::QueryErrorDistributionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryErrorDistributionResult::~QueryErrorDistributionResult()
{}

void QueryErrorDistributionResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string QueryErrorDistributionResult::getMessage()const
{
	return message_;
}

std::string QueryErrorDistributionResult::getData()const
{
	return data_;
}

std::string QueryErrorDistributionResult::getCode()const
{
	return code_;
}

std::string QueryErrorDistributionResult::getSuccess()const
{
	return success_;
}

