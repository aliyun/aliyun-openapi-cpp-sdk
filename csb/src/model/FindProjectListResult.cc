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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allProjectList = value["ProjectList"]["Project"];
	for (auto value : allProjectList)
	{
		Data::Project projectObject;
		if(!value["ApiNum"].isNull())
			projectObject.apiNum = std::stoi(value["ApiNum"].asString());
		if(!value["CsbId"].isNull())
			projectObject.csbId = std::stol(value["CsbId"].asString());
		if(!value["DeleteFlag"].isNull())
			projectObject.deleteFlag = std::stoi(value["DeleteFlag"].asString());
		if(!value["Description"].isNull())
			projectObject.description = value["Description"].asString();
		if(!value["GmtCreate"].isNull())
			projectObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			projectObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Id"].isNull())
			projectObject.id = std::stol(value["Id"].asString());
		if(!value["InterfaceJarLocation"].isNull())
			projectObject.interfaceJarLocation = value["InterfaceJarLocation"].asString();
		if(!value["InterfaceJarName"].isNull())
			projectObject.interfaceJarName = value["InterfaceJarName"].asString();
		if(!value["JarFileKey"].isNull())
			projectObject.jarFileKey = value["JarFileKey"].asString();
		if(!value["OwnerId"].isNull())
			projectObject.ownerId = value["OwnerId"].asString();
		if(!value["ProjectName"].isNull())
			projectObject.projectName = value["ProjectName"].asString();
		if(!value["ProjectOwnerEmail"].isNull())
			projectObject.projectOwnerEmail = value["ProjectOwnerEmail"].asString();
		if(!value["ProjectOwnerName"].isNull())
			projectObject.projectOwnerName = value["ProjectOwnerName"].asString();
		if(!value["ProjectOwnerPhoneNum"].isNull())
			projectObject.projectOwnerPhoneNum = value["ProjectOwnerPhoneNum"].asString();
		if(!value["Status"].isNull())
			projectObject.status = std::stoi(value["Status"].asString());
		if(!value["UserId"].isNull())
			projectObject.userId = value["UserId"].asString();
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

