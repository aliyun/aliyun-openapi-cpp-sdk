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

#include <alibabacloud/ens/model/DescribeServcieScheduleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeServcieScheduleResult::DescribeServcieScheduleResult() :
	ServiceResult()
{}

DescribeServcieScheduleResult::DescribeServcieScheduleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServcieScheduleResult::~DescribeServcieScheduleResult()
{}

void DescribeServcieScheduleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto podAbstractInfoNode = value["PodAbstractInfo"];
	if(!podAbstractInfoNode["ContainerService"].isNull())
		podAbstractInfo_.containerService = podAbstractInfoNode["ContainerService"].asString() == "true";
	if(!podAbstractInfoNode["Name"].isNull())
		podAbstractInfo_.name = podAbstractInfoNode["Name"].asString() == "true";
	if(!podAbstractInfoNode["Namespace"].isNull())
		podAbstractInfo_._namespace = podAbstractInfoNode["Namespace"].asString() == "true";
	if(!podAbstractInfoNode["ResourceScope"].isNull())
		podAbstractInfo_.resourceScope = podAbstractInfoNode["ResourceScope"].asString() == "true";
	if(!podAbstractInfoNode["Status"].isNull())
		podAbstractInfo_.status = podAbstractInfoNode["Status"].asString() == "true";
	auto allContainerStatusesNode = podAbstractInfoNode["ContainerStatuses"]["ContainerStatus"];
	for (auto podAbstractInfoNodeContainerStatusesContainerStatus : allContainerStatusesNode)
	{
		PodAbstractInfo::ContainerStatus containerStatusObject;
		if(!podAbstractInfoNodeContainerStatusesContainerStatus["ContainerId"].isNull())
			containerStatusObject.containerId = podAbstractInfoNodeContainerStatusesContainerStatus["ContainerId"].asString();
		if(!podAbstractInfoNodeContainerStatusesContainerStatus["Name"].isNull())
			containerStatusObject.name = podAbstractInfoNodeContainerStatusesContainerStatus["Name"].asString();
		podAbstractInfo_.containerStatuses.push_back(containerStatusObject);
	}
	if(!value["Index"].isNull())
		index_ = std::stoi(value["Index"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceIp"].isNull())
		instanceIp_ = value["InstanceIp"].asString();
	if(!value["InstancePort"].isNull())
		instancePort_ = std::stoi(value["InstancePort"].asString());
	if(!value["RequestRepeated"].isNull())
		requestRepeated_ = value["RequestRepeated"].asString() == "true";
	if(!value["TcpPorts"].isNull())
		tcpPorts_ = value["TcpPorts"].asString();

}

bool DescribeServcieScheduleResult::getRequestRepeated()const
{
	return requestRepeated_;
}

std::string DescribeServcieScheduleResult::getTcpPorts()const
{
	return tcpPorts_;
}

std::string DescribeServcieScheduleResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeServcieScheduleResult::getInstancePort()const
{
	return instancePort_;
}

std::string DescribeServcieScheduleResult::getInstanceIp()const
{
	return instanceIp_;
}

int DescribeServcieScheduleResult::getIndex()const
{
	return index_;
}

DescribeServcieScheduleResult::PodAbstractInfo DescribeServcieScheduleResult::getPodAbstractInfo()const
{
	return podAbstractInfo_;
}

