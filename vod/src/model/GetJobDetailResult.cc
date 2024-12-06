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

#include <alibabacloud/vod/model/GetJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetJobDetailResult::GetJobDetailResult() :
	ServiceResult()
{}

GetJobDetailResult::GetJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobDetailResult::~GetJobDetailResult()
{}

void GetJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto transcodeJobDetailNode = value["TranscodeJobDetail"];
	if(!transcodeJobDetailNode["JobId"].isNull())
		transcodeJobDetail_.jobId = transcodeJobDetailNode["JobId"].asString();
	if(!transcodeJobDetailNode["UserId"].isNull())
		transcodeJobDetail_.userId = std::stol(transcodeJobDetailNode["UserId"].asString());
	if(!transcodeJobDetailNode["VideoId"].isNull())
		transcodeJobDetail_.videoId = transcodeJobDetailNode["VideoId"].asString();
	if(!transcodeJobDetailNode["Status"].isNull())
		transcodeJobDetail_.status = transcodeJobDetailNode["Status"].asString();
	if(!transcodeJobDetailNode["TemplateId"].isNull())
		transcodeJobDetail_.templateId = transcodeJobDetailNode["TemplateId"].asString();
	if(!transcodeJobDetailNode["Definition"].isNull())
		transcodeJobDetail_.definition = transcodeJobDetailNode["Definition"].asString();
	if(!transcodeJobDetailNode["CreateTime"].isNull())
		transcodeJobDetail_.createTime = transcodeJobDetailNode["CreateTime"].asString();
	if(!transcodeJobDetailNode["CompleteTime"].isNull())
		transcodeJobDetail_.completeTime = transcodeJobDetailNode["CompleteTime"].asString();
	auto snapshotJobDetailNode = value["SnapshotJobDetail"];
	if(!snapshotJobDetailNode["JobId"].isNull())
		snapshotJobDetail_.jobId = snapshotJobDetailNode["JobId"].asString();
	if(!snapshotJobDetailNode["UserId"].isNull())
		snapshotJobDetail_.userId = std::stol(snapshotJobDetailNode["UserId"].asString());
	if(!snapshotJobDetailNode["VideoId"].isNull())
		snapshotJobDetail_.videoId = snapshotJobDetailNode["VideoId"].asString();
	if(!snapshotJobDetailNode["Status"].isNull())
		snapshotJobDetail_.status = snapshotJobDetailNode["Status"].asString();
	if(!snapshotJobDetailNode["Trigger"].isNull())
		snapshotJobDetail_.trigger = snapshotJobDetailNode["Trigger"].asString();
	if(!snapshotJobDetailNode["NormalConfig"].isNull())
		snapshotJobDetail_.normalConfig = snapshotJobDetailNode["NormalConfig"].asString();
	if(!snapshotJobDetailNode["SpriteConfig"].isNull())
		snapshotJobDetail_.spriteConfig = snapshotJobDetailNode["SpriteConfig"].asString();
	if(!snapshotJobDetailNode["CreateTime"].isNull())
		snapshotJobDetail_.createTime = snapshotJobDetailNode["CreateTime"].asString();
	if(!snapshotJobDetailNode["CompleteTime"].isNull())
		snapshotJobDetail_.completeTime = snapshotJobDetailNode["CompleteTime"].asString();
	auto aIJobDetailNode = value["AIJobDetail"];
	if(!aIJobDetailNode["JobId"].isNull())
		aIJobDetail_.jobId = aIJobDetailNode["JobId"].asString();
	if(!aIJobDetailNode["UserId"].isNull())
		aIJobDetail_.userId = std::stol(aIJobDetailNode["UserId"].asString());
	if(!aIJobDetailNode["MediaId"].isNull())
		aIJobDetail_.mediaId = aIJobDetailNode["MediaId"].asString();
	if(!aIJobDetailNode["JobType"].isNull())
		aIJobDetail_.jobType = aIJobDetailNode["JobType"].asString();
	if(!aIJobDetailNode["Status"].isNull())
		aIJobDetail_.status = aIJobDetailNode["Status"].asString();
	if(!aIJobDetailNode["Trigger"].isNull())
		aIJobDetail_.trigger = aIJobDetailNode["Trigger"].asString();
	if(!aIJobDetailNode["TemplateConfig"].isNull())
		aIJobDetail_.templateConfig = aIJobDetailNode["TemplateConfig"].asString();
	if(!aIJobDetailNode["CreateTime"].isNull())
		aIJobDetail_.createTime = aIJobDetailNode["CreateTime"].asString();
	if(!aIJobDetailNode["CompleteTime"].isNull())
		aIJobDetail_.completeTime = aIJobDetailNode["CompleteTime"].asString();
	if(!value["JobType"].isNull())
		jobType_ = value["JobType"].asString();

}

std::string GetJobDetailResult::getJobType()const
{
	return jobType_;
}

GetJobDetailResult::SnapshotJobDetail GetJobDetailResult::getSnapshotJobDetail()const
{
	return snapshotJobDetail_;
}

GetJobDetailResult::TranscodeJobDetail GetJobDetailResult::getTranscodeJobDetail()const
{
	return transcodeJobDetail_;
}

GetJobDetailResult::AIJobDetail GetJobDetailResult::getAIJobDetail()const
{
	return aIJobDetail_;
}

