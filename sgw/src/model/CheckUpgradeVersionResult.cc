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

#include <alibabacloud/sgw/model/CheckUpgradeVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

CheckUpgradeVersionResult::CheckUpgradeVersionResult() :
	ServiceResult()
{}

CheckUpgradeVersionResult::CheckUpgradeVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckUpgradeVersionResult::~CheckUpgradeVersionResult()
{}

void CheckUpgradeVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPatchesNode = value["Patches"]["Patch"];
	for (auto valuePatchesPatch : allPatchesNode)
	{
		Patch patchesObject;
		if(!valuePatchesPatch["Name"].isNull())
			patchesObject.name = valuePatchesPatch["Name"].asString();
		if(!valuePatchesPatch["MD5"].isNull())
			patchesObject.mD5 = valuePatchesPatch["MD5"].asString();
		if(!valuePatchesPatch["Url"].isNull())
			patchesObject.url = valuePatchesPatch["Url"].asString();
		if(!valuePatchesPatch["InternalUrl"].isNull())
			patchesObject.internalUrl = valuePatchesPatch["InternalUrl"].asString();
		patches_.push_back(patchesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Option"].isNull())
		option_ = value["Option"].asString();
	if(!value["LatestVersion"].isNull())
		latestVersion_ = value["LatestVersion"].asString();

}

std::string CheckUpgradeVersionResult::getMessage()const
{
	return message_;
}

std::string CheckUpgradeVersionResult::getLatestVersion()const
{
	return latestVersion_;
}

std::string CheckUpgradeVersionResult::getOption()const
{
	return option_;
}

std::string CheckUpgradeVersionResult::getCode()const
{
	return code_;
}

bool CheckUpgradeVersionResult::getSuccess()const
{
	return success_;
}

std::vector<CheckUpgradeVersionResult::Patch> CheckUpgradeVersionResult::getPatches()const
{
	return patches_;
}

