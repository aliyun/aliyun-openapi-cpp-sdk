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

#include <alibabacloud/vod/model/GetUploadDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetUploadDetailsResult::GetUploadDetailsResult() :
	ServiceResult()
{}

GetUploadDetailsResult::GetUploadDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUploadDetailsResult::~GetUploadDetailsResult()
{}

void GetUploadDetailsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUploadDetails = value["UploadDetails"]["UploadDetail"];
	for (auto value : allUploadDetails)
	{
		UploadDetail uploadDetailsObject;
		if(!value["MediaId"].isNull())
			uploadDetailsObject.mediaId = value["MediaId"].asString();
		if(!value["Title"].isNull())
			uploadDetailsObject.title = value["Title"].asString();
		if(!value["FileSize"].isNull())
			uploadDetailsObject.fileSize = std::stol(value["FileSize"].asString());
		if(!value["Status"].isNull())
			uploadDetailsObject.status = value["Status"].asString();
		if(!value["UploadStatus"].isNull())
			uploadDetailsObject.uploadStatus = value["UploadStatus"].asString();
		if(!value["CreationTime"].isNull())
			uploadDetailsObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			uploadDetailsObject.modificationTime = value["ModificationTime"].asString();
		if(!value["CompletionTime"].isNull())
			uploadDetailsObject.completionTime = value["CompletionTime"].asString();
		if(!value["UploadSize"].isNull())
			uploadDetailsObject.uploadSize = std::stol(value["UploadSize"].asString());
		if(!value["UploadRatio"].isNull())
			uploadDetailsObject.uploadRatio = std::stof(value["UploadRatio"].asString());
		if(!value["UploadIP"].isNull())
			uploadDetailsObject.uploadIP = value["UploadIP"].asString();
		if(!value["UploadSource"].isNull())
			uploadDetailsObject.uploadSource = value["UploadSource"].asString();
		if(!value["DeviceModel"].isNull())
			uploadDetailsObject.deviceModel = value["DeviceModel"].asString();
		uploadDetails_.push_back(uploadDetailsObject);
	}
	auto allNonExistMediaIds = value["NonExistMediaIds"]["MediaId"];
	for (const auto &item : allNonExistMediaIds)
		nonExistMediaIds_.push_back(item.asString());
	auto allForbiddenMediaIds = value["ForbiddenMediaIds"]["MediaId"];
	for (const auto &item : allForbiddenMediaIds)
		forbiddenMediaIds_.push_back(item.asString());

}

std::vector<std::string> GetUploadDetailsResult::getNonExistMediaIds()const
{
	return nonExistMediaIds_;
}

std::vector<GetUploadDetailsResult::UploadDetail> GetUploadDetailsResult::getUploadDetails()const
{
	return uploadDetails_;
}

std::vector<std::string> GetUploadDetailsResult::getForbiddenMediaIds()const
{
	return forbiddenMediaIds_;
}

