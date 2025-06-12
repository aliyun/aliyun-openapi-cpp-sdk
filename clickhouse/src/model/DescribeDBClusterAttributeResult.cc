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

#include <alibabacloud/clickhouse/model/DescribeDBClusterAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult() :
	ServiceResult()
{}

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAttributeResult::~DescribeDBClusterAttributeResult()
{}

void DescribeDBClusterAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBClusterNode = value["DBCluster"];
	if(!dBClusterNode["VpcId"].isNull())
		dBCluster_.vpcId = dBClusterNode["VpcId"].asString();
	if(!dBClusterNode["SupportBackup"].isNull())
		dBCluster_.supportBackup = std::stoi(dBClusterNode["SupportBackup"].asString());
	if(!dBClusterNode["SupportOss"].isNull())
		dBCluster_.supportOss = std::stoi(dBClusterNode["SupportOss"].asString());
	if(!dBClusterNode["EncryptionType"].isNull())
		dBCluster_.encryptionType = dBClusterNode["EncryptionType"].asString();
	if(!dBClusterNode["DBNodeCount"].isNull())
		dBCluster_.dBNodeCount = std::stol(dBClusterNode["DBNodeCount"].asString());
	if(!dBClusterNode["MaintainTime"].isNull())
		dBCluster_.maintainTime = dBClusterNode["MaintainTime"].asString();
	if(!dBClusterNode["CreateTime"].isNull())
		dBCluster_.createTime = dBClusterNode["CreateTime"].asString();
	if(!dBClusterNode["PayType"].isNull())
		dBCluster_.payType = dBClusterNode["PayType"].asString();
	if(!dBClusterNode["PublicConnectionString"].isNull())
		dBCluster_.publicConnectionString = dBClusterNode["PublicConnectionString"].asString();
	if(!dBClusterNode["StorageType"].isNull())
		dBCluster_.storageType = dBClusterNode["StorageType"].asString();
	if(!dBClusterNode["Port"].isNull())
		dBCluster_.port = std::stoi(dBClusterNode["Port"].asString());
	if(!dBClusterNode["LockMode"].isNull())
		dBCluster_.lockMode = dBClusterNode["LockMode"].asString();
	if(!dBClusterNode["Bid"].isNull())
		dBCluster_.bid = dBClusterNode["Bid"].asString();
	if(!dBClusterNode["EngineVersion"].isNull())
		dBCluster_.engineVersion = dBClusterNode["EngineVersion"].asString();
	if(!dBClusterNode["IsExpired"].isNull())
		dBCluster_.isExpired = dBClusterNode["IsExpired"].asString();
	if(!dBClusterNode["VpcCloudInstanceId"].isNull())
		dBCluster_.vpcCloudInstanceId = dBClusterNode["VpcCloudInstanceId"].asString();
	if(!dBClusterNode["DBClusterId"].isNull())
		dBCluster_.dBClusterId = dBClusterNode["DBClusterId"].asString();
	if(!dBClusterNode["ConnectionString"].isNull())
		dBCluster_.connectionString = dBClusterNode["ConnectionString"].asString();
	if(!dBClusterNode["EncryptionKey"].isNull())
		dBCluster_.encryptionKey = dBClusterNode["EncryptionKey"].asString();
	if(!dBClusterNode["DBClusterType"].isNull())
		dBCluster_.dBClusterType = dBClusterNode["DBClusterType"].asString();
	if(!dBClusterNode["CommodityCode"].isNull())
		dBCluster_.commodityCode = dBClusterNode["CommodityCode"].asString();
	if(!dBClusterNode["ExpireTime"].isNull())
		dBCluster_.expireTime = dBClusterNode["ExpireTime"].asString();
	if(!dBClusterNode["DBNodeStorage"].isNull())
		dBCluster_.dBNodeStorage = std::stol(dBClusterNode["DBNodeStorage"].asString());
	if(!dBClusterNode["DBNodeClass"].isNull())
		dBCluster_.dBNodeClass = dBClusterNode["DBNodeClass"].asString();
	if(!dBClusterNode["AliUid"].isNull())
		dBCluster_.aliUid = dBClusterNode["AliUid"].asString();
	if(!dBClusterNode["LockReason"].isNull())
		dBCluster_.lockReason = dBClusterNode["LockReason"].asString();
	if(!dBClusterNode["RegionId"].isNull())
		dBCluster_.regionId = dBClusterNode["RegionId"].asString();
	if(!dBClusterNode["PublicPort"].isNull())
		dBCluster_.publicPort = dBClusterNode["PublicPort"].asString();
	if(!dBClusterNode["VSwitchId"].isNull())
		dBCluster_.vSwitchId = dBClusterNode["VSwitchId"].asString();
	if(!dBClusterNode["DBClusterStatus"].isNull())
		dBCluster_.dBClusterStatus = dBClusterNode["DBClusterStatus"].asString();
	if(!dBClusterNode["DBClusterNetworkType"].isNull())
		dBCluster_.dBClusterNetworkType = dBClusterNode["DBClusterNetworkType"].asString();
	if(!dBClusterNode["DBClusterDescription"].isNull())
		dBCluster_.dBClusterDescription = dBClusterNode["DBClusterDescription"].asString();
	if(!dBClusterNode["ZoneId"].isNull())
		dBCluster_.zoneId = dBClusterNode["ZoneId"].asString();
	if(!dBClusterNode["Category"].isNull())
		dBCluster_.category = dBClusterNode["Category"].asString();
	if(!dBClusterNode["Engine"].isNull())
		dBCluster_.engine = dBClusterNode["Engine"].asString();
	if(!dBClusterNode["SupportMysqlPort"].isNull())
		dBCluster_.supportMysqlPort = dBClusterNode["SupportMysqlPort"].asString() == "true";
	if(!dBClusterNode["SupportHttpsPort"].isNull())
		dBCluster_.supportHttpsPort = dBClusterNode["SupportHttpsPort"].asString() == "true";
	if(!dBClusterNode["ControlVersion"].isNull())
		dBCluster_.controlVersion = dBClusterNode["ControlVersion"].asString();
	if(!dBClusterNode["PublicIpAddr"].isNull())
		dBCluster_.publicIpAddr = dBClusterNode["PublicIpAddr"].asString();
	if(!dBClusterNode["VpcIpAddr"].isNull())
		dBCluster_.vpcIpAddr = dBClusterNode["VpcIpAddr"].asString();
	if(!dBClusterNode["EngineMinorVersion"].isNull())
		dBCluster_.engineMinorVersion = dBClusterNode["EngineMinorVersion"].asString();
	if(!dBClusterNode["EngineLatestMinorVersion"].isNull())
		dBCluster_.engineLatestMinorVersion = dBClusterNode["EngineLatestMinorVersion"].asString();
	if(!dBClusterNode["MaintainAutoType"].isNull())
		dBCluster_.maintainAutoType = dBClusterNode["MaintainAutoType"].asString() == "true";
	if(!dBClusterNode["ExtStorageType"].isNull())
		dBCluster_.extStorageType = dBClusterNode["ExtStorageType"].asString();
	if(!dBClusterNode["ExtStorageSize"].isNull())
		dBCluster_.extStorageSize = std::stoi(dBClusterNode["ExtStorageSize"].asString());
	if(!dBClusterNode["ResourceGroupId"].isNull())
		dBCluster_.resourceGroupId = dBClusterNode["ResourceGroupId"].asString();
	if(!dBClusterNode["ZookeeperClass"].isNull())
		dBCluster_.zookeeperClass = dBClusterNode["ZookeeperClass"].asString();
	if(!dBClusterNode["AppointmentRestartTime"].isNull())
		dBCluster_.appointmentRestartTime = dBClusterNode["AppointmentRestartTime"].asString();
	if(!dBClusterNode["ZoneIdVswitchMap"].isNull())
		dBCluster_.zoneIdVswitchMap = dBClusterNode["ZoneIdVswitchMap"].asString();
	if(!dBClusterNode["AvailableUpgradeMajorVersion"].isNull())
		dBCluster_.availableUpgradeMajorVersion = dBClusterNode["AvailableUpgradeMajorVersion"].asString();
	if(!dBClusterNode["AppointmentRestartNodeTime"].isNull())
		dBCluster_.appointmentRestartNodeTime = dBClusterNode["AppointmentRestartNodeTime"].asString();
	if(!dBClusterNode["AppointmentRestartNodeList"].isNull())
		dBCluster_.appointmentRestartNodeList = dBClusterNode["AppointmentRestartNodeList"].asString();
	if(!dBClusterNode["AppointmentElectZookeeperTime"].isNull())
		dBCluster_.appointmentElectZookeeperTime = dBClusterNode["AppointmentElectZookeeperTime"].asString();
	if(!dBClusterNode["AppointmentElectZookeeperDisableWrite"].isNull())
		dBCluster_.appointmentElectZookeeperDisableWrite = dBClusterNode["AppointmentElectZookeeperDisableWrite"].asString() == "true";
	auto allTagsNode = dBClusterNode["Tags"]["Tag"];
	for (auto dBClusterNodeTagsTag : allTagsNode)
	{
		DBCluster::Tag tagObject;
		if(!dBClusterNodeTagsTag["Key"].isNull())
			tagObject.key = dBClusterNodeTagsTag["Key"].asString();
		if(!dBClusterNodeTagsTag["Value"].isNull())
			tagObject.value = dBClusterNodeTagsTag["Value"].asString();
		dBCluster_.tags.push_back(tagObject);
	}
	auto scaleOutStatusNode = dBClusterNode["ScaleOutStatus"];
	if(!scaleOutStatusNode["Progress"].isNull())
		dBCluster_.scaleOutStatus.progress = scaleOutStatusNode["Progress"].asString();
	if(!scaleOutStatusNode["Ratio"].isNull())
		dBCluster_.scaleOutStatus.ratio = scaleOutStatusNode["Ratio"].asString();

}

DescribeDBClusterAttributeResult::DBCluster DescribeDBClusterAttributeResult::getDBCluster()const
{
	return dBCluster_;
}

