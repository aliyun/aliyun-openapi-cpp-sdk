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

#include <alibabacloud/edas/model/ListBuildPackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListBuildPackResult::ListBuildPackResult() :
	ServiceResult()
{}

ListBuildPackResult::ListBuildPackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBuildPackResult::~ListBuildPackResult()
{}

void ListBuildPackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBuildPackListNode = value["BuildPackList"]["BuildPack"];
	for (auto valueBuildPackListBuildPack : allBuildPackListNode)
	{
		BuildPack buildPackListObject;
		if(!valueBuildPackListBuildPack["ConfigId"].isNull())
			buildPackListObject.configId = std::stol(valueBuildPackListBuildPack["ConfigId"].asString());
		if(!valueBuildPackListBuildPack["PackVersion"].isNull())
			buildPackListObject.packVersion = valueBuildPackListBuildPack["PackVersion"].asString();
		if(!valueBuildPackListBuildPack["TomcatDesc"].isNull())
			buildPackListObject.tomcatDesc = valueBuildPackListBuildPack["TomcatDesc"].asString();
		if(!valueBuildPackListBuildPack["TomcatVersion"].isNull())
			buildPackListObject.tomcatVersion = valueBuildPackListBuildPack["TomcatVersion"].asString();
		if(!valueBuildPackListBuildPack["TomcatDownloadUrl"].isNull())
			buildPackListObject.tomcatDownloadUrl = valueBuildPackListBuildPack["TomcatDownloadUrl"].asString();
		if(!valueBuildPackListBuildPack["PandoraVersion"].isNull())
			buildPackListObject.pandoraVersion = valueBuildPackListBuildPack["PandoraVersion"].asString();
		if(!valueBuildPackListBuildPack["PandoraDownloadUrl"].isNull())
			buildPackListObject.pandoraDownloadUrl = valueBuildPackListBuildPack["PandoraDownloadUrl"].asString();
		if(!valueBuildPackListBuildPack["PandoraDesc"].isNull())
			buildPackListObject.pandoraDesc = valueBuildPackListBuildPack["PandoraDesc"].asString();
		if(!valueBuildPackListBuildPack["PluginInfo"].isNull())
			buildPackListObject.pluginInfo = valueBuildPackListBuildPack["PluginInfo"].asString();
		if(!valueBuildPackListBuildPack["TomcatPath"].isNull())
			buildPackListObject.tomcatPath = valueBuildPackListBuildPack["TomcatPath"].asString();
		if(!valueBuildPackListBuildPack["ImageId"].isNull())
			buildPackListObject.imageId = valueBuildPackListBuildPack["ImageId"].asString();
		if(!valueBuildPackListBuildPack["TengineImageId"].isNull())
			buildPackListObject.tengineImageId = valueBuildPackListBuildPack["TengineImageId"].asString();
		if(!valueBuildPackListBuildPack["MultipleTenant"].isNull())
			buildPackListObject.multipleTenant = valueBuildPackListBuildPack["MultipleTenant"].asString() == "true";
		if(!valueBuildPackListBuildPack["WithTengine"].isNull())
			buildPackListObject.withTengine = valueBuildPackListBuildPack["WithTengine"].asString() == "true";
		if(!valueBuildPackListBuildPack["TengineDownloadUrl"].isNull())
			buildPackListObject.tengineDownloadUrl = valueBuildPackListBuildPack["TengineDownloadUrl"].asString();
		if(!valueBuildPackListBuildPack["ScriptName"].isNull())
			buildPackListObject.scriptName = valueBuildPackListBuildPack["ScriptName"].asString();
		if(!valueBuildPackListBuildPack["ScriptVersion"].isNull())
			buildPackListObject.scriptVersion = valueBuildPackListBuildPack["ScriptVersion"].asString();
		if(!valueBuildPackListBuildPack["Feature"].isNull())
			buildPackListObject.feature = valueBuildPackListBuildPack["Feature"].asString();
		if(!valueBuildPackListBuildPack["SupportFeatures"].isNull())
			buildPackListObject.supportFeatures = valueBuildPackListBuildPack["SupportFeatures"].asString();
		if(!valueBuildPackListBuildPack["Disabled"].isNull())
			buildPackListObject.disabled = valueBuildPackListBuildPack["Disabled"].asString() == "true";
		buildPackList_.push_back(buildPackListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListBuildPackResult::getMessage()const
{
	return message_;
}

std::vector<ListBuildPackResult::BuildPack> ListBuildPackResult::getBuildPackList()const
{
	return buildPackList_;
}

int ListBuildPackResult::getCode()const
{
	return code_;
}

