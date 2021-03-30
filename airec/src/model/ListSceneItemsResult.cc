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
	auto resultNode = value["result"];
	auto alldetailNode = resultNode["detail"]["DetailItem"];
	for (auto resultNodedetailDetailItem : alldetailNode)
	{
		Result::DetailItem detailItemObject;
		if(!resultNodedetailDetailItem["author"].isNull())
			detailItemObject.author = resultNodedetailDetailItem["author"].asString();
		if(!resultNodedetailDetailItem["brandId"].isNull())
			detailItemObject.brandId = resultNodedetailDetailItem["brandId"].asString();
		if(!resultNodedetailDetailItem["categoryPath"].isNull())
			detailItemObject.categoryPath = resultNodedetailDetailItem["categoryPath"].asString();
		if(!resultNodedetailDetailItem["channel"].isNull())
			detailItemObject.channel = resultNodedetailDetailItem["channel"].asString();
		if(!resultNodedetailDetailItem["duration"].isNull())
			detailItemObject.duration = resultNodedetailDetailItem["duration"].asString();
		if(!resultNodedetailDetailItem["expireTime"].isNull())
			detailItemObject.expireTime = resultNodedetailDetailItem["expireTime"].asString();
		if(!resultNodedetailDetailItem["itemId"].isNull())
			detailItemObject.itemId = resultNodedetailDetailItem["itemId"].asString();
		if(!resultNodedetailDetailItem["itemType"].isNull())
			detailItemObject.itemType = resultNodedetailDetailItem["itemType"].asString();
		if(!resultNodedetailDetailItem["pubTime"].isNull())
			detailItemObject.pubTime = resultNodedetailDetailItem["pubTime"].asString();
		if(!resultNodedetailDetailItem["shopId"].isNull())
			detailItemObject.shopId = resultNodedetailDetailItem["shopId"].asString();
		if(!resultNodedetailDetailItem["status"].isNull())
			detailItemObject.status = resultNodedetailDetailItem["status"].asString();
		if(!resultNodedetailDetailItem["title"].isNull())
			detailItemObject.title = resultNodedetailDetailItem["title"].asString();
		result_.detail.push_back(detailItemObject);
	}
	auto totalNode = resultNode["total"];
	if(!totalNode["instanceRecommendItem"].isNull())
		result_.total.instanceRecommendItem = std::stol(totalNode["instanceRecommendItem"].asString());
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
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::string ListSceneItemsResult::getRequestId()const
{
	return requestId_;
}

std::string ListSceneItemsResult::getMessage()const
{
	return message_;
}

std::string ListSceneItemsResult::getCode()const
{
	return code_;
}

ListSceneItemsResult::Result ListSceneItemsResult::getResult()const
{
	return result_;
}

