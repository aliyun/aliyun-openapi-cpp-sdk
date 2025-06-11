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

#include <alibabacloud/live/model/DescribeLiveMessageAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveMessageAppResult::DescribeLiveMessageAppResult() :
	ServiceResult()
{}

DescribeLiveMessageAppResult::DescribeLiveMessageAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveMessageAppResult::~DescribeLiveMessageAppResult()
{}

void DescribeLiveMessageAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AppId"].isNull())
		appId_ = value["AppId"].asString();
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();
	if(!value["AppKey"].isNull())
		appKey_ = value["AppKey"].asString();
	if(!value["AppSign"].isNull())
		appSign_ = value["AppSign"].asString();
	if(!value["AuditType"].isNull())
		auditType_ = std::stoi(value["AuditType"].asString());
	if(!value["AuditUrl"].isNull())
		auditUrl_ = value["AuditUrl"].asString();
	if(!value["EventCallbackUrl"].isNull())
		eventCallbackUrl_ = value["EventCallbackUrl"].asString();
	if(!value["CallbackUrl"].isNull())
		callbackUrl_ = value["CallbackUrl"].asString();
	if(!value["Disable"].isNull())
		disable_ = value["Disable"].asString() == "true";
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["ModifyTime"].isNull())
		modifyTime_ = std::stol(value["ModifyTime"].asString());
	if(!value["MsgLifeCycle"].isNull())
		msgLifeCycle_ = std::stoi(value["MsgLifeCycle"].asString());
	if(!value["StreamSupport"].isNull())
		streamSupport_ = std::stoi(value["StreamSupport"].asString());
	if(!value["RichTextSupport"].isNull())
		richTextSupport_ = std::stoi(value["RichTextSupport"].asString());
	if(!value["DataCenter"].isNull())
		dataCenter_ = value["DataCenter"].asString();

}

long DescribeLiveMessageAppResult::getModifyTime()const
{
	return modifyTime_;
}

int DescribeLiveMessageAppResult::getRichTextSupport()const
{
	return richTextSupport_;
}

int DescribeLiveMessageAppResult::getAuditType()const
{
	return auditType_;
}

long DescribeLiveMessageAppResult::getCreateTime()const
{
	return createTime_;
}

int DescribeLiveMessageAppResult::getMsgLifeCycle()const
{
	return msgLifeCycle_;
}

std::string DescribeLiveMessageAppResult::getEventCallbackUrl()const
{
	return eventCallbackUrl_;
}

int DescribeLiveMessageAppResult::getStreamSupport()const
{
	return streamSupport_;
}

std::string DescribeLiveMessageAppResult::getAppName()const
{
	return appName_;
}

std::string DescribeLiveMessageAppResult::getCallbackUrl()const
{
	return callbackUrl_;
}

std::string DescribeLiveMessageAppResult::getAuditUrl()const
{
	return auditUrl_;
}

std::string DescribeLiveMessageAppResult::getDataCenter()const
{
	return dataCenter_;
}

std::string DescribeLiveMessageAppResult::getAppId()const
{
	return appId_;
}

std::string DescribeLiveMessageAppResult::getAppKey()const
{
	return appKey_;
}

std::string DescribeLiveMessageAppResult::getAppSign()const
{
	return appSign_;
}

bool DescribeLiveMessageAppResult::getDisable()const
{
	return disable_;
}

