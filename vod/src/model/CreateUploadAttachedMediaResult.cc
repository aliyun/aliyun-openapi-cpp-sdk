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

#include <alibabacloud/vod/model/CreateUploadAttachedMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

CreateUploadAttachedMediaResult::CreateUploadAttachedMediaResult() :
	ServiceResult()
{}

CreateUploadAttachedMediaResult::CreateUploadAttachedMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUploadAttachedMediaResult::~CreateUploadAttachedMediaResult()
{}

void CreateUploadAttachedMediaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["MediaId"].isNull())
		mediaId_ = value["MediaId"].asString();
	if(!value["MediaURL"].isNull())
		mediaURL_ = value["MediaURL"].asString();
	if(!value["UploadAddress"].isNull())
		uploadAddress_ = value["UploadAddress"].asString();
	if(!value["UploadAuth"].isNull())
		uploadAuth_ = value["UploadAuth"].asString();
	if(!value["FileURL"].isNull())
		fileURL_ = value["FileURL"].asString();

}

std::string CreateUploadAttachedMediaResult::getFileURL()const
{
	return fileURL_;
}

std::string CreateUploadAttachedMediaResult::getMediaURL()const
{
	return mediaURL_;
}

std::string CreateUploadAttachedMediaResult::getUploadAddress()const
{
	return uploadAddress_;
}

std::string CreateUploadAttachedMediaResult::getMediaId()const
{
	return mediaId_;
}

std::string CreateUploadAttachedMediaResult::getUploadAuth()const
{
	return uploadAuth_;
}

