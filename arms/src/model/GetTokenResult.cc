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

#include <alibabacloud/arms/model/GetTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Domain"].isNull())
		data_.domain = dataNode["Domain"].asString();
	if(!dataNode["LicenseKey"].isNull())
		data_.licenseKey = dataNode["LicenseKey"].asString();
	if(!dataNode["Pid"].isNull())
		data_.pid = dataNode["Pid"].asString();
	if(!dataNode["InternalDomain"].isNull())
		data_.internalDomain = dataNode["InternalDomain"].asString();

}

GetTokenResult::Data GetTokenResult::getData()const
{
	return data_;
}

