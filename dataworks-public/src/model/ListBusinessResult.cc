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

#include <alibabacloud/dataworks-public/model/ListBusinessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListBusinessResult::ListBusinessResult() :
	ServiceResult()
{}

ListBusinessResult::ListBusinessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBusinessResult::~ListBusinessResult()
{}

void ListBusinessResult::parse(const std::string &payload)
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
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allBusinessNode = dataNode["Business"]["BusinessItem"];
	for (auto dataNodeBusinessBusinessItem : allBusinessNode)
	{
		Data::BusinessItem businessItemObject;
		if(!dataNodeBusinessBusinessItem["Owner"].isNull())
			businessItemObject.owner = dataNodeBusinessBusinessItem["Owner"].asString();
		if(!dataNodeBusinessBusinessItem["Description"].isNull())
			businessItemObject.description = dataNodeBusinessBusinessItem["Description"].asString();
		if(!dataNodeBusinessBusinessItem["ProjectId"].isNull())
			businessItemObject.projectId = std::stol(dataNodeBusinessBusinessItem["ProjectId"].asString());
		if(!dataNodeBusinessBusinessItem["BusinessId"].isNull())
			businessItemObject.businessId = std::stol(dataNodeBusinessBusinessItem["BusinessId"].asString());
		if(!dataNodeBusinessBusinessItem["BusinessName"].isNull())
			businessItemObject.businessName = dataNodeBusinessBusinessItem["BusinessName"].asString();
		if(!dataNodeBusinessBusinessItem["UseType"].isNull())
			businessItemObject.useType = dataNodeBusinessBusinessItem["UseType"].asString();
		data_.business.push_back(businessItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListBusinessResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListBusinessResult::Data ListBusinessResult::getData()const
{
	return data_;
}

std::string ListBusinessResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListBusinessResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListBusinessResult::getSuccess()const
{
	return success_;
}

