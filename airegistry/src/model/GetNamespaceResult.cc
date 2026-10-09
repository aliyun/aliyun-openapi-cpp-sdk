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

#include <alibabacloud/airegistry/model/GetNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

GetNamespaceResult::GetNamespaceResult() :
	ServiceResult()
{}

GetNamespaceResult::GetNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNamespaceResult::~GetNamespaceResult()
{}

void GetNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["PromptCount"].isNull())
		data_.promptCount = std::stoi(dataNode["PromptCount"].asString());
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = dataNode["CreatedTime"].asString();
	if(!dataNode["SkillCount"].isNull())
		data_.skillCount = std::stoi(dataNode["SkillCount"].asString());
	if(!dataNode["Source"].isNull())
		data_.source = dataNode["Source"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["PublicDomain"].isNull())
		data_.publicDomain = dataNode["PublicDomain"].asString();
	if(!dataNode["SourceIndex"].isNull())
		data_.sourceIndex = std::stoi(dataNode["SourceIndex"].asString());
	if(!dataNode["IpWhitelist"].isNull())
		data_.ipWhitelist = dataNode["IpWhitelist"].asString();
	if(!dataNode["ScanPolicy"].isNull())
		data_.scanPolicy = dataNode["ScanPolicy"].asString();
	if(!dataNode["PublicAccessEnabled"].isNull())
		data_.publicAccessEnabled = dataNode["PublicAccessEnabled"].asString() == "true";
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["Tags"].isNull())
		data_.tags = dataNode["Tags"].asString();

}

GetNamespaceResult::Data GetNamespaceResult::getData()const
{
	return data_;
}

