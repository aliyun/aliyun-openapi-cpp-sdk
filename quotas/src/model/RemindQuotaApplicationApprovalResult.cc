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

#include <alibabacloud/quotas/model/RemindQuotaApplicationApprovalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

RemindQuotaApplicationApprovalResult::RemindQuotaApplicationApprovalResult() :
	ServiceResult()
{}

RemindQuotaApplicationApprovalResult::RemindQuotaApplicationApprovalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemindQuotaApplicationApprovalResult::~RemindQuotaApplicationApprovalResult()
{}

void RemindQuotaApplicationApprovalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";

}

bool RemindQuotaApplicationApprovalResult::getAllowRetry()const
{
	return allowRetry_;
}

std::vector<std::string> RemindQuotaApplicationApprovalResult::getErrorArgs()const
{
	return errorArgs_;
}

int RemindQuotaApplicationApprovalResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string RemindQuotaApplicationApprovalResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string RemindQuotaApplicationApprovalResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string RemindQuotaApplicationApprovalResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string RemindQuotaApplicationApprovalResult::getErrorCode()const
{
	return errorCode_;
}

std::string RemindQuotaApplicationApprovalResult::getModule()const
{
	return module_;
}

bool RemindQuotaApplicationApprovalResult::getSuccess()const
{
	return success_;
}

