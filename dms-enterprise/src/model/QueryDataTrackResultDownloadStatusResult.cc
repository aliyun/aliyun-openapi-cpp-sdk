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

#include <alibabacloud/dms-enterprise/model/QueryDataTrackResultDownloadStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

QueryDataTrackResultDownloadStatusResult::QueryDataTrackResultDownloadStatusResult() :
	ServiceResult()
{}

QueryDataTrackResultDownloadStatusResult::QueryDataTrackResultDownloadStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDataTrackResultDownloadStatusResult::~QueryDataTrackResultDownloadStatusResult()
{}

void QueryDataTrackResultDownloadStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statusResultNode = value["StatusResult"];
	if(!statusResultNode["DownloadStatus"].isNull())
		statusResult_.downloadStatus = statusResultNode["DownloadStatus"].asString();
	if(!statusResultNode["DownloadUrl"].isNull())
		statusResult_.downloadUrl = statusResultNode["DownloadUrl"].asString();
	if(!statusResultNode["StatusDesc"].isNull())
		statusResult_.statusDesc = statusResultNode["StatusDesc"].asString();
	if(!statusResultNode["TotalCount"].isNull())
		statusResult_.totalCount = std::stol(statusResultNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

QueryDataTrackResultDownloadStatusResult::StatusResult QueryDataTrackResultDownloadStatusResult::getStatusResult()const
{
	return statusResult_;
}

std::string QueryDataTrackResultDownloadStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryDataTrackResultDownloadStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool QueryDataTrackResultDownloadStatusResult::getSuccess()const
{
	return success_;
}

