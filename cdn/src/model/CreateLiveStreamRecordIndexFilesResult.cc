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
	auto recordInfoNode = value["RecordInfo"];
	if(!recordInfoNode["RecordId"].isNull())
		recordInfo_.recordId = recordInfoNode["RecordId"].asString();
	if(!recordInfoNode["RecordUrl"].isNull())
		recordInfo_.recordUrl = recordInfoNode["RecordUrl"].asString();
	if(!recordInfoNode["Duration"].isNull())
		recordInfo_.duration = std::stof(recordInfoNode["Duration"].asString());
	if(!recordInfoNode["Height"].isNull())
		recordInfo_.height = std::stoi(recordInfoNode["Height"].asString());
	if(!recordInfoNode["Width"].isNull())
		recordInfo_.width = std::stoi(recordInfoNode["Width"].asString());
	if(!recordInfoNode["CreateTime"].isNull())
		recordInfo_.createTime = recordInfoNode["CreateTime"].asString();

}

CreateLiveStreamRecordIndexFilesResult::RecordInfo CreateLiveStreamRecordIndexFilesResult::getRecordInfo()const
{
	return recordInfo_;
}

