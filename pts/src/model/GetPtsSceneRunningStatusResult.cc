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

#include <alibabacloud/pts/model/GetPtsSceneRunningStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetPtsSceneRunningStatusResult::GetPtsSceneRunningStatusResult() :
	ServiceResult()
{}

GetPtsSceneRunningStatusResult::GetPtsSceneRunningStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPtsSceneRunningStatusResult::~GetPtsSceneRunningStatusResult()
{}

void GetPtsSceneRunningStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["SceneName"].isNull())
		sceneName_ = value["SceneName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetPtsSceneRunningStatusResult::getStatus()const
{
	return status_;
}

std::string GetPtsSceneRunningStatusResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::string GetPtsSceneRunningStatusResult::getMessage()const
{
	return message_;
}

std::string GetPtsSceneRunningStatusResult::getSceneName()const
{
	return sceneName_;
}

std::string GetPtsSceneRunningStatusResult::getCreateTime()const
{
	return createTime_;
}

int GetPtsSceneRunningStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetPtsSceneRunningStatusResult::getCode()const
{
	return code_;
}

bool GetPtsSceneRunningStatusResult::getSuccess()const
{
	return success_;
}

