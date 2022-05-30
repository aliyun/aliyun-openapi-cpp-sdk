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

#include <alibabacloud/dataworks-public/model/ListDataServiceApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServiceApplicationsResult::ListDataServiceApplicationsResult() :
	ServiceResult()
{}

ListDataServiceApplicationsResult::ListDataServiceApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServiceApplicationsResult::~ListDataServiceApplicationsResult()
{}

void ListDataServiceApplicationsResult::parse(const std::string &payload)
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
	auto allApplicationsNode = dataNode["Applications"]["Application"];
	for (auto dataNodeApplicationsApplication : allApplicationsNode)
	{
		Data::Application applicationObject;
		if(!dataNodeApplicationsApplication["ApplicationName"].isNull())
			applicationObject.applicationName = dataNodeApplicationsApplication["ApplicationName"].asString();
		if(!dataNodeApplicationsApplication["ApplicationId"].isNull())
			applicationObject.applicationId = std::stol(dataNodeApplicationsApplication["ApplicationId"].asString());
		if(!dataNodeApplicationsApplication["ProjectId"].isNull())
			applicationObject.projectId = std::stol(dataNodeApplicationsApplication["ProjectId"].asString());
		data_.applications.push_back(applicationObject);
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

int ListDataServiceApplicationsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListDataServiceApplicationsResult::Data ListDataServiceApplicationsResult::getData()const
{
	return data_;
}

std::string ListDataServiceApplicationsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataServiceApplicationsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataServiceApplicationsResult::getSuccess()const
{
	return success_;
}

