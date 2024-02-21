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

#include <alibabacloud/linkvisual/model/QueryStreamSnapshotJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryStreamSnapshotJobResult::QueryStreamSnapshotJobResult() :
	ServiceResult()
{}

QueryStreamSnapshotJobResult::QueryStreamSnapshotJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStreamSnapshotJobResult::~QueryStreamSnapshotJobResult()
{}

void QueryStreamSnapshotJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allJobListNode = dataNode["JobList"]["Job"];
	for (auto dataNodeJobListJob : allJobListNode)
	{
		Data::Job jobObject;
		if(!dataNodeJobListJob["StreamType"].isNull())
			jobObject.streamType = std::stoi(dataNodeJobListJob["StreamType"].asString());
		if(!dataNodeJobListJob["SnapshotInterval"].isNull())
			jobObject.snapshotInterval = std::stoi(dataNodeJobListJob["SnapshotInterval"].asString());
		data_.jobList.push_back(jobObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryStreamSnapshotJobResult::Data QueryStreamSnapshotJobResult::getData()const
{
	return data_;
}

std::string QueryStreamSnapshotJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryStreamSnapshotJobResult::getCode()const
{
	return code_;
}

bool QueryStreamSnapshotJobResult::getSuccess()const
{
	return success_;
}

