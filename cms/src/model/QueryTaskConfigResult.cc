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

#include <alibabacloud/cms/model/QueryTaskConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryTaskConfigResult::QueryTaskConfigResult() :
	ServiceResult()
{}

QueryTaskConfigResult::QueryTaskConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskConfigResult::~QueryTaskConfigResult()
{}

void QueryTaskConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string QueryTaskConfigResult::getMessage()const
{
	return message_;
}

std::string QueryTaskConfigResult::getData()const
{
	return data_;
}

std::string QueryTaskConfigResult::getCode()const
{
	return code_;
}

std::string QueryTaskConfigResult::getSuccess()const
{
	return success_;
}

