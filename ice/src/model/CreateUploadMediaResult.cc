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

#include <alibabacloud/ice/model/CreateUploadMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

CreateUploadMediaResult::CreateUploadMediaResult() :
	ServiceResult()
{}

CreateUploadMediaResult::CreateUploadMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUploadMediaResult::~CreateUploadMediaResult()
{}

void CreateUploadMediaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MediaId"].isNull())
		mediaId_ = value["MediaId"].asString();
	if(!value["MediaURL"].isNull())
		mediaURL_ = value["MediaURL"].asString();
	if(!value["FileURL"].isNull())
		fileURL_ = value["FileURL"].asString();
	if(!value["UploadAddress"].isNull())
		uploadAddress_ = value["UploadAddress"].asString();
	if(!value["UploadAuth"].isNull())
		uploadAuth_ = value["UploadAuth"].asString();

}

std::string CreateUploadMediaResult::getFileURL()const
{
	return fileURL_;
}

std::string CreateUploadMediaResult::getMediaURL()const
{
	return mediaURL_;
}

std::string CreateUploadMediaResult::getUploadAddress()const
{
	return uploadAddress_;
}

std::string CreateUploadMediaResult::getMediaId()const
{
	return mediaId_;
}

std::string CreateUploadMediaResult::getUploadAuth()const
{
	return uploadAuth_;
}

