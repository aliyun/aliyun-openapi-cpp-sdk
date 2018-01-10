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

#include <alibabacloud/cdn/model/DescribeLiveStreamRecordIndexFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamRecordIndexFilesResult::DescribeLiveStreamRecordIndexFilesResult() :
	ServiceResult()
{}

DescribeLiveStreamRecordIndexFilesResult::DescribeLiveStreamRecordIndexFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamRecordIndexFilesResult::~DescribeLiveStreamRecordIndexFilesResult()
{}

void DescribeLiveStreamRecordIndexFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRecordIndexInfoList = value["RecordIndexInfoList"]["RecordIndexInfo"];
	for (auto value : allRecordIndexInfoList)
	{
		RecordIndexInfo recordIndexInfoObject;
		recordIndexInfoObject.recordId = value["RecordId"].asString();
		recordIndexInfoObject.recordUrl = value["RecordUrl"].asString();
		recordIndexInfoObject.domainName = value["DomainName"].asString();
		recordIndexInfoObject.appName = value["AppName"].asString();
		recordIndexInfoObject.streamName = value["StreamName"].asString();
		recordIndexInfoObject.ossObject = value["OssObject"].asString();
		recordIndexInfoObject.startTime = value["StartTime"].asString();
		recordIndexInfoObject.endTime = value["EndTime"].asString();
		recordIndexInfoObject.duration = std::stof(value["Duration"].asString());
		recordIndexInfoObject.height = std::stoi(value["Height"].asString());
		recordIndexInfoObject.width = std::stoi(value["Width"].asString());
		recordIndexInfoObject.createTime = value["CreateTime"].asString();
		recordIndexInfoList_.push_back(recordIndexInfoObject);
	}

}

