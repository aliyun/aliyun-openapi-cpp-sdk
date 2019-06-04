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

#include <alibabacloud/live/model/DescribeCastersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCastersResult::DescribeCastersResult() :
	ServiceResult()
{}

DescribeCastersResult::DescribeCastersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCastersResult::~DescribeCastersResult()
{}

void DescribeCastersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCasterList = value["CasterList"]["Caster"];
	for (auto value : allCasterList)
	{
		Caster casterListObject;
		if(!value["Status"].isNull())
			casterListObject.status = std::stoi(value["Status"].asString());
		if(!value["NormType"].isNull())
			casterListObject.normType = std::stoi(value["NormType"].asString());
		if(!value["CasterId"].isNull())
			casterListObject.casterId = value["CasterId"].asString();
		if(!value["CasterName"].isNull())
			casterListObject.casterName = value["CasterName"].asString();
		if(!value["CreateTime"].isNull())
			casterListObject.createTime = value["CreateTime"].asString();
		if(!value["StartTime"].isNull())
			casterListObject.startTime = value["StartTime"].asString();
		if(!value["PurchaseTime"].isNull())
			casterListObject.purchaseTime = value["PurchaseTime"].asString();
		if(!value["ExpireTime"].isNull())
			casterListObject.expireTime = value["ExpireTime"].asString();
		if(!value["ChargeType"].isNull())
			casterListObject.chargeType = value["ChargeType"].asString();
		if(!value["CasterTemplate"].isNull())
			casterListObject.casterTemplate = value["CasterTemplate"].asString();
		if(!value["ChannelEnable"].isNull())
			casterListObject.channelEnable = std::stoi(value["ChannelEnable"].asString());
		casterList_.push_back(casterListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeCastersResult::getTotal()const
{
	return total_;
}

std::vector<DescribeCastersResult::Caster> DescribeCastersResult::getCasterList()const
{
	return casterList_;
}

