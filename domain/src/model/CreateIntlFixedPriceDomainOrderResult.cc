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

#include <alibabacloud/domain/model/CreateIntlFixedPriceDomainOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

CreateIntlFixedPriceDomainOrderResult::CreateIntlFixedPriceDomainOrderResult() :
	ServiceResult()
{}

CreateIntlFixedPriceDomainOrderResult::CreateIntlFixedPriceDomainOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIntlFixedPriceDomainOrderResult::~CreateIntlFixedPriceDomainOrderResult()
{}

void CreateIntlFixedPriceDomainOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["Domain"].isNull())
		module_.domain = moduleNode["Domain"].asString();
	if(!moduleNode["OrderNo"].isNull())
		module_.orderNo = moduleNode["OrderNo"].asString();
	if(!moduleNode["PayPrice"].isNull())
		module_.payPrice = std::stol(moduleNode["PayPrice"].asString());
	if(!moduleNode["PayUrl"].isNull())
		module_.payUrl = moduleNode["PayUrl"].asString();

}

CreateIntlFixedPriceDomainOrderResult::Module CreateIntlFixedPriceDomainOrderResult::getModule()const
{
	return module_;
}

