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

#include <alibabacloud/airec/model/ListItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListItemsResult::ListItemsResult() :
	ServiceResult()
{}

ListItemsResult::ListItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListItemsResult::~ListItemsResult()
{}

void ListItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	auto alldetailNode = resultNode["detail"]["detailItem"];
	for (auto resultNodedetaildetailItem : alldetailNode)
	{
		Result::DetailItem detailItemObject;
		if(!resultNodedetaildetailItem["author"].isNull())
			detailItemObject.author = resultNodedetaildetailItem["author"].asString();
		if(!resultNodedetaildetailItem["brandId"].isNull())
			detailItemObject.brandId = resultNodedetaildetailItem["brandId"].asString();
		if(!resultNodedetaildetailItem["categoryPath"].isNull())
			detailItemObject.categoryPath = resultNodedetaildetailItem["categoryPath"].asString();
		if(!resultNodedetaildetailItem["channel"].isNull())
			detailItemObject.channel = resultNodedetaildetailItem["channel"].asString();
		if(!resultNodedetaildetailItem["duration"].isNull())
			detailItemObject.duration = resultNodedetaildetailItem["duration"].asString();
		if(!resultNodedetaildetailItem["expireTime"].isNull())
			detailItemObject.expireTime = resultNodedetaildetailItem["expireTime"].asString();
		if(!resultNodedetaildetailItem["itemId"].isNull())
			detailItemObject.itemId = resultNodedetaildetailItem["itemId"].asString();
		if(!resultNodedetaildetailItem["itemType"].isNull())
			detailItemObject.itemType = resultNodedetaildetailItem["itemType"].asString();
		if(!resultNodedetaildetailItem["pubTime"].isNull())
			detailItemObject.pubTime = resultNodedetaildetailItem["pubTime"].asString();
		if(!resultNodedetaildetailItem["shopId"].isNull())
			detailItemObject.shopId = resultNodedetaildetailItem["shopId"].asString();
		if(!resultNodedetaildetailItem["status"].isNull())
			detailItemObject.status = resultNodedetaildetailItem["status"].asString();
		if(!resultNodedetaildetailItem["title"].isNull())
			detailItemObject.title = resultNodedetaildetailItem["title"].asString();
		result_.detail.push_back(detailItemObject);
	}
	auto totalNode = resultNode["total"];
	if(!totalNode["instanceRecommendItem"].isNull())
		result_.total.instanceRecommendItem = std::stol(totalNode["instanceRecommendItem"].asString());
	if(!totalNode["queryCount"].isNull())
		result_.total.queryCount = std::stol(totalNode["queryCount"].asString());
	if(!totalNode["sceneRecommendItem"].isNull())
		result_.total.sceneRecommendItem = std::stol(totalNode["sceneRecommendItem"].asString());
	if(!totalNode["sceneWeightItem"].isNull())
		result_.total.sceneWeightItem = std::stol(totalNode["sceneWeightItem"].asString());
	if(!totalNode["totalCount"].isNull())
		result_.total.totalCount = std::stol(totalNode["totalCount"].asString());
	if(!totalNode["weightItem"].isNull())
		result_.total.weightItem = std::stol(totalNode["weightItem"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string ListItemsResult::getRequestId()const
{
	return requestId_;
}

ListItemsResult::Result ListItemsResult::getResult()const
{
	return result_;
}

