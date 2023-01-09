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

#include <alibabacloud/pts/model/ListEnvsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

ListEnvsResult::ListEnvsResult() :
	ServiceResult()
{}

ListEnvsResult::ListEnvsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnvsResult::~ListEnvsResult()
{}

void ListEnvsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEnvsNode = value["Envs"]["Env"];
	for (auto valueEnvsEnv : allEnvsNode)
	{
		Env envsObject;
		if(!valueEnvsEnv["CreateTime"].isNull())
			envsObject.createTime = std::stol(valueEnvsEnv["CreateTime"].asString());
		if(!valueEnvsEnv["EnvVersion"].isNull())
			envsObject.envVersion = valueEnvsEnv["EnvVersion"].asString();
		if(!valueEnvsEnv["ModifiedTime"].isNull())
			envsObject.modifiedTime = std::stol(valueEnvsEnv["ModifiedTime"].asString());
		if(!valueEnvsEnv["UsedCapacity"].isNull())
			envsObject.usedCapacity = std::stol(valueEnvsEnv["UsedCapacity"].asString());
		if(!valueEnvsEnv["EnvName"].isNull())
			envsObject.envName = valueEnvsEnv["EnvName"].asString();
		if(!valueEnvsEnv["EnvId"].isNull())
			envsObject.envId = valueEnvsEnv["EnvId"].asString();
		auto allFilesNode = valueEnvsEnv["Files"]["File"];
		for (auto valueEnvsEnvFilesFile : allFilesNode)
		{
			Env::File filesObject;
			if(!valueEnvsEnvFilesFile["FileSize"].isNull())
				filesObject.fileSize = std::stol(valueEnvsEnvFilesFile["FileSize"].asString());
			if(!valueEnvsEnvFilesFile["Md5"].isNull())
				filesObject.md5 = valueEnvsEnvFilesFile["Md5"].asString();
			if(!valueEnvsEnvFilesFile["FileName"].isNull())
				filesObject.fileName = valueEnvsEnvFilesFile["FileName"].asString();
			if(!valueEnvsEnvFilesFile["FileOssAddress"].isNull())
				filesObject.fileOssAddress = valueEnvsEnvFilesFile["FileOssAddress"].asString();
			if(!valueEnvsEnvFilesFile["FileId"].isNull())
				filesObject.fileId = std::stol(valueEnvsEnvFilesFile["FileId"].asString());
			envsObject.files.push_back(filesObject);
		}
		auto allPropertiesNode = valueEnvsEnv["Properties"]["propertiesItem"];
		for (auto valueEnvsEnvPropertiespropertiesItem : allPropertiesNode)
		{
			Env::PropertiesItem propertiesObject;
			if(!valueEnvsEnvPropertiespropertiesItem["Name"].isNull())
				propertiesObject.name = valueEnvsEnvPropertiespropertiesItem["Name"].asString();
			if(!valueEnvsEnvPropertiespropertiesItem["Value"].isNull())
				propertiesObject.value = valueEnvsEnvPropertiespropertiesItem["Value"].asString();
			if(!valueEnvsEnvPropertiespropertiesItem["Description"].isNull())
				propertiesObject.description = valueEnvsEnvPropertiespropertiesItem["Description"].asString();
			envsObject.properties.push_back(propertiesObject);
		}
		auto allRunningScenes = value["RunningScenes"]["RunningScene"];
		for (auto value : allRunningScenes)
			envsObject.runningScenes.push_back(value.asString());
		auto allRelatedScenes = value["RelatedScenes"]["RelatedScene"];
		for (auto value : allRelatedScenes)
			envsObject.relatedScenes.push_back(value.asString());
		envs_.push_back(envsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListEnvsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListEnvsResult::getMessage()const
{
	return message_;
}

int ListEnvsResult::getPageSize()const
{
	return pageSize_;
}

int ListEnvsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListEnvsResult::Env> ListEnvsResult::getEnvs()const
{
	return envs_;
}

int ListEnvsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListEnvsResult::getCode()const
{
	return code_;
}

bool ListEnvsResult::getSuccess()const
{
	return success_;
}

