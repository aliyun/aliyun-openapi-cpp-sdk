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

#include <alibabacloud/nlb/model/UpdateServerGroupServersAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

UpdateServerGroupServersAttributeResult::UpdateServerGroupServersAttributeResult() :
	ServiceResult()
{}

UpdateServerGroupServersAttributeResult::UpdateServerGroupServersAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateServerGroupServersAttributeResult::~UpdateServerGroupServersAttributeResult()
{}

void UpdateServerGroupServersAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ServerGroupId"].isNull())
		serverGroupId_ = value["ServerGroupId"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();

}

std::string UpdateServerGroupServersAttributeResult::getMessage()const
{
	return message_;
}

int UpdateServerGroupServersAttributeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string UpdateServerGroupServersAttributeResult::getServerGroupId()const
{
	return serverGroupId_;
}

std::string UpdateServerGroupServersAttributeResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string UpdateServerGroupServersAttributeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string UpdateServerGroupServersAttributeResult::getCode()const
{
	return code_;
}

bool UpdateServerGroupServersAttributeResult::getSuccess()const
{
	return success_;
}

std::string UpdateServerGroupServersAttributeResult::getJobId()const
{
	return jobId_;
}

