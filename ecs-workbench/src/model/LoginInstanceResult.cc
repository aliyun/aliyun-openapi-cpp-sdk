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

#include <alibabacloud/ecs-workbench/model/LoginInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs_workbench;
using namespace AlibabaCloud::Ecs_workbench::Model;

LoginInstanceResult::LoginInstanceResult() :
	ServiceResult()
{}

LoginInstanceResult::LoginInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LoginInstanceResult::~LoginInstanceResult()
{}

void LoginInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto rootNode = value["Root"];
	auto allInstanceLoginInfoListNode = rootNode["InstanceLoginInfoList"]["instanceLoginInfoListItem"];
	for (auto rootNodeInstanceLoginInfoListinstanceLoginInfoListItem : allInstanceLoginInfoListNode)
	{
		Root::InstanceLoginInfoListItem instanceLoginInfoListItemObject;
		if(!rootNodeInstanceLoginInfoListinstanceLoginInfoListItem["InstanceId"].isNull())
			instanceLoginInfoListItemObject.instanceId = rootNodeInstanceLoginInfoListinstanceLoginInfoListItem["InstanceId"].asString();
		if(!rootNodeInstanceLoginInfoListinstanceLoginInfoListItem["InstanceLoginToken"].isNull())
			instanceLoginInfoListItemObject.instanceLoginToken = rootNodeInstanceLoginInfoListinstanceLoginInfoListItem["InstanceLoginToken"].asString();
		if(!rootNodeInstanceLoginInfoListinstanceLoginInfoListItem["LoginSuccess"].isNull())
			instanceLoginInfoListItemObject.loginSuccess = rootNodeInstanceLoginInfoListinstanceLoginInfoListItem["LoginSuccess"].asString() == "true";
		auto instanceLoginViewNode = value["InstanceLoginView"];
		if(!instanceLoginViewNode["DefaultViewUrl"].isNull())
			instanceLoginInfoListItemObject.instanceLoginView.defaultViewUrl = instanceLoginViewNode["DefaultViewUrl"].asString();
		root_.instanceLoginInfoList.push_back(instanceLoginInfoListItemObject);
	}
	auto disposableAccountNode = rootNode["DisposableAccount"];
	if(!disposableAccountNode["LoginUrl"].isNull())
		root_.disposableAccount.loginUrl = disposableAccountNode["LoginUrl"].asString();
	if(!disposableAccountNode["LoginFormActionUrl"].isNull())
		root_.disposableAccount.loginFormActionUrl = disposableAccountNode["LoginFormActionUrl"].asString();
	auto sessionControlNode = rootNode["SessionControl"];
	if(!sessionControlNode["BaseUrl"].isNull())
		root_.sessionControl.baseUrl = sessionControlNode["BaseUrl"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

LoginInstanceResult::Root LoginInstanceResult::getRoot()const
{
	return root_;
}

std::string LoginInstanceResult::getMessage()const
{
	return message_;
}

std::string LoginInstanceResult::getCode()const
{
	return code_;
}

std::string LoginInstanceResult::getSuccess()const
{
	return success_;
}

