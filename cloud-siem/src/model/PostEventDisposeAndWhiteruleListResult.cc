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

#include <alibabacloud/cloud-siem/model/PostEventDisposeAndWhiteruleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

PostEventDisposeAndWhiteruleListResult::PostEventDisposeAndWhiteruleListResult() :
	ServiceResult()
{}

PostEventDisposeAndWhiteruleListResult::PostEventDisposeAndWhiteruleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PostEventDisposeAndWhiteruleListResult::~PostEventDisposeAndWhiteruleListResult()
{}

void PostEventDisposeAndWhiteruleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PostEventDisposeAndWhiteruleListResult::getMessage()const
{
	return message_;
}

std::string PostEventDisposeAndWhiteruleListResult::getData()const
{
	return data_;
}

int PostEventDisposeAndWhiteruleListResult::getCode()const
{
	return code_;
}

bool PostEventDisposeAndWhiteruleListResult::getSuccess()const
{
	return success_;
}

