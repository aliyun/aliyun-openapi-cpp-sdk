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

#include <alibabacloud/paifeaturestore/model/ListProjectFeaturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListProjectFeaturesResult::ListProjectFeaturesResult() :
	ServiceResult()
{}

ListProjectFeaturesResult::ListProjectFeaturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectFeaturesResult::~ListProjectFeaturesResult()
{}

void ListProjectFeaturesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeaturesNode = value["Features"]["FeaturesItem"];
	for (auto valueFeaturesFeaturesItem : allFeaturesNode)
	{
		FeaturesItem featuresObject;
		if(!valueFeaturesFeaturesItem["Name"].isNull())
			featuresObject.name = valueFeaturesFeaturesItem["Name"].asString();
		if(!valueFeaturesFeaturesItem["Type"].isNull())
			featuresObject.type = valueFeaturesFeaturesItem["Type"].asString();
		if(!valueFeaturesFeaturesItem["FeatureViewId"].isNull())
			featuresObject.featureViewId = valueFeaturesFeaturesItem["FeatureViewId"].asString();
		if(!valueFeaturesFeaturesItem["FeatureViewName"].isNull())
			featuresObject.featureViewName = valueFeaturesFeaturesItem["FeatureViewName"].asString();
		if(!valueFeaturesFeaturesItem["Owner"].isNull())
			featuresObject.owner = valueFeaturesFeaturesItem["Owner"].asString();
		if(!valueFeaturesFeaturesItem["ModelFeatureCount"].isNull())
			featuresObject.modelFeatureCount = std::stoi(valueFeaturesFeaturesItem["ModelFeatureCount"].asString());
		if(!valueFeaturesFeaturesItem["AliasNames"].isNull())
			featuresObject.aliasNames = valueFeaturesFeaturesItem["AliasNames"].asString();
		if(!valueFeaturesFeaturesItem["GmtCreateTime"].isNull())
			featuresObject.gmtCreateTime = valueFeaturesFeaturesItem["GmtCreateTime"].asString();
		features_.push_back(featuresObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

int ListProjectFeaturesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListProjectFeaturesResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListProjectFeaturesResult::FeaturesItem> ListProjectFeaturesResult::getFeatures()const
{
	return features_;
}

