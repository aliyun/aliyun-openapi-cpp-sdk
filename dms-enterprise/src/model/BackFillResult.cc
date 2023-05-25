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

#include <alibabacloud/dms-enterprise/model/BackFillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

BackFillResult::BackFillResult() :
	ServiceResult()
{}

BackFillResult::BackFillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BackFillResult::~BackFillResult()
{}

void BackFillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DagInstanceId"].isNull())
		dagInstanceId_ = std::stol(value["DagInstanceId"].asString());
	if(!value["NodeId"].isNull())
		nodeId_ = std::stol(value["NodeId"].asString());

}

long BackFillResult::getNodeId()const
{
	return nodeId_;
}

std::string BackFillResult::getErrorCode()const
{
	return errorCode_;
}

std::string BackFillResult::getErrorMessage()const
{
	return errorMessage_;
}

long BackFillResult::getDagInstanceId()const
{
	return dagInstanceId_;
}

bool BackFillResult::getSuccess()const
{
	return success_;
}

