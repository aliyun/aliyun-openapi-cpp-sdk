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

#include <alibabacloud/vod/model/GetMediaRefreshJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaRefreshJobsResult::GetMediaRefreshJobsResult() :
	ServiceResult()
{}

GetMediaRefreshJobsResult::GetMediaRefreshJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaRefreshJobsResult::~GetMediaRefreshJobsResult()
{}

void GetMediaRefreshJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaRefreshJobsNode = value["MediaRefreshJobs"]["MediaRefreshJob"];
	for (auto valueMediaRefreshJobsMediaRefreshJob : allMediaRefreshJobsNode)
	{
		MediaRefreshJob mediaRefreshJobsObject;
		if(!valueMediaRefreshJobsMediaRefreshJob["MediaRefreshJobId"].isNull())
			mediaRefreshJobsObject.mediaRefreshJobId = valueMediaRefreshJobsMediaRefreshJob["MediaRefreshJobId"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["MediaId"].isNull())
			mediaRefreshJobsObject.mediaId = valueMediaRefreshJobsMediaRefreshJob["MediaId"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["TaskType"].isNull())
			mediaRefreshJobsObject.taskType = valueMediaRefreshJobsMediaRefreshJob["TaskType"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["FilterPolicy"].isNull())
			mediaRefreshJobsObject.filterPolicy = valueMediaRefreshJobsMediaRefreshJob["FilterPolicy"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["Status"].isNull())
			mediaRefreshJobsObject.status = valueMediaRefreshJobsMediaRefreshJob["Status"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["SuccessPlayUrls"].isNull())
			mediaRefreshJobsObject.successPlayUrls = valueMediaRefreshJobsMediaRefreshJob["SuccessPlayUrls"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["TaskIds"].isNull())
			mediaRefreshJobsObject.taskIds = valueMediaRefreshJobsMediaRefreshJob["TaskIds"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["ErrorCode"].isNull())
			mediaRefreshJobsObject.errorCode = valueMediaRefreshJobsMediaRefreshJob["ErrorCode"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["ErrorMessage"].isNull())
			mediaRefreshJobsObject.errorMessage = valueMediaRefreshJobsMediaRefreshJob["ErrorMessage"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["UserData"].isNull())
			mediaRefreshJobsObject.userData = valueMediaRefreshJobsMediaRefreshJob["UserData"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["GmtCreate"].isNull())
			mediaRefreshJobsObject.gmtCreate = valueMediaRefreshJobsMediaRefreshJob["GmtCreate"].asString();
		if(!valueMediaRefreshJobsMediaRefreshJob["GmtModified"].isNull())
			mediaRefreshJobsObject.gmtModified = valueMediaRefreshJobsMediaRefreshJob["GmtModified"].asString();
		mediaRefreshJobs_.push_back(mediaRefreshJobsObject);
	}

}

std::vector<GetMediaRefreshJobsResult::MediaRefreshJob> GetMediaRefreshJobsResult::getMediaRefreshJobs()const
{
	return mediaRefreshJobs_;
}

