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

#include <alibabacloud/vod/model/GetURLUploadInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetURLUploadInfosResult::GetURLUploadInfosResult() :
	ServiceResult()
{}

GetURLUploadInfosResult::GetURLUploadInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetURLUploadInfosResult::~GetURLUploadInfosResult()
{}

void GetURLUploadInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allURLUploadInfoList = value["URLUploadInfoList"]["UrlUploadJobInfoDTO"];
	for (auto value : allURLUploadInfoList)
	{
		UrlUploadJobInfoDTO uRLUploadInfoListObject;
		if(!value["JobId"].isNull())
			uRLUploadInfoListObject.jobId = value["JobId"].asString();
		if(!value["UploadURL"].isNull())
			uRLUploadInfoListObject.uploadURL = value["UploadURL"].asString();
		if(!value["MediaId"].isNull())
			uRLUploadInfoListObject.mediaId = value["MediaId"].asString();
		if(!value["FileSize"].isNull())
			uRLUploadInfoListObject.fileSize = value["FileSize"].asString();
		if(!value["Status"].isNull())
			uRLUploadInfoListObject.status = value["Status"].asString();
		if(!value["UserData"].isNull())
			uRLUploadInfoListObject.userData = value["UserData"].asString();
		if(!value["ErrorCode"].isNull())
			uRLUploadInfoListObject.errorCode = value["ErrorCode"].asString();
		if(!value["ErrorMessage"].isNull())
			uRLUploadInfoListObject.errorMessage = value["ErrorMessage"].asString();
		if(!value["CreationTime"].isNull())
			uRLUploadInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["CompleteTime"].isNull())
			uRLUploadInfoListObject.completeTime = value["CompleteTime"].asString();
		uRLUploadInfoList_.push_back(uRLUploadInfoListObject);
	}
	auto allNonExists = value["NonExists"]["ExistId"];
	for (const auto &item : allNonExists)
		nonExists_.push_back(item.asString());

}

std::vector<GetURLUploadInfosResult::UrlUploadJobInfoDTO> GetURLUploadInfosResult::getURLUploadInfoList()const
{
	return uRLUploadInfoList_;
}

std::vector<std::string> GetURLUploadInfosResult::getNonExists()const
{
	return nonExists_;
}

