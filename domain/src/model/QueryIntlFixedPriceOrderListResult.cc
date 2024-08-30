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

#include <alibabacloud/domain/model/QueryIntlFixedPriceOrderListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryIntlFixedPriceOrderListResult::QueryIntlFixedPriceOrderListResult() :
	ServiceResult()
{}

QueryIntlFixedPriceOrderListResult::QueryIntlFixedPriceOrderListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIntlFixedPriceOrderListResult::~QueryIntlFixedPriceOrderListResult()
{}

void QueryIntlFixedPriceOrderListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["CreateTime"].isNull())
		module_.createTime = std::stol(moduleNode["CreateTime"].asString());
	if(!moduleNode["UpdateTime"].isNull())
		module_.updateTime = std::stol(moduleNode["UpdateTime"].asString());
	if(!moduleNode["UserId"].isNull())
		module_.userId = moduleNode["UserId"].asString();
	if(!moduleNode["BizId"].isNull())
		module_.bizId = moduleNode["BizId"].asString();
	if(!moduleNode["Domain"].isNull())
		module_.domain = moduleNode["Domain"].asString();
	if(!moduleNode["Price"].isNull())
		module_.price = std::stol(moduleNode["Price"].asString());
	if(!moduleNode["Status"].isNull())
		module_.status = std::stol(moduleNode["Status"].asString());
	if(!moduleNode["OrderType"].isNull())
		module_.orderType = std::stol(moduleNode["OrderType"].asString());

}

QueryIntlFixedPriceOrderListResult::Module QueryIntlFixedPriceOrderListResult::getModule()const
{
	return module_;
}

