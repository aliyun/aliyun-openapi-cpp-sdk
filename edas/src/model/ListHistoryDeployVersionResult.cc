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

#include <alibabacloud/edas/model/ListHistoryDeployVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListHistoryDeployVersionResult::ListHistoryDeployVersionResult() :
	ServiceResult()
{}

ListHistoryDeployVersionResult::ListHistoryDeployVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHistoryDeployVersionResult::~ListHistoryDeployVersionResult()
{}

void ListHistoryDeployVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPackageVersionListNode = value["PackageVersionList"]["PackageVersion"];
	for (auto valuePackageVersionListPackageVersion : allPackageVersionListNode)
	{
		PackageVersion packageVersionListObject;
		if(!valuePackageVersionListPackageVersion["Id"].isNull())
			packageVersionListObject.id = valuePackageVersionListPackageVersion["Id"].asString();
		if(!valuePackageVersionListPackageVersion["PackageVersion"].isNull())
			packageVersionListObject.packageVersion = valuePackageVersionListPackageVersion["PackageVersion"].asString();
		if(!valuePackageVersionListPackageVersion["AppId"].isNull())
			packageVersionListObject.appId = valuePackageVersionListPackageVersion["AppId"].asString();
		if(!valuePackageVersionListPackageVersion["Description"].isNull())
			packageVersionListObject.description = valuePackageVersionListPackageVersion["Description"].asString();
		if(!valuePackageVersionListPackageVersion["WarUrl"].isNull())
			packageVersionListObject.warUrl = valuePackageVersionListPackageVersion["WarUrl"].asString();
		if(!valuePackageVersionListPackageVersion["CreateTime"].isNull())
			packageVersionListObject.createTime = std::stol(valuePackageVersionListPackageVersion["CreateTime"].asString());
		if(!valuePackageVersionListPackageVersion["UpdateTime"].isNull())
			packageVersionListObject.updateTime = std::stol(valuePackageVersionListPackageVersion["UpdateTime"].asString());
		if(!valuePackageVersionListPackageVersion["Type"].isNull())
			packageVersionListObject.type = valuePackageVersionListPackageVersion["Type"].asString();
		if(!valuePackageVersionListPackageVersion["PublicUrl"].isNull())
			packageVersionListObject.publicUrl = valuePackageVersionListPackageVersion["PublicUrl"].asString();
		packageVersionList_.push_back(packageVersionListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListHistoryDeployVersionResult::PackageVersion> ListHistoryDeployVersionResult::getPackageVersionList()const
{
	return packageVersionList_;
}

std::string ListHistoryDeployVersionResult::getMessage()const
{
	return message_;
}

int ListHistoryDeployVersionResult::getCode()const
{
	return code_;
}

