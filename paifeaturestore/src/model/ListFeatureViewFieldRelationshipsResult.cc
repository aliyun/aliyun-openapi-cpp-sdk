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

#include <alibabacloud/paifeaturestore/model/ListFeatureViewFieldRelationshipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListFeatureViewFieldRelationshipsResult::ListFeatureViewFieldRelationshipsResult() :
	ServiceResult()
{}

ListFeatureViewFieldRelationshipsResult::ListFeatureViewFieldRelationshipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFeatureViewFieldRelationshipsResult::~ListFeatureViewFieldRelationshipsResult()
{}

void ListFeatureViewFieldRelationshipsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRelationshipsNode = value["Relationships"]["RelationshipsItem"];
	for (auto valueRelationshipsRelationshipsItem : allRelationshipsNode)
	{
		RelationshipsItem relationshipsObject;
		if(!valueRelationshipsRelationshipsItem["FeatureName"].isNull())
			relationshipsObject.featureName = valueRelationshipsRelationshipsItem["FeatureName"].asString();
		if(!valueRelationshipsRelationshipsItem["OnlineTableName"].isNull())
			relationshipsObject.onlineTableName = valueRelationshipsRelationshipsItem["OnlineTableName"].asString();
		if(!valueRelationshipsRelationshipsItem["OfflineTableName"].isNull())
			relationshipsObject.offlineTableName = valueRelationshipsRelationshipsItem["OfflineTableName"].asString();
		auto allModelsNode = valueRelationshipsRelationshipsItem["Models"]["ModelsItem"];
		for (auto valueRelationshipsRelationshipsItemModelsModelsItem : allModelsNode)
		{
			RelationshipsItem::ModelsItem modelsObject;
			if(!valueRelationshipsRelationshipsItemModelsModelsItem["ModelId"].isNull())
				modelsObject.modelId = valueRelationshipsRelationshipsItemModelsModelsItem["ModelId"].asString();
			if(!valueRelationshipsRelationshipsItemModelsModelsItem["ModelName"].isNull())
				modelsObject.modelName = valueRelationshipsRelationshipsItemModelsModelsItem["ModelName"].asString();
			if(!valueRelationshipsRelationshipsItemModelsModelsItem["FeatureAliasName"].isNull())
				modelsObject.featureAliasName = valueRelationshipsRelationshipsItemModelsModelsItem["FeatureAliasName"].asString();
			relationshipsObject.models.push_back(modelsObject);
		}
		relationships_.push_back(relationshipsObject);
	}

}

std::vector<ListFeatureViewFieldRelationshipsResult::RelationshipsItem> ListFeatureViewFieldRelationshipsResult::getRelationships()const
{
	return relationships_;
}

