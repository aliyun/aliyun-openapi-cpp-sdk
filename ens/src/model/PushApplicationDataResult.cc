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

#include <alibabacloud/ens/model/PushApplicationDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

PushApplicationDataResult::PushApplicationDataResult() :
	ServiceResult()
{}

PushApplicationDataResult::PushApplicationDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PushApplicationDataResult::~PushApplicationDataResult()
{}

void PushApplicationDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushResultsNode = value["PushResults"]["PushResult"];
	for (auto valuePushResultsPushResult : allPushResultsNode)
	{
		PushResult pushResultsObject;
		if(!valuePushResultsPushResult["Name"].isNull())
			pushResultsObject.name = valuePushResultsPushResult["Name"].asString();
		if(!valuePushResultsPushResult["ResultCode"].isNull())
			pushResultsObject.resultCode = std::stoi(valuePushResultsPushResult["ResultCode"].asString());
		if(!valuePushResultsPushResult["ResultDescrip"].isNull())
			pushResultsObject.resultDescrip = valuePushResultsPushResult["ResultDescrip"].asString();
		if(!valuePushResultsPushResult["Version"].isNull())
			pushResultsObject.version = valuePushResultsPushResult["Version"].asString();
		pushResults_.push_back(pushResultsObject);
	}

}

std::vector<PushApplicationDataResult::PushResult> PushApplicationDataResult::getPushResults()const
{
	return pushResults_;
}

