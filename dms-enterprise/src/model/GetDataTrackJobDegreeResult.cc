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

#include <alibabacloud/dms-enterprise/model/GetDataTrackJobDegreeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataTrackJobDegreeResult::GetDataTrackJobDegreeResult() :
	ServiceResult()
{}

GetDataTrackJobDegreeResult::GetDataTrackJobDegreeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataTrackJobDegreeResult::~GetDataTrackJobDegreeResult()
{}

void GetDataTrackJobDegreeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobDegreeNode = value["JobDegree"];
	if(!jobDegreeNode["ListCompletionDegree"].isNull())
		jobDegree_.listCompletionDegree = jobDegreeNode["ListCompletionDegree"].asString();
	if(!jobDegreeNode["DownloadCompletionDegree"].isNull())
		jobDegree_.downloadCompletionDegree = jobDegreeNode["DownloadCompletionDegree"].asString();
	if(!jobDegreeNode["FilterCompletionDegree"].isNull())
		jobDegree_.filterCompletionDegree = jobDegreeNode["FilterCompletionDegree"].asString();
	if(!jobDegreeNode["JobStatus"].isNull())
		jobDegree_.jobStatus = jobDegreeNode["JobStatus"].asString();
	if(!jobDegreeNode["StatusDesc"].isNull())
		jobDegree_.statusDesc = jobDegreeNode["StatusDesc"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetDataTrackJobDegreeResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataTrackJobDegreeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataTrackJobDegreeResult::getSuccess()const
{
	return success_;
}

GetDataTrackJobDegreeResult::JobDegree GetDataTrackJobDegreeResult::getJobDegree()const
{
	return jobDegree_;
}

