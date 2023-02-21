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

#include <alibabacloud/cc5g/model/GetDiagnoseResultForSingleCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

GetDiagnoseResultForSingleCardResult::GetDiagnoseResultForSingleCardResult() :
	ServiceResult()
{}

GetDiagnoseResultForSingleCardResult::GetDiagnoseResultForSingleCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDiagnoseResultForSingleCardResult::~GetDiagnoseResultForSingleCardResult()
{}

void GetDiagnoseResultForSingleCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allErrorResultNode = value["ErrorResult"]["diagnoseResult"];
	for (auto valueErrorResultdiagnoseResult : allErrorResultNode)
	{
		DiagnoseResult errorResultObject;
		if(!valueErrorResultdiagnoseResult["ErrorLevel"].isNull())
			errorResultObject.errorLevel = valueErrorResultdiagnoseResult["ErrorLevel"].asString();
		if(!valueErrorResultdiagnoseResult["ErrorPart"].isNull())
			errorResultObject.errorPart = valueErrorResultdiagnoseResult["ErrorPart"].asString();
		if(!valueErrorResultdiagnoseResult["ErrorItem"].isNull())
			errorResultObject.errorItem = valueErrorResultdiagnoseResult["ErrorItem"].asString();
		if(!valueErrorResultdiagnoseResult["ErrorDesc"].isNull())
			errorResultObject.errorDesc = valueErrorResultdiagnoseResult["ErrorDesc"].asString();
		if(!valueErrorResultdiagnoseResult["ErrorSuggestion"].isNull())
			errorResultObject.errorSuggestion = valueErrorResultdiagnoseResult["ErrorSuggestion"].asString();
		errorResult_.push_back(errorResultObject);
	}
	auto allDiagnoseItemNode = value["DiagnoseItem"]["diagnoseItemItem"];
	for (auto valueDiagnoseItemdiagnoseItemItem : allDiagnoseItemNode)
	{
		DiagnoseItemItem diagnoseItemObject;
		if(!valueDiagnoseItemdiagnoseItemItem["Part"].isNull())
			diagnoseItemObject.part = valueDiagnoseItemdiagnoseItemItem["Part"].asString();
		if(!valueDiagnoseItemdiagnoseItemItem["Status"].isNull())
			diagnoseItemObject.status = valueDiagnoseItemdiagnoseItemItem["Status"].asString();
		auto allSubItemsNode = valueDiagnoseItemdiagnoseItemItem["SubItems"]["subItemsItem"];
		for (auto valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem : allSubItemsNode)
		{
			DiagnoseItemItem::SubItemsItem subItemsObject;
			if(!valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem["SubItem"].isNull())
				subItemsObject.subItem = valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem["SubItem"].asString();
			if(!valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem["SubItemStatus"].isNull())
				subItemsObject.subItemStatus = valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem["SubItemStatus"].asString();
			if(!valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem["SubItemInfo"].isNull())
				subItemsObject.subItemInfo = valueDiagnoseItemdiagnoseItemItemSubItemssubItemsItem["SubItemInfo"].asString();
			diagnoseItemObject.subItems.push_back(subItemsObject);
		}
		diagnoseItem_.push_back(diagnoseItemObject);
	}
	if(!value["WirelessCloudConnectorId"].isNull())
		wirelessCloudConnectorId_ = value["WirelessCloudConnectorId"].asString();
	if(!value["CardIp"].isNull())
		cardIp_ = value["CardIp"].asString();
	if(!value["IccId"].isNull())
		iccId_ = value["IccId"].asString();
	if(!value["Destination"].isNull())
		destination_ = value["Destination"].asString();
	if(!value["DestinationType"].isNull())
		destinationType_ = value["DestinationType"].asString();
	if(!value["BeginTime"].isNull())
		beginTime_ = std::stol(value["BeginTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string GetDiagnoseResultForSingleCardResult::getStatus()const
{
	return status_;
}

std::string GetDiagnoseResultForSingleCardResult::getDestination()const
{
	return destination_;
}

std::string GetDiagnoseResultForSingleCardResult::getWirelessCloudConnectorId()const
{
	return wirelessCloudConnectorId_;
}

long GetDiagnoseResultForSingleCardResult::getEndTime()const
{
	return endTime_;
}

std::string GetDiagnoseResultForSingleCardResult::getCardIp()const
{
	return cardIp_;
}

std::string GetDiagnoseResultForSingleCardResult::getIccId()const
{
	return iccId_;
}

std::vector<GetDiagnoseResultForSingleCardResult::DiagnoseResult> GetDiagnoseResultForSingleCardResult::getErrorResult()const
{
	return errorResult_;
}

long GetDiagnoseResultForSingleCardResult::getBeginTime()const
{
	return beginTime_;
}

std::string GetDiagnoseResultForSingleCardResult::getDestinationType()const
{
	return destinationType_;
}

std::vector<GetDiagnoseResultForSingleCardResult::DiagnoseItemItem> GetDiagnoseResultForSingleCardResult::getDiagnoseItem()const
{
	return diagnoseItem_;
}

