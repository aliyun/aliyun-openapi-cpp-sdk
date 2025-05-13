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

#include <alibabacloud/schedulerx2/model/ListJobScriptHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

ListJobScriptHistoryResult::ListJobScriptHistoryResult() :
	ServiceResult()
{}

ListJobScriptHistoryResult::ListJobScriptHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobScriptHistoryResult::~ListJobScriptHistoryResult()
{}

void ListJobScriptHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allJobScriptHistoryInfosNode = dataNode["JobScriptHistoryInfos"]["JobScriptHistoryInfo"];
	for (auto dataNodeJobScriptHistoryInfosJobScriptHistoryInfo : allJobScriptHistoryInfosNode)
	{
		Data::JobScriptHistoryInfo jobScriptHistoryInfoObject;
		if(!dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["VersionesDescription"].isNull())
			jobScriptHistoryInfoObject.versionesDescription = dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["VersionesDescription"].asString();
		if(!dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["Creator"].isNull())
			jobScriptHistoryInfoObject.creator = dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["Creator"].asString();
		if(!dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["CreateTime"].isNull())
			jobScriptHistoryInfoObject.createTime = dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["CreateTime"].asString();
		if(!dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["ScriptContent"].isNull())
			jobScriptHistoryInfoObject.scriptContent = dataNodeJobScriptHistoryInfosJobScriptHistoryInfo["ScriptContent"].asString();
		data_.jobScriptHistoryInfos.push_back(jobScriptHistoryInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListJobScriptHistoryResult::getMessage()const
{
	return message_;
}

ListJobScriptHistoryResult::Data ListJobScriptHistoryResult::getData()const
{
	return data_;
}

int ListJobScriptHistoryResult::getCode()const
{
	return code_;
}

bool ListJobScriptHistoryResult::getSuccess()const
{
	return success_;
}

