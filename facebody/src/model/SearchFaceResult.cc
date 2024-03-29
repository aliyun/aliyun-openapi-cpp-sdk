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

#include <alibabacloud/facebody/model/SearchFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

SearchFaceResult::SearchFaceResult() :
	ServiceResult()
{}

SearchFaceResult::SearchFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchFaceResult::~SearchFaceResult()
{}

void SearchFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allMatchListNode = dataNode["MatchList"]["MatchListItem"];
	for (auto dataNodeMatchListMatchListItem : allMatchListNode)
	{
		Data::MatchListItem matchListItemObject;
		if(!dataNodeMatchListMatchListItem["QualitieScore"].isNull())
			matchListItemObject.qualitieScore = std::stof(dataNodeMatchListMatchListItem["QualitieScore"].asString());
		auto allFaceItemsNode = dataNodeMatchListMatchListItem["FaceItems"]["FaceItemsItem"];
		for (auto dataNodeMatchListMatchListItemFaceItemsFaceItemsItem : allFaceItemsNode)
		{
			Data::MatchListItem::FaceItemsItem faceItemsObject;
			if(!dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["EntityId"].isNull())
				faceItemsObject.entityId = dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["EntityId"].asString();
			if(!dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["FaceId"].isNull())
				faceItemsObject.faceId = dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["FaceId"].asString();
			if(!dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["Score"].isNull())
				faceItemsObject.score = std::stof(dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["Score"].asString());
			if(!dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["ExtraData"].isNull())
				faceItemsObject.extraData = dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["ExtraData"].asString();
			if(!dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["DbName"].isNull())
				faceItemsObject.dbName = dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["DbName"].asString();
			if(!dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["Confidence"].isNull())
				faceItemsObject.confidence = std::stof(dataNodeMatchListMatchListItemFaceItemsFaceItemsItem["Confidence"].asString());
			matchListItemObject.faceItems.push_back(faceItemsObject);
		}
		auto locationNode = value["Location"];
		if(!locationNode["Width"].isNull())
			matchListItemObject.location.width = std::stoi(locationNode["Width"].asString());
		if(!locationNode["Height"].isNull())
			matchListItemObject.location.height = std::stoi(locationNode["Height"].asString());
		if(!locationNode["Y"].isNull())
			matchListItemObject.location.y = std::stoi(locationNode["Y"].asString());
		if(!locationNode["X"].isNull())
			matchListItemObject.location.x = std::stoi(locationNode["X"].asString());
		data_.matchList.push_back(matchListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string SearchFaceResult::getMessage()const
{
	return message_;
}

SearchFaceResult::Data SearchFaceResult::getData()const
{
	return data_;
}

std::string SearchFaceResult::getCode()const
{
	return code_;
}

