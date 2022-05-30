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

#include <alibabacloud/dataworks-public/model/ListDataServiceApiAuthoritiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServiceApiAuthoritiesResult::ListDataServiceApiAuthoritiesResult() :
	ServiceResult()
{}

ListDataServiceApiAuthoritiesResult::ListDataServiceApiAuthoritiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServiceApiAuthoritiesResult::~ListDataServiceApiAuthoritiesResult()
{}

void ListDataServiceApiAuthoritiesResult::parse(const std::string &payload)
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
	auto allApiAuthorizationListNode = dataNode["ApiAuthorizationList"]["ApiAuthorization"];
	for (auto dataNodeApiAuthorizationListApiAuthorization : allApiAuthorizationListNode)
	{
		Data::ApiAuthorization apiAuthorizationObject;
		if(!dataNodeApiAuthorizationListApiAuthorization["ApiStatus"].isNull())
			apiAuthorizationObject.apiStatus = std::stoi(dataNodeApiAuthorizationListApiAuthorization["ApiStatus"].asString());
		if(!dataNodeApiAuthorizationListApiAuthorization["ApiId"].isNull())
			apiAuthorizationObject.apiId = std::stol(dataNodeApiAuthorizationListApiAuthorization["ApiId"].asString());
		if(!dataNodeApiAuthorizationListApiAuthorization["ModifiedTime"].isNull())
			apiAuthorizationObject.modifiedTime = dataNodeApiAuthorizationListApiAuthorization["ModifiedTime"].asString();
		if(!dataNodeApiAuthorizationListApiAuthorization["GroupId"].isNull())
			apiAuthorizationObject.groupId = dataNodeApiAuthorizationListApiAuthorization["GroupId"].asString();
		if(!dataNodeApiAuthorizationListApiAuthorization["ProjectId"].isNull())
			apiAuthorizationObject.projectId = std::stol(dataNodeApiAuthorizationListApiAuthorization["ProjectId"].asString());
		if(!dataNodeApiAuthorizationListApiAuthorization["CreatorId"].isNull())
			apiAuthorizationObject.creatorId = dataNodeApiAuthorizationListApiAuthorization["CreatorId"].asString();
		if(!dataNodeApiAuthorizationListApiAuthorization["CreatedTime"].isNull())
			apiAuthorizationObject.createdTime = dataNodeApiAuthorizationListApiAuthorization["CreatedTime"].asString();
		if(!dataNodeApiAuthorizationListApiAuthorization["ApiName"].isNull())
			apiAuthorizationObject.apiName = dataNodeApiAuthorizationListApiAuthorization["ApiName"].asString();
		if(!dataNodeApiAuthorizationListApiAuthorization["TenantId"].isNull())
			apiAuthorizationObject.tenantId = std::stol(dataNodeApiAuthorizationListApiAuthorization["TenantId"].asString());
		if(!dataNodeApiAuthorizationListApiAuthorization["ApiPath"].isNull())
			apiAuthorizationObject.apiPath = dataNodeApiAuthorizationListApiAuthorization["ApiPath"].asString();
		auto allAuthorizationRecordsNode = dataNodeApiAuthorizationListApiAuthorization["AuthorizationRecords"]["AuthorizationRecord"];
		for (auto dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord : allAuthorizationRecordsNode)
		{
			Data::ApiAuthorization::AuthorizationRecord authorizationRecordsObject;
			if(!dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["EndTime"].isNull())
				authorizationRecordsObject.endTime = dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["EndTime"].asString();
			if(!dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["CreatorId"].isNull())
				authorizationRecordsObject.creatorId = dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["CreatorId"].asString();
			if(!dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["CreatedTime"].isNull())
				authorizationRecordsObject.createdTime = dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["CreatedTime"].asString();
			if(!dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["ProjectId"].isNull())
				authorizationRecordsObject.projectId = std::stol(dataNodeApiAuthorizationListApiAuthorizationAuthorizationRecordsAuthorizationRecord["ProjectId"].asString());
			apiAuthorizationObject.authorizationRecords.push_back(authorizationRecordsObject);
		}
		data_.apiAuthorizationList.push_back(apiAuthorizationObject);
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

int ListDataServiceApiAuthoritiesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListDataServiceApiAuthoritiesResult::Data ListDataServiceApiAuthoritiesResult::getData()const
{
	return data_;
}

std::string ListDataServiceApiAuthoritiesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataServiceApiAuthoritiesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataServiceApiAuthoritiesResult::getSuccess()const
{
	return success_;
}

