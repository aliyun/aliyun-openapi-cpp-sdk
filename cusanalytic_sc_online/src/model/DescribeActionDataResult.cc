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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allActionsMsgItems = value["ActionsMsgItems"]["ActionsMsgItem"];
	for (auto value : allActionsMsgItems)
	{
		ActionsMsgItem actionsMsgItemsObject;
		if(!value["LocationId"].isNull())
			actionsMsgItemsObject.locationId = std::stol(value["LocationId"].asString());
		if(!value["UkId"].isNull())
			actionsMsgItemsObject.ukId = std::stol(value["UkId"].asString());
		if(!value["GmtModified"].isNull())
			actionsMsgItemsObject.gmtModified = value["GmtModified"].asString();
		if(!value["Status"].isNull())
			actionsMsgItemsObject.status = std::stol(value["Status"].asString());
		if(!value["GmtCreate"].isNull())
			actionsMsgItemsObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["StoreId"].isNull())
			actionsMsgItemsObject.storeId = std::stol(value["StoreId"].asString());
		if(!value["Tag"].isNull())
			actionsMsgItemsObject.tag = value["Tag"].asString();
		if(!value["Id"].isNull())
			actionsMsgItemsObject.id = std::stol(value["Id"].asString());
		if(!value["LocationLayerType"].isNull())
			actionsMsgItemsObject.locationLayerType = value["LocationLayerType"].asString();
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
		auto pointNode = actionInfosItemNode["Point"];
		if(!pointNode["X"].isNull())
			actionsMsgItemsObject.actionInfosItem.point.x = std::stof(pointNode["X"].asString());
		if(!pointNode["Y"].isNull())
			actionsMsgItemsObject.actionInfosItem.point.y = std::stof(pointNode["Y"].asString());
		auto senseRectEntityItemNode = actionInfosItemNode["SenseRectEntityItem"];
		if(!senseRectEntityItemNode["Bottom"].isNull())
			actionsMsgItemsObject.actionInfosItem.senseRectEntityItem.bottom = std::stof(senseRectEntityItemNode["Bottom"].asString());
		if(!senseRectEntityItemNode["Left"].isNull())
			actionsMsgItemsObject.actionInfosItem.senseRectEntityItem.left = std::stof(senseRectEntityItemNode["Left"].asString());
		if(!senseRectEntityItemNode["Top"].isNull())
			actionsMsgItemsObject.actionInfosItem.senseRectEntityItem.top = std::stof(senseRectEntityItemNode["Top"].asString());
		if(!senseRectEntityItemNode["Right"].isNull())
			actionsMsgItemsObject.actionInfosItem.senseRectEntityItem.right = std::stof(senseRectEntityItemNode["Right"].asString());
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

