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

#include <alibabacloud/ccc/model/GetConversationDetailByContactIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetConversationDetailByContactIdResult::GetConversationDetailByContactIdResult() :
	ServiceResult()
{}

GetConversationDetailByContactIdResult::GetConversationDetailByContactIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConversationDetailByContactIdResult::~GetConversationDetailByContactIdResult()
{}

void GetConversationDetailByContactIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataListNode = value["DataList"];
	if(!dataListNode["TotalCount"].isNull())
		dataList_.totalCount = std::stoi(dataListNode["TotalCount"].asString());
	if(!dataListNode["PageNumber"].isNull())
		dataList_.pageNumber = std::stoi(dataListNode["PageNumber"].asString());
	if(!dataListNode["PageSize"].isNull())
		dataList_.pageSize = std::stoi(dataListNode["PageSize"].asString());
	auto allListNode = dataListNode["List"]["QualityCheckPhrase"];
	for (auto dataListNodeListQualityCheckPhrase : allListNode)
	{
		DataList::QualityCheckPhrase qualityCheckPhraseObject;
		if(!dataListNodeListQualityCheckPhrase["Identity"].isNull())
			qualityCheckPhraseObject.identity = dataListNodeListQualityCheckPhrase["Identity"].asString();
		if(!dataListNodeListQualityCheckPhrase["Role"].isNull())
			qualityCheckPhraseObject.role = dataListNodeListQualityCheckPhrase["Role"].asString();
		if(!dataListNodeListQualityCheckPhrase["Words"].isNull())
			qualityCheckPhraseObject.words = dataListNodeListQualityCheckPhrase["Words"].asString();
		if(!dataListNodeListQualityCheckPhrase["Begin"].isNull())
			qualityCheckPhraseObject.begin = std::stol(dataListNodeListQualityCheckPhrase["Begin"].asString());
		if(!dataListNodeListQualityCheckPhrase["End"].isNull())
			qualityCheckPhraseObject.end = std::stol(dataListNodeListQualityCheckPhrase["End"].asString());
		dataList_.list.push_back(qualityCheckPhraseObject);
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

GetConversationDetailByContactIdResult::DataList GetConversationDetailByContactIdResult::getDataList()const
{
	return dataList_;
}

std::string GetConversationDetailByContactIdResult::getMessage()const
{
	return message_;
}

int GetConversationDetailByContactIdResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetConversationDetailByContactIdResult::getCode()const
{
	return code_;
}

bool GetConversationDetailByContactIdResult::getSuccess()const
{
	return success_;
}

