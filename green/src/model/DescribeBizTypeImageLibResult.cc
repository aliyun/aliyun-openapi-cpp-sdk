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

#include <alibabacloud/green/model/DescribeBizTypeImageLibResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeBizTypeImageLibResult::DescribeBizTypeImageLibResult() :
	ServiceResult()
{}

DescribeBizTypeImageLibResult::DescribeBizTypeImageLibResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBizTypeImageLibResult::~DescribeBizTypeImageLibResult()
{}

void DescribeBizTypeImageLibResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto blackNode = value["Black"];
	auto allSelectedNode = blackNode["Selected"]["item"];
	for (auto blackNodeSelecteditem : allSelectedNode)
	{
		Black::Item itemObject;
		if(!blackNodeSelecteditem["Name"].isNull())
			itemObject.name = blackNodeSelecteditem["Name"].asString();
		if(!blackNodeSelecteditem["Code"].isNull())
			itemObject.code = blackNodeSelecteditem["Code"].asString();
		black_.selected.push_back(itemObject);
	}
	auto allAllNode = blackNode["All"]["item"];
	for (auto blackNodeAllitem : allAllNode)
	{
		Black::Item itemObject;
		if(!blackNodeAllitem["Name"].isNull())
			itemObject.name = blackNodeAllitem["Name"].asString();
		if(!blackNodeAllitem["Code"].isNull())
			itemObject.code = blackNodeAllitem["Code"].asString();
		black_.all.push_back(itemObject);
	}
	auto reviewNode = value["Review"];
	auto allSelected1Node = reviewNode["Selected"]["item"];
	for (auto reviewNodeSelecteditem : allSelected1Node)
	{
		Review::Item3 item3Object;
		if(!reviewNodeSelecteditem["Name"].isNull())
			item3Object.name = reviewNodeSelecteditem["Name"].asString();
		if(!reviewNodeSelecteditem["Code"].isNull())
			item3Object.code = reviewNodeSelecteditem["Code"].asString();
		review_.selected1.push_back(item3Object);
	}
	auto allAll2Node = reviewNode["All"]["item"];
	for (auto reviewNodeAllitem : allAll2Node)
	{
		Review::Item itemObject;
		if(!reviewNodeAllitem["Name"].isNull())
			itemObject.name = reviewNodeAllitem["Name"].asString();
		if(!reviewNodeAllitem["Code"].isNull())
			itemObject.code = reviewNodeAllitem["Code"].asString();
		review_.all2.push_back(itemObject);
	}
	auto whiteNode = value["White"];
	auto allSelected4Node = whiteNode["Selected"]["item"];
	for (auto whiteNodeSelecteditem : allSelected4Node)
	{
		White::Item6 item6Object;
		if(!whiteNodeSelecteditem["Name"].isNull())
			item6Object.name = whiteNodeSelecteditem["Name"].asString();
		if(!whiteNodeSelecteditem["Code"].isNull())
			item6Object.code = whiteNodeSelecteditem["Code"].asString();
		white_.selected4.push_back(item6Object);
	}
	auto allAll5Node = whiteNode["All"]["item"];
	for (auto whiteNodeAllitem : allAll5Node)
	{
		White::Item itemObject;
		if(!whiteNodeAllitem["Name"].isNull())
			itemObject.name = whiteNodeAllitem["Name"].asString();
		if(!whiteNodeAllitem["Code"].isNull())
			itemObject.code = whiteNodeAllitem["Code"].asString();
		white_.all5.push_back(itemObject);
	}

}

DescribeBizTypeImageLibResult::White DescribeBizTypeImageLibResult::getWhite()const
{
	return white_;
}

DescribeBizTypeImageLibResult::Black DescribeBizTypeImageLibResult::getBlack()const
{
	return black_;
}

DescribeBizTypeImageLibResult::Review DescribeBizTypeImageLibResult::getReview()const
{
	return review_;
}

