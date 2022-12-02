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

#include <alibabacloud/sas/model/DescribeImageSensitiveFileListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageSensitiveFileListResult::DescribeImageSensitiveFileListResult() :
	ServiceResult()
{}

DescribeImageSensitiveFileListResult::DescribeImageSensitiveFileListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageSensitiveFileListResult::~DescribeImageSensitiveFileListResult()
{}

void DescribeImageSensitiveFileListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveFileListNode = value["SensitiveFileList"]["List"];
	for (auto valueSensitiveFileListList : allSensitiveFileListNode)
	{
		List sensitiveFileListObject;
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
		if(!valueSensitiveFileListList["Count"].isNull())
			sensitiveFileListObject.count = std::stoi(valueSensitiveFileListList["Count"].asString());
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

DescribeImageSensitiveFileListResult::PageInfo DescribeImageSensitiveFileListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeImageSensitiveFileListResult::getMessage()const
{
	return message_;
}

int DescribeImageSensitiveFileListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeImageSensitiveFileListResult::List> DescribeImageSensitiveFileListResult::getSensitiveFileList()const
{
	return sensitiveFileList_;
}

std::string DescribeImageSensitiveFileListResult::getCode()const
{
	return code_;
}

bool DescribeImageSensitiveFileListResult::getSuccess()const
{
	return success_;
}

