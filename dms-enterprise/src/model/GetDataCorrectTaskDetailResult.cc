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

#include <alibabacloud/dms-enterprise/model/GetDataCorrectTaskDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataCorrectTaskDetailResult::GetDataCorrectTaskDetailResult() :
	ServiceResult()
{}

GetDataCorrectTaskDetailResult::GetDataCorrectTaskDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataCorrectTaskDetailResult::~GetDataCorrectTaskDetailResult()
{}

void GetDataCorrectTaskDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataCorrectTaskDetailNode = value["DataCorrectTaskDetail"];
	if(!dataCorrectTaskDetailNode["DBTaskGroupId"].isNull())
		dataCorrectTaskDetail_.dBTaskGroupId = std::stol(dataCorrectTaskDetailNode["DBTaskGroupId"].asString());
	if(!dataCorrectTaskDetailNode["jobStatus"].isNull())
		dataCorrectTaskDetail_.jobStatus = dataCorrectTaskDetailNode["jobStatus"].asString();
	if(!dataCorrectTaskDetailNode["ActualAffectRows"].isNull())
		dataCorrectTaskDetail_.actualAffectRows = std::stol(dataCorrectTaskDetailNode["ActualAffectRows"].asString());
	if(!dataCorrectTaskDetailNode["CreateTime"].isNull())
		dataCorrectTaskDetail_.createTime = dataCorrectTaskDetailNode["CreateTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetDataCorrectTaskDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataCorrectTaskDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataCorrectTaskDetailResult::getSuccess()const
{
	return success_;
}

GetDataCorrectTaskDetailResult::DataCorrectTaskDetail GetDataCorrectTaskDetailResult::getDataCorrectTaskDetail()const
{
	return dataCorrectTaskDetail_;
}

