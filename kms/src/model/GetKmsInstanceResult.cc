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

#include <alibabacloud/kms/model/GetKmsInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

GetKmsInstanceResult::GetKmsInstanceResult() :
	ServiceResult()
{}

GetKmsInstanceResult::GetKmsInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetKmsInstanceResult::~GetKmsInstanceResult()
{}

void GetKmsInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto kmsInstanceNode = value["KmsInstance"];
	if(!kmsInstanceNode["InstanceId"].isNull())
		kmsInstance_.instanceId = kmsInstanceNode["InstanceId"].asString();
	if(!kmsInstanceNode["InstanceName"].isNull())
		kmsInstance_.instanceName = kmsInstanceNode["InstanceName"].asString();
	if(!kmsInstanceNode["Status"].isNull())
		kmsInstance_.status = kmsInstanceNode["Status"].asString();
	if(!kmsInstanceNode["CreateTime"].isNull())
		kmsInstance_.createTime = kmsInstanceNode["CreateTime"].asString();
	if(!kmsInstanceNode["Spec"].isNull())
		kmsInstance_.spec = std::stol(kmsInstanceNode["Spec"].asString());
	if(!kmsInstanceNode["KeyNum"].isNull())
		kmsInstance_.keyNum = std::stol(kmsInstanceNode["KeyNum"].asString());
	if(!kmsInstanceNode["SecretNum"].isNull())
		kmsInstance_.secretNum = kmsInstanceNode["SecretNum"].asString();
	if(!kmsInstanceNode["VpcNum"].isNull())
		kmsInstance_.vpcNum = std::stol(kmsInstanceNode["VpcNum"].asString());
	if(!kmsInstanceNode["VpcId"].isNull())
		kmsInstance_.vpcId = kmsInstanceNode["VpcId"].asString();
	if(!kmsInstanceNode["ZoneIds"].isNull())
		kmsInstance_.zoneIds = kmsInstanceNode["ZoneIds"].asString();
	if(!kmsInstanceNode["VswitchIds"].isNull())
		kmsInstance_.vswitchIds = kmsInstanceNode["VswitchIds"].asString();
	if(!kmsInstanceNode["EndDate"].isNull())
		kmsInstance_.endDate = kmsInstanceNode["EndDate"].asString();
	if(!kmsInstanceNode["StartDate"].isNull())
		kmsInstance_.startDate = kmsInstanceNode["StartDate"].asString();
	if(!kmsInstanceNode["CaCertificateChainPem"].isNull())
		kmsInstance_.caCertificateChainPem = kmsInstanceNode["CaCertificateChainPem"].asString();
	auto allBindVpcsNode = kmsInstanceNode["BindVpcs"]["BindVpc"];
	for (auto kmsInstanceNodeBindVpcsBindVpc : allBindVpcsNode)
	{
		KmsInstance::BindVpc bindVpcObject;
		if(!kmsInstanceNodeBindVpcsBindVpc["RegionId"].isNull())
			bindVpcObject.regionId = kmsInstanceNodeBindVpcsBindVpc["RegionId"].asString();
		if(!kmsInstanceNodeBindVpcsBindVpc["VpcId"].isNull())
			bindVpcObject.vpcId = kmsInstanceNodeBindVpcsBindVpc["VpcId"].asString();
		if(!kmsInstanceNodeBindVpcsBindVpc["VpcOwnerId"].isNull())
			bindVpcObject.vpcOwnerId = kmsInstanceNodeBindVpcsBindVpc["VpcOwnerId"].asString();
		if(!kmsInstanceNodeBindVpcsBindVpc["VSwitchId"].isNull())
			bindVpcObject.vSwitchId = kmsInstanceNodeBindVpcsBindVpc["VSwitchId"].asString();
		kmsInstance_.bindVpcs.push_back(bindVpcObject);
	}

}

GetKmsInstanceResult::KmsInstance GetKmsInstanceResult::getKmsInstance()const
{
	return kmsInstance_;
}

