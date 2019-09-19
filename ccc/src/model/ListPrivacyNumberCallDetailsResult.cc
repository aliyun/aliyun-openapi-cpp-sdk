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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto privacyNumberCallDetailsNode = value["PrivacyNumberCallDetails"];
	if(!privacyNumberCallDetailsNode["TotalCount"].isNull())
		privacyNumberCallDetails_.totalCount = std::stoi(privacyNumberCallDetailsNode["TotalCount"].asString());
	if(!privacyNumberCallDetailsNode["PageNumber"].isNull())
		privacyNumberCallDetails_.pageNumber = std::stoi(privacyNumberCallDetailsNode["PageNumber"].asString());
	if(!privacyNumberCallDetailsNode["PageSize"].isNull())
		privacyNumberCallDetails_.pageSize = std::stoi(privacyNumberCallDetailsNode["PageSize"].asString());
	auto allListNode = privacyNumberCallDetailsNode["List"]["PrivacyNumberCallDetail"];
	for (auto privacyNumberCallDetailsNodeListPrivacyNumberCallDetail : allListNode)
	{
		PrivacyNumberCallDetails::PrivacyNumberCallDetail privacyNumberCallDetailObject;
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["AgentId"].isNull())
			privacyNumberCallDetailObject.agentId = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["AgentId"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["AgentName"].isNull())
			privacyNumberCallDetailObject.agentName = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["AgentName"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["ContactId"].isNull())
			privacyNumberCallDetailObject.contactId = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["ContactId"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["CallingNumber"].isNull())
			privacyNumberCallDetailObject.callingNumber = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["CallingNumber"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["CalledNumber"].isNull())
			privacyNumberCallDetailObject.calledNumber = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["CalledNumber"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["PrivacyNumber"].isNull())
			privacyNumberCallDetailObject.privacyNumber = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["PrivacyNumber"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["ContactType"].isNull())
			privacyNumberCallDetailObject.contactType = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["ContactType"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["Result"].isNull())
			privacyNumberCallDetailObject.result = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["Result"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["Description"].isNull())
			privacyNumberCallDetailObject.description = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["Description"].asString();
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["CallTime"].isNull())
			privacyNumberCallDetailObject.callTime = std::stol(privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["CallTime"].asString());
		if(!privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["Status"].isNull())
			privacyNumberCallDetailObject.status = privacyNumberCallDetailsNodeListPrivacyNumberCallDetail["Status"].asString();
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

