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
	auto allPackagesNode = value["Packages"]["Package"];
	for (auto valuePackagesPackage : allPackagesNode)
	{
		Package packagesObject;
		if(!valuePackagesPackage["ProjectName"].isNull())
			packagesObject.projectName = valuePackagesPackage["ProjectName"].asString();
		if(!valuePackagesPackage["PackageName"].isNull())
			packagesObject.packageName = valuePackagesPackage["PackageName"].asString();
		if(!valuePackagesPackage["Creator"].isNull())
			packagesObject.creator = valuePackagesPackage["Creator"].asString();
		if(!valuePackagesPackage["Modifier"].isNull())
			packagesObject.modifier = valuePackagesPackage["Modifier"].asString();
		if(!valuePackagesPackage["CreateTime"].isNull())
			packagesObject.createTime = std::stol(valuePackagesPackage["CreateTime"].asString());
		if(!valuePackagesPackage["ModifyTime"].isNull())
			packagesObject.modifyTime = std::stol(valuePackagesPackage["ModifyTime"].asString());
		if(!valuePackagesPackage["OriginName"].isNull())
			packagesObject.originName = valuePackagesPackage["OriginName"].asString();
		if(!valuePackagesPackage["Type"].isNull())
			packagesObject.type = valuePackagesPackage["Type"].asString();
		if(!valuePackagesPackage["Md5"].isNull())
			packagesObject.md5 = valuePackagesPackage["Md5"].asString();
		if(!valuePackagesPackage["Description"].isNull())
			packagesObject.description = valuePackagesPackage["Description"].asString();
		if(!valuePackagesPackage["OssEndpoint"].isNull())
			packagesObject.ossEndpoint = valuePackagesPackage["OssEndpoint"].asString();
		if(!valuePackagesPackage["OssBucket"].isNull())
			packagesObject.ossBucket = valuePackagesPackage["OssBucket"].asString();
		if(!valuePackagesPackage["OssOwner"].isNull())
			packagesObject.ossOwner = valuePackagesPackage["OssOwner"].asString();
		if(!valuePackagesPackage["OssPath"].isNull())
			packagesObject.ossPath = valuePackagesPackage["OssPath"].asString();
		if(!valuePackagesPackage["Tag"].isNull())
			packagesObject.tag = valuePackagesPackage["Tag"].asString();
		if(!valuePackagesPackage["ScanState"].isNull())
			packagesObject.scanState = valuePackagesPackage["ScanState"].asString();
		if(!valuePackagesPackage["ScanLink"].isNull())
			packagesObject.scanLink = valuePackagesPackage["ScanLink"].asString();
		if(!valuePackagesPackage["ScanExtBizNo"].isNull())
			packagesObject.scanExtBizNo = valuePackagesPackage["ScanExtBizNo"].asString();
		if(!valuePackagesPackage["ScanErrorMessage"].isNull())
			packagesObject.scanErrorMessage = valuePackagesPackage["ScanErrorMessage"].asString();
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

