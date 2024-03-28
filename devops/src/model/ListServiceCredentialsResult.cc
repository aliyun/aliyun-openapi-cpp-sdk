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

#include <alibabacloud/devops/model/ListServiceCredentialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListServiceCredentialsResult::ListServiceCredentialsResult() :
	ServiceResult()
{}

ListServiceCredentialsResult::ListServiceCredentialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceCredentialsResult::~ListServiceCredentialsResult()
{}

void ListServiceCredentialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allserviceCredentialsNode = value["serviceCredentials"]["ServiceCredential"];
	for (auto valueserviceCredentialsServiceCredential : allserviceCredentialsNode)
	{
		ServiceCredential serviceCredentialsObject;
		if(!valueserviceCredentialsServiceCredential["id"].isNull())
			serviceCredentialsObject.id = std::stol(valueserviceCredentialsServiceCredential["id"].asString());
		if(!valueserviceCredentialsServiceCredential["ownerName"].isNull())
			serviceCredentialsObject.ownerName = valueserviceCredentialsServiceCredential["ownerName"].asString();
		if(!valueserviceCredentialsServiceCredential["type"].isNull())
			serviceCredentialsObject.type = valueserviceCredentialsServiceCredential["type"].asString();
		if(!valueserviceCredentialsServiceCredential["ownerStaffId"].isNull())
			serviceCredentialsObject.ownerStaffId = valueserviceCredentialsServiceCredential["ownerStaffId"].asString();
		serviceCredentials_.push_back(serviceCredentialsObject);
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

std::string ListServiceCredentialsResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListServiceCredentialsResult::ServiceCredential> ListServiceCredentialsResult::getserviceCredentials()const
{
	return serviceCredentials_;
}

std::string ListServiceCredentialsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListServiceCredentialsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListServiceCredentialsResult::getSuccess()const
{
	return success_;
}

