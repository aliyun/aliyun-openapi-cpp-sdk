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

#include <alibabacloud/dataworks-public/model/ListDataServiceAuthorizedApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServiceAuthorizedApisResult::ListDataServiceAuthorizedApisResult() :
	ServiceResult()
{}

ListDataServiceAuthorizedApisResult::ListDataServiceAuthorizedApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServiceAuthorizedApisResult::~ListDataServiceAuthorizedApisResult()
{}

void ListDataServiceAuthorizedApisResult::parse(const std::string &payload)
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
	auto allApiAuthorizedListNode = dataNode["ApiAuthorizedList"]["ApiAuthorized"];
	for (auto dataNodeApiAuthorizedListApiAuthorized : allApiAuthorizedListNode)
	{
		Data::ApiAuthorized apiAuthorizedObject;
		if(!dataNodeApiAuthorizedListApiAuthorized["ApiId"].isNull())
			apiAuthorizedObject.apiId = std::stol(dataNodeApiAuthorizedListApiAuthorized["ApiId"].asString());
		if(!dataNodeApiAuthorizedListApiAuthorized["ApiStatus"].isNull())
			apiAuthorizedObject.apiStatus = std::stoi(dataNodeApiAuthorizedListApiAuthorized["ApiStatus"].asString());
		if(!dataNodeApiAuthorizedListApiAuthorized["GrantOperatorId"].isNull())
			apiAuthorizedObject.grantOperatorId = dataNodeApiAuthorizedListApiAuthorized["GrantOperatorId"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["ProjectId"].isNull())
			apiAuthorizedObject.projectId = std::stol(dataNodeApiAuthorizedListApiAuthorized["ProjectId"].asString());
		if(!dataNodeApiAuthorizedListApiAuthorized["CreatorId"].isNull())
			apiAuthorizedObject.creatorId = dataNodeApiAuthorizedListApiAuthorized["CreatorId"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["GrantEndTime"].isNull())
			apiAuthorizedObject.grantEndTime = dataNodeApiAuthorizedListApiAuthorized["GrantEndTime"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["ModifiedTime"].isNull())
			apiAuthorizedObject.modifiedTime = dataNodeApiAuthorizedListApiAuthorized["ModifiedTime"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["GroupId"].isNull())
			apiAuthorizedObject.groupId = dataNodeApiAuthorizedListApiAuthorized["GroupId"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["GrantCreatedTime"].isNull())
			apiAuthorizedObject.grantCreatedTime = dataNodeApiAuthorizedListApiAuthorized["GrantCreatedTime"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["CreatedTime"].isNull())
			apiAuthorizedObject.createdTime = dataNodeApiAuthorizedListApiAuthorized["CreatedTime"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["ApiName"].isNull())
			apiAuthorizedObject.apiName = dataNodeApiAuthorizedListApiAuthorized["ApiName"].asString();
		if(!dataNodeApiAuthorizedListApiAuthorized["TenantId"].isNull())
			apiAuthorizedObject.tenantId = std::stol(dataNodeApiAuthorizedListApiAuthorized["TenantId"].asString());
		if(!dataNodeApiAuthorizedListApiAuthorized["ApiPath"].isNull())
			apiAuthorizedObject.apiPath = dataNodeApiAuthorizedListApiAuthorized["ApiPath"].asString();
		data_.apiAuthorizedList.push_back(apiAuthorizedObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int ListDataServiceAuthorizedApisResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListDataServiceAuthorizedApisResult::Data ListDataServiceAuthorizedApisResult::getData()const
{
	return data_;
}

std::string ListDataServiceAuthorizedApisResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataServiceAuthorizedApisResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataServiceAuthorizedApisResult::getSuccess()const
{
	return success_;
}

