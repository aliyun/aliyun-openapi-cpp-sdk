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

#include <alibabacloud/devops/model/ListServiceConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListServiceConnectionsResult::ListServiceConnectionsResult() :
	ServiceResult()
{}

ListServiceConnectionsResult::ListServiceConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceConnectionsResult::~ListServiceConnectionsResult()
{}

void ListServiceConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allserviceConnectionsNode = value["serviceConnections"]["ServiceConnection"];
	for (auto valueserviceConnectionsServiceConnection : allserviceConnectionsNode)
	{
		ServiceConnection serviceConnectionsObject;
		if(!valueserviceConnectionsServiceConnection["ownerAccountId"].isNull())
			serviceConnectionsObject.ownerAccountId = std::stol(valueserviceConnectionsServiceConnection["ownerAccountId"].asString());
		if(!valueserviceConnectionsServiceConnection["name"].isNull())
			serviceConnectionsObject.name = valueserviceConnectionsServiceConnection["name"].asString();
		if(!valueserviceConnectionsServiceConnection["id"].isNull())
			serviceConnectionsObject.id = std::stol(valueserviceConnectionsServiceConnection["id"].asString());
		if(!valueserviceConnectionsServiceConnection["type"].isNull())
			serviceConnectionsObject.type = valueserviceConnectionsServiceConnection["type"].asString();
		if(!valueserviceConnectionsServiceConnection["createTime"].isNull())
			serviceConnectionsObject.createTime = std::stol(valueserviceConnectionsServiceConnection["createTime"].asString());
		if(!valueserviceConnectionsServiceConnection["uuid"].isNull())
			serviceConnectionsObject.uuid = valueserviceConnectionsServiceConnection["uuid"].asString();
		serviceConnections_.push_back(serviceConnectionsObject);
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

std::vector<ListServiceConnectionsResult::ServiceConnection> ListServiceConnectionsResult::getserviceConnections()const
{
	return serviceConnections_;
}

std::string ListServiceConnectionsResult::getRequestId()const
{
	return requestId_;
}

std::string ListServiceConnectionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListServiceConnectionsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListServiceConnectionsResult::getSuccess()const
{
	return success_;
}

