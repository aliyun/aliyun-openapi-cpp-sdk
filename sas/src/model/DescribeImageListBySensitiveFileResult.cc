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

#include <alibabacloud/sas/model/DescribeImageListBySensitiveFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageListBySensitiveFileResult::DescribeImageListBySensitiveFileResult() :
	ServiceResult()
{}

DescribeImageListBySensitiveFileResult::DescribeImageListBySensitiveFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageListBySensitiveFileResult::~DescribeImageListBySensitiveFileResult()
{}

void DescribeImageListBySensitiveFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageInfosNode = value["ImageInfos"]["ImageInfoList"];
	for (auto valueImageInfosImageInfoList : allImageInfosNode)
	{
		ImageInfoList imageInfosObject;
		if(!valueImageInfosImageInfoList["Uuid"].isNull())
			imageInfosObject.uuid = valueImageInfosImageInfoList["Uuid"].asString();
		if(!valueImageInfosImageInfoList["RegionId"].isNull())
			imageInfosObject.regionId = valueImageInfosImageInfoList["RegionId"].asString();
		if(!valueImageInfosImageInfoList["InstanceId"].isNull())
			imageInfosObject.instanceId = valueImageInfosImageInfoList["InstanceId"].asString();
		if(!valueImageInfosImageInfoList["RepoNamespace"].isNull())
			imageInfosObject.repoNamespace = valueImageInfosImageInfoList["RepoNamespace"].asString();
		if(!valueImageInfosImageInfoList["RepoName"].isNull())
			imageInfosObject.repoName = valueImageInfosImageInfoList["RepoName"].asString();
		if(!valueImageInfosImageInfoList["Digest"].isNull())
			imageInfosObject.digest = valueImageInfosImageInfoList["Digest"].asString();
		if(!valueImageInfosImageInfoList["Tag"].isNull())
			imageInfosObject.tag = valueImageInfosImageInfoList["Tag"].asString();
		if(!valueImageInfosImageInfoList["FirstScanTime"].isNull())
			imageInfosObject.firstScanTime = std::stol(valueImageInfosImageInfoList["FirstScanTime"].asString());
		if(!valueImageInfosImageInfoList["LastScanTime"].isNull())
			imageInfosObject.lastScanTime = std::stol(valueImageInfosImageInfoList["LastScanTime"].asString());
		if(!valueImageInfosImageInfoList["RiskLevel"].isNull())
			imageInfosObject.riskLevel = valueImageInfosImageInfoList["RiskLevel"].asString();
		imageInfos_.push_back(imageInfosObject);
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

std::vector<DescribeImageListBySensitiveFileResult::ImageInfoList> DescribeImageListBySensitiveFileResult::getImageInfos()const
{
	return imageInfos_;
}

DescribeImageListBySensitiveFileResult::PageInfo DescribeImageListBySensitiveFileResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeImageListBySensitiveFileResult::getMessage()const
{
	return message_;
}

int DescribeImageListBySensitiveFileResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeImageListBySensitiveFileResult::getCode()const
{
	return code_;
}

bool DescribeImageListBySensitiveFileResult::getSuccess()const
{
	return success_;
}

