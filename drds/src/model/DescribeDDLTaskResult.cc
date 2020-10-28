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

#include <alibabacloud/drds/model/DescribeDDLTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDDLTaskResult::DescribeDDLTaskResult() :
	ServiceResult()
{}

DescribeDDLTaskResult::DescribeDDLTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDLTaskResult::~DescribeDDLTaskResult()
{}

void DescribeDDLTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RequestId"].isNull())
		data_.requestId = dataNode["RequestId"].asString();
	if(!dataNode["TargetId"].isNull())
		data_.targetId = dataNode["TargetId"].asString();
	if(!dataNode["TaskDetail"].isNull())
		data_.taskDetail = dataNode["TaskDetail"].asString();
	if(!dataNode["TaskStatus"].isNull())
		data_.taskStatus = std::stoi(dataNode["TaskStatus"].asString());
	if(!dataNode["TaskPhase"].isNull())
		data_.taskPhase = dataNode["TaskPhase"].asString();
	if(!dataNode["TaskType"].isNull())
		data_.taskType = std::stoi(dataNode["TaskType"].asString());
	if(!dataNode["TaskName"].isNull())
		data_.taskName = dataNode["TaskName"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["AllowCancel"].isNull())
		data_.allowCancel = dataNode["AllowCancel"].asString();
	if(!dataNode["ErrMsg"].isNull())
		data_.errMsg = dataNode["ErrMsg"].asString();

}

DescribeDDLTaskResult::Data DescribeDDLTaskResult::getData()const
{
	return data_;
}

