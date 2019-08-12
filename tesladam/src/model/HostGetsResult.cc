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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["dataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["Hostname"].isNull())
			dataObject.hostname = value["Hostname"].asString();
		if(!value["Ip"].isNull())
			dataObject.ip = value["Ip"].asString();
		if(!value["AppCode"].isNull())
			dataObject.appCode = value["AppCode"].asString();
		if(!value["ClusterCode"].isNull())
			dataObject.clusterCode = value["ClusterCode"].asString();
		if(!value["SshStatus"].isNull())
			dataObject.sshStatus = std::stoi(value["SshStatus"].asString());
		if(!value["heartStatus"].isNull())
			dataObject.heartStatus = std::stoi(value["heartStatus"].asString());
		if(!value["HealthScoreLast"].isNull())
			dataObject.healthScoreLast = std::stoi(value["HealthScoreLast"].asString());
		if(!value["HealthReasonLast"].isNull())
			dataObject.healthReasonLast = value["HealthReasonLast"].asString();
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

