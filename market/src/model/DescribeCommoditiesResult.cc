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

#include <alibabacloud/market/model/DescribeCommoditiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeCommoditiesResult::DescribeCommoditiesResult() :
	ServiceResult()
{}

DescribeCommoditiesResult::DescribeCommoditiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommoditiesResult::~DescribeCommoditiesResult()
{}

void DescribeCommoditiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allCommodities = value["Commodities"]["Commodity"];
	for (auto value : allCommodities)
	{
		Data::Commodity commodityObject;
		if(!value["CommodityId"].isNull())
			commodityObject.commodityId = value["CommodityId"].asString();
		if(!value["Properties"].isNull())
			commodityObject.properties = value["Properties"].asString();
		if(!value["ApplicationId"].isNull())
			commodityObject.applicationId = value["ApplicationId"].asString();
		data_.commodities.push_back(commodityObject);
	}
	auto pageableNode = dataNode["Pageable"];
	if(!pageableNode["PageNumber"].isNull())
		data_.pageable.pageNumber = std::stoi(pageableNode["PageNumber"].asString());
	if(!pageableNode["PageSize"].isNull())
		data_.pageable.pageSize = std::stoi(pageableNode["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeCommoditiesResult::Data DescribeCommoditiesResult::getData()const
{
	return data_;
}

bool DescribeCommoditiesResult::getSuccess()const
{
	return success_;
}

