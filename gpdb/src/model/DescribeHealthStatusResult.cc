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

#include <alibabacloud/gpdb/model/DescribeHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeHealthStatusResult::DescribeHealthStatusResult() :
	ServiceResult()
{}

DescribeHealthStatusResult::DescribeHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHealthStatusResult::~DescribeHealthStatusResult()
{}

void DescribeHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statusNode = value["Status"];
	auto adbpg_statusNode = statusNode["adbpg_status"];
	if(!adbpg_statusNode["Status"].isNull())
		status_.adbpg_status.status = adbpg_statusNode["Status"].asString();
	if(!adbpg_statusNode["Value"].isNull())
		status_.adbpg_status.value = std::stof(adbpg_statusNode["Value"].asString());
	auto adbpg_connection_statusNode = statusNode["adbpg_connection_status"];
	if(!adbpg_connection_statusNode["Status"].isNull())
		status_.adbpg_connection_status.status = adbpg_connection_statusNode["Status"].asString();
	if(!adbpg_connection_statusNode["Value"].isNull())
		status_.adbpg_connection_status.value = std::stof(adbpg_connection_statusNode["Value"].asString());
	auto adbpg_disk_statusNode = statusNode["adbpg_disk_status"];
	if(!adbpg_disk_statusNode["Status"].isNull())
		status_.adbpg_disk_status.status = adbpg_disk_statusNode["Status"].asString();
	if(!adbpg_disk_statusNode["Value"].isNull())
		status_.adbpg_disk_status.value = std::stof(adbpg_disk_statusNode["Value"].asString());
	auto adbpg_disk_usage_percentNode = statusNode["adbpg_disk_usage_percent"];
	if(!adbpg_disk_usage_percentNode["Status"].isNull())
		status_.adbpg_disk_usage_percent.status = adbpg_disk_usage_percentNode["Status"].asString();
	if(!adbpg_disk_usage_percentNode["Value"].isNull())
		status_.adbpg_disk_usage_percent.value = std::stof(adbpg_disk_usage_percentNode["Value"].asString());
	auto adbpg_master_disk_usage_percent_maxNode = statusNode["adbpg_master_disk_usage_percent_max"];
	if(!adbpg_master_disk_usage_percent_maxNode["Status"].isNull())
		status_.adbpg_master_disk_usage_percent_max.status = adbpg_master_disk_usage_percent_maxNode["Status"].asString();
	if(!adbpg_master_disk_usage_percent_maxNode["Value"].isNull())
		status_.adbpg_master_disk_usage_percent_max.value = std::stof(adbpg_master_disk_usage_percent_maxNode["Value"].asString());
	auto adbgp_segment_disk_usage_percent_maxNode = statusNode["adbgp_segment_disk_usage_percent_max"];
	if(!adbgp_segment_disk_usage_percent_maxNode["Status"].isNull())
		status_.adbgp_segment_disk_usage_percent_max.status = adbgp_segment_disk_usage_percent_maxNode["Status"].asString();
	if(!adbgp_segment_disk_usage_percent_maxNode["Value"].isNull())
		status_.adbgp_segment_disk_usage_percent_max.value = std::stof(adbgp_segment_disk_usage_percent_maxNode["Value"].asString());
	auto node_master_statusNode = statusNode["node_master_status"];
	if(!node_master_statusNode["Status"].isNull())
		status_.node_master_status.status = node_master_statusNode["Status"].asString();
	if(!node_master_statusNode["Value"].isNull())
		status_.node_master_status.value = std::stof(node_master_statusNode["Value"].asString());
	auto node_segment_disk_statusNode = statusNode["node_segment_disk_status"];
	if(!node_segment_disk_statusNode["Status"].isNull())
		status_.node_segment_disk_status.status = node_segment_disk_statusNode["Status"].asString();
	if(!node_segment_disk_statusNode["Value"].isNull())
		status_.node_segment_disk_status.value = std::stof(node_segment_disk_statusNode["Value"].asString());
	auto node_master_connection_statusNode = statusNode["node_master_connection_status"];
	if(!node_master_connection_statusNode["Status"].isNull())
		status_.node_master_connection_status.status = node_master_connection_statusNode["Status"].asString();
	if(!node_master_connection_statusNode["Value"].isNull())
		status_.node_master_connection_status.value = std::stof(node_master_connection_statusNode["Value"].asString());
	auto node_segment_connection_statusNode = statusNode["node_segment_connection_status"];
	if(!node_segment_connection_statusNode["Status"].isNull())
		status_.node_segment_connection_status.status = node_segment_connection_statusNode["Status"].asString();
	if(!node_segment_connection_statusNode["Value"].isNull())
		status_.node_segment_connection_status.value = std::stof(node_segment_connection_statusNode["Value"].asString());
	auto adbpg_master_statusNode = statusNode["adbpg_master_status"];
	if(!adbpg_master_statusNode["Status"].isNull())
		status_.adbpg_master_status.status = adbpg_master_statusNode["Status"].asString();
	if(!adbpg_master_statusNode["Value"].isNull())
		status_.adbpg_master_status.value = std::stof(adbpg_master_statusNode["Value"].asString());
	auto adbpg_segment_statusNode = statusNode["adbpg_segment_status"];
	if(!adbpg_segment_statusNode["Status"].isNull())
		status_.adbpg_segment_status.status = adbpg_segment_statusNode["Status"].asString();
	if(!adbpg_segment_statusNode["Value"].isNull())
		status_.adbpg_segment_status.value = std::stof(adbpg_segment_statusNode["Value"].asString());
	auto adbpg_instance_total_data_gbNode = statusNode["adbpg_instance_total_data_gb"];
	if(!adbpg_instance_total_data_gbNode["Value"].isNull())
		status_.adbpg_instance_total_data_gb.value = std::stof(adbpg_instance_total_data_gbNode["Value"].asString());
	auto adbpg_instance_hot_data_gbNode = statusNode["adbpg_instance_hot_data_gb"];
	if(!adbpg_instance_hot_data_gbNode["Value"].isNull())
		status_.adbpg_instance_hot_data_gb.value = std::stof(adbpg_instance_hot_data_gbNode["Value"].asString());
	auto adbpg_instance_cold_data_gbNode = statusNode["adbpg_instance_cold_data_gb"];
	if(!adbpg_instance_cold_data_gbNode["Value"].isNull())
		status_.adbpg_instance_cold_data_gb.value = std::stof(adbpg_instance_cold_data_gbNode["Value"].asString());
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

DescribeHealthStatusResult::Status DescribeHealthStatusResult::getStatus()const
{
	return status_;
}

std::string DescribeHealthStatusResult::getDBClusterId()const
{
	return dBClusterId_;
}

