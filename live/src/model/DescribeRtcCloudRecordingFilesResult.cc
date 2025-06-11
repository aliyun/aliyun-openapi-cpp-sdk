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

#include <alibabacloud/live/model/DescribeRtcCloudRecordingFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRtcCloudRecordingFilesResult::DescribeRtcCloudRecordingFilesResult() :
	ServiceResult()
{}

DescribeRtcCloudRecordingFilesResult::DescribeRtcCloudRecordingFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcCloudRecordingFilesResult::~DescribeRtcCloudRecordingFilesResult()
{}

void DescribeRtcCloudRecordingFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskInfoNode = value["TaskInfo"];
	if(!taskInfoNode["TaskId"].isNull())
		taskInfo_.taskId = taskInfoNode["TaskId"].asString();
	if(!taskInfoNode["Status"].isNull())
		taskInfo_.status = taskInfoNode["Status"].asString();
	auto recordFileListNode = taskInfoNode["RecordFileList"];
		auto allMp3FileList = recordFileListNode["Mp3FileList"]["FileName"];
		for (auto value : allMp3FileList)
			taskInfo_.recordFileList.mp3FileList.push_back(value.asString());
		auto allMp4FileList = recordFileListNode["Mp4FileList"]["FileName"];
		for (auto value : allMp4FileList)
			taskInfo_.recordFileList.mp4FileList.push_back(value.asString());
		auto allHlsFileList = recordFileListNode["HlsFileList"]["FileName"];
		for (auto value : allHlsFileList)
			taskInfo_.recordFileList.hlsFileList.push_back(value.asString());

}

DescribeRtcCloudRecordingFilesResult::TaskInfo DescribeRtcCloudRecordingFilesResult::getTaskInfo()const
{
	return taskInfo_;
}

