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

#include <alibabacloud/es-serverless/model/GetAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Es_serverless;
using namespace AlibabaCloud::Es_serverless::Model;

GetAppResult::GetAppResult() :
	ServiceResult()
{}

GetAppResult::GetAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppResult::~GetAppResult()
{}

void GetAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["appName"].isNull())
		result_.appName = resultNode["appName"].asString();
	if(!resultNode["storageQuota"].isNull())
		result_.storageQuota = resultNode["storageQuota"].asString();
	if(!resultNode["ownerId"].isNull())
		result_.ownerId = resultNode["ownerId"].asString();
	if(!resultNode["regionId"].isNull())
		result_.regionId = resultNode["regionId"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["createTime"].isNull())
		result_.createTime = resultNode["createTime"].asString();
	if(!resultNode["flowQuota"].isNull())
		result_.flowQuota = resultNode["flowQuota"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetAppResult::getRequestId()const
{
	return requestId_;
}

GetAppResult::Result GetAppResult::getResult()const
{
	return result_;
}

