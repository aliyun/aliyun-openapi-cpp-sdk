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

#include <alibabacloud/ice/model/GetLiveSnapshotJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveSnapshotJobResult::GetLiveSnapshotJobResult() :
	ServiceResult()
{}

GetLiveSnapshotJobResult::GetLiveSnapshotJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveSnapshotJobResult::~GetLiveSnapshotJobResult()
{}

void GetLiveSnapshotJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto streamInputNode = value["StreamInput"];
	if(!streamInputNode["Url"].isNull())
		streamInput_.url = streamInputNode["Url"].asString();
	if(!streamInputNode["Type"].isNull())
		streamInput_.type = streamInputNode["Type"].asString();
	auto snapshotOutputNode = value["SnapshotOutput"];
	if(!snapshotOutputNode["StorageType"].isNull())
		snapshotOutput_.storageType = snapshotOutputNode["StorageType"].asString();
	if(!snapshotOutputNode["Endpoint"].isNull())
		snapshotOutput_.endpoint = snapshotOutputNode["Endpoint"].asString();
	if(!snapshotOutputNode["Bucket"].isNull())
		snapshotOutput_.bucket = snapshotOutputNode["Bucket"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["JobName"].isNull())
		jobName_ = value["JobName"].asString();
	if(!value["TemplateId"].isNull())
		templateId_ = value["TemplateId"].asString();
	if(!value["TemplateName"].isNull())
		templateName_ = value["TemplateName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["OverwriteFormat"].isNull())
		overwriteFormat_ = value["OverwriteFormat"].asString();
	if(!value["SequenceFormat"].isNull())
		sequenceFormat_ = value["SequenceFormat"].asString();
	if(!value["TimeInterval"].isNull())
		timeInterval_ = std::stoi(value["TimeInterval"].asString());
	if(!value["CallbackUrl"].isNull())
		callbackUrl_ = value["CallbackUrl"].asString();
	if(!value["LastModified"].isNull())
		lastModified_ = value["LastModified"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::string GetLiveSnapshotJobResult::getStatus()const
{
	return status_;
}

std::string GetLiveSnapshotJobResult::getSequenceFormat()const
{
	return sequenceFormat_;
}

int GetLiveSnapshotJobResult::getTimeInterval()const
{
	return timeInterval_;
}

std::string GetLiveSnapshotJobResult::getCreateTime()const
{
	return createTime_;
}

std::string GetLiveSnapshotJobResult::getJobName()const
{
	return jobName_;
}

GetLiveSnapshotJobResult::SnapshotOutput GetLiveSnapshotJobResult::getSnapshotOutput()const
{
	return snapshotOutput_;
}

std::string GetLiveSnapshotJobResult::getCallbackUrl()const
{
	return callbackUrl_;
}

std::string GetLiveSnapshotJobResult::getLastModified()const
{
	return lastModified_;
}

std::string GetLiveSnapshotJobResult::getOverwriteFormat()const
{
	return overwriteFormat_;
}

GetLiveSnapshotJobResult::StreamInput GetLiveSnapshotJobResult::getStreamInput()const
{
	return streamInput_;
}

std::string GetLiveSnapshotJobResult::getTemplateName()const
{
	return templateName_;
}

std::string GetLiveSnapshotJobResult::getJobId()const
{
	return jobId_;
}

std::string GetLiveSnapshotJobResult::getTemplateId()const
{
	return templateId_;
}

