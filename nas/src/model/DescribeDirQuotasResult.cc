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

#include <alibabacloud/nas/model/DescribeDirQuotasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeDirQuotasResult::DescribeDirQuotasResult() :
	ServiceResult()
{}

DescribeDirQuotasResult::DescribeDirQuotasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDirQuotasResult::~DescribeDirQuotasResult()
{}

void DescribeDirQuotasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDirQuotaInfosNode = value["DirQuotaInfos"]["DirQuotaInfo"];
	for (auto valueDirQuotaInfosDirQuotaInfo : allDirQuotaInfosNode)
	{
		DirQuotaInfo dirQuotaInfosObject;
		if(!valueDirQuotaInfosDirQuotaInfo["Status"].isNull())
			dirQuotaInfosObject.status = valueDirQuotaInfosDirQuotaInfo["Status"].asString();
		if(!valueDirQuotaInfosDirQuotaInfo["Path"].isNull())
			dirQuotaInfosObject.path = valueDirQuotaInfosDirQuotaInfo["Path"].asString();
		if(!valueDirQuotaInfosDirQuotaInfo["DirInode"].isNull())
			dirQuotaInfosObject.dirInode = valueDirQuotaInfosDirQuotaInfo["DirInode"].asString();
		auto allUserQuotaInfosNode = valueDirQuotaInfosDirQuotaInfo["UserQuotaInfos"]["UserQuotaInfo"];
		for (auto valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo : allUserQuotaInfosNode)
		{
			DirQuotaInfo::UserQuotaInfo userQuotaInfosObject;
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["FileCountReal"].isNull())
				userQuotaInfosObject.fileCountReal = std::stol(valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["FileCountReal"].asString());
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["UserType"].isNull())
				userQuotaInfosObject.userType = valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["UserType"].asString();
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["FileCountLimit"].isNull())
				userQuotaInfosObject.fileCountLimit = std::stol(valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["FileCountLimit"].asString());
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["UserId"].isNull())
				userQuotaInfosObject.userId = valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["UserId"].asString();
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["SizeLimit"].isNull())
				userQuotaInfosObject.sizeLimit = std::stol(valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["SizeLimit"].asString());
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["QuotaType"].isNull())
				userQuotaInfosObject.quotaType = valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["QuotaType"].asString();
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["SizeReal"].isNull())
				userQuotaInfosObject.sizeReal = std::stol(valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["SizeReal"].asString());
			if(!valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["SizeRealInByte"].isNull())
				userQuotaInfosObject.sizeRealInByte = std::stol(valueDirQuotaInfosDirQuotaInfoUserQuotaInfosUserQuotaInfo["SizeRealInByte"].asString());
			dirQuotaInfosObject.userQuotaInfos.push_back(userQuotaInfosObject);
		}
		dirQuotaInfos_.push_back(dirQuotaInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDirQuotasResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDirQuotasResult::DirQuotaInfo> DescribeDirQuotasResult::getDirQuotaInfos()const
{
	return dirQuotaInfos_;
}

int DescribeDirQuotasResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDirQuotasResult::getPageNumber()const
{
	return pageNumber_;
}

