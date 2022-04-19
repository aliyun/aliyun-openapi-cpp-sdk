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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pushTaskRspNode = value["PushTaskRsp"];
	auto allPushTaskResultListNode = pushTaskRspNode["PushTaskResultList"]["pushTaskResult"];
	for (auto pushTaskRspNodePushTaskResultListpushTaskResult : allPushTaskResultListNode)
	{
		PushTaskRsp::PushTaskResult pushTaskResultObject;
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["Uuid"].isNull())
			pushTaskResultObject.uuid = pushTaskRspNodePushTaskResultListpushTaskResult["Uuid"].asString();
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["GroupId"].isNull())
			pushTaskResultObject.groupId = std::stol(pushTaskRspNodePushTaskResultListpushTaskResult["GroupId"].asString());
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["Success"].isNull())
			pushTaskResultObject.success = pushTaskRspNodePushTaskResultListpushTaskResult["Success"].asString() == "true";
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["Region"].isNull())
			pushTaskResultObject.region = pushTaskRspNodePushTaskResultListpushTaskResult["Region"].asString();
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["InstanceName"].isNull())
			pushTaskResultObject.instanceName = pushTaskRspNodePushTaskResultListpushTaskResult["InstanceName"].asString();
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["Online"].isNull())
			pushTaskResultObject.online = pushTaskRspNodePushTaskResultListpushTaskResult["Online"].asString() == "true";
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["Message"].isNull())
			pushTaskResultObject.message = pushTaskRspNodePushTaskResultListpushTaskResult["Message"].asString();
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["Ip"].isNull())
			pushTaskResultObject.ip = pushTaskRspNodePushTaskResultListpushTaskResult["Ip"].asString();
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["OsVersion"].isNull())
			pushTaskResultObject.osVersion = pushTaskRspNodePushTaskResultListpushTaskResult["OsVersion"].asString();
		if(!pushTaskRspNodePushTaskResultListpushTaskResult["InstanceId"].isNull())
			pushTaskResultObject.instanceId = pushTaskRspNodePushTaskResultListpushTaskResult["InstanceId"].asString();
		pushTaskRsp_.pushTaskResultList.push_back(pushTaskResultObject);
	}

}

ModifyPushAllTaskResult::PushTaskRsp ModifyPushAllTaskResult::getPushTaskRsp()const
{
	return pushTaskRsp_;
}

