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

#include <alibabacloud/airegistry/model/GetSkillDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

GetSkillDetailResult::GetSkillDetailResult() :
	ServiceResult()
{}

GetSkillDetailResult::GetSkillDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSkillDetailResult::~GetSkillDetailResult()
{}

void GetSkillDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DraftMode"].isNull())
		data_.draftMode = dataNode["DraftMode"].asString();
	if(!dataNode["EditingVersion"].isNull())
		data_.editingVersion = dataNode["EditingVersion"].asString();
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["BizTags"].isNull())
		data_.bizTags = dataNode["BizTags"].asString();
	if(!dataNode["Labels"].isNull())
		data_.labels = dataNode["Labels"].asString();
	if(!dataNode["From"].isNull())
		data_.from = dataNode["From"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Scope"].isNull())
		data_.scope = dataNode["Scope"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["ReviewingVersion"].isNull())
		data_.reviewingVersion = dataNode["ReviewingVersion"].asString();
	if(!dataNode["OnlineCnt"].isNull())
		data_.onlineCnt = std::stoi(dataNode["OnlineCnt"].asString());
	if(!dataNode["Writeable"].isNull())
		data_.writeable = dataNode["Writeable"].asString() == "true";
	if(!dataNode["DownloadCount"].isNull())
		data_.downloadCount = std::stol(dataNode["DownloadCount"].asString());
	auto allVersionsNode = dataNode["Versions"]["Version"];
	for (auto dataNodeVersionsVersion : allVersionsNode)
	{
		Data::Version versionObject;
		if(!dataNodeVersionsVersion["Status"].isNull())
			versionObject.status = dataNodeVersionsVersion["Status"].asString();
		if(!dataNodeVersionsVersion["Description"].isNull())
			versionObject.description = dataNodeVersionsVersion["Description"].asString();
		if(!dataNodeVersionsVersion["PublishPipelineInfo"].isNull())
			versionObject.publishPipelineInfo = dataNodeVersionsVersion["PublishPipelineInfo"].asString();
		if(!dataNodeVersionsVersion["Version"].isNull())
			versionObject.version = dataNodeVersionsVersion["Version"].asString();
		if(!dataNodeVersionsVersion["CreateTime"].isNull())
			versionObject.createTime = std::stol(dataNodeVersionsVersion["CreateTime"].asString());
		if(!dataNodeVersionsVersion["UpdateTime"].isNull())
			versionObject.updateTime = std::stol(dataNodeVersionsVersion["UpdateTime"].asString());
		if(!dataNodeVersionsVersion["Author"].isNull())
			versionObject.author = dataNodeVersionsVersion["Author"].asString();
		if(!dataNodeVersionsVersion["CommitMsg"].isNull())
			versionObject.commitMsg = dataNodeVersionsVersion["CommitMsg"].asString();
		if(!dataNodeVersionsVersion["DownloadCount"].isNull())
			versionObject.downloadCount = std::stol(dataNodeVersionsVersion["DownloadCount"].asString());
		data_.versions.push_back(versionObject);
	}

}

GetSkillDetailResult::Data GetSkillDetailResult::getData()const
{
	return data_;
}

