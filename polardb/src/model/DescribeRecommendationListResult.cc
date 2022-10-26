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

#include <alibabacloud/polardb/model/DescribeRecommendationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeRecommendationListResult::DescribeRecommendationListResult() :
	ServiceResult()
{}

DescribeRecommendationListResult::DescribeRecommendationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecommendationListResult::~DescribeRecommendationListResult()
{}

void DescribeRecommendationListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecommendationsNode = value["Recommendations"]["RecommendationsItem"];
	for (auto valueRecommendationsRecommendationsItem : allRecommendationsNode)
	{
		RecommendationsItem recommendationsObject;
		if(!valueRecommendationsRecommendationsItem["RecommendationId"].isNull())
			recommendationsObject.recommendationId = valueRecommendationsRecommendationsItem["RecommendationId"].asString();
		if(!valueRecommendationsRecommendationsItem["Name"].isNull())
			recommendationsObject.name = valueRecommendationsRecommendationsItem["Name"].asString();
		if(!valueRecommendationsRecommendationsItem["Description"].isNull())
			recommendationsObject.description = valueRecommendationsRecommendationsItem["Description"].asString();
		if(!valueRecommendationsRecommendationsItem["Icon"].isNull())
			recommendationsObject.icon = valueRecommendationsRecommendationsItem["Icon"].asString();
		auto allLinksNode = valueRecommendationsRecommendationsItem["Links"]["LinksItem"];
		for (auto valueRecommendationsRecommendationsItemLinksLinksItem : allLinksNode)
		{
			RecommendationsItem::LinksItem linksObject;
			if(!valueRecommendationsRecommendationsItemLinksLinksItem["Href"].isNull())
				linksObject.href = valueRecommendationsRecommendationsItemLinksLinksItem["Href"].asString();
			if(!valueRecommendationsRecommendationsItemLinksLinksItem["Text"].isNull())
				linksObject.text = valueRecommendationsRecommendationsItemLinksLinksItem["Text"].asString();
			recommendationsObject.links.push_back(linksObject);
		}
		recommendations_.push_back(recommendationsObject);
	}

}

std::vector<DescribeRecommendationListResult::RecommendationsItem> DescribeRecommendationListResult::getRecommendations()const
{
	return recommendations_;
}

