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

#include <alibabacloud/eiam/model/ListApplicationTokensResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationTokensResult::ListApplicationTokensResult() :
	ServiceResult()
{}

ListApplicationTokensResult::ListApplicationTokensResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationTokensResult::~ListApplicationTokensResult()
{}

void ListApplicationTokensResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationTokensNode = value["ApplicationTokens"]["ApplicationToken"];
	for (auto valueApplicationTokensApplicationToken : allApplicationTokensNode)
	{
		ApplicationToken applicationTokensObject;
		if(!valueApplicationTokensApplicationToken["AliUid"].isNull())
			applicationTokensObject.aliUid = std::stol(valueApplicationTokensApplicationToken["AliUid"].asString());
		if(!valueApplicationTokensApplicationToken["InstanceId"].isNull())
			applicationTokensObject.instanceId = valueApplicationTokensApplicationToken["InstanceId"].asString();
		if(!valueApplicationTokensApplicationToken["ApplicationId"].isNull())
			applicationTokensObject.applicationId = valueApplicationTokensApplicationToken["ApplicationId"].asString();
		if(!valueApplicationTokensApplicationToken["ApplicationTokenId"].isNull())
			applicationTokensObject.applicationTokenId = valueApplicationTokensApplicationToken["ApplicationTokenId"].asString();
		if(!valueApplicationTokensApplicationToken["ApplicationTokenType"].isNull())
			applicationTokensObject.applicationTokenType = valueApplicationTokensApplicationToken["ApplicationTokenType"].asString();
		if(!valueApplicationTokensApplicationToken["ApplicationToken"].isNull())
			applicationTokensObject.applicationToken = valueApplicationTokensApplicationToken["ApplicationToken"].asString();
		if(!valueApplicationTokensApplicationToken["Status"].isNull())
			applicationTokensObject.status = valueApplicationTokensApplicationToken["Status"].asString();
		if(!valueApplicationTokensApplicationToken["Description"].isNull())
			applicationTokensObject.description = valueApplicationTokensApplicationToken["Description"].asString();
		if(!valueApplicationTokensApplicationToken["ExpirationTime"].isNull())
			applicationTokensObject.expirationTime = std::stol(valueApplicationTokensApplicationToken["ExpirationTime"].asString());
		if(!valueApplicationTokensApplicationToken["LastUsedTime"].isNull())
			applicationTokensObject.lastUsedTime = std::stol(valueApplicationTokensApplicationToken["LastUsedTime"].asString());
		if(!valueApplicationTokensApplicationToken["CreateTime"].isNull())
			applicationTokensObject.createTime = std::stol(valueApplicationTokensApplicationToken["CreateTime"].asString());
		applicationTokens_.push_back(applicationTokensObject);
	}

}

std::vector<ListApplicationTokensResult::ApplicationToken> ListApplicationTokensResult::getApplicationTokens()const
{
	return applicationTokens_;
}

