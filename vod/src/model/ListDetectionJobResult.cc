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

#include <alibabacloud/vod/model/ListDetectionJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListDetectionJobResult::ListDetectionJobResult() :
	ServiceResult()
{}

ListDetectionJobResult::ListDetectionJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDetectionJobResult::~ListDetectionJobResult()
{}

void ListDetectionJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDetectionJobListNode = value["DetectionJobList"]["DetectionJob"];
	for (auto valueDetectionJobListDetectionJob : allDetectionJobListNode)
	{
		DetectionJob detectionJobListObject;
		if(!valueDetectionJobListDetectionJob["JobId"].isNull())
			detectionJobListObject.jobId = valueDetectionJobListDetectionJob["JobId"].asString();
		if(!valueDetectionJobListDetectionJob["CreateTime"].isNull())
			detectionJobListObject.createTime = valueDetectionJobListDetectionJob["CreateTime"].asString();
		if(!valueDetectionJobListDetectionJob["ModifyTime"].isNull())
			detectionJobListObject.modifyTime = valueDetectionJobListDetectionJob["ModifyTime"].asString();
		if(!valueDetectionJobListDetectionJob["BeginTime"].isNull())
			detectionJobListObject.beginTime = valueDetectionJobListDetectionJob["BeginTime"].asString();
		if(!valueDetectionJobListDetectionJob["EndTime"].isNull())
			detectionJobListObject.endTime = valueDetectionJobListDetectionJob["EndTime"].asString();
		if(!valueDetectionJobListDetectionJob["VideoId"].isNull())
			detectionJobListObject.videoId = valueDetectionJobListDetectionJob["VideoId"].asString();
		if(!valueDetectionJobListDetectionJob["CopyrightStatus"].isNull())
			detectionJobListObject.copyrightStatus = valueDetectionJobListDetectionJob["CopyrightStatus"].asString();
		if(!valueDetectionJobListDetectionJob["CopyrightBeginTime"].isNull())
			detectionJobListObject.copyrightBeginTime = valueDetectionJobListDetectionJob["CopyrightBeginTime"].asString();
		if(!valueDetectionJobListDetectionJob["CopyrightEndTime"].isNull())
			detectionJobListObject.copyrightEndTime = valueDetectionJobListDetectionJob["CopyrightEndTime"].asString();
		if(!valueDetectionJobListDetectionJob["CopyrightFile"].isNull())
			detectionJobListObject.copyrightFile = valueDetectionJobListDetectionJob["CopyrightFile"].asString();
		if(!valueDetectionJobListDetectionJob["WhitelistUrls"].isNull())
			detectionJobListObject.whitelistUrls = valueDetectionJobListDetectionJob["WhitelistUrls"].asString();
		if(!valueDetectionJobListDetectionJob["TemplateId"].isNull())
			detectionJobListObject.templateId = valueDetectionJobListDetectionJob["TemplateId"].asString();
		detectionJobList_.push_back(detectionJobListObject);
	}

}

std::vector<ListDetectionJobResult::DetectionJob> ListDetectionJobResult::getDetectionJobList()const
{
	return detectionJobList_;
}

