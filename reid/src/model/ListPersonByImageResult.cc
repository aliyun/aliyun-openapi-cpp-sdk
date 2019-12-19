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

#include <alibabacloud/reid/model/ListPersonByImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

ListPersonByImageResult::ListPersonByImageResult() :
	ServiceResult()
{}

ListPersonByImageResult::ListPersonByImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonByImageResult::~ListPersonByImageResult()
{}

void ListPersonByImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPersonSearchResultItemsNode = value["PersonSearchResultItems"]["PersonSearchResultItem"];
	for (auto valuePersonSearchResultItemsPersonSearchResultItem : allPersonSearchResultItemsNode)
	{
		PersonSearchResultItem personSearchResultItemsObject;
		if(!valuePersonSearchResultItemsPersonSearchResultItem["UkId"].isNull())
			personSearchResultItemsObject.ukId = std::stol(valuePersonSearchResultItemsPersonSearchResultItem["UkId"].asString());
		if(!valuePersonSearchResultItemsPersonSearchResultItem["Score"].isNull())
			personSearchResultItemsObject.score = std::stof(valuePersonSearchResultItemsPersonSearchResultItem["Score"].asString());
		personSearchResultItems_.push_back(personSearchResultItemsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListPersonByImageResult::PersonSearchResultItem> ListPersonByImageResult::getPersonSearchResultItems()const
{
	return personSearchResultItems_;
}

std::string ListPersonByImageResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPersonByImageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPersonByImageResult::getSuccess()const
{
	return success_;
}

