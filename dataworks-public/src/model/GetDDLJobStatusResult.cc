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

#include <alibabacloud/dataworks-public/model/GetDDLJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDDLJobStatusResult::GetDDLJobStatusResult() :
	ServiceResult()
{}

GetDDLJobStatusResult::GetDDLJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDDLJobStatusResult::~GetDDLJobStatusResult()
{}

void GetDDLJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["NextTaskId"].isNull())
		data_.nextTaskId = dataNode["NextTaskId"].asString();
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["Content"].isNull())
		data_.content = dataNode["Content"].asString();

}

GetDDLJobStatusResult::Data GetDDLJobStatusResult::getData()const
{
	return data_;
}

