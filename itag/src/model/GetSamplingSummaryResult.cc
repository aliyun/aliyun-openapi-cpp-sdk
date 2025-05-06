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

#include <alibabacloud/itag/model/GetSamplingSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetSamplingSummaryResult::GetSamplingSummaryResult() :
	ServiceResult()
{}

GetSamplingSummaryResult::GetSamplingSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSamplingSummaryResult::~GetSamplingSummaryResult()
{}

void GetSamplingSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TotalSubTask"].isNull())
		result_.totalSubTask = std::stoi(resultNode["TotalSubTask"].asString());
	if(!resultNode["TotalItem"].isNull())
		result_.totalItem = std::stoi(resultNode["TotalItem"].asString());
	if(!resultNode["ActualItem"].isNull())
		result_.actualItem = std::stoi(resultNode["ActualItem"].asString());
	if(!resultNode["ActualSubTask"].isNull())
		result_.actualSubTask = std::stoi(resultNode["ActualSubTask"].asString());
	if(!resultNode["Accuracy"].isNull())
		result_.accuracy = std::stof(resultNode["Accuracy"].asString());
	if(!resultNode["ErrorItem"].isNull())
		result_.errorItem = std::stoi(resultNode["ErrorItem"].asString());
	if(!resultNode["NoFixedItem"].isNull())
		result_.noFixedItem = std::stoi(resultNode["NoFixedItem"].asString());
	auto allPersonSummaryDTOListNode = resultNode["PersonSummaryDTOList"]["PersonSummaryDTOListItem"];
	for (auto resultNodePersonSummaryDTOListPersonSummaryDTOListItem : allPersonSummaryDTOListNode)
	{
		Result::PersonSummaryDTOListItem personSummaryDTOListItemObject;
		if(!resultNodePersonSummaryDTOListPersonSummaryDTOListItem["UserName"].isNull())
			personSummaryDTOListItemObject.userName = resultNodePersonSummaryDTOListPersonSummaryDTOListItem["UserName"].asString();
		if(!resultNodePersonSummaryDTOListPersonSummaryDTOListItem["UserId"].isNull())
			personSummaryDTOListItemObject.userId = resultNodePersonSummaryDTOListPersonSummaryDTOListItem["UserId"].asString();
		if(!resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonTotalItem"].isNull())
			personSummaryDTOListItemObject.personTotalItem = std::stoi(resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonTotalItem"].asString());
		if(!resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonActualItem"].isNull())
			personSummaryDTOListItemObject.personActualItem = std::stoi(resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonActualItem"].asString());
		if(!resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonErrorItem"].isNull())
			personSummaryDTOListItemObject.personErrorItem = std::stoi(resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonErrorItem"].asString());
		if(!resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonAccuracy"].isNull())
			personSummaryDTOListItemObject.personAccuracy = std::stof(resultNodePersonSummaryDTOListPersonSummaryDTOListItem["PersonAccuracy"].asString());
		result_.personSummaryDTOList.push_back(personSummaryDTOListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetSamplingSummaryResult::getMsg()const
{
	return msg_;
}

long GetSamplingSummaryResult::getRt()const
{
	return rt_;
}

bool GetSamplingSummaryResult::getSucc()const
{
	return succ_;
}

std::string GetSamplingSummaryResult::getHost()const
{
	return host_;
}

std::string GetSamplingSummaryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetSamplingSummaryResult::getErrInfo()const
{
	return errInfo_;
}

int GetSamplingSummaryResult::getCode()const
{
	return code_;
}

GetSamplingSummaryResult::Result GetSamplingSummaryResult::getResult()const
{
	return result_;
}

