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
	auto allSensitiveFileListNode = value["SensitiveFileList"]["List"];
	for (auto valueSensitiveFileListList : allSensitiveFileListNode)
	{
		List sensitiveFileListObject;
		if(!valueSensitiveFileListList["FilePath"].isNull())
			sensitiveFileListObject.filePath = valueSensitiveFileListList["FilePath"].asString();
		if(!valueSensitiveFileListList["LayerDigest"].isNull())
			sensitiveFileListObject.layerDigest = valueSensitiveFileListList["LayerDigest"].asString();
		if(!valueSensitiveFileListList["Promt"].isNull())
			sensitiveFileListObject.promt = valueSensitiveFileListList["Promt"].asString();
		if(!valueSensitiveFileListList["Advice"].isNull())
			sensitiveFileListObject.advice = valueSensitiveFileListList["Advice"].asString();
		if(!valueSensitiveFileListList["RiskLevel"].isNull())
			sensitiveFileListObject.riskLevel = valueSensitiveFileListList["RiskLevel"].asString();
		if(!valueSensitiveFileListList["SensitiveFileKey"].isNull())
			sensitiveFileListObject.sensitiveFileKey = valueSensitiveFileListList["SensitiveFileKey"].asString();
		if(!valueSensitiveFileListList["SensitiveFileName"].isNull())
			sensitiveFileListObject.sensitiveFileName = valueSensitiveFileListList["SensitiveFileName"].asString();
		if(!valueSensitiveFileListList["FirstScanTime"].isNull())
			sensitiveFileListObject.firstScanTime = std::stol(valueSensitiveFileListList["FirstScanTime"].asString());
		if(!valueSensitiveFileListList["LastScanTime"].isNull())
			sensitiveFileListObject.lastScanTime = std::stol(valueSensitiveFileListList["LastScanTime"].asString());
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

std::vector<DescribeImageSensitiveFileByKeyResult::List> DescribeImageSensitiveFileByKeyResult::getSensitiveFileList()const
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

