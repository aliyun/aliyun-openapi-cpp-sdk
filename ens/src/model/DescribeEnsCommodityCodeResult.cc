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

#include <alibabacloud/ens/model/DescribeEnsCommodityCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsCommodityCodeResult::DescribeEnsCommodityCodeResult() :
	ServiceResult()
{}

DescribeEnsCommodityCodeResult::DescribeEnsCommodityCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsCommodityCodeResult::~DescribeEnsCommodityCodeResult()
{}

void DescribeEnsCommodityCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommodityCodeInfoNode = value["CommodityCodeInfo"]["CommodityCodeInfoItem"];
	for (auto valueCommodityCodeInfoCommodityCodeInfoItem : allCommodityCodeInfoNode)
	{
		CommodityCodeInfoItem commodityCodeInfoObject;
		if(!valueCommodityCodeInfoCommodityCodeInfoItem["CommodityCode"].isNull())
			commodityCodeInfoObject.commodityCode = valueCommodityCodeInfoCommodityCodeInfoItem["CommodityCode"].asString();
		if(!valueCommodityCodeInfoCommodityCodeInfoItem["CommodityName"].isNull())
			commodityCodeInfoObject.commodityName = valueCommodityCodeInfoCommodityCodeInfoItem["CommodityName"].asString();
		commodityCodeInfo_.push_back(commodityCodeInfoObject);
	}

}

std::vector<DescribeEnsCommodityCodeResult::CommodityCodeInfoItem> DescribeEnsCommodityCodeResult::getCommodityCodeInfo()const
{
	return commodityCodeInfo_;
}

