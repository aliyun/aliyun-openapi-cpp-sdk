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

#include <alibabacloud/sas/model/GetHoneypotProbeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetHoneypotProbeResult::GetHoneypotProbeResult() :
	ServiceResult()
{}

GetHoneypotProbeResult::GetHoneypotProbeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHoneypotProbeResult::~GetHoneypotProbeResult()
{}

void GetHoneypotProbeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProbeId"].isNull())
		data_.probeId = dataNode["ProbeId"].asString();
	if(!dataNode["ProbeType"].isNull())
		data_.probeType = dataNode["ProbeType"].asString();
	if(!dataNode["DisplayName"].isNull())
		data_.displayName = dataNode["DisplayName"].asString();
	if(!dataNode["OsType"].isNull())
		data_.osType = dataNode["OsType"].asString();
	if(!dataNode["ProbeVersion"].isNull())
		data_.probeVersion = dataNode["ProbeVersion"].asString();
	if(!dataNode["HostIp"].isNull())
		data_.hostIp = dataNode["HostIp"].asString();
	if(!dataNode["Ping"].isNull())
		data_.ping = dataNode["Ping"].asString() == "true";
	if(!dataNode["Arp"].isNull())
		data_.arp = dataNode["Arp"].asString() == "true";
	if(!dataNode["DeployTime"].isNull())
		data_.deployTime = std::stol(dataNode["DeployTime"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["CpuLoad"].isNull())
		data_.cpuLoad = dataNode["CpuLoad"].asString();
	if(!dataNode["MemoryLoad"].isNull())
		data_.memoryLoad = dataNode["MemoryLoad"].asString();
	if(!dataNode["Uuid"].isNull())
		data_.uuid = dataNode["Uuid"].asString();
	if(!dataNode["ProxyIp"].isNull())
		data_.proxyIp = dataNode["ProxyIp"].asString();
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	auto allHoneypotProbeBindListNode = dataNode["HoneypotProbeBindList"]["HoneypotProbeBindListItem"];
	for (auto dataNodeHoneypotProbeBindListHoneypotProbeBindListItem : allHoneypotProbeBindListNode)
	{
		Data::HoneypotProbeBindListItem honeypotProbeBindListItemObject;
		if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["Status"].isNull())
			honeypotProbeBindListItemObject.status = std::stoi(dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["Status"].asString());
		if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["HoneypotId"].isNull())
			honeypotProbeBindListItemObject.honeypotId = dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["HoneypotId"].asString();
		if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["BindId"].isNull())
			honeypotProbeBindListItemObject.bindId = dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["BindId"].asString();
		auto allBindPortListNode = dataNodeHoneypotProbeBindListHoneypotProbeBindListItem["BindPortList"]["BindPortListItem"];
		for (auto dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem : allBindPortListNode)
		{
			Data::HoneypotProbeBindListItem::BindPortListItem bindPortListObject;
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["StartPort"].isNull())
				bindPortListObject.startPort = std::stoi(dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["StartPort"].asString());
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["EndPort"].isNull())
				bindPortListObject.endPort = std::stoi(dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["EndPort"].asString());
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Proto"].isNull())
				bindPortListObject.proto = dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Proto"].asString();
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Fixed"].isNull())
				bindPortListObject.fixed = dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Fixed"].asString() == "true";
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["TargetPort"].isNull())
				bindPortListObject.targetPort = std::stoi(dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["TargetPort"].asString());
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Id"].isNull())
				bindPortListObject.id = std::stol(dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Id"].asString());
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["BindPort"].isNull())
				bindPortListObject.bindPort = dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["BindPort"].asString() == "true";
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Err"].isNull())
				bindPortListObject.err = dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Err"].asString();
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Msg"].isNull())
				bindPortListObject.msg = dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Msg"].asString();
			if(!dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Status"].isNull())
				bindPortListObject.status = std::stoi(dataNodeHoneypotProbeBindListHoneypotProbeBindListItemBindPortListBindPortListItem["Status"].asString());
			honeypotProbeBindListItemObject.bindPortList.push_back(bindPortListObject);
		}
		auto allServiceIpList = value["ServiceIpList"]["ServiceIpList"];
		for (auto value : allServiceIpList)
			honeypotProbeBindListItemObject.serviceIpList.push_back(value.asString());
		data_.honeypotProbeBindList.push_back(honeypotProbeBindListItemObject);
	}
	auto controlNodeNode = dataNode["ControlNode"];
	if(!controlNodeNode["NodeId"].isNull())
		data_.controlNode.nodeId = controlNodeNode["NodeId"].asString();
	if(!controlNodeNode["NodeName"].isNull())
		data_.controlNode.nodeName = controlNodeNode["NodeName"].asString();
	if(!controlNodeNode["EcsInstanceId"].isNull())
		data_.controlNode.ecsInstanceId = controlNodeNode["EcsInstanceId"].asString();
	auto honeyPotProbeScanPortNode = dataNode["HoneyPotProbeScanPort"];
	if(!honeyPotProbeScanPortNode["Id"].isNull())
		data_.honeyPotProbeScanPort.id = std::stol(honeyPotProbeScanPortNode["Id"].asString());
	if(!honeyPotProbeScanPortNode["ProbeId"].isNull())
		data_.honeyPotProbeScanPort.probeId = honeyPotProbeScanPortNode["ProbeId"].asString();
	if(!honeyPotProbeScanPortNode["Status"].isNull())
		data_.honeyPotProbeScanPort.status = std::stoi(honeyPotProbeScanPortNode["Status"].asString());
	if(!honeyPotProbeScanPortNode["Ports"].isNull())
		data_.honeyPotProbeScanPort.ports = honeyPotProbeScanPortNode["Ports"].asString();
		auto allServiceIpList1 = honeyPotProbeScanPortNode["ServiceIpList"]["ServiceIp"];
		for (auto value : allServiceIpList1)
			data_.honeyPotProbeScanPort.serviceIpList1.push_back(value.asString());
		auto allListenIpList = dataNode["ListenIpList"]["ListenIpList"];
		for (auto value : allListenIpList)
			data_.listenIpList.push_back(value.asString());
		auto allCanListenIpList = dataNode["CanListenIpList"]["CanListenIp"];
		for (auto value : allCanListenIpList)
			data_.canListenIpList.push_back(value.asString());
		auto allCidrList = dataNode["CidrList"]["CidrList"];
		for (auto value : allCidrList)
			data_.cidrList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetHoneypotProbeResult::getMessage()const
{
	return message_;
}

int GetHoneypotProbeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetHoneypotProbeResult::Data GetHoneypotProbeResult::getData()const
{
	return data_;
}

std::string GetHoneypotProbeResult::getCode()const
{
	return code_;
}

bool GetHoneypotProbeResult::getSuccess()const
{
	return success_;
}

