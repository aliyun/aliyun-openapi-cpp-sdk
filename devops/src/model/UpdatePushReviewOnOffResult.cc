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

#include <alibabacloud/devops/model/UpdatePushReviewOnOffResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdatePushReviewOnOffResult::UpdatePushReviewOnOffResult() :
	ServiceResult()
{}

UpdatePushReviewOnOffResult::UpdatePushReviewOnOffResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdatePushReviewOnOffResult::~UpdatePushReviewOnOffResult()
{}

void UpdatePushReviewOnOffResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["result"].isNull())
		result_.result = resultNode["result"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string UpdatePushReviewOnOffResult::getRequestId()const
{
	return requestId_;
}

std::string UpdatePushReviewOnOffResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdatePushReviewOnOffResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdatePushReviewOnOffResult::getSuccess()const
{
	return success_;
}

UpdatePushReviewOnOffResult::Result UpdatePushReviewOnOffResult::getResult()const
{
	return result_;
}

