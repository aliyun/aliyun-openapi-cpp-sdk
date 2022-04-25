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

#include <alibabacloud/dataworks-public/model/GetMetaTableListByCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableListByCategoryResult::GetMetaTableListByCategoryResult() :
	ServiceResult()
{}

GetMetaTableListByCategoryResult::GetMetaTableListByCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableListByCategoryResult::~GetMetaTableListByCategoryResult()
{}

void GetMetaTableListByCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
		auto allTableGuidList = dataNode["TableGuidList"]["TableGuidList"];
		for (auto value : allTableGuidList)
			data_.tableGuidList.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetMetaTableListByCategoryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableListByCategoryResult::Data GetMetaTableListByCategoryResult::getData()const
{
	return data_;
}

std::string GetMetaTableListByCategoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableListByCategoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableListByCategoryResult::getSuccess()const
{
	return success_;
}

