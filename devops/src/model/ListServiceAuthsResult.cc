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

#include <alibabacloud/devops/model/ListServiceAuthsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListServiceAuthsResult::ListServiceAuthsResult() :
	ServiceResult()
{}

ListServiceAuthsResult::ListServiceAuthsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceAuthsResult::~ListServiceAuthsResult()
{}

void ListServiceAuthsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allserviceAuthsNode = value["serviceAuths"]["ServiceAuth"];
	for (auto valueserviceAuthsServiceAuth : allserviceAuthsNode)
	{
		ServiceAuth serviceAuthsObject;
		if(!valueserviceAuthsServiceAuth["id"].isNull())
			serviceAuthsObject.id = std::stol(valueserviceAuthsServiceAuth["id"].asString());
		if(!valueserviceAuthsServiceAuth["ownerName"].isNull())
			serviceAuthsObject.ownerName = valueserviceAuthsServiceAuth["ownerName"].asString();
		if(!valueserviceAuthsServiceAuth["type"].isNull())
			serviceAuthsObject.type = valueserviceAuthsServiceAuth["type"].asString();
		if(!valueserviceAuthsServiceAuth["ownerStaffId"].isNull())
			serviceAuthsObject.ownerStaffId = valueserviceAuthsServiceAuth["ownerStaffId"].asString();
		serviceAuths_.push_back(serviceAuthsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListServiceAuthsResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListServiceAuthsResult::ServiceAuth> ListServiceAuthsResult::getserviceAuths()const
{
	return serviceAuths_;
}

std::string ListServiceAuthsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListServiceAuthsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListServiceAuthsResult::getSuccess()const
{
	return success_;
}

