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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUploadDetailsNode = value["UploadDetails"]["UploadDetail"];
	for (auto valueUploadDetailsUploadDetail : allUploadDetailsNode)
	{
		UploadDetail uploadDetailsObject;
		if(!valueUploadDetailsUploadDetail["Status"].isNull())
			uploadDetailsObject.status = valueUploadDetailsUploadDetail["Status"].asString();
		if(!valueUploadDetailsUploadDetail["CreationTime"].isNull())
			uploadDetailsObject.creationTime = valueUploadDetailsUploadDetail["CreationTime"].asString();
		if(!valueUploadDetailsUploadDetail["UploadSource"].isNull())
			uploadDetailsObject.uploadSource = valueUploadDetailsUploadDetail["UploadSource"].asString();
		if(!valueUploadDetailsUploadDetail["UploadIP"].isNull())
			uploadDetailsObject.uploadIP = valueUploadDetailsUploadDetail["UploadIP"].asString();
		if(!valueUploadDetailsUploadDetail["DeviceModel"].isNull())
			uploadDetailsObject.deviceModel = valueUploadDetailsUploadDetail["DeviceModel"].asString();
		if(!valueUploadDetailsUploadDetail["ModificationTime"].isNull())
			uploadDetailsObject.modificationTime = valueUploadDetailsUploadDetail["ModificationTime"].asString();
		if(!valueUploadDetailsUploadDetail["CompletionTime"].isNull())
			uploadDetailsObject.completionTime = valueUploadDetailsUploadDetail["CompletionTime"].asString();
		if(!valueUploadDetailsUploadDetail["MediaId"].isNull())
			uploadDetailsObject.mediaId = valueUploadDetailsUploadDetail["MediaId"].asString();
		if(!valueUploadDetailsUploadDetail["UploadSize"].isNull())
			uploadDetailsObject.uploadSize = std::stol(valueUploadDetailsUploadDetail["UploadSize"].asString());
		if(!valueUploadDetailsUploadDetail["UploadRatio"].isNull())
			uploadDetailsObject.uploadRatio = std::stof(valueUploadDetailsUploadDetail["UploadRatio"].asString());
		if(!valueUploadDetailsUploadDetail["UploadStatus"].isNull())
			uploadDetailsObject.uploadStatus = valueUploadDetailsUploadDetail["UploadStatus"].asString();
		if(!valueUploadDetailsUploadDetail["Title"].isNull())
			uploadDetailsObject.title = valueUploadDetailsUploadDetail["Title"].asString();
		if(!valueUploadDetailsUploadDetail["FileSize"].isNull())
			uploadDetailsObject.fileSize = std::stol(valueUploadDetailsUploadDetail["FileSize"].asString());
		uploadDetails_.push_back(uploadDetailsObject);
	}
	auto allForbiddenMediaIds = value["ForbiddenMediaIds"]["MediaId"];
	for (const auto &item : allForbiddenMediaIds)
		forbiddenMediaIds_.push_back(item.asString());
	auto allNonExistMediaIds = value["NonExistMediaIds"]["MediaId"];
	for (const auto &item : allNonExistMediaIds)
		nonExistMediaIds_.push_back(item.asString());

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

