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

#include <alibabacloud/vod/model/ListJobInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListJobInfoResult::ListJobInfoResult() :
	ServiceResult()
{}

ListJobInfoResult::ListJobInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobInfoResult::~ListJobInfoResult()
{}

void ListJobInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobInfoListNode = value["JobInfoList"]["JobInfoDO"];
	for (auto valueJobInfoListJobInfoDO : allJobInfoListNode)
	{
		JobInfoDO jobInfoListObject;
		if(!valueJobInfoListJobInfoDO["JobId"].isNull())
			jobInfoListObject.jobId = valueJobInfoListJobInfoDO["JobId"].asString();
		if(!valueJobInfoListJobInfoDO["Status"].isNull())
			jobInfoListObject.status = valueJobInfoListJobInfoDO["Status"].asString();
		if(!valueJobInfoListJobInfoDO["UserId"].isNull())
			jobInfoListObject.userId = std::stol(valueJobInfoListJobInfoDO["UserId"].asString());
		if(!valueJobInfoListJobInfoDO["CreateTime"].isNull())
			jobInfoListObject.createTime = valueJobInfoListJobInfoDO["CreateTime"].asString();
		if(!valueJobInfoListJobInfoDO["CompleteTime"].isNull())
			jobInfoListObject.completeTime = valueJobInfoListJobInfoDO["CompleteTime"].asString();
		jobInfoList_.push_back(jobInfoListObject);
	}
	if(!value["MediaId"].isNull())
		mediaId_ = value["MediaId"].asString();
	if(!value["JobType"].isNull())
		jobType_ = value["JobType"].asString();

}

std::vector<ListJobInfoResult::JobInfoDO> ListJobInfoResult::getJobInfoList()const
{
	return jobInfoList_;
}

std::string ListJobInfoResult::getJobType()const
{
	return jobType_;
}

std::string ListJobInfoResult::getMediaId()const
{
	return mediaId_;
}

