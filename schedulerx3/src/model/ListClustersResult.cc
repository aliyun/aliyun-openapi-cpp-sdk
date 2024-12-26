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

#include <alibabacloud/schedulerx3/model/ListClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListClustersResult::ListClustersResult() :
	ServiceResult()
{}

ListClustersResult::ListClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClustersResult::~ListClustersResult()
{}

void ListClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allRecordsNode = dataNode["Records"]["record"];
	for (auto dataNodeRecordsrecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsrecord["ClusterId"].isNull())
			recordObject.clusterId = dataNodeRecordsrecord["ClusterId"].asString();
		if(!dataNodeRecordsrecord["ClusterName"].isNull())
			recordObject.clusterName = dataNodeRecordsrecord["ClusterName"].asString();
		if(!dataNodeRecordsrecord["ClusterSpec"].isNull())
			recordObject.clusterSpec = dataNodeRecordsrecord["ClusterSpec"].asString();
		if(!dataNodeRecordsrecord["ProductType"].isNull())
			recordObject.productType = std::stoi(dataNodeRecordsrecord["ProductType"].asString());
		if(!dataNodeRecordsrecord["EngineType"].isNull())
			recordObject.engineType = dataNodeRecordsrecord["EngineType"].asString();
		if(!dataNodeRecordsrecord["EngineVersion"].isNull())
			recordObject.engineVersion = dataNodeRecordsrecord["EngineVersion"].asString();
		if(!dataNodeRecordsrecord["Status"].isNull())
			recordObject.status = std::stoi(dataNodeRecordsrecord["Status"].asString());
		if(!dataNodeRecordsrecord["CreateTime"].isNull())
			recordObject.createTime = dataNodeRecordsrecord["CreateTime"].asString();
		if(!dataNodeRecordsrecord["EndTime"].isNull())
			recordObject.endTime = dataNodeRecordsrecord["EndTime"].asString();
		if(!dataNodeRecordsrecord["IntranetDomain"].isNull())
			recordObject.intranetDomain = dataNodeRecordsrecord["IntranetDomain"].asString();
		if(!dataNodeRecordsrecord["InternetDomain"].isNull())
			recordObject.internetDomain = dataNodeRecordsrecord["InternetDomain"].asString();
		if(!dataNodeRecordsrecord["ChargeType"].isNull())
			recordObject.chargeType = dataNodeRecordsrecord["ChargeType"].asString();
		if(!dataNodeRecordsrecord["VpcId"].isNull())
			recordObject.vpcId = dataNodeRecordsrecord["VpcId"].asString();
		if(!dataNodeRecordsrecord["SpInstanceId"].isNull())
			recordObject.spInstanceId = dataNodeRecordsrecord["SpInstanceId"].asString();
		auto allVSwitchesNode = dataNodeRecordsrecord["VSwitches"]["vswitchesItem"];
		for (auto dataNodeRecordsrecordVSwitchesvswitchesItem : allVSwitchesNode)
		{
			Data::Record::VswitchesItem vSwitchesObject;
			if(!dataNodeRecordsrecordVSwitchesvswitchesItem["ZoneId"].isNull())
				vSwitchesObject.zoneId = dataNodeRecordsrecordVSwitchesvswitchesItem["ZoneId"].asString();
			if(!dataNodeRecordsrecordVSwitchesvswitchesItem["VSwitchId"].isNull())
				vSwitchesObject.vSwitchId = dataNodeRecordsrecordVSwitchesvswitchesItem["VSwitchId"].asString();
			recordObject.vSwitches.push_back(vSwitchesObject);
		}
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListClustersResult::getMessage()const
{
	return message_;
}

ListClustersResult::Data ListClustersResult::getData()const
{
	return data_;
}

int ListClustersResult::getCode()const
{
	return code_;
}

bool ListClustersResult::getSuccess()const
{
	return success_;
}

