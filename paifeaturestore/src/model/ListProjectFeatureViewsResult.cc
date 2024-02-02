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

#include <alibabacloud/paifeaturestore/model/ListProjectFeatureViewsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListProjectFeatureViewsResult::ListProjectFeatureViewsResult() :
	ServiceResult()
{}

ListProjectFeatureViewsResult::ListProjectFeatureViewsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectFeatureViewsResult::~ListProjectFeatureViewsResult()
{}

void ListProjectFeatureViewsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeatureViewsNode = value["FeatureViews"]["FeatureViewsItem"];
	for (auto valueFeatureViewsFeatureViewsItem : allFeatureViewsNode)
	{
		FeatureViewsItem featureViewsObject;
		if(!valueFeatureViewsFeatureViewsItem["Name"].isNull())
			featureViewsObject.name = valueFeatureViewsFeatureViewsItem["Name"].asString();
		if(!valueFeatureViewsFeatureViewsItem["FeatureViewId"].isNull())
			featureViewsObject.featureViewId = valueFeatureViewsFeatureViewsItem["FeatureViewId"].asString();
		if(!valueFeatureViewsFeatureViewsItem["Type"].isNull())
			featureViewsObject.type = valueFeatureViewsFeatureViewsItem["Type"].asString();
		auto allFeaturesNode = valueFeatureViewsFeatureViewsItem["Features"]["FeaturesItem"];
		for (auto valueFeatureViewsFeatureViewsItemFeaturesFeaturesItem : allFeaturesNode)
		{
			FeatureViewsItem::FeaturesItem featuresObject;
			if(!valueFeatureViewsFeatureViewsItemFeaturesFeaturesItem["Name"].isNull())
				featuresObject.name = valueFeatureViewsFeatureViewsItemFeaturesFeaturesItem["Name"].asString();
			if(!valueFeatureViewsFeatureViewsItemFeaturesFeaturesItem["Type"].isNull())
				featuresObject.type = valueFeatureViewsFeatureViewsItemFeaturesFeaturesItem["Type"].asString();
			auto allAttributes = value["Attributes"]["Attributes"];
			for (auto value : allAttributes)
				featuresObject.attributes.push_back(value.asString());
			featureViewsObject.features.push_back(featuresObject);
		}
		featureViews_.push_back(featureViewsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<ListProjectFeatureViewsResult::FeatureViewsItem> ListProjectFeatureViewsResult::getFeatureViews()const
{
	return featureViews_;
}

long ListProjectFeatureViewsResult::getTotalCount()const
{
	return totalCount_;
}

