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

#include <alibabacloud/market/model/DescribeCommodityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeCommodityResult::DescribeCommodityResult() :
	ServiceResult()
{}

DescribeCommodityResult::DescribeCommodityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommodityResult::~DescribeCommodityResult()
{}

void DescribeCommodityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto commodityNode = value["Commodity"];
	if(!commodityNode["CommodityId"].isNull())
		commodity_.commodityId = commodityNode["CommodityId"].asString();
	if(!commodityNode["Properties"].isNull())
		commodity_.properties = commodityNode["Properties"].asString();
	if(!commodityNode["CommoditySpecs"].isNull())
		commodity_.commoditySpecs = commodityNode["CommoditySpecs"].asString();
	if(!commodityNode["ApplicationId"].isNull())
		commodity_.applicationId = commodityNode["ApplicationId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeCommodityResult::Commodity DescribeCommodityResult::getCommodity()const
{
	return commodity_;
}

bool DescribeCommodityResult::getSuccess()const
{
	return success_;
}

