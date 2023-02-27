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

#include <alibabacloud/ice/model/GetLiveEditingJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveEditingJobResult::GetLiveEditingJobResult() :
	ServiceResult()
{}

GetLiveEditingJobResult::GetLiveEditingJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveEditingJobResult::~GetLiveEditingJobResult()
{}

void GetLiveEditingJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto liveEditingJobNode = value["LiveEditingJob"];
	if(!liveEditingJobNode["JobId"].isNull())
		liveEditingJob_.jobId = liveEditingJobNode["JobId"].asString();
	if(!liveEditingJobNode["ProjectId"].isNull())
		liveEditingJob_.projectId = liveEditingJobNode["ProjectId"].asString();
	if(!liveEditingJobNode["Status"].isNull())
		liveEditingJob_.status = liveEditingJobNode["Status"].asString();
	if(!liveEditingJobNode["Clips"].isNull())
		liveEditingJob_.clips = liveEditingJobNode["Clips"].asString();
	if(!liveEditingJobNode["UserData"].isNull())
		liveEditingJob_.userData = liveEditingJobNode["UserData"].asString();
	if(!liveEditingJobNode["CreationTime"].isNull())
		liveEditingJob_.creationTime = liveEditingJobNode["CreationTime"].asString();
	if(!liveEditingJobNode["ModifiedTime"].isNull())
		liveEditingJob_.modifiedTime = liveEditingJobNode["ModifiedTime"].asString();
	if(!liveEditingJobNode["CompleteTime"].isNull())
		liveEditingJob_.completeTime = liveEditingJobNode["CompleteTime"].asString();
	if(!liveEditingJobNode["MediaId"].isNull())
		liveEditingJob_.mediaId = liveEditingJobNode["MediaId"].asString();
	if(!liveEditingJobNode["MediaURL"].isNull())
		liveEditingJob_.mediaURL = liveEditingJobNode["MediaURL"].asString();
	if(!liveEditingJobNode["Code"].isNull())
		liveEditingJob_.code = liveEditingJobNode["Code"].asString();
	if(!liveEditingJobNode["Message"].isNull())
		liveEditingJob_.message = liveEditingJobNode["Message"].asString();
	auto liveStreamConfigNode = liveEditingJobNode["LiveStreamConfig"];
	if(!liveStreamConfigNode["AppName"].isNull())
		liveEditingJob_.liveStreamConfig.appName = liveStreamConfigNode["AppName"].asString();
	if(!liveStreamConfigNode["DomainName"].isNull())
		liveEditingJob_.liveStreamConfig.domainName = liveStreamConfigNode["DomainName"].asString();
	if(!liveStreamConfigNode["StreamName"].isNull())
		liveEditingJob_.liveStreamConfig.streamName = liveStreamConfigNode["StreamName"].asString();
	auto mediaProduceConfigNode = liveEditingJobNode["MediaProduceConfig"];
	if(!mediaProduceConfigNode["Mode"].isNull())
		liveEditingJob_.mediaProduceConfig.mode = mediaProduceConfigNode["Mode"].asString();
	auto outputMediaConfigNode = liveEditingJobNode["OutputMediaConfig"];
	if(!outputMediaConfigNode["MediaURL"].isNull())
		liveEditingJob_.outputMediaConfig.mediaURL = outputMediaConfigNode["MediaURL"].asString();
	if(!outputMediaConfigNode["StorageLocation"].isNull())
		liveEditingJob_.outputMediaConfig.storageLocation = outputMediaConfigNode["StorageLocation"].asString();
	if(!outputMediaConfigNode["FileName"].isNull())
		liveEditingJob_.outputMediaConfig.fileName = outputMediaConfigNode["FileName"].asString();
	if(!outputMediaConfigNode["Width"].isNull())
		liveEditingJob_.outputMediaConfig.width = std::stoi(outputMediaConfigNode["Width"].asString());
	if(!outputMediaConfigNode["Height"].isNull())
		liveEditingJob_.outputMediaConfig.height = std::stoi(outputMediaConfigNode["Height"].asString());
	if(!outputMediaConfigNode["Bitrate"].isNull())
		liveEditingJob_.outputMediaConfig.bitrate = std::stol(outputMediaConfigNode["Bitrate"].asString());
	if(!outputMediaConfigNode["VodTemplateGroupId"].isNull())
		liveEditingJob_.outputMediaConfig.vodTemplateGroupId = outputMediaConfigNode["VodTemplateGroupId"].asString();

}

GetLiveEditingJobResult::LiveEditingJob GetLiveEditingJobResult::getLiveEditingJob()const
{
	return liveEditingJob_;
}

