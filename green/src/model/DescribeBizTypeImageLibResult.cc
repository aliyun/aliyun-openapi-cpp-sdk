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
	auto allSelectedNode = blackNode["Selected"]["WhiteSelectedItem"];
	for (auto blackNodeSelectedWhiteSelectedItem : allSelectedNode)
	{
		Black::WhiteSelectedItem whiteSelectedItemObject;
		if(!blackNodeSelectedWhiteSelectedItem["Name"].isNull())
			whiteSelectedItemObject.name = blackNodeSelectedWhiteSelectedItem["Name"].asString();
		if(!blackNodeSelectedWhiteSelectedItem["Code"].isNull())
			whiteSelectedItemObject.code = blackNodeSelectedWhiteSelectedItem["Code"].asString();
		black_.selected.push_back(whiteSelectedItemObject);
	}
	auto allAllNode = blackNode["All"]["WhiteAllItem"];
	for (auto blackNodeAllWhiteAllItem : allAllNode)
	{
		Black::WhiteAllItem whiteAllItemObject;
		if(!blackNodeAllWhiteAllItem["Name"].isNull())
			whiteAllItemObject.name = blackNodeAllWhiteAllItem["Name"].asString();
		if(!blackNodeAllWhiteAllItem["Code"].isNull())
			whiteAllItemObject.code = blackNodeAllWhiteAllItem["Code"].asString();
		black_.all.push_back(whiteAllItemObject);
	}
	auto reviewNode = value["Review"];
	auto allSelected1Node = reviewNode["Selected"]["WhiteSelectedItem"];
	for (auto reviewNodeSelectedWhiteSelectedItem : allSelected1Node)
	{
		Review::WhiteSelectedItem3 whiteSelectedItem3Object;
		if(!reviewNodeSelectedWhiteSelectedItem["Name"].isNull())
			whiteSelectedItem3Object.name = reviewNodeSelectedWhiteSelectedItem["Name"].asString();
		if(!reviewNodeSelectedWhiteSelectedItem["Code"].isNull())
			whiteSelectedItem3Object.code = reviewNodeSelectedWhiteSelectedItem["Code"].asString();
		review_.selected1.push_back(whiteSelectedItem3Object);
	}
	auto allAll2Node = reviewNode["All"]["WhiteAllItem"];
	for (auto reviewNodeAllWhiteAllItem : allAll2Node)
	{
		Review::WhiteAllItem4 whiteAllItem4Object;
		if(!reviewNodeAllWhiteAllItem["Name"].isNull())
			whiteAllItem4Object.name = reviewNodeAllWhiteAllItem["Name"].asString();
		if(!reviewNodeAllWhiteAllItem["Code"].isNull())
			whiteAllItem4Object.code = reviewNodeAllWhiteAllItem["Code"].asString();
		review_.all2.push_back(whiteAllItem4Object);
	}
	auto whiteNode = value["White"];
	auto allSelected5Node = whiteNode["Selected"]["WhiteSelectedItem"];
	for (auto whiteNodeSelectedWhiteSelectedItem : allSelected5Node)
	{
		White::WhiteSelectedItem7 whiteSelectedItem7Object;
		if(!whiteNodeSelectedWhiteSelectedItem["Name"].isNull())
			whiteSelectedItem7Object.name = whiteNodeSelectedWhiteSelectedItem["Name"].asString();
		if(!whiteNodeSelectedWhiteSelectedItem["Code"].isNull())
			whiteSelectedItem7Object.code = whiteNodeSelectedWhiteSelectedItem["Code"].asString();
		white_.selected5.push_back(whiteSelectedItem7Object);
	}
	auto allAll6Node = whiteNode["All"]["WhiteAllItem"];
	for (auto whiteNodeAllWhiteAllItem : allAll6Node)
	{
		White::WhiteAllItem8 whiteAllItem8Object;
		if(!whiteNodeAllWhiteAllItem["Name"].isNull())
			whiteAllItem8Object.name = whiteNodeAllWhiteAllItem["Name"].asString();
		if(!whiteNodeAllWhiteAllItem["Code"].isNull())
			whiteAllItem8Object.code = whiteNodeAllWhiteAllItem["Code"].asString();
		white_.all6.push_back(whiteAllItem8Object);
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

