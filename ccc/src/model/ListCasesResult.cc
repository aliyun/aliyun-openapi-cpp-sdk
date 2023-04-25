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

#include <alibabacloud/ccc/model/ListCasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCasesResult::ListCasesResult() :
	ServiceResult()
{}

ListCasesResult::ListCasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCasesResult::~ListCasesResult()
{}

void ListCasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["listItem"];
	for (auto dataNodeListlistItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListlistItem["AbandonType"].isNull())
			listItemObject.abandonType = dataNodeListlistItem["AbandonType"].asString();
		if(!dataNodeListlistItem["AttemptCount"].isNull())
			listItemObject.attemptCount = std::stol(dataNodeListlistItem["AttemptCount"].asString());
		if(!dataNodeListlistItem["FailureReason"].isNull())
			listItemObject.failureReason = dataNodeListlistItem["FailureReason"].asString();
		if(!dataNodeListlistItem["PhoneNumber"].isNull())
			listItemObject.phoneNumber = dataNodeListlistItem["PhoneNumber"].asString();
		if(!dataNodeListlistItem["State"].isNull())
			listItemObject.state = dataNodeListlistItem["State"].asString();
		if(!dataNodeListlistItem["CaseId"].isNull())
			listItemObject.caseId = dataNodeListlistItem["CaseId"].asString();
		if(!dataNodeListlistItem["CustomVariables"].isNull())
			listItemObject.customVariables = dataNodeListlistItem["CustomVariables"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListCasesResult::getMessage()const
{
	return message_;
}

long ListCasesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCasesResult::Data ListCasesResult::getData()const
{
	return data_;
}

std::string ListCasesResult::getCode()const
{
	return code_;
}

