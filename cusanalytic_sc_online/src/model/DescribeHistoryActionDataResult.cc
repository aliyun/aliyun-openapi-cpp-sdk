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

#include <alibabacloud/cusanalytic_sc_online/model/DescribeHistoryActionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

DescribeHistoryActionDataResult::DescribeHistoryActionDataResult() :
	ServiceResult()
{}

DescribeHistoryActionDataResult::DescribeHistoryActionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHistoryActionDataResult::~DescribeHistoryActionDataResult()
{}

void DescribeHistoryActionDataResult::parse(const std::string &payload)
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
		auto infosNode = value["Infos"];
		if(!infosNode["InStay"].isNull())
			actionsMsgItemsObject.infos.inStay = std::stol(infosNode["InStay"].asString());
		if(!infosNode["Maxts"].isNull())
			actionsMsgItemsObject.infos.maxts = std::stol(infosNode["Maxts"].asString());
		if(!infosNode["StayValid"].isNull())
			actionsMsgItemsObject.infos.stayValid = std::stol(infosNode["StayValid"].asString());
		if(!infosNode["StayPeriod"].isNull())
			actionsMsgItemsObject.infos.stayPeriod = std::stol(infosNode["StayPeriod"].asString());
		if(!infosNode["RawId"].isNull())
			actionsMsgItemsObject.infos.rawId = std::stol(infosNode["RawId"].asString());
		if(!infosNode["Mints"].isNull())
			actionsMsgItemsObject.infos.mints = std::stol(infosNode["Mints"].asString());
		auto mapImagePointNode = infosNode["MapImagePoint"];
		if(!mapImagePointNode["X"].isNull())
			actionsMsgItemsObject.infos.mapImagePoint.x = std::stof(mapImagePointNode["X"].asString());
		if(!mapImagePointNode["Y"].isNull())
			actionsMsgItemsObject.infos.mapImagePoint.y = std::stof(mapImagePointNode["Y"].asString());
		auto faceImgRectNode = infosNode["FaceImgRect"];
		if(!faceImgRectNode["Bottom"].isNull())
			actionsMsgItemsObject.infos.faceImgRect.bottom = std::stof(faceImgRectNode["Bottom"].asString());
		if(!faceImgRectNode["Left"].isNull())
			actionsMsgItemsObject.infos.faceImgRect.left = std::stof(faceImgRectNode["Left"].asString());
		if(!faceImgRectNode["Top"].isNull())
			actionsMsgItemsObject.infos.faceImgRect.top = std::stof(faceImgRectNode["Top"].asString());
		if(!faceImgRectNode["Right"].isNull())
			actionsMsgItemsObject.infos.faceImgRect.right = std::stof(faceImgRectNode["Right"].asString());
		auto attributesNode = value["Attributes"];
		if(!attributesNode["ImgUrl"].isNull())
			actionsMsgItemsObject.attributes.imgUrl = attributesNode["ImgUrl"].asString();
		if(!attributesNode["Score"].isNull())
			actionsMsgItemsObject.attributes.score = std::stol(attributesNode["Score"].asString());
		if(!attributesNode["Gender"].isNull())
			actionsMsgItemsObject.attributes.gender = attributesNode["Gender"].asString();
		if(!attributesNode["IsClerk"].isNull())
			actionsMsgItemsObject.attributes.isClerk = std::stol(attributesNode["IsClerk"].asString());
		if(!attributesNode["AgeNum"].isNull())
			actionsMsgItemsObject.attributes.ageNum = std::stoi(attributesNode["AgeNum"].asString());
		if(!attributesNode["ImgObjectKey"].isNull())
			actionsMsgItemsObject.attributes.imgObjectKey = attributesNode["ImgObjectKey"].asString();
		if(!attributesNode["ImgType"].isNull())
			actionsMsgItemsObject.attributes.imgType = attributesNode["ImgType"].asString();
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
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["TsEnd"].isNull())
		tsEnd_ = std::stol(value["TsEnd"].asString());

}

bool DescribeHistoryActionDataResult::getIsSuccess()const
{
	return isSuccess_;
}

long DescribeHistoryActionDataResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeHistoryActionDataResult::getTsStart()const
{
	return tsStart_;
}

int DescribeHistoryActionDataResult::getPageCount()const
{
	return pageCount_;
}

std::string DescribeHistoryActionDataResult::getStoreId()const
{
	return storeId_;
}

std::string DescribeHistoryActionDataResult::getErrorMsg()const
{
	return errorMsg_;
}

long DescribeHistoryActionDataResult::getTsEnd()const
{
	return tsEnd_;
}

int DescribeHistoryActionDataResult::getPageNo()const
{
	return pageNo_;
}

int DescribeHistoryActionDataResult::getPageLimit()const
{
	return pageLimit_;
}

std::vector<DescribeHistoryActionDataResult::ActionsMsgItem> DescribeHistoryActionDataResult::getActionsMsgItems()const
{
	return actionsMsgItems_;
}

