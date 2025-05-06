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

#include <alibabacloud/itag/model/ProxyRobotServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ProxyRobotServiceResult::ProxyRobotServiceResult() :
	ServiceResult()
{}

ProxyRobotServiceResult::ProxyRobotServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ProxyRobotServiceResult::~ProxyRobotServiceResult()
{}

void ProxyRobotServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Succ"].isNull())
		result_.succ = resultNode["Succ"].asString() == "true";
	if(!resultNode["Data"].isNull())
		result_.data = resultNode["Data"].asString();
	if(!resultNode["Msg"].isNull())
		result_.msg = resultNode["Msg"].asString();
	if(!resultNode["RobotCode"].isNull())
		result_.robotCode = resultNode["RobotCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ProxyRobotServiceResult::getMsg()const
{
	return msg_;
}

bool ProxyRobotServiceResult::getSucc()const
{
	return succ_;
}

std::string ProxyRobotServiceResult::getErrorCode()const
{
	return errorCode_;
}

std::string ProxyRobotServiceResult::getErrInfo()const
{
	return errInfo_;
}

std::string ProxyRobotServiceResult::getCode()const
{
	return code_;
}

ProxyRobotServiceResult::Result ProxyRobotServiceResult::getResult()const
{
	return result_;
}

