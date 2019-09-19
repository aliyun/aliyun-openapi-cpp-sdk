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

#include <alibabacloud/csb/model/FindProjectListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindProjectListResult::FindProjectListResult() :
	ServiceResult()
{}

FindProjectListResult::FindProjectListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindProjectListResult::~FindProjectListResult()
{}

void FindProjectListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allProjectListNode = dataNode["ProjectList"]["Project"];
	for (auto dataNodeProjectListProject : allProjectListNode)
	{
		Data::Project projectObject;
		if(!dataNodeProjectListProject["ApiNum"].isNull())
			projectObject.apiNum = std::stoi(dataNodeProjectListProject["ApiNum"].asString());
		if(!dataNodeProjectListProject["CsbId"].isNull())
			projectObject.csbId = std::stol(dataNodeProjectListProject["CsbId"].asString());
		if(!dataNodeProjectListProject["DeleteFlag"].isNull())
			projectObject.deleteFlag = std::stoi(dataNodeProjectListProject["DeleteFlag"].asString());
		if(!dataNodeProjectListProject["Description"].isNull())
			projectObject.description = dataNodeProjectListProject["Description"].asString();
		if(!dataNodeProjectListProject["GmtCreate"].isNull())
			projectObject.gmtCreate = std::stol(dataNodeProjectListProject["GmtCreate"].asString());
		if(!dataNodeProjectListProject["GmtModified"].isNull())
			projectObject.gmtModified = std::stol(dataNodeProjectListProject["GmtModified"].asString());
		if(!dataNodeProjectListProject["Id"].isNull())
			projectObject.id = std::stol(dataNodeProjectListProject["Id"].asString());
		if(!dataNodeProjectListProject["InterfaceJarLocation"].isNull())
			projectObject.interfaceJarLocation = dataNodeProjectListProject["InterfaceJarLocation"].asString();
		if(!dataNodeProjectListProject["InterfaceJarName"].isNull())
			projectObject.interfaceJarName = dataNodeProjectListProject["InterfaceJarName"].asString();
		if(!dataNodeProjectListProject["JarFileKey"].isNull())
			projectObject.jarFileKey = dataNodeProjectListProject["JarFileKey"].asString();
		if(!dataNodeProjectListProject["OwnerId"].isNull())
			projectObject.ownerId = dataNodeProjectListProject["OwnerId"].asString();
		if(!dataNodeProjectListProject["ProjectName"].isNull())
			projectObject.projectName = dataNodeProjectListProject["ProjectName"].asString();
		if(!dataNodeProjectListProject["ProjectOwnerEmail"].isNull())
			projectObject.projectOwnerEmail = dataNodeProjectListProject["ProjectOwnerEmail"].asString();
		if(!dataNodeProjectListProject["ProjectOwnerName"].isNull())
			projectObject.projectOwnerName = dataNodeProjectListProject["ProjectOwnerName"].asString();
		if(!dataNodeProjectListProject["ProjectOwnerPhoneNum"].isNull())
			projectObject.projectOwnerPhoneNum = dataNodeProjectListProject["ProjectOwnerPhoneNum"].asString();
		if(!dataNodeProjectListProject["Status"].isNull())
			projectObject.status = std::stoi(dataNodeProjectListProject["Status"].asString());
		if(!dataNodeProjectListProject["UserId"].isNull())
			projectObject.userId = dataNodeProjectListProject["UserId"].asString();
		data_.projectList.push_back(projectObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindProjectListResult::getMessage()const
{
	return message_;
}

FindProjectListResult::Data FindProjectListResult::getData()const
{
	return data_;
}

int FindProjectListResult::getCode()const
{
	return code_;
}

