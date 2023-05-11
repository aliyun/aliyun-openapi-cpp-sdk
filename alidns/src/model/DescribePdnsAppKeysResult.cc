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

#include <alibabacloud/alidns/model/DescribePdnsAppKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsAppKeysResult::DescribePdnsAppKeysResult() :
	ServiceResult()
{}

DescribePdnsAppKeysResult::DescribePdnsAppKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsAppKeysResult::~DescribePdnsAppKeysResult()
{}

void DescribePdnsAppKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppKeysNode = value["AppKeys"]["AppKey"];
	for (auto valueAppKeysAppKey : allAppKeysNode)
	{
		AppKey appKeysObject;
		if(!valueAppKeysAppKey["AppKeyId"].isNull())
			appKeysObject.appKeyId = valueAppKeysAppKey["AppKeyId"].asString();
		if(!valueAppKeysAppKey["CreateDate"].isNull())
			appKeysObject.createDate = valueAppKeysAppKey["CreateDate"].asString();
		if(!valueAppKeysAppKey["State"].isNull())
			appKeysObject.state = valueAppKeysAppKey["State"].asString();
		appKeys_.push_back(appKeysObject);
	}

}

std::vector<DescribePdnsAppKeysResult::AppKey> DescribePdnsAppKeysResult::getAppKeys()const
{
	return appKeys_;
}

