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

#include <alibabacloud/cusanalytic_sc_online/model/DescribeActionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

DescribeActionDataResult::DescribeActionDataResult() :
	ServiceResult()
{}

DescribeActionDataResult::DescribeActionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActionDataResult::~DescribeActionDataResult()
{}

void DescribeActionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActionsMsgItemsNode = value["ActionsMsgItems"]["ActionsMsgItem"];
	for (auto valueActionsMsgItemsActionsMsgItem : allActionsMsgItemsNode)
	{
		ActionsMsgItem actionsMsgItemsObject;
		if(!valueActionsMsgItemsActionsMsgItem["LocationId"].isNull())
			actionsMsgItemsObject.locationId = std::stol(valueActionsMsgItemsActionsMsgItem["LocationId"].asString());
		if(!valueActionsMsgItemsActionsMsgItem["UkId"].isNull())
			actionsMsgItemsObject.ukId = std::stol(valueActionsMsgItemsActionsMsgItem["UkId"].asString());
		if(!valueActionsMsgItemsActionsMsgItem["GmtModified"].isNull())
			actionsMsgItemsObject.gmtModified = valueActionsMsgItemsActionsMsgItem["GmtModified"].asString();
		if(!valueActionsMsgItemsActionsMsgItem["Status"].isNull())
			actionsMsgItemsObject.status = std::stol(valueActionsMsgItemsActionsMsgItem["Status"].asString());
		if(!valueActionsMsgItemsActionsMsgItem["GmtCreate"].isNull())
			actionsMsgItemsObject.gmtCreate = valueActionsMsgItemsActionsMsgItem["GmtCreate"].asString();
		if(!valueActionsMsgItemsActionsMsgItem["StoreId"].isNull())
			actionsMsgItemsObject.storeId = std::stol(valueActionsMsgItemsActionsMsgItem["StoreId"].asString());
		if(!valueActionsMsgItemsActionsMsgItem["Tag"].isNull())
			actionsMsgItemsObject.tag = valueActionsMsgItemsActionsMsgItem["Tag"].asString();
		if(!valueActionsMsgItemsActionsMsgItem["Id"].isNull())
			actionsMsgItemsObject.id = std::stol(valueActionsMsgItemsActionsMsgItem["Id"].asString());
		if(!valueActionsMsgItemsActionsMsgItem["LocationLayerType"].isNull())
			actionsMsgItemsObject.locationLayerType = valueActionsMsgItemsActionsMsgItem["LocationLayerType"].asString();
		auto actionInfosItemNode = value["ActionInfosItem"];
		if(!actionInfosItemNode["Maxts"].isNull())
			actionsMsgItemsObject.actionInfosItem.maxts = std::stol(actionInfosItemNode["Maxts"].asString());
		if(!actionInfosItemNode["StayValid"].isNull())
			actionsMsgItemsObject.actionInfosItem.stayValid = std::stol(actionInfosItemNode["StayValid"].asString());
		if(!actionInfosItemNode["StayPeriod"].isNull())
			actionsMsgItemsObject.actionInfosItem.stayPeriod = std::stol(actionInfosItemNode["StayPeriod"].asString());
		if(!actionInfosItemNode["RawId"].isNull())
			actionsMsgItemsObject.actionInfosItem.rawId = std::stol(actionInfosItemNode["RawId"].asString());
		if(!actionInfosItemNode["Mints"].isNull())
			actionsMsgItemsObject.actionInfosItem.mints = std::stol(actionInfosItemNode["Mints"].asString());
		if(!actionInfosItemNode["InStay"].isNull())
			actionsMsgItemsObject.actionInfosItem.inStay = std::stol(actionInfosItemNode["InStay"].asString());
		auto mapImagePointNode = actionInfosItemNode["MapImagePoint"];
		if(!mapImagePointNode["X"].isNull())
			actionsMsgItemsObject.actionInfosItem.mapImagePoint.x = std::stof(mapImagePointNode["X"].asString());
		if(!mapImagePointNode["Y"].isNull())
			actionsMsgItemsObject.actionInfosItem.mapImagePoint.y = std::stof(mapImagePointNode["Y"].asString());
		auto faceImgRectNode = actionInfosItemNode["FaceImgRect"];
		if(!faceImgRectNode["Bottom"].isNull())
			actionsMsgItemsObject.actionInfosItem.faceImgRect.bottom = std::stof(faceImgRectNode["Bottom"].asString());
		if(!faceImgRectNode["Left"].isNull())
			actionsMsgItemsObject.actionInfosItem.faceImgRect.left = std::stof(faceImgRectNode["Left"].asString());
		if(!faceImgRectNode["Top"].isNull())
			actionsMsgItemsObject.actionInfosItem.faceImgRect.top = std::stof(faceImgRectNode["Top"].asString());
		if(!faceImgRectNode["Right"].isNull())
			actionsMsgItemsObject.actionInfosItem.faceImgRect.right = std::stof(faceImgRectNode["Right"].asString());
		auto attributesMsgItemNode = value["AttributesMsgItem"];
		if(!attributesMsgItemNode["ImgUrl"].isNull())
			actionsMsgItemsObject.attributesMsgItem.imgUrl = attributesMsgItemNode["ImgUrl"].asString();
		if(!attributesMsgItemNode["Score"].isNull())
			actionsMsgItemsObject.attributesMsgItem.score = std::stol(attributesMsgItemNode["Score"].asString());
		if(!attributesMsgItemNode["Gender"].isNull())
			actionsMsgItemsObject.attributesMsgItem.gender = attributesMsgItemNode["Gender"].asString();
		if(!attributesMsgItemNode["IsClerk"].isNull())
			actionsMsgItemsObject.attributesMsgItem.isClerk = std::stol(attributesMsgItemNode["IsClerk"].asString());
		if(!attributesMsgItemNode["AgeNum"].isNull())
			actionsMsgItemsObject.attributesMsgItem.ageNum = std::stoi(attributesMsgItemNode["AgeNum"].asString());
		if(!attributesMsgItemNode["ImgObjectKey"].isNull())
			actionsMsgItemsObject.attributesMsgItem.imgObjectKey = attributesMsgItemNode["ImgObjectKey"].asString();
		if(!attributesMsgItemNode["ImgType"].isNull())
			actionsMsgItemsObject.attributesMsgItem.imgType = attributesMsgItemNode["ImgType"].asString();
		actionsMsgItems_.push_back(actionsMsgItemsObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["TsStart"].isNull())
		tsStart_ = std::stol(value["TsStart"].asString());
	if(!value["PageLimit"].isNull())
		pageLimit_ = std::stoi(value["PageLimit"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["IsSuccess"].isNull())
		isSuccess_ = value["IsSuccess"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();
	if(!value["TsEnd"].isNull())
		tsEnd_ = std::stol(value["TsEnd"].asString());

}

bool DescribeActionDataResult::getIsSuccess()const
{
	return isSuccess_;
}

long DescribeActionDataResult::getTsStart()const
{
	return tsStart_;
}

int DescribeActionDataResult::getPageCount()const
{
	return pageCount_;
}

std::string DescribeActionDataResult::getStoreId()const
{
	return storeId_;
}

std::string DescribeActionDataResult::getErrorMsg()const
{
	return errorMsg_;
}

long DescribeActionDataResult::getTsEnd()const
{
	return tsEnd_;
}

int DescribeActionDataResult::getPageNo()const
{
	return pageNo_;
}

int DescribeActionDataResult::getPageLimit()const
{
	return pageLimit_;
}

std::vector<DescribeActionDataResult::ActionsMsgItem> DescribeActionDataResult::getActionsMsgItems()const
{
	return actionsMsgItems_;
}

