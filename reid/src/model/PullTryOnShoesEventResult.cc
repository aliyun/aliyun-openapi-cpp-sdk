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

#include <alibabacloud/reid/model/PullTryOnShoesEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

PullTryOnShoesEventResult::PullTryOnShoesEventResult() :
	ServiceResult()
{}

PullTryOnShoesEventResult::PullTryOnShoesEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PullTryOnShoesEventResult::~PullTryOnShoesEventResult()
{}

void PullTryOnShoesEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["StartTs"].isNull())
		startTs_ = std::stol(value["StartTs"].asString());
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["TryOnShoesEventCount"].isNull())
		tryOnShoesEventCount_ = std::stoi(value["TryOnShoesEventCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["SkuId"].isNull())
		skuId_ = value["SkuId"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long PullTryOnShoesEventResult::getStartTs()const
{
	return startTs_;
}

std::string PullTryOnShoesEventResult::getMessage()const
{
	return message_;
}

int PullTryOnShoesEventResult::getPageSize()const
{
	return pageSize_;
}

std::string PullTryOnShoesEventResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string PullTryOnShoesEventResult::getCode()const
{
	return code_;
}

bool PullTryOnShoesEventResult::getSuccess()const
{
	return success_;
}

long PullTryOnShoesEventResult::getTotalCount()const
{
	return totalCount_;
}

long PullTryOnShoesEventResult::getStoreId()const
{
	return storeId_;
}

int PullTryOnShoesEventResult::getTryOnShoesEventCount()const
{
	return tryOnShoesEventCount_;
}

int PullTryOnShoesEventResult::getPageNumber()const
{
	return pageNumber_;
}

std::string PullTryOnShoesEventResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string PullTryOnShoesEventResult::getErrorCode()const
{
	return errorCode_;
}

std::string PullTryOnShoesEventResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string PullTryOnShoesEventResult::getSkuId()const
{
	return skuId_;
}

