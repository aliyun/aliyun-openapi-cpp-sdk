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

#include <alibabacloud/cdn/model/DescribeLiveStreamRecordIndexFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamRecordIndexFileResult::DescribeLiveStreamRecordIndexFileResult() :
	ServiceResult()
{}

DescribeLiveStreamRecordIndexFileResult::DescribeLiveStreamRecordIndexFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamRecordIndexFileResult::~DescribeLiveStreamRecordIndexFileResult()
{}

void DescribeLiveStreamRecordIndexFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRecordIndexInfo = value["RecordIndexInfo"];
	for (auto value : allRecordIndexInfo)
	{
		RecordIndexInfo recordIndexInfoObject;
		if(!value["RecordId"].isNull())
			recordIndexInfoObject.recordId = value["RecordId"].asString();
		if(!value["RecordUrl"].isNull())
			recordIndexInfoObject.recordUrl = value["RecordUrl"].asString();
		if(!value["DomainName"].isNull())
			recordIndexInfoObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			recordIndexInfoObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			recordIndexInfoObject.streamName = value["StreamName"].asString();
		if(!value["OssObject"].isNull())
			recordIndexInfoObject.ossObject = value["OssObject"].asString();
		if(!value["StartTime"].isNull())
			recordIndexInfoObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			recordIndexInfoObject.endTime = value["EndTime"].asString();
		if(!value["Duration"].isNull())
			recordIndexInfoObject.duration = std::stof(value["Duration"].asString());
		if(!value["Height"].isNull())
			recordIndexInfoObject.height = std::stoi(value["Height"].asString());
		if(!value["Width"].isNull())
			recordIndexInfoObject.width = std::stoi(value["Width"].asString());
		if(!value["CreateTime"].isNull())
			recordIndexInfoObject.createTime = value["CreateTime"].asString();
		recordIndexInfo_.push_back(recordIndexInfoObject);
	}

}

std::vector<DescribeLiveStreamRecordIndexFileResult::RecordIndexInfo> DescribeLiveStreamRecordIndexFileResult::getRecordIndexInfo()const
{
	return recordIndexInfo_;
}

