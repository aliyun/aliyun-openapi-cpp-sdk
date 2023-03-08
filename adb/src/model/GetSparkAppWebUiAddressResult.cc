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

#include <alibabacloud/adb/model/GetSparkAppWebUiAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetSparkAppWebUiAddressResult::GetSparkAppWebUiAddressResult() :
	ServiceResult()
{}

GetSparkAppWebUiAddressResult::GetSparkAppWebUiAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSparkAppWebUiAddressResult::~GetSparkAppWebUiAddressResult()
{}

void GetSparkAppWebUiAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["ExpirationTimeInMillis"].isNull())
		data_.expirationTimeInMillis = std::stol(dataNode["ExpirationTimeInMillis"].asString());
	if(!dataNode["WebUiAddress"].isNull())
		data_.webUiAddress = dataNode["WebUiAddress"].asString();
	if(!dataNode["DBClusterId"].isNull())
		data_.dBClusterId = dataNode["DBClusterId"].asString();

}

GetSparkAppWebUiAddressResult::Data GetSparkAppWebUiAddressResult::getData()const
{
	return data_;
}

