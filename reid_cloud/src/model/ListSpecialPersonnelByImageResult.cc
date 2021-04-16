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

#include <alibabacloud/reid_cloud/model/ListSpecialPersonnelByImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

ListSpecialPersonnelByImageResult::ListSpecialPersonnelByImageResult() :
	ServiceResult()
{}

ListSpecialPersonnelByImageResult::ListSpecialPersonnelByImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSpecialPersonnelByImageResult::~ListSpecialPersonnelByImageResult()
{}

void ListSpecialPersonnelByImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListPersonResultItemsNode = value["ListPersonResultItems"]["ListPersonResultItem"];
	for (auto valueListPersonResultItemsListPersonResultItem : allListPersonResultItemsNode)
	{
		ListPersonResultItem listPersonResultItemsObject;
		if(!valueListPersonResultItemsListPersonResultItem["Score"].isNull())
			listPersonResultItemsObject.score = std::stof(valueListPersonResultItemsListPersonResultItem["Score"].asString());
		if(!valueListPersonResultItemsListPersonResultItem["UkId"].isNull())
			listPersonResultItemsObject.ukId = std::stol(valueListPersonResultItemsListPersonResultItem["UkId"].asString());
		listPersonResultItems_.push_back(listPersonResultItemsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListSpecialPersonnelByImageResult::getMessage()const
{
	return message_;
}

std::string ListSpecialPersonnelByImageResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListSpecialPersonnelByImageResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListSpecialPersonnelByImageResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListSpecialPersonnelByImageResult::ListPersonResultItem> ListSpecialPersonnelByImageResult::getListPersonResultItems()const
{
	return listPersonResultItems_;
}

std::string ListSpecialPersonnelByImageResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListSpecialPersonnelByImageResult::getCode()const
{
	return code_;
}

bool ListSpecialPersonnelByImageResult::getSuccess()const
{
	return success_;
}

