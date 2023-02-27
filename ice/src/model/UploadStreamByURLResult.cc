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

#include <alibabacloud/ice/model/UploadStreamByURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

UploadStreamByURLResult::UploadStreamByURLResult() :
	ServiceResult()
{}

UploadStreamByURLResult::UploadStreamByURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadStreamByURLResult::~UploadStreamByURLResult()
{}

void UploadStreamByURLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["MediaId"].isNull())
		mediaId_ = value["MediaId"].asString();
	if(!value["FileURL"].isNull())
		fileURL_ = value["FileURL"].asString();
	if(!value["SourceURL"].isNull())
		sourceURL_ = value["SourceURL"].asString();

}

std::string UploadStreamByURLResult::getFileURL()const
{
	return fileURL_;
}

std::string UploadStreamByURLResult::getSourceURL()const
{
	return sourceURL_;
}

std::string UploadStreamByURLResult::getMediaId()const
{
	return mediaId_;
}

std::string UploadStreamByURLResult::getJobId()const
{
	return jobId_;
}

