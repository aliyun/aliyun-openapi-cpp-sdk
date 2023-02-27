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

#include <alibabacloud/ice/model/GetUrlUploadInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetUrlUploadInfosResult::GetUrlUploadInfosResult() :
	ServiceResult()
{}

GetUrlUploadInfosResult::GetUrlUploadInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUrlUploadInfosResult::~GetUrlUploadInfosResult()
{}

void GetUrlUploadInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allURLUploadInfoListNode = value["URLUploadInfoList"]["UrlUploadJobInfoDTO"];
	for (auto valueURLUploadInfoListUrlUploadJobInfoDTO : allURLUploadInfoListNode)
	{
		UrlUploadJobInfoDTO uRLUploadInfoListObject;
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["CreationTime"].isNull())
			uRLUploadInfoListObject.creationTime = valueURLUploadInfoListUrlUploadJobInfoDTO["CreationTime"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["Status"].isNull())
			uRLUploadInfoListObject.status = valueURLUploadInfoListUrlUploadJobInfoDTO["Status"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["ErrorMessage"].isNull())
			uRLUploadInfoListObject.errorMessage = valueURLUploadInfoListUrlUploadJobInfoDTO["ErrorMessage"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["ErrorCode"].isNull())
			uRLUploadInfoListObject.errorCode = valueURLUploadInfoListUrlUploadJobInfoDTO["ErrorCode"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["CompleteTime"].isNull())
			uRLUploadInfoListObject.completeTime = valueURLUploadInfoListUrlUploadJobInfoDTO["CompleteTime"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["JobId"].isNull())
			uRLUploadInfoListObject.jobId = valueURLUploadInfoListUrlUploadJobInfoDTO["JobId"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["UserData"].isNull())
			uRLUploadInfoListObject.userData = valueURLUploadInfoListUrlUploadJobInfoDTO["UserData"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["UploadURL"].isNull())
			uRLUploadInfoListObject.uploadURL = valueURLUploadInfoListUrlUploadJobInfoDTO["UploadURL"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["MediaId"].isNull())
			uRLUploadInfoListObject.mediaId = valueURLUploadInfoListUrlUploadJobInfoDTO["MediaId"].asString();
		if(!valueURLUploadInfoListUrlUploadJobInfoDTO["FileSize"].isNull())
			uRLUploadInfoListObject.fileSize = valueURLUploadInfoListUrlUploadJobInfoDTO["FileSize"].asString();
		uRLUploadInfoList_.push_back(uRLUploadInfoListObject);
	}
	auto allNonExists = value["NonExists"]["ExistId"];
	for (const auto &item : allNonExists)
		nonExists_.push_back(item.asString());

}

std::vector<GetUrlUploadInfosResult::UrlUploadJobInfoDTO> GetUrlUploadInfosResult::getURLUploadInfoList()const
{
	return uRLUploadInfoList_;
}

std::vector<std::string> GetUrlUploadInfosResult::getNonExists()const
{
	return nonExists_;
}

