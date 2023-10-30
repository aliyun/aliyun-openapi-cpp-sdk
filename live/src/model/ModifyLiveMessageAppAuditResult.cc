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

#include <alibabacloud/live/model/ModifyLiveMessageAppAuditResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ModifyLiveMessageAppAuditResult::ModifyLiveMessageAppAuditResult() :
	ServiceResult()
{}

ModifyLiveMessageAppAuditResult::ModifyLiveMessageAppAuditResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyLiveMessageAppAuditResult::~ModifyLiveMessageAppAuditResult()
{}

void ModifyLiveMessageAppAuditResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AppId"].isNull())
		appId_ = value["AppId"].asString();
	if(!value["AppSign"].isNull())
		appSign_ = value["AppSign"].asString();
	if(!value["AuditType"].isNull())
		auditType_ = std::stoi(value["AuditType"].asString());
	if(!value["AuditUrl"].isNull())
		auditUrl_ = value["AuditUrl"].asString();
	if(!value["AuditNeedAuthentication"].isNull())
		auditNeedAuthentication_ = value["AuditNeedAuthentication"].asString() == "true";

}

std::string ModifyLiveMessageAppAuditResult::getAuditUrl()const
{
	return auditUrl_;
}

std::string ModifyLiveMessageAppAuditResult::getAppId()const
{
	return appId_;
}

int ModifyLiveMessageAppAuditResult::getAuditType()const
{
	return auditType_;
}

bool ModifyLiveMessageAppAuditResult::getAuditNeedAuthentication()const
{
	return auditNeedAuthentication_;
}

std::string ModifyLiveMessageAppAuditResult::getAppSign()const
{
	return appSign_;
}

