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

#include <alibabacloud/cdn/model/CreateLiveStreamRecordIndexFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

CreateLiveStreamRecordIndexFilesResult::CreateLiveStreamRecordIndexFilesResult() :
	ServiceResult()
{}

CreateLiveStreamRecordIndexFilesResult::CreateLiveStreamRecordIndexFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateLiveStreamRecordIndexFilesResult::~CreateLiveStreamRecordIndexFilesResult()
{}

void CreateLiveStreamRecordIndexFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRecordInfo = value["RecordInfo"];
	for (auto value : allRecordInfo)
	{
		RecordInfo recordInfoObject;
		if(!value["RecordId"].isNull())
			recordInfoObject.recordId = value["RecordId"].asString();
		if(!value["RecordUrl"].isNull())
			recordInfoObject.recordUrl = value["RecordUrl"].asString();
		if(!value["Duration"].isNull())
			recordInfoObject.duration = std::stof(value["Duration"].asString());
		if(!value["Height"].isNull())
			recordInfoObject.height = std::stoi(value["Height"].asString());
		if(!value["Width"].isNull())
			recordInfoObject.width = std::stoi(value["Width"].asString());
		if(!value["CreateTime"].isNull())
			recordInfoObject.createTime = value["CreateTime"].asString();
		recordInfo_.push_back(recordInfoObject);
	}

}

std::vector<CreateLiveStreamRecordIndexFilesResult::RecordInfo> CreateLiveStreamRecordIndexFilesResult::getRecordInfo()const
{
	return recordInfo_;
}

