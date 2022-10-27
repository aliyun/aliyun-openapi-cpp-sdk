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

#include <alibabacloud/ehpc/model/ListInstalledSoftwareResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListInstalledSoftwareResult::ListInstalledSoftwareResult() :
	ServiceResult()
{}

ListInstalledSoftwareResult::ListInstalledSoftwareResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstalledSoftwareResult::~ListInstalledSoftwareResult()
{}

void ListInstalledSoftwareResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSoftwareListNode = value["SoftwareList"]["SoftwareListItem"];
	for (auto valueSoftwareListSoftwareListItem : allSoftwareListNode)
	{
		SoftwareListItem softwareListObject;
		if(!valueSoftwareListSoftwareListItem["SoftwareId"].isNull())
			softwareListObject.softwareId = valueSoftwareListSoftwareListItem["SoftwareId"].asString();
		if(!valueSoftwareListSoftwareListItem["SoftwareStatus"].isNull())
			softwareListObject.softwareStatus = valueSoftwareListSoftwareListItem["SoftwareStatus"].asString();
		if(!valueSoftwareListSoftwareListItem["SoftwareVersion"].isNull())
			softwareListObject.softwareVersion = valueSoftwareListSoftwareListItem["SoftwareVersion"].asString();
		if(!valueSoftwareListSoftwareListItem["SoftwareName"].isNull())
			softwareListObject.softwareName = valueSoftwareListSoftwareListItem["SoftwareName"].asString();
		softwareList_.push_back(softwareListObject);
	}

}

std::vector<ListInstalledSoftwareResult::SoftwareListItem> ListInstalledSoftwareResult::getSoftwareList()const
{
	return softwareList_;
}

