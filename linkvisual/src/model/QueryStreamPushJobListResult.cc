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

#include <alibabacloud/linkvisual/model/QueryStreamPushJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryStreamPushJobListResult::QueryStreamPushJobListResult() :
	ServiceResult()
{}

QueryStreamPushJobListResult::QueryStreamPushJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStreamPushJobListResult::~QueryStreamPushJobListResult()
{}

void QueryStreamPushJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allJobListNode = dataNode["JobList"]["Job"];
	for (auto dataNodeJobListJob : allJobListNode)
	{
		Data::Job jobObject;
		if(!dataNodeJobListJob["PushUrl"].isNull())
			jobObject.pushUrl = dataNodeJobListJob["PushUrl"].asString();
		if(!dataNodeJobListJob["StreamType"].isNull())
			jobObject.streamType = std::stoi(dataNodeJobListJob["StreamType"].asString());
		if(!dataNodeJobListJob["JobId"].isNull())
			jobObject.jobId = dataNodeJobListJob["JobId"].asString();
		if(!dataNodeJobListJob["CreateTime"].isNull())
			jobObject.createTime = std::stoi(dataNodeJobListJob["CreateTime"].asString());
		if(!dataNodeJobListJob["PushStatus"].isNull())
			jobObject.pushStatus = std::stoi(dataNodeJobListJob["PushStatus"].asString());
		if(!dataNodeJobListJob["JobType"].isNull())
			jobObject.jobType = std::stoi(dataNodeJobListJob["JobType"].asString());
		data_.jobList.push_back(jobObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryStreamPushJobListResult::Data QueryStreamPushJobListResult::getData()const
{
	return data_;
}

std::string QueryStreamPushJobListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryStreamPushJobListResult::getCode()const
{
	return code_;
}

bool QueryStreamPushJobListResult::getSuccess()const
{
	return success_;
}

