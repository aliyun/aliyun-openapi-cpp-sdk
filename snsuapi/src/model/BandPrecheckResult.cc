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

#include <alibabacloud/snsuapi/model/BandPrecheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Snsuapi;
using namespace AlibabaCloud::Snsuapi::Model;

BandPrecheckResult::BandPrecheckResult() :
	ServiceResult()
{}

BandPrecheckResult::BandPrecheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BandPrecheckResult::~BandPrecheckResult()
{}

void BandPrecheckResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultModuleNode = value["ResultModule"];
	if(!resultModuleNode["BandId"].isNull())
		resultModule_.bandId = std::stol(resultModuleNode["BandId"].asString());
	if(!resultModuleNode["UploadBandwidth"].isNull())
		resultModule_.uploadBandwidth = std::stoi(resultModuleNode["UploadBandwidth"].asString());
	if(!resultModuleNode["DownloadBandwidth"].isNull())
		resultModule_.downloadBandwidth = std::stoi(resultModuleNode["DownloadBandwidth"].asString());
	auto allBandOfferListNode = resultModuleNode["BandOfferList"]["BandOfferListItem"];
	for (auto resultModuleNodeBandOfferListBandOfferListItem : allBandOfferListNode)
	{
		ResultModule::BandOfferListItem bandOfferListItemObject;
		if(!resultModuleNodeBandOfferListBandOfferListItem["OfferId"].isNull())
			bandOfferListItemObject.offerId = std::stol(resultModuleNodeBandOfferListBandOfferListItem["OfferId"].asString());
		if(!resultModuleNodeBandOfferListBandOfferListItem["Bandwidth"].isNull())
			bandOfferListItemObject.bandwidth = std::stoi(resultModuleNodeBandOfferListBandOfferListItem["Bandwidth"].asString());
		if(!resultModuleNodeBandOfferListBandOfferListItem["Duration"].isNull())
			bandOfferListItemObject.duration = std::stol(resultModuleNodeBandOfferListBandOfferListItem["Duration"].asString());
		if(!resultModuleNodeBandOfferListBandOfferListItem["Direction"].isNull())
			bandOfferListItemObject.direction = resultModuleNodeBandOfferListBandOfferListItem["Direction"].asString();
		resultModule_.bandOfferList.push_back(bandOfferListItemObject);
	}
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

BandPrecheckResult::ResultModule BandPrecheckResult::getResultModule()const
{
	return resultModule_;
}

std::string BandPrecheckResult::getResultMessage()const
{
	return resultMessage_;
}

std::string BandPrecheckResult::getResultCode()const
{
	return resultCode_;
}

