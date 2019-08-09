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

#include <alibabacloud/emr/model/ListClusterScriptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterScriptsResult::ListClusterScriptsResult() :
	ServiceResult()
{}

ListClusterScriptsResult::ListClusterScriptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterScriptsResult::~ListClusterScriptsResult()
{}

void ListClusterScriptsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allClusterScripts = value["ClusterScripts"]["ClusterScript"];
	for (auto value : allClusterScripts)
	{
		ClusterScript clusterScriptsObject;
		if(!value["Id"].isNull())
			clusterScriptsObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			clusterScriptsObject.name = value["Name"].asString();
		if(!value["StartTime"].isNull())
			clusterScriptsObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			clusterScriptsObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Path"].isNull())
			clusterScriptsObject.path = value["Path"].asString();
		if(!value["Args"].isNull())
			clusterScriptsObject.args = value["Args"].asString();
		if(!value["Status"].isNull())
			clusterScriptsObject.status = value["Status"].asString();
		clusterScripts_.push_back(clusterScriptsObject);
	}

}

std::vector<ListClusterScriptsResult::ClusterScript> ListClusterScriptsResult::getClusterScripts()const
{
	return clusterScripts_;
}

