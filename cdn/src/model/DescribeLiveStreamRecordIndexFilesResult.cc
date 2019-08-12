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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRecordIndexInfoList = value["RecordIndexInfoList"]["RecordIndexInfo"];
	for (auto value : allRecordIndexInfoList)
	{
		RecordIndexInfo recordIndexInfoListObject;
		if(!value["RecordId"].isNull())
			recordIndexInfoListObject.recordId = value["RecordId"].asString();
		if(!value["RecordUrl"].isNull())
			recordIndexInfoListObject.recordUrl = value["RecordUrl"].asString();
		if(!value["DomainName"].isNull())
			recordIndexInfoListObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			recordIndexInfoListObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			recordIndexInfoListObject.streamName = value["StreamName"].asString();
		if(!value["OssObject"].isNull())
			recordIndexInfoListObject.ossObject = value["OssObject"].asString();
		if(!value["StartTime"].isNull())
			recordIndexInfoListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			recordIndexInfoListObject.endTime = value["EndTime"].asString();
		if(!value["Duration"].isNull())
			recordIndexInfoListObject.duration = std::stof(value["Duration"].asString());
		if(!value["Height"].isNull())
			recordIndexInfoListObject.height = std::stoi(value["Height"].asString());
		if(!value["Width"].isNull())
			recordIndexInfoListObject.width = std::stoi(value["Width"].asString());
		if(!value["CreateTime"].isNull())
			recordIndexInfoListObject.createTime = value["CreateTime"].asString();
		recordIndexInfoList_.push_back(recordIndexInfoListObject);
	}

}

std::vector<DescribeLiveStreamRecordIndexFilesResult::RecordIndexInfo> DescribeLiveStreamRecordIndexFilesResult::getRecordIndexInfoList()const
{
	return recordIndexInfoList_;
}

