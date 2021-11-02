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

#include <alibabacloud/foas/model/GetPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetPackageResult::GetPackageResult() :
	ServiceResult()
{}

GetPackageResult::GetPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPackageResult::~GetPackageResult()
{}

void GetPackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto packageNode = value["Package"];
	if(!packageNode["ProjectName"].isNull())
		package_.projectName = packageNode["ProjectName"].asString();
	if(!packageNode["PackageName"].isNull())
		package_.packageName = packageNode["PackageName"].asString();
	if(!packageNode["Creator"].isNull())
		package_.creator = packageNode["Creator"].asString();
	if(!packageNode["Modifier"].isNull())
		package_.modifier = packageNode["Modifier"].asString();
	if(!packageNode["CreateTime"].isNull())
		package_.createTime = std::stol(packageNode["CreateTime"].asString());
	if(!packageNode["ModifyTime"].isNull())
		package_.modifyTime = std::stol(packageNode["ModifyTime"].asString());
	if(!packageNode["OriginName"].isNull())
		package_.originName = packageNode["OriginName"].asString();
	if(!packageNode["Type"].isNull())
		package_.type = packageNode["Type"].asString();
	if(!packageNode["Md5"].isNull())
		package_.md5 = packageNode["Md5"].asString();
	if(!packageNode["Description"].isNull())
		package_.description = packageNode["Description"].asString();
	if(!packageNode["OssEndpoint"].isNull())
		package_.ossEndpoint = packageNode["OssEndpoint"].asString();
	if(!packageNode["OssBucket"].isNull())
		package_.ossBucket = packageNode["OssBucket"].asString();
	if(!packageNode["OssOwner"].isNull())
		package_.ossOwner = packageNode["OssOwner"].asString();
	if(!packageNode["OssPath"].isNull())
		package_.ossPath = packageNode["OssPath"].asString();
	if(!packageNode["Tag"].isNull())
		package_.tag = packageNode["Tag"].asString();
	if(!packageNode["ScanLink"].isNull())
		package_.scanLink = packageNode["ScanLink"].asString();
	if(!packageNode["ScanState"].isNull())
		package_.scanState = packageNode["ScanState"].asString();
	if(!packageNode["ScanErrorMessage"].isNull())
		package_.scanErrorMessage = packageNode["ScanErrorMessage"].asString();
	if(!packageNode["ScanExtBizNo"].isNull())
		package_.scanExtBizNo = packageNode["ScanExtBizNo"].asString();

}

GetPackageResult::Package GetPackageResult::getPackage()const
{
	return package_;
}

