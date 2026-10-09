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

#include <alibabacloud/airegistry/model/GetPromptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

GetPromptResult::GetPromptResult() :
	ServiceResult()
{}

GetPromptResult::GetPromptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPromptResult::~GetPromptResult()
{}

void GetPromptResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EditingVersion"].isNull())
		data_.editingVersion = dataNode["EditingVersion"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["SchemaVersion"].isNull())
		data_.schemaVersion = std::stoi(dataNode["SchemaVersion"].asString());
	if(!dataNode["LatestVersion"].isNull())
		data_.latestVersion = dataNode["LatestVersion"].asString();
	if(!dataNode["PromptKey"].isNull())
		data_.promptKey = dataNode["PromptKey"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = std::stol(dataNode["GmtModified"].asString());
	if(!dataNode["Labels"].isNull())
		data_.labels = dataNode["Labels"].asString();
	if(!dataNode["ReviewingVersion"].isNull())
		data_.reviewingVersion = dataNode["ReviewingVersion"].asString();
	if(!dataNode["OnlineCnt"].isNull())
		data_.onlineCnt = std::stoi(dataNode["OnlineCnt"].asString());
	auto allVersionDetailsNode = dataNode["VersionDetails"]["VersionDetail"];
	for (auto dataNodeVersionDetailsVersionDetail : allVersionDetailsNode)
	{
		Data::VersionDetail versionDetailObject;
		if(!dataNodeVersionDetailsVersionDetail["Status"].isNull())
			versionDetailObject.status = dataNodeVersionDetailsVersionDetail["Status"].asString();
		if(!dataNodeVersionDetailsVersionDetail["Version"].isNull())
			versionDetailObject.version = dataNodeVersionDetailsVersionDetail["Version"].asString();
		if(!dataNodeVersionDetailsVersionDetail["SrcUser"].isNull())
			versionDetailObject.srcUser = dataNodeVersionDetailsVersionDetail["SrcUser"].asString();
		if(!dataNodeVersionDetailsVersionDetail["PromptKey"].isNull())
			versionDetailObject.promptKey = dataNodeVersionDetailsVersionDetail["PromptKey"].asString();
		if(!dataNodeVersionDetailsVersionDetail["GmtModified"].isNull())
			versionDetailObject.gmtModified = std::stol(dataNodeVersionDetailsVersionDetail["GmtModified"].asString());
		if(!dataNodeVersionDetailsVersionDetail["CommitMsg"].isNull())
			versionDetailObject.commitMsg = dataNodeVersionDetailsVersionDetail["CommitMsg"].asString();
		data_.versionDetails.push_back(versionDetailObject);
	}
		auto allVersions = dataNode["Versions"]["Version"];
		for (auto value : allVersions)
			data_.versions.push_back(value.asString());
		auto allBizTags = dataNode["BizTags"]["BizTag"];
		for (auto value : allBizTags)
			data_.bizTags.push_back(value.asString());

}

GetPromptResult::Data GetPromptResult::getData()const
{
	return data_;
}

