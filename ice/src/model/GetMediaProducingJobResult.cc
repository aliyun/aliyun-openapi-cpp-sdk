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

#include <alibabacloud/ice/model/GetMediaProducingJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetMediaProducingJobResult::GetMediaProducingJobResult() :
	ServiceResult()
{}

GetMediaProducingJobResult::GetMediaProducingJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaProducingJobResult::~GetMediaProducingJobResult()
{}

void GetMediaProducingJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaProducingJobNode = value["MediaProducingJob"];
	if(!mediaProducingJobNode["JobId"].isNull())
		mediaProducingJob_.jobId = mediaProducingJobNode["JobId"].asString();
	if(!mediaProducingJobNode["ProjectId"].isNull())
		mediaProducingJob_.projectId = mediaProducingJobNode["ProjectId"].asString();
	if(!mediaProducingJobNode["MediaId"].isNull())
		mediaProducingJob_.mediaId = mediaProducingJobNode["MediaId"].asString();
	if(!mediaProducingJobNode["MediaURL"].isNull())
		mediaProducingJob_.mediaURL = mediaProducingJobNode["MediaURL"].asString();
	if(!mediaProducingJobNode["Timeline"].isNull())
		mediaProducingJob_.timeline = mediaProducingJobNode["Timeline"].asString();
	if(!mediaProducingJobNode["TemplateId"].isNull())
		mediaProducingJob_.templateId = mediaProducingJobNode["TemplateId"].asString();
	if(!mediaProducingJobNode["ClipsParam"].isNull())
		mediaProducingJob_.clipsParam = mediaProducingJobNode["ClipsParam"].asString();
	if(!mediaProducingJobNode["Duration"].isNull())
		mediaProducingJob_.duration = std::stof(mediaProducingJobNode["Duration"].asString());
	if(!mediaProducingJobNode["CreateTime"].isNull())
		mediaProducingJob_.createTime = mediaProducingJobNode["CreateTime"].asString();
	if(!mediaProducingJobNode["CompleteTime"].isNull())
		mediaProducingJob_.completeTime = mediaProducingJobNode["CompleteTime"].asString();
	if(!mediaProducingJobNode["ModifiedTime"].isNull())
		mediaProducingJob_.modifiedTime = mediaProducingJobNode["ModifiedTime"].asString();
	if(!mediaProducingJobNode["Status"].isNull())
		mediaProducingJob_.status = mediaProducingJobNode["Status"].asString();
	if(!mediaProducingJobNode["Code"].isNull())
		mediaProducingJob_.code = mediaProducingJobNode["Code"].asString();
	if(!mediaProducingJobNode["Message"].isNull())
		mediaProducingJob_.message = mediaProducingJobNode["Message"].asString();
	if(!mediaProducingJobNode["VodMediaId"].isNull())
		mediaProducingJob_.vodMediaId = mediaProducingJobNode["VodMediaId"].asString();

}

GetMediaProducingJobResult::MediaProducingJob GetMediaProducingJobResult::getMediaProducingJob()const
{
	return mediaProducingJob_;
}

