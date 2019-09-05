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

#include <alibabacloud/foas/model/ListPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListPackageResult::ListPackageResult() :
	ServiceResult()
{}

ListPackageResult::ListPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPackageResult::~ListPackageResult()
{}

void ListPackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPackages = value["Packages"]["Package"];
	for (auto value : allPackages)
	{
		Package packagesObject;
		if(!value["ProjectName"].isNull())
			packagesObject.projectName = value["ProjectName"].asString();
		if(!value["PackageName"].isNull())
			packagesObject.packageName = value["PackageName"].asString();
		if(!value["Creator"].isNull())
			packagesObject.creator = value["Creator"].asString();
		if(!value["Modifier"].isNull())
			packagesObject.modifier = value["Modifier"].asString();
		if(!value["CreateTime"].isNull())
			packagesObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["ModifyTime"].isNull())
			packagesObject.modifyTime = std::stol(value["ModifyTime"].asString());
		if(!value["OriginName"].isNull())
			packagesObject.originName = value["OriginName"].asString();
		if(!value["Type"].isNull())
			packagesObject.type = value["Type"].asString();
		if(!value["Md5"].isNull())
			packagesObject.md5 = value["Md5"].asString();
		if(!value["Description"].isNull())
			packagesObject.description = value["Description"].asString();
		if(!value["OssEndpoint"].isNull())
			packagesObject.ossEndpoint = value["OssEndpoint"].asString();
		if(!value["OssBucket"].isNull())
			packagesObject.ossBucket = value["OssBucket"].asString();
		if(!value["OssOwner"].isNull())
			packagesObject.ossOwner = value["OssOwner"].asString();
		if(!value["OssPath"].isNull())
			packagesObject.ossPath = value["OssPath"].asString();
		if(!value["Tag"].isNull())
			packagesObject.tag = value["Tag"].asString();
		packages_.push_back(packagesObject);
	}
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListPackageResult::getTotalCount()const
{
	return totalCount_;
}

int ListPackageResult::getPageSize()const
{
	return pageSize_;
}

int ListPackageResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<ListPackageResult::Package> ListPackageResult::getPackages()const
{
	return packages_;
}

int ListPackageResult::getPageIndex()const
{
	return pageIndex_;
}

