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

#include <alibabacloud/vod/model/GetAIVideoTagResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAIVideoTagResultResult::GetAIVideoTagResultResult() :
	ServiceResult()
{}

GetAIVideoTagResultResult::GetAIVideoTagResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAIVideoTagResultResult::~GetAIVideoTagResultResult()
{}

void GetAIVideoTagResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto videoTagResultNode = value["VideoTagResult"];
	auto allCategoryNode = videoTagResultNode["Category"]["CategoryItem"];
	for (auto videoTagResultNodeCategoryCategoryItem : allCategoryNode)
	{
		VideoTagResult::CategoryItem categoryItemObject;
		if(!videoTagResultNodeCategoryCategoryItem["Tag"].isNull())
			categoryItemObject.tag = videoTagResultNodeCategoryCategoryItem["Tag"].asString();
		videoTagResult_.category.push_back(categoryItemObject);
	}
	auto allPersonNode = videoTagResultNode["Person"]["PersonItem"];
	for (auto videoTagResultNodePersonPersonItem : allPersonNode)
	{
		VideoTagResult::PersonItem personItemObject;
		if(!videoTagResultNodePersonPersonItem["FaceUrl"].isNull())
			personItemObject.faceUrl = videoTagResultNodePersonPersonItem["FaceUrl"].asString();
		if(!videoTagResultNodePersonPersonItem["Tag"].isNull())
			personItemObject.tag = videoTagResultNodePersonPersonItem["Tag"].asString();
		auto allTimes = value["Times"]["Times"];
		for (auto value : allTimes)
			personItemObject.times.push_back(value.asString());
		videoTagResult_.person.push_back(personItemObject);
	}
	auto allTimeNode = videoTagResultNode["Time"]["TimeItem"];
	for (auto videoTagResultNodeTimeTimeItem : allTimeNode)
	{
		VideoTagResult::TimeItem timeItemObject;
		if(!videoTagResultNodeTimeTimeItem["Tag"].isNull())
			timeItemObject.tag = videoTagResultNodeTimeTimeItem["Tag"].asString();
		auto allTimes1 = value["Times"]["Times"];
		for (auto value : allTimes1)
			timeItemObject.times1.push_back(value.asString());
		videoTagResult_.time.push_back(timeItemObject);
	}
	auto allLocationNode = videoTagResultNode["Location"]["LocationItem"];
	for (auto videoTagResultNodeLocationLocationItem : allLocationNode)
	{
		VideoTagResult::LocationItem locationItemObject;
		if(!videoTagResultNodeLocationLocationItem["Tag"].isNull())
			locationItemObject.tag = videoTagResultNodeLocationLocationItem["Tag"].asString();
		auto allTimes2 = value["Times"]["Times"];
		for (auto value : allTimes2)
			locationItemObject.times2.push_back(value.asString());
		videoTagResult_.location.push_back(locationItemObject);
	}
	auto allKeywordNode = videoTagResultNode["Keyword"]["KeywordItem"];
	for (auto videoTagResultNodeKeywordKeywordItem : allKeywordNode)
	{
		VideoTagResult::KeywordItem keywordItemObject;
		if(!videoTagResultNodeKeywordKeywordItem["Tag"].isNull())
			keywordItemObject.tag = videoTagResultNodeKeywordKeywordItem["Tag"].asString();
		auto allTimes3 = value["Times"]["Times"];
		for (auto value : allTimes3)
			keywordItemObject.times3.push_back(value.asString());
		videoTagResult_.keyword.push_back(keywordItemObject);
	}

}

GetAIVideoTagResultResult::VideoTagResult GetAIVideoTagResultResult::getVideoTagResult()const
{
	return videoTagResult_;
}

