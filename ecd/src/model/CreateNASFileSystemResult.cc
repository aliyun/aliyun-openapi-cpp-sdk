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

#include <alibabacloud/ecd/model/CreateNASFileSystemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

CreateNASFileSystemResult::CreateNASFileSystemResult() :
	ServiceResult()
{}

CreateNASFileSystemResult::CreateNASFileSystemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNASFileSystemResult::~CreateNASFileSystemResult()
{}

void CreateNASFileSystemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FileSystemId"].isNull())
		fileSystemId_ = value["FileSystemId"].asString();
	if(!value["FileSystemName"].isNull())
		fileSystemName_ = value["FileSystemName"].asString();
	if(!value["MountTargetDomain"].isNull())
		mountTargetDomain_ = value["MountTargetDomain"].asString();
	if(!value["OfficeSiteId"].isNull())
		officeSiteId_ = value["OfficeSiteId"].asString();

}

std::string CreateNASFileSystemResult::getOfficeSiteId()const
{
	return officeSiteId_;
}

std::string CreateNASFileSystemResult::getMountTargetDomain()const
{
	return mountTargetDomain_;
}

std::string CreateNASFileSystemResult::getFileSystemId()const
{
	return fileSystemId_;
}

std::string CreateNASFileSystemResult::getFileSystemName()const
{
	return fileSystemName_;
}

