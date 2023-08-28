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

#include <alibabacloud/paifeaturestore/model/ListFeatureViewRelationshipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListFeatureViewRelationshipsResult::ListFeatureViewRelationshipsResult() :
	ServiceResult()
{}

ListFeatureViewRelationshipsResult::ListFeatureViewRelationshipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFeatureViewRelationshipsResult::~ListFeatureViewRelationshipsResult()
{}

void ListFeatureViewRelationshipsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRelationshipsNode = value["Relationships"]["RelationshipsItem"];
	for (auto valueRelationshipsRelationshipsItem : allRelationshipsNode)
	{
		RelationshipsItem relationshipsObject;
		if(!valueRelationshipsRelationshipsItem["FeatureViewName"].isNull())
			relationshipsObject.featureViewName = valueRelationshipsRelationshipsItem["FeatureViewName"].asString();
		if(!valueRelationshipsRelationshipsItem["ProjectName"].isNull())
			relationshipsObject.projectName = valueRelationshipsRelationshipsItem["ProjectName"].asString();
		auto allModelsNode = valueRelationshipsRelationshipsItem["Models"]["ModelsItem"];
		for (auto valueRelationshipsRelationshipsItemModelsModelsItem : allModelsNode)
		{
			RelationshipsItem::ModelsItem modelsObject;
			if(!valueRelationshipsRelationshipsItemModelsModelsItem["ModelId"].isNull())
				modelsObject.modelId = valueRelationshipsRelationshipsItemModelsModelsItem["ModelId"].asString();
			if(!valueRelationshipsRelationshipsItemModelsModelsItem["ModelName"].isNull())
				modelsObject.modelName = valueRelationshipsRelationshipsItemModelsModelsItem["ModelName"].asString();
			relationshipsObject.models.push_back(modelsObject);
		}
		relationships_.push_back(relationshipsObject);
	}

}

std::vector<ListFeatureViewRelationshipsResult::RelationshipsItem> ListFeatureViewRelationshipsResult::getRelationships()const
{
	return relationships_;
}

