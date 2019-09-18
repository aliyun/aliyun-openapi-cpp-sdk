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

#include <alibabacloud/ram/model/GetAccessKeyLastUsedResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

GetAccessKeyLastUsedResult::GetAccessKeyLastUsedResult() :
	ServiceResult()
{}

GetAccessKeyLastUsedResult::GetAccessKeyLastUsedResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccessKeyLastUsedResult::~GetAccessKeyLastUsedResult()
{}

void GetAccessKeyLastUsedResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accessKeyLastUsedNode = value["AccessKeyLastUsed"];
	if(!accessKeyLastUsedNode["LastUsedDate"].isNull())
		accessKeyLastUsed_.lastUsedDate = accessKeyLastUsedNode["LastUsedDate"].asString();

}

GetAccessKeyLastUsedResult::AccessKeyLastUsed GetAccessKeyLastUsedResult::getAccessKeyLastUsed()const
{
	return accessKeyLastUsed_;
}

