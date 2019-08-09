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

#include <alibabacloud/emr/model/ListFlowProjectClusterSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowProjectClusterSettingResult::ListFlowProjectClusterSettingResult() :
	ServiceResult()
{}

ListFlowProjectClusterSettingResult::ListFlowProjectClusterSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowProjectClusterSettingResult::~ListFlowProjectClusterSettingResult()
{}

void ListFlowProjectClusterSettingResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allClusterSettings = value["ClusterSettings"]["ClusterSetting"];
	for (auto value : allClusterSettings)
	{
		ClusterSetting clusterSettingsObject;
		if(!value["GmtCreate"].isNull())
			clusterSettingsObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			clusterSettingsObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["ProjectId"].isNull())
			clusterSettingsObject.projectId = value["ProjectId"].asString();
		if(!value["ClusterId"].isNull())
			clusterSettingsObject.clusterId = value["ClusterId"].asString();
		if(!value["ClusterName"].isNull())
			clusterSettingsObject.clusterName = value["ClusterName"].asString();
		if(!value["DefaultUser"].isNull())
			clusterSettingsObject.defaultUser = value["DefaultUser"].asString();
		if(!value["DefaultQueue"].isNull())
			clusterSettingsObject.defaultQueue = value["DefaultQueue"].asString();
		auto allUserList = value["UserList"]["User"];
		for (auto value : allUserList)
			clusterSettingsObject.userList.push_back(value.asString());
		auto allQueueList = value["QueueList"]["Queue"];
		for (auto value : allQueueList)
			clusterSettingsObject.queueList.push_back(value.asString());
		auto allHostList = value["HostList"]["Host"];
		for (auto value : allHostList)
			clusterSettingsObject.hostList.push_back(value.asString());
		clusterSettings_.push_back(clusterSettingsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListFlowProjectClusterSettingResult::ClusterSetting> ListFlowProjectClusterSettingResult::getClusterSettings()const
{
	return clusterSettings_;
}

int ListFlowProjectClusterSettingResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowProjectClusterSettingResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowProjectClusterSettingResult::getTotal()const
{
	return total_;
}

