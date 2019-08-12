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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSoftwareList = value["SoftwareList"]["SoftwareListItem"];
	for (auto value : allSoftwareList)
	{
		SoftwareListItem softwareListObject;
		if(!value["SoftwareId"].isNull())
			softwareListObject.softwareId = value["SoftwareId"].asString();
		if(!value["SoftwareName"].isNull())
			softwareListObject.softwareName = value["SoftwareName"].asString();
		if(!value["SoftwareVersion"].isNull())
			softwareListObject.softwareVersion = value["SoftwareVersion"].asString();
		if(!value["SoftwareStatus"].isNull())
			softwareListObject.softwareStatus = value["SoftwareStatus"].asString();
		softwareList_.push_back(softwareListObject);
	}

}

std::vector<ListInstalledSoftwareResult::SoftwareListItem> ListInstalledSoftwareResult::getSoftwareList()const
{
	return softwareList_;
}

