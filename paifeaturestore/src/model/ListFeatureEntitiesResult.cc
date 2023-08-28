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

#include <alibabacloud/paifeaturestore/model/ListFeatureEntitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListFeatureEntitiesResult::ListFeatureEntitiesResult() :
	ServiceResult()
{}

ListFeatureEntitiesResult::ListFeatureEntitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFeatureEntitiesResult::~ListFeatureEntitiesResult()
{}

void ListFeatureEntitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeatureEntitiesNode = value["FeatureEntities"]["FeatureEntitiesItem"];
	for (auto valueFeatureEntitiesFeatureEntitiesItem : allFeatureEntitiesNode)
	{
		FeatureEntitiesItem featureEntitiesObject;
		if(!valueFeatureEntitiesFeatureEntitiesItem["FeatureEntityId"].isNull())
			featureEntitiesObject.featureEntityId = valueFeatureEntitiesFeatureEntitiesItem["FeatureEntityId"].asString();
		if(!valueFeatureEntitiesFeatureEntitiesItem["GmtCreateTime"].isNull())
			featureEntitiesObject.gmtCreateTime = valueFeatureEntitiesFeatureEntitiesItem["GmtCreateTime"].asString();
		if(!valueFeatureEntitiesFeatureEntitiesItem["JoinId"].isNull())
			featureEntitiesObject.joinId = valueFeatureEntitiesFeatureEntitiesItem["JoinId"].asString();
		if(!valueFeatureEntitiesFeatureEntitiesItem["Name"].isNull())
			featureEntitiesObject.name = valueFeatureEntitiesFeatureEntitiesItem["Name"].asString();
		if(!valueFeatureEntitiesFeatureEntitiesItem["Owner"].isNull())
			featureEntitiesObject.owner = valueFeatureEntitiesFeatureEntitiesItem["Owner"].asString();
		if(!valueFeatureEntitiesFeatureEntitiesItem["ProjectId"].isNull())
			featureEntitiesObject.projectId = valueFeatureEntitiesFeatureEntitiesItem["ProjectId"].asString();
		if(!valueFeatureEntitiesFeatureEntitiesItem["ProjectName"].isNull())
			featureEntitiesObject.projectName = valueFeatureEntitiesFeatureEntitiesItem["ProjectName"].asString();
		featureEntities_.push_back(featureEntitiesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListFeatureEntitiesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListFeatureEntitiesResult::FeatureEntitiesItem> ListFeatureEntitiesResult::getFeatureEntities()const
{
	return featureEntities_;
}

