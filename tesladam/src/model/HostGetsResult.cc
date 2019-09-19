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

#include <alibabacloud/tesladam/model/HostGetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaDam;
using namespace AlibabaCloud::TeslaDam::Model;

HostGetsResult::HostGetsResult() :
	ServiceResult()
{}

HostGetsResult::HostGetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

HostGetsResult::~HostGetsResult()
{}

void HostGetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Hostname"].isNull())
			dataObject.hostname = valueDatadataItem["Hostname"].asString();
		if(!valueDatadataItem["Ip"].isNull())
			dataObject.ip = valueDatadataItem["Ip"].asString();
		if(!valueDatadataItem["AppCode"].isNull())
			dataObject.appCode = valueDatadataItem["AppCode"].asString();
		if(!valueDatadataItem["ClusterCode"].isNull())
			dataObject.clusterCode = valueDatadataItem["ClusterCode"].asString();
		if(!valueDatadataItem["SshStatus"].isNull())
			dataObject.sshStatus = std::stoi(valueDatadataItem["SshStatus"].asString());
		if(!valueDatadataItem["heartStatus"].isNull())
			dataObject.heartStatus = std::stoi(valueDatadataItem["heartStatus"].asString());
		if(!valueDatadataItem["HealthScoreLast"].isNull())
			dataObject.healthScoreLast = std::stoi(valueDatadataItem["HealthScoreLast"].asString());
		if(!valueDatadataItem["HealthReasonLast"].isNull())
			dataObject.healthReasonLast = valueDatadataItem["HealthReasonLast"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

bool HostGetsResult::getStatus()const
{
	return status_;
}

std::string HostGetsResult::getMessage()const
{
	return message_;
}

std::vector<HostGetsResult::DataItem> HostGetsResult::getData()const
{
	return data_;
}

