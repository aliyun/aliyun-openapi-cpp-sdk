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

#include <alibabacloud/sas/model/ModifyPushAllTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ModifyPushAllTaskResult::ModifyPushAllTaskResult() :
	ServiceResult()
{}

ModifyPushAllTaskResult::ModifyPushAllTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyPushAllTaskResult::~ModifyPushAllTaskResult()
{}

void ModifyPushAllTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto pushTaskRspNode = value["PushTaskRsp"];
	auto allPushTaskResultList = value["PushTaskResultList"]["pushTaskResult"];
	for (auto value : allPushTaskResultList)
	{
		PushTaskRsp::PushTaskResult pushTaskResultObject;
		if(!value["InstanceId"].isNull())
			pushTaskResultObject.instanceId = value["InstanceId"].asString();
		if(!value["OsVersion"].isNull())
			pushTaskResultObject.osVersion = value["OsVersion"].asString();
		if(!value["InstanceName"].isNull())
			pushTaskResultObject.instanceName = value["InstanceName"].asString();
		if(!value["Success"].isNull())
			pushTaskResultObject.success = value["Success"].asString() == "true";
		if(!value["GroupId"].isNull())
			pushTaskResultObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Ip"].isNull())
			pushTaskResultObject.ip = value["Ip"].asString();
		if(!value["Online"].isNull())
			pushTaskResultObject.online = value["Online"].asString() == "true";
		if(!value["Message"].isNull())
			pushTaskResultObject.message = value["Message"].asString();
		if(!value["Region"].isNull())
			pushTaskResultObject.region = value["Region"].asString();
		if(!value["Uuid"].isNull())
			pushTaskResultObject.uuid = value["Uuid"].asString();
		pushTaskRsp_.pushTaskResultList.push_back(pushTaskResultObject);
	}

}

ModifyPushAllTaskResult::PushTaskRsp ModifyPushAllTaskResult::getPushTaskRsp()const
{
	return pushTaskRsp_;
}

