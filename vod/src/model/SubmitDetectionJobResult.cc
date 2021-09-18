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

#include <alibabacloud/vod/model/SubmitDetectionJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitDetectionJobResult::SubmitDetectionJobResult() :
	ServiceResult()
{}

SubmitDetectionJobResult::SubmitDetectionJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitDetectionJobResult::~SubmitDetectionJobResult()
{}

void SubmitDetectionJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto detectionJobNode = value["DetectionJob"];
	if(!detectionJobNode["JobId"].isNull())
		detectionJob_.jobId = detectionJobNode["JobId"].asString();
	if(!detectionJobNode["CreateTime"].isNull())
		detectionJob_.createTime = detectionJobNode["CreateTime"].asString();
	if(!detectionJobNode["ModifyTime"].isNull())
		detectionJob_.modifyTime = detectionJobNode["ModifyTime"].asString();
	if(!detectionJobNode["BeginTime"].isNull())
		detectionJob_.beginTime = detectionJobNode["BeginTime"].asString();
	if(!detectionJobNode["EndTime"].isNull())
		detectionJob_.endTime = detectionJobNode["EndTime"].asString();
	if(!detectionJobNode["VideoId"].isNull())
		detectionJob_.videoId = detectionJobNode["VideoId"].asString();
	if(!detectionJobNode["CopyrightStatus"].isNull())
		detectionJob_.copyrightStatus = detectionJobNode["CopyrightStatus"].asString();
	if(!detectionJobNode["CopyrightBeginTime"].isNull())
		detectionJob_.copyrightBeginTime = detectionJobNode["CopyrightBeginTime"].asString();
	if(!detectionJobNode["CopyrightEndTime"].isNull())
		detectionJob_.copyrightEndTime = detectionJobNode["CopyrightEndTime"].asString();
	if(!detectionJobNode["CopyrightFile"].isNull())
		detectionJob_.copyrightFile = detectionJobNode["CopyrightFile"].asString();
	if(!detectionJobNode["WhitelistUrls"].isNull())
		detectionJob_.whitelistUrls = detectionJobNode["WhitelistUrls"].asString();
	if(!detectionJobNode["TemplateId"].isNull())
		detectionJob_.templateId = detectionJobNode["TemplateId"].asString();

}

SubmitDetectionJobResult::DetectionJob SubmitDetectionJobResult::getDetectionJob()const
{
	return detectionJob_;
}

