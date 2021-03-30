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

#include <alibabacloud/dms-enterprise/model/GetDataExportDownloadURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataExportDownloadURLResult::GetDataExportDownloadURLResult() :
	ServiceResult()
{}

GetDataExportDownloadURLResult::GetDataExportDownloadURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataExportDownloadURLResult::~GetDataExportDownloadURLResult()
{}

void GetDataExportDownloadURLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto downloadURLResultNode = value["DownloadURLResult"];
	if(!downloadURLResultNode["HasResult"].isNull())
		downloadURLResult_.hasResult = downloadURLResultNode["HasResult"].asString() == "true";
	if(!downloadURLResultNode["TipMessage"].isNull())
		downloadURLResult_.tipMessage = downloadURLResultNode["TipMessage"].asString();
	if(!downloadURLResultNode["URL"].isNull())
		downloadURLResult_.uRL = downloadURLResultNode["URL"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDataExportDownloadURLResult::DownloadURLResult GetDataExportDownloadURLResult::getDownloadURLResult()const
{
	return downloadURLResult_;
}

std::string GetDataExportDownloadURLResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataExportDownloadURLResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataExportDownloadURLResult::getSuccess()const
{
	return success_;
}

