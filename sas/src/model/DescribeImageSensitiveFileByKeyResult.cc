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

#include <alibabacloud/sas/model/DescribeImageSensitiveFileByKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageSensitiveFileByKeyResult::DescribeImageSensitiveFileByKeyResult() :
	ServiceResult()
{}

DescribeImageSensitiveFileByKeyResult::DescribeImageSensitiveFileByKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageSensitiveFileByKeyResult::~DescribeImageSensitiveFileByKeyResult()
{}

void DescribeImageSensitiveFileByKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveFileListNode = value["SensitiveFileList"]["SensitiveFileListItem"];
	for (auto valueSensitiveFileListSensitiveFileListItem : allSensitiveFileListNode)
	{
		SensitiveFileListItem sensitiveFileListObject;
		if(!valueSensitiveFileListSensitiveFileListItem["FilePath"].isNull())
			sensitiveFileListObject.filePath = valueSensitiveFileListSensitiveFileListItem["FilePath"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["LayerDigest"].isNull())
			sensitiveFileListObject.layerDigest = valueSensitiveFileListSensitiveFileListItem["LayerDigest"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["Promt"].isNull())
			sensitiveFileListObject.promt = valueSensitiveFileListSensitiveFileListItem["Promt"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["Advice"].isNull())
			sensitiveFileListObject.advice = valueSensitiveFileListSensitiveFileListItem["Advice"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["RiskLevel"].isNull())
			sensitiveFileListObject.riskLevel = valueSensitiveFileListSensitiveFileListItem["RiskLevel"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["SensitiveFileKey"].isNull())
			sensitiveFileListObject.sensitiveFileKey = valueSensitiveFileListSensitiveFileListItem["SensitiveFileKey"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["SensitiveFileName"].isNull())
			sensitiveFileListObject.sensitiveFileName = valueSensitiveFileListSensitiveFileListItem["SensitiveFileName"].asString();
		if(!valueSensitiveFileListSensitiveFileListItem["FirstScanTime"].isNull())
			sensitiveFileListObject.firstScanTime = std::stol(valueSensitiveFileListSensitiveFileListItem["FirstScanTime"].asString());
		if(!valueSensitiveFileListSensitiveFileListItem["LastScanTime"].isNull())
			sensitiveFileListObject.lastScanTime = std::stol(valueSensitiveFileListSensitiveFileListItem["LastScanTime"].asString());
		sensitiveFileList_.push_back(sensitiveFileListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["LastRowKey"].isNull())
		pageInfo_.lastRowKey = pageInfoNode["LastRowKey"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

DescribeImageSensitiveFileByKeyResult::PageInfo DescribeImageSensitiveFileByKeyResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeImageSensitiveFileByKeyResult::getMessage()const
{
	return message_;
}

int DescribeImageSensitiveFileByKeyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeImageSensitiveFileByKeyResult::SensitiveFileListItem> DescribeImageSensitiveFileByKeyResult::getSensitiveFileList()const
{
	return sensitiveFileList_;
}

std::string DescribeImageSensitiveFileByKeyResult::getCode()const
{
	return code_;
}

bool DescribeImageSensitiveFileByKeyResult::getSuccess()const
{
	return success_;
}

