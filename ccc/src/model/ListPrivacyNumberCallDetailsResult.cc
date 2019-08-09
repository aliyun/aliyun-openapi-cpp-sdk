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

#include <alibabacloud/ccc/model/ListPrivacyNumberCallDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPrivacyNumberCallDetailsResult::ListPrivacyNumberCallDetailsResult() :
	ServiceResult()
{}

ListPrivacyNumberCallDetailsResult::ListPrivacyNumberCallDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivacyNumberCallDetailsResult::~ListPrivacyNumberCallDetailsResult()
{}

void ListPrivacyNumberCallDetailsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto privacyNumberCallDetailsNode = value["PrivacyNumberCallDetails"];
	if(!privacyNumberCallDetailsNode["TotalCount"].isNull())
		privacyNumberCallDetails_.totalCount = std::stoi(privacyNumberCallDetailsNode["TotalCount"].asString());
	if(!privacyNumberCallDetailsNode["PageNumber"].isNull())
		privacyNumberCallDetails_.pageNumber = std::stoi(privacyNumberCallDetailsNode["PageNumber"].asString());
	if(!privacyNumberCallDetailsNode["PageSize"].isNull())
		privacyNumberCallDetails_.pageSize = std::stoi(privacyNumberCallDetailsNode["PageSize"].asString());
	auto allList = value["List"]["PrivacyNumberCallDetail"];
	for (auto value : allList)
	{
		PrivacyNumberCallDetails::PrivacyNumberCallDetail privacyNumberCallDetailObject;
		if(!value["AgentId"].isNull())
			privacyNumberCallDetailObject.agentId = value["AgentId"].asString();
		if(!value["AgentName"].isNull())
			privacyNumberCallDetailObject.agentName = value["AgentName"].asString();
		if(!value["ContactId"].isNull())
			privacyNumberCallDetailObject.contactId = value["ContactId"].asString();
		if(!value["CallingNumber"].isNull())
			privacyNumberCallDetailObject.callingNumber = value["CallingNumber"].asString();
		if(!value["CalledNumber"].isNull())
			privacyNumberCallDetailObject.calledNumber = value["CalledNumber"].asString();
		if(!value["PrivacyNumber"].isNull())
			privacyNumberCallDetailObject.privacyNumber = value["PrivacyNumber"].asString();
		if(!value["ContactType"].isNull())
			privacyNumberCallDetailObject.contactType = value["ContactType"].asString();
		if(!value["Result"].isNull())
			privacyNumberCallDetailObject.result = value["Result"].asString();
		if(!value["Description"].isNull())
			privacyNumberCallDetailObject.description = value["Description"].asString();
		if(!value["CallTime"].isNull())
			privacyNumberCallDetailObject.callTime = std::stol(value["CallTime"].asString());
		if(!value["Status"].isNull())
			privacyNumberCallDetailObject.status = value["Status"].asString();
		privacyNumberCallDetails_.list.push_back(privacyNumberCallDetailObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

ListPrivacyNumberCallDetailsResult::PrivacyNumberCallDetails ListPrivacyNumberCallDetailsResult::getPrivacyNumberCallDetails()const
{
	return privacyNumberCallDetails_;
}

std::string ListPrivacyNumberCallDetailsResult::getMessage()const
{
	return message_;
}

int ListPrivacyNumberCallDetailsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListPrivacyNumberCallDetailsResult::getCode()const
{
	return code_;
}

bool ListPrivacyNumberCallDetailsResult::getSuccess()const
{
	return success_;
}

