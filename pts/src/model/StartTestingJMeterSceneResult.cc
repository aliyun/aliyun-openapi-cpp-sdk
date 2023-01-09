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

#include <alibabacloud/pts/model/StartTestingJMeterSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

StartTestingJMeterSceneResult::StartTestingJMeterSceneResult() :
	ServiceResult()
{}

StartTestingJMeterSceneResult::StartTestingJMeterSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartTestingJMeterSceneResult::~StartTestingJMeterSceneResult()
{}

void StartTestingJMeterSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ReportId"].isNull())
		reportId_ = value["ReportId"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string StartTestingJMeterSceneResult::getMessage()const
{
	return message_;
}

int StartTestingJMeterSceneResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string StartTestingJMeterSceneResult::getReportId()const
{
	return reportId_;
}

std::string StartTestingJMeterSceneResult::getCode()const
{
	return code_;
}

bool StartTestingJMeterSceneResult::getSuccess()const
{
	return success_;
}

