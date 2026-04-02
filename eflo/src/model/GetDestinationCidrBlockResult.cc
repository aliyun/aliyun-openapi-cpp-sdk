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

#include <alibabacloud/eflo/model/GetDestinationCidrBlockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetDestinationCidrBlockResult::GetDestinationCidrBlockResult() :
	ServiceResult()
{}

GetDestinationCidrBlockResult::GetDestinationCidrBlockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDestinationCidrBlockResult::~GetDestinationCidrBlockResult()
{}

void GetDestinationCidrBlockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
		auto allDestinationCidrBlock = contentNode["DestinationCidrBlock"]["DestinationCidrBlock"];
		for (auto value : allDestinationCidrBlock)
			content_.destinationCidrBlock.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string GetDestinationCidrBlockResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string GetDestinationCidrBlockResult::getMessage()const
{
	return message_;
}

GetDestinationCidrBlockResult::Content GetDestinationCidrBlockResult::getContent()const
{
	return content_;
}

int GetDestinationCidrBlockResult::getCode()const
{
	return code_;
}

