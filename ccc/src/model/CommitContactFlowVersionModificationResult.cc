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

#include <alibabacloud/ccc/model/CommitContactFlowVersionModificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CommitContactFlowVersionModificationResult::CommitContactFlowVersionModificationResult() :
	ServiceResult()
{}

CommitContactFlowVersionModificationResult::CommitContactFlowVersionModificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CommitContactFlowVersionModificationResult::~CommitContactFlowVersionModificationResult()
{}

void CommitContactFlowVersionModificationResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto contactFlowVersionNode = value["ContactFlowVersion"];
	if(!contactFlowVersionNode["ContactFlowVersionId"].isNull())
		contactFlowVersion_.contactFlowVersionId = contactFlowVersionNode["ContactFlowVersionId"].asString();
	if(!contactFlowVersionNode["Version"].isNull())
		contactFlowVersion_.version = contactFlowVersionNode["Version"].asString();
	if(!contactFlowVersionNode["ContactFlowVersionDescription"].isNull())
		contactFlowVersion_.contactFlowVersionDescription = contactFlowVersionNode["ContactFlowVersionDescription"].asString();
	if(!contactFlowVersionNode["Canvas"].isNull())
		contactFlowVersion_.canvas = contactFlowVersionNode["Canvas"].asString();
	if(!contactFlowVersionNode["Content"].isNull())
		contactFlowVersion_.content = contactFlowVersionNode["Content"].asString();
	if(!contactFlowVersionNode["LastModified"].isNull())
		contactFlowVersion_.lastModified = contactFlowVersionNode["LastModified"].asString();
	if(!contactFlowVersionNode["LastModifiedBy"].isNull())
		contactFlowVersion_.lastModifiedBy = contactFlowVersionNode["LastModifiedBy"].asString();
	if(!contactFlowVersionNode["LockedBy"].isNull())
		contactFlowVersion_.lockedBy = contactFlowVersionNode["LockedBy"].asString();
	if(!contactFlowVersionNode["Status"].isNull())
		contactFlowVersion_.status = contactFlowVersionNode["Status"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CommitContactFlowVersionModificationResult::getMessage()const
{
	return message_;
}

CommitContactFlowVersionModificationResult::ContactFlowVersion CommitContactFlowVersionModificationResult::getContactFlowVersion()const
{
	return contactFlowVersion_;
}

int CommitContactFlowVersionModificationResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CommitContactFlowVersionModificationResult::getCode()const
{
	return code_;
}

bool CommitContactFlowVersionModificationResult::getSuccess()const
{
	return success_;
}

