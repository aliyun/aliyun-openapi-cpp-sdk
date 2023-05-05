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

#include <alibabacloud/ecd/model/ModifyCdsFileShareLinkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ModifyCdsFileShareLinkResult::ModifyCdsFileShareLinkResult() :
	ServiceResult()
{}

ModifyCdsFileShareLinkResult::ModifyCdsFileShareLinkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyCdsFileShareLinkResult::~ModifyCdsFileShareLinkResult()
{}

void ModifyCdsFileShareLinkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["SaveLimit"].isNull())
		data_.saveLimit = std::stol(dataNode["SaveLimit"].asString());
	if(!dataNode["DownloadCount"].isNull())
		data_.downloadCount = std::stol(dataNode["DownloadCount"].asString());
	if(!dataNode["Creator"].isNull())
		data_.creator = dataNode["Creator"].asString();
	if(!dataNode["SaveCount"].isNull())
		data_.saveCount = std::stol(dataNode["SaveCount"].asString());
	if(!dataNode["DisableSave"].isNull())
		data_.disableSave = dataNode["DisableSave"].asString() == "true";
	if(!dataNode["SharePwd"].isNull())
		data_.sharePwd = dataNode["SharePwd"].asString();
	if(!dataNode["DisablePreview"].isNull())
		data_.disablePreview = dataNode["DisablePreview"].asString() == "true";
	if(!dataNode["AccessCount"].isNull())
		data_.accessCount = std::stol(dataNode["AccessCount"].asString());
	if(!dataNode["ShareId"].isNull())
		data_.shareId = dataNode["ShareId"].asString();
	if(!dataNode["DownloadLimit"].isNull())
		data_.downloadLimit = std::stol(dataNode["DownloadLimit"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["DriveId"].isNull())
		data_.driveId = dataNode["DriveId"].asString();
	if(!dataNode["ModifiyTime"].isNull())
		data_.modifiyTime = dataNode["ModifiyTime"].asString();
	if(!dataNode["DisableDownload"].isNull())
		data_.disableDownload = dataNode["DisableDownload"].asString() == "true";
	if(!dataNode["Expiration"].isNull())
		data_.expiration = dataNode["Expiration"].asString();
	if(!dataNode["Expired"].isNull())
		data_.expired = dataNode["Expired"].asString() == "true";
	if(!dataNode["PreviewCount"].isNull())
		data_.previewCount = std::stol(dataNode["PreviewCount"].asString());
	if(!dataNode["PreviewLimit"].isNull())
		data_.previewLimit = std::stol(dataNode["PreviewLimit"].asString());
	if(!dataNode["VideoPreviewCount"].isNull())
		data_.videoPreviewCount = std::stol(dataNode["VideoPreviewCount"].asString());
	if(!dataNode["ReportCount"].isNull())
		data_.reportCount = std::stol(dataNode["ReportCount"].asString());
	if(!dataNode["FileIds"].isNull())
		data_.fileIds = dataNode["FileIds"].asString();
	if(!dataNode["ShareName"].isNull())
		data_.shareName = dataNode["ShareName"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["ShareLink"].isNull())
		data_.shareLink = dataNode["ShareLink"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ModifyCdsFileShareLinkResult::getMessage()const
{
	return message_;
}

ModifyCdsFileShareLinkResult::Data ModifyCdsFileShareLinkResult::getData()const
{
	return data_;
}

std::string ModifyCdsFileShareLinkResult::getCode()const
{
	return code_;
}

bool ModifyCdsFileShareLinkResult::getSuccess()const
{
	return success_;
}

