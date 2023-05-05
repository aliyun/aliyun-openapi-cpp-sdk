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

#include <alibabacloud/ecd/model/DescribeCdsFileShareLinksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeCdsFileShareLinksResult::DescribeCdsFileShareLinksResult() :
	ServiceResult()
{}

DescribeCdsFileShareLinksResult::DescribeCdsFileShareLinksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdsFileShareLinksResult::~DescribeCdsFileShareLinksResult()
{}

void DescribeCdsFileShareLinksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["CdsFileShareLinkModel"];
	for (auto valueDataCdsFileShareLinkModel : allDataNode)
	{
		CdsFileShareLinkModel dataObject;
		if(!valueDataCdsFileShareLinkModel["Description"].isNull())
			dataObject.description = valueDataCdsFileShareLinkModel["Description"].asString();
		if(!valueDataCdsFileShareLinkModel["SaveLimit"].isNull())
			dataObject.saveLimit = std::stol(valueDataCdsFileShareLinkModel["SaveLimit"].asString());
		if(!valueDataCdsFileShareLinkModel["DownloadCount"].isNull())
			dataObject.downloadCount = std::stol(valueDataCdsFileShareLinkModel["DownloadCount"].asString());
		if(!valueDataCdsFileShareLinkModel["Creator"].isNull())
			dataObject.creator = valueDataCdsFileShareLinkModel["Creator"].asString();
		if(!valueDataCdsFileShareLinkModel["SaveCount"].isNull())
			dataObject.saveCount = std::stol(valueDataCdsFileShareLinkModel["SaveCount"].asString());
		if(!valueDataCdsFileShareLinkModel["DisableSave"].isNull())
			dataObject.disableSave = valueDataCdsFileShareLinkModel["DisableSave"].asString() == "true";
		if(!valueDataCdsFileShareLinkModel["SharePwd"].isNull())
			dataObject.sharePwd = valueDataCdsFileShareLinkModel["SharePwd"].asString();
		if(!valueDataCdsFileShareLinkModel["DisablePreview"].isNull())
			dataObject.disablePreview = valueDataCdsFileShareLinkModel["DisablePreview"].asString() == "true";
		if(!valueDataCdsFileShareLinkModel["AccessCount"].isNull())
			dataObject.accessCount = std::stol(valueDataCdsFileShareLinkModel["AccessCount"].asString());
		if(!valueDataCdsFileShareLinkModel["ShareId"].isNull())
			dataObject.shareId = valueDataCdsFileShareLinkModel["ShareId"].asString();
		if(!valueDataCdsFileShareLinkModel["DownloadLimit"].isNull())
			dataObject.downloadLimit = std::stol(valueDataCdsFileShareLinkModel["DownloadLimit"].asString());
		if(!valueDataCdsFileShareLinkModel["Status"].isNull())
			dataObject.status = valueDataCdsFileShareLinkModel["Status"].asString();
		if(!valueDataCdsFileShareLinkModel["DriveId"].isNull())
			dataObject.driveId = valueDataCdsFileShareLinkModel["DriveId"].asString();
		if(!valueDataCdsFileShareLinkModel["ModifiyTime"].isNull())
			dataObject.modifiyTime = valueDataCdsFileShareLinkModel["ModifiyTime"].asString();
		if(!valueDataCdsFileShareLinkModel["DisableDownload"].isNull())
			dataObject.disableDownload = valueDataCdsFileShareLinkModel["DisableDownload"].asString() == "true";
		if(!valueDataCdsFileShareLinkModel["Expiration"].isNull())
			dataObject.expiration = valueDataCdsFileShareLinkModel["Expiration"].asString();
		if(!valueDataCdsFileShareLinkModel["Expired"].isNull())
			dataObject.expired = valueDataCdsFileShareLinkModel["Expired"].asString() == "true";
		if(!valueDataCdsFileShareLinkModel["PreviewCount"].isNull())
			dataObject.previewCount = std::stol(valueDataCdsFileShareLinkModel["PreviewCount"].asString());
		if(!valueDataCdsFileShareLinkModel["PreviewLimit"].isNull())
			dataObject.previewLimit = std::stol(valueDataCdsFileShareLinkModel["PreviewLimit"].asString());
		if(!valueDataCdsFileShareLinkModel["VideoPreviewCount"].isNull())
			dataObject.videoPreviewCount = std::stol(valueDataCdsFileShareLinkModel["VideoPreviewCount"].asString());
		if(!valueDataCdsFileShareLinkModel["ReportCount"].isNull())
			dataObject.reportCount = std::stol(valueDataCdsFileShareLinkModel["ReportCount"].asString());
		if(!valueDataCdsFileShareLinkModel["FileIds"].isNull())
			dataObject.fileIds = valueDataCdsFileShareLinkModel["FileIds"].asString();
		if(!valueDataCdsFileShareLinkModel["ShareName"].isNull())
			dataObject.shareName = valueDataCdsFileShareLinkModel["ShareName"].asString();
		if(!valueDataCdsFileShareLinkModel["CreateTime"].isNull())
			dataObject.createTime = valueDataCdsFileShareLinkModel["CreateTime"].asString();
		if(!valueDataCdsFileShareLinkModel["ShareLink"].isNull())
			dataObject.shareLink = valueDataCdsFileShareLinkModel["ShareLink"].asString();
		data_.push_back(dataObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeCdsFileShareLinksResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeCdsFileShareLinksResult::getMessage()const
{
	return message_;
}

std::vector<DescribeCdsFileShareLinksResult::CdsFileShareLinkModel> DescribeCdsFileShareLinksResult::getData()const
{
	return data_;
}

std::string DescribeCdsFileShareLinksResult::getCode()const
{
	return code_;
}

bool DescribeCdsFileShareLinksResult::getSuccess()const
{
	return success_;
}

