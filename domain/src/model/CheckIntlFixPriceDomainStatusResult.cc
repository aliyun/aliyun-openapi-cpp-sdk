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

#include <alibabacloud/domain/model/CheckIntlFixPriceDomainStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

CheckIntlFixPriceDomainStatusResult::CheckIntlFixPriceDomainStatusResult() :
	ServiceResult()
{}

CheckIntlFixPriceDomainStatusResult::CheckIntlFixPriceDomainStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckIntlFixPriceDomainStatusResult::~CheckIntlFixPriceDomainStatusResult()
{}

void CheckIntlFixPriceDomainStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["Domain"].isNull())
		module_.domain = moduleNode["Domain"].asString();
	if(!moduleNode["Price"].isNull())
		module_.price = std::stol(moduleNode["Price"].asString());
	if(!moduleNode["Currency"].isNull())
		module_.currency = moduleNode["Currency"].asString();
	if(!moduleNode["RegDate"].isNull())
		module_.regDate = std::stol(moduleNode["RegDate"].asString());
	if(!moduleNode["DeadDate"].isNull())
		module_.deadDate = std::stol(moduleNode["DeadDate"].asString());
	if(!moduleNode["EndTime"].isNull())
		module_.endTime = std::stol(moduleNode["EndTime"].asString());
	if(!moduleNode["Premium"].isNull())
		module_.premium = moduleNode["Premium"].asString() == "true";

}

CheckIntlFixPriceDomainStatusResult::Module CheckIntlFixPriceDomainStatusResult::getModule()const
{
	return module_;
}

