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

#include <alibabacloud/iot/model/QueryDeviceBySQLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceBySQLResult::QueryDeviceBySQLResult() :
	ServiceResult()
{}

QueryDeviceBySQLResult::QueryDeviceBySQLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceBySQLResult::~QueryDeviceBySQLResult()
{}

void QueryDeviceBySQLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SimpleDeviceSearchInfo"];
	for (auto valueDataSimpleDeviceSearchInfo : allDataNode)
	{
		SimpleDeviceSearchInfo dataObject;
		if(!valueDataSimpleDeviceSearchInfo["ProductKey"].isNull())
			dataObject.productKey = valueDataSimpleDeviceSearchInfo["ProductKey"].asString();
		if(!valueDataSimpleDeviceSearchInfo["DeviceName"].isNull())
			dataObject.deviceName = valueDataSimpleDeviceSearchInfo["DeviceName"].asString();
		if(!valueDataSimpleDeviceSearchInfo["Nickname"].isNull())
			dataObject.nickname = valueDataSimpleDeviceSearchInfo["Nickname"].asString();
		if(!valueDataSimpleDeviceSearchInfo["Status"].isNull())
			dataObject.status = valueDataSimpleDeviceSearchInfo["Status"].asString();
		if(!valueDataSimpleDeviceSearchInfo["ActiveTime"].isNull())
			dataObject.activeTime = valueDataSimpleDeviceSearchInfo["ActiveTime"].asString();
		if(!valueDataSimpleDeviceSearchInfo["IotId"].isNull())
			dataObject.iotId = valueDataSimpleDeviceSearchInfo["IotId"].asString();
		if(!valueDataSimpleDeviceSearchInfo["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataSimpleDeviceSearchInfo["GmtCreate"].asString();
		if(!valueDataSimpleDeviceSearchInfo["GmtModified"].isNull())
			dataObject.gmtModified = valueDataSimpleDeviceSearchInfo["GmtModified"].asString();
		auto allGroupsNode = valueDataSimpleDeviceSearchInfo["Groups"]["SimpleDeviceGroupInfo"];
		for (auto valueDataSimpleDeviceSearchInfoGroupsSimpleDeviceGroupInfo : allGroupsNode)
		{
			SimpleDeviceSearchInfo::SimpleDeviceGroupInfo groupsObject;
			if(!valueDataSimpleDeviceSearchInfoGroupsSimpleDeviceGroupInfo["GroupId"].isNull())
				groupsObject.groupId = valueDataSimpleDeviceSearchInfoGroupsSimpleDeviceGroupInfo["GroupId"].asString();
			dataObject.groups.push_back(groupsObject);
		}
		auto allTagsNode = valueDataSimpleDeviceSearchInfo["Tags"]["TagInfo"];
		for (auto valueDataSimpleDeviceSearchInfoTagsTagInfo : allTagsNode)
		{
			SimpleDeviceSearchInfo::TagInfo tagsObject;
			if(!valueDataSimpleDeviceSearchInfoTagsTagInfo["TagName"].isNull())
				tagsObject.tagName = valueDataSimpleDeviceSearchInfoTagsTagInfo["TagName"].asString();
			if(!valueDataSimpleDeviceSearchInfoTagsTagInfo["TagValue"].isNull())
				tagsObject.tagValue = valueDataSimpleDeviceSearchInfoTagsTagInfo["TagValue"].asString();
			dataObject.tags.push_back(tagsObject);
		}
		auto allOTAModulesNode = valueDataSimpleDeviceSearchInfo["OTAModules"]["OTAModuleInfo"];
		for (auto valueDataSimpleDeviceSearchInfoOTAModulesOTAModuleInfo : allOTAModulesNode)
		{
			SimpleDeviceSearchInfo::OTAModuleInfo oTAModulesObject;
			if(!valueDataSimpleDeviceSearchInfoOTAModulesOTAModuleInfo["ModuleName"].isNull())
				oTAModulesObject.moduleName = valueDataSimpleDeviceSearchInfoOTAModulesOTAModuleInfo["ModuleName"].asString();
			if(!valueDataSimpleDeviceSearchInfoOTAModulesOTAModuleInfo["FirmwareVersion"].isNull())
				oTAModulesObject.firmwareVersion = valueDataSimpleDeviceSearchInfoOTAModulesOTAModuleInfo["FirmwareVersion"].asString();
			dataObject.oTAModules.push_back(oTAModulesObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long QueryDeviceBySQLResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<QueryDeviceBySQLResult::SimpleDeviceSearchInfo> QueryDeviceBySQLResult::getData()const
{
	return data_;
}

std::string QueryDeviceBySQLResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceBySQLResult::getCode()const
{
	return code_;
}

bool QueryDeviceBySQLResult::getSuccess()const
{
	return success_;
}

