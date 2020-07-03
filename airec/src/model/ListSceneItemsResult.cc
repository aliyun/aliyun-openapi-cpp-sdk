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

#include <alibabacloud/airec/model/ListSceneItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListSceneItemsResult::ListSceneItemsResult() :
	ServiceResult()
{}

ListSceneItemsResult::ListSceneItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSceneItemsResult::~ListSceneItemsResult()
{}

void ListSceneItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allDetailNode = resultNode["Detail"]["DetailItem"];
	for (auto resultNodeDetailDetailItem : allDetailNode)
	{
		Result::DetailItem detailItemObject;
		if(!resultNodeDetailDetailItem["ItemId"].isNull())
			detailItemObject.itemId = resultNodeDetailDetailItem["ItemId"].asString();
		if(!resultNodeDetailDetailItem["ItemType"].isNull())
			detailItemObject.itemType = resultNodeDetailDetailItem["ItemType"].asString();
		if(!resultNodeDetailDetailItem["ExpireTime"].isNull())
			detailItemObject.expireTime = resultNodeDetailDetailItem["ExpireTime"].asString();
		if(!resultNodeDetailDetailItem["CategoryPath"].isNull())
			detailItemObject.categoryPath = resultNodeDetailDetailItem["CategoryPath"].asString();
		if(!resultNodeDetailDetailItem["PubTime"].isNull())
			detailItemObject.pubTime = resultNodeDetailDetailItem["PubTime"].asString();
		if(!resultNodeDetailDetailItem["BrandId"].isNull())
			detailItemObject.brandId = resultNodeDetailDetailItem["BrandId"].asString();
		if(!resultNodeDetailDetailItem["ShopId"].isNull())
			detailItemObject.shopId = resultNodeDetailDetailItem["ShopId"].asString();
		if(!resultNodeDetailDetailItem["Title"].isNull())
			detailItemObject.title = resultNodeDetailDetailItem["Title"].asString();
		if(!resultNodeDetailDetailItem["Status"].isNull())
			detailItemObject.status = resultNodeDetailDetailItem["Status"].asString();
		if(!resultNodeDetailDetailItem["Duration"].isNull())
			detailItemObject.duration = resultNodeDetailDetailItem["Duration"].asString();
		if(!resultNodeDetailDetailItem["Author"].isNull())
			detailItemObject.author = resultNodeDetailDetailItem["Author"].asString();
		if(!resultNodeDetailDetailItem["Channel"].isNull())
			detailItemObject.channel = resultNodeDetailDetailItem["Channel"].asString();
		result_.detail.push_back(detailItemObject);
	}
	auto totalNode = resultNode["Total"];
	if(!totalNode["InstanceRecommendItem"].isNull())
		result_.total.instanceRecommendItem = std::stol(totalNode["InstanceRecommendItem"].asString());
	if(!totalNode["SceneRecommendItem"].isNull())
		result_.total.sceneRecommendItem = std::stol(totalNode["SceneRecommendItem"].asString());
	if(!totalNode["WeightItem"].isNull())
		result_.total.weightItem = std::stol(totalNode["WeightItem"].asString());
	if(!totalNode["SceneWeightItem"].isNull())
		result_.total.sceneWeightItem = std::stol(totalNode["SceneWeightItem"].asString());
	if(!totalNode["TotalCount"].isNull())
		result_.total.totalCount = std::stol(totalNode["TotalCount"].asString());

}

ListSceneItemsResult::Result ListSceneItemsResult::getResult()const
{
	return result_;
}

