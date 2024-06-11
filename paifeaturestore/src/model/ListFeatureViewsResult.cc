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

#include <alibabacloud/paifeaturestore/model/ListFeatureViewsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListFeatureViewsResult::ListFeatureViewsResult() :
	ServiceResult()
{}

ListFeatureViewsResult::ListFeatureViewsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFeatureViewsResult::~ListFeatureViewsResult()
{}

void ListFeatureViewsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeatureViewsNode = value["FeatureViews"]["FeatureViewsItem"];
	for (auto valueFeatureViewsFeatureViewsItem : allFeatureViewsNode)
	{
		FeatureViewsItem featureViewsObject;
		if(!valueFeatureViewsFeatureViewsItem["FeatureViewId"].isNull())
			featureViewsObject.featureViewId = valueFeatureViewsFeatureViewsItem["FeatureViewId"].asString();
		if(!valueFeatureViewsFeatureViewsItem["ProjectId"].isNull())
			featureViewsObject.projectId = valueFeatureViewsFeatureViewsItem["ProjectId"].asString();
		if(!valueFeatureViewsFeatureViewsItem["ProjectName"].isNull())
			featureViewsObject.projectName = valueFeatureViewsFeatureViewsItem["ProjectName"].asString();
		if(!valueFeatureViewsFeatureViewsItem["FeatureEntityName"].isNull())
			featureViewsObject.featureEntityName = valueFeatureViewsFeatureViewsItem["FeatureEntityName"].asString();
		if(!valueFeatureViewsFeatureViewsItem["Name"].isNull())
			featureViewsObject.name = valueFeatureViewsFeatureViewsItem["Name"].asString();
		if(!valueFeatureViewsFeatureViewsItem["Owner"].isNull())
			featureViewsObject.owner = valueFeatureViewsFeatureViewsItem["Owner"].asString();
		if(!valueFeatureViewsFeatureViewsItem["Type"].isNull())
			featureViewsObject.type = valueFeatureViewsFeatureViewsItem["Type"].asString();
		if(!valueFeatureViewsFeatureViewsItem["WriteToFeatureDB"].isNull())
			featureViewsObject.writeToFeatureDB = valueFeatureViewsFeatureViewsItem["WriteToFeatureDB"].asString() == "true";
		if(!valueFeatureViewsFeatureViewsItem["GmtCreateTime"].isNull())
			featureViewsObject.gmtCreateTime = valueFeatureViewsFeatureViewsItem["GmtCreateTime"].asString();
		if(!valueFeatureViewsFeatureViewsItem["GmtModifiedTime"].isNull())
			featureViewsObject.gmtModifiedTime = valueFeatureViewsFeatureViewsItem["GmtModifiedTime"].asString();
		if(!valueFeatureViewsFeatureViewsItem["RegisterTable"].isNull())
			featureViewsObject.registerTable = valueFeatureViewsFeatureViewsItem["RegisterTable"].asString();
		if(!valueFeatureViewsFeatureViewsItem["RegisterDatasourceName"].isNull())
			featureViewsObject.registerDatasourceName = valueFeatureViewsFeatureViewsItem["RegisterDatasourceName"].asString();
		if(!valueFeatureViewsFeatureViewsItem["TTL"].isNull())
			featureViewsObject.tTL = std::stoi(valueFeatureViewsFeatureViewsItem["TTL"].asString());
		if(!valueFeatureViewsFeatureViewsItem["RegisterDatasourceId"].isNull())
			featureViewsObject.registerDatasourceId = valueFeatureViewsFeatureViewsItem["RegisterDatasourceId"].asString();
		featureViews_.push_back(featureViewsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<ListFeatureViewsResult::FeatureViewsItem> ListFeatureViewsResult::getFeatureViews()const
{
	return featureViews_;
}

long ListFeatureViewsResult::getTotalCount()const
{
	return totalCount_;
}

