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

#include <alibabacloud/linkvisual/model/QueryRecordDownloadJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryRecordDownloadJobListResult::QueryRecordDownloadJobListResult() :
	ServiceResult()
{}

QueryRecordDownloadJobListResult::QueryRecordDownloadJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRecordDownloadJobListResult::~QueryRecordDownloadJobListResult()
{}

void QueryRecordDownloadJobListResult::parse(const std::string &payload)
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
		if(!dataNodeJobListJob["Status"].isNull())
			jobObject.status = std::stoi(dataNodeJobListJob["Status"].asString());
		if(!dataNodeJobListJob["Type"].isNull())
			jobObject.type = std::stoi(dataNodeJobListJob["Type"].asString());
		if(!dataNodeJobListJob["Progress"].isNull())
			jobObject.progress = std::stoi(dataNodeJobListJob["Progress"].asString());
		if(!dataNodeJobListJob["RecordType"].isNull())
			jobObject.recordType = std::stoi(dataNodeJobListJob["RecordType"].asString());
		if(!dataNodeJobListJob["BeginTime"].isNull())
			jobObject.beginTime = std::stoi(dataNodeJobListJob["BeginTime"].asString());
		if(!dataNodeJobListJob["Url"].isNull())
			jobObject.url = dataNodeJobListJob["Url"].asString();
		if(!dataNodeJobListJob["FileName"].isNull())
			jobObject.fileName = dataNodeJobListJob["FileName"].asString();
		if(!dataNodeJobListJob["EndTime"].isNull())
			jobObject.endTime = std::stoi(dataNodeJobListJob["EndTime"].asString());
		if(!dataNodeJobListJob["StreamType"].isNull())
			jobObject.streamType = std::stoi(dataNodeJobListJob["StreamType"].asString());
		if(!dataNodeJobListJob["JobId"].isNull())
			jobObject.jobId = dataNodeJobListJob["JobId"].asString();
		if(!dataNodeJobListJob["JobErrorCode"].isNull())
			jobObject.jobErrorCode = std::stoi(dataNodeJobListJob["JobErrorCode"].asString());
		if(!dataNodeJobListJob["IotId"].isNull())
			jobObject.iotId = dataNodeJobListJob["IotId"].asString();
		data_.jobList.push_back(jobObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryRecordDownloadJobListResult::Data QueryRecordDownloadJobListResult::getData()const
{
	return data_;
}

std::string QueryRecordDownloadJobListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryRecordDownloadJobListResult::getCode()const
{
	return code_;
}

bool QueryRecordDownloadJobListResult::getSuccess()const
{
	return success_;
}

