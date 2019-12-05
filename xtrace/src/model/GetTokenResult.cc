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

#include <alibabacloud/xtrace/model/GetTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xtrace;
using namespace AlibabaCloud::Xtrace::Model;

GetTokenResult::GetTokenResult() :
	ServiceResult()
{}

GetTokenResult::GetTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTokenResult::~GetTokenResult()
{}

void GetTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tokenNode = value["Token"];
	if(!tokenNode["Domain"].isNull())
		token_.domain = tokenNode["Domain"].asString();
	if(!tokenNode["LicenseKey"].isNull())
		token_.licenseKey = tokenNode["LicenseKey"].asString();
	if(!tokenNode["Pid"].isNull())
		token_.pid = tokenNode["Pid"].asString();
	if(!tokenNode["InternalDomain"].isNull())
		token_.internalDomain = tokenNode["InternalDomain"].asString();

}

GetTokenResult::Token GetTokenResult::getToken()const
{
	return token_;
}

