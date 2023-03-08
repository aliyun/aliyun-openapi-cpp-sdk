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

#include <alibabacloud/adb/model/GetSparkConfigLogPathResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetSparkConfigLogPathResult::GetSparkConfigLogPathResult() :
	ServiceResult()
{}

GetSparkConfigLogPathResult::GetSparkConfigLogPathResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSparkConfigLogPathResult::~GetSparkConfigLogPathResult()
{}

void GetSparkConfigLogPathResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IsLogPathExists"].isNull())
		data_.isLogPathExists = dataNode["IsLogPathExists"].asString() == "true";
	if(!dataNode["RecordedLogPath"].isNull())
		data_.recordedLogPath = dataNode["RecordedLogPath"].asString();
	if(!dataNode["ModifiedUid"].isNull())
		data_.modifiedUid = dataNode["ModifiedUid"].asString();
	if(!dataNode["ModifiedTimestamp"].isNull())
		data_.modifiedTimestamp = dataNode["ModifiedTimestamp"].asString();
	if(!dataNode["DefaultLogPath"].isNull())
		data_.defaultLogPath = dataNode["DefaultLogPath"].asString();

}

GetSparkConfigLogPathResult::Data GetSparkConfigLogPathResult::getData()const
{
	return data_;
}

