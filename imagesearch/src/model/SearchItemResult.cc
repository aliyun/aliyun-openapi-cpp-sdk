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

#include <alibabacloud/imagesearch/model/SearchItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ImageSearch;
using namespace AlibabaCloud::ImageSearch::Model;

SearchItemResult::SearchItemResult() :
	ServiceResult()
{}

SearchItemResult::SearchItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchItemResult::~SearchItemResult()
{}

void SearchItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuctions = value["Auctions"]["Auction"];
	for (auto value : allAuctions)
	{
		Auction auctionsObject;
		if(!value["CustContent"].isNull())
			auctionsObject.custContent = value["CustContent"].asString();
		if(!value["ItemId"].isNull())
			auctionsObject.itemId = value["ItemId"].asString();
		if(!value["SortExprValues"].isNull())
			auctionsObject.sortExprValues = value["SortExprValues"].asString();
		if(!value["CatId"].isNull())
			auctionsObject.catId = value["CatId"].asString();
		if(!value["PicName"].isNull())
			auctionsObject.picName = value["PicName"].asString();
		auctions_.push_back(auctionsObject);
	}
	auto headNode = value["Head"];
	if(!headNode["SearchTime"].isNull())
		head_.searchTime = std::stoi(headNode["SearchTime"].asString());
	if(!headNode["DocsFound"].isNull())
		head_.docsFound = std::stoi(headNode["DocsFound"].asString());
	if(!headNode["DocsReturn"].isNull())
		head_.docsReturn = std::stoi(headNode["DocsReturn"].asString());
	auto picInfoNode = value["PicInfo"];
	if(!picInfoNode["Category"].isNull())
		picInfo_.category = picInfoNode["Category"].asString();
	if(!picInfoNode["Region"].isNull())
		picInfo_.region = picInfoNode["Region"].asString();
	auto allAllCategory = value["AllCategory"]["Category"];
	for (auto value : allAllCategory)
	{
		PicInfo::Category categoryObject;
		if(!value["Name"].isNull())
			categoryObject.name = value["Name"].asString();
		if(!value["Id"].isNull())
			categoryObject.id = value["Id"].asString();
		picInfo_.allCategory.push_back(categoryObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

SearchItemResult::Head SearchItemResult::getHead()const
{
	return head_;
}

std::string SearchItemResult::getMessage()const
{
	return message_;
}

std::vector<SearchItemResult::Auction> SearchItemResult::getAuctions()const
{
	return auctions_;
}

SearchItemResult::PicInfo SearchItemResult::getPicInfo()const
{
	return picInfo_;
}

int SearchItemResult::getCode()const
{
	return code_;
}

bool SearchItemResult::getSuccess()const
{
	return success_;
}

