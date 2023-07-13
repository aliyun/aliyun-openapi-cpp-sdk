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

#include <alibabacloud/mse/model/QueryConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryConfigResult::QueryConfigResult() :
	ServiceResult()
{}

QueryConfigResult::QueryConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryConfigResult::~QueryConfigResult()
{}

void QueryConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxClientCnxns"].isNull())
		data_.maxClientCnxns = dataNode["MaxClientCnxns"].asString();
	if(!dataNode["ConfigAuthSupported"].isNull())
		data_.configAuthSupported = dataNode["ConfigAuthSupported"].asString() == "true";
	if(!dataNode["InitLimit"].isNull())
		data_.initLimit = dataNode["InitLimit"].asString();
	if(!dataNode["MCPEnabled"].isNull())
		data_.mCPEnabled = dataNode["MCPEnabled"].asString() == "true";
	if(!dataNode["OpenSuperAcl"].isNull())
		data_.openSuperAcl = dataNode["OpenSuperAcl"].asString() == "true";
	if(!dataNode["RestartFlag"].isNull())
		data_.restartFlag = dataNode["RestartFlag"].asString() == "true";
	if(!dataNode["JvmFlagsCustom"].isNull())
		data_.jvmFlagsCustom = dataNode["JvmFlagsCustom"].asString();
	if(!dataNode["AutopurgePurgeInterval"].isNull())
		data_.autopurgePurgeInterval = dataNode["AutopurgePurgeInterval"].asString();
	if(!dataNode["AutopurgeSnapRetainCount"].isNull())
		data_.autopurgeSnapRetainCount = dataNode["AutopurgeSnapRetainCount"].asString();
	if(!dataNode["SyncLimit"].isNull())
		data_.syncLimit = dataNode["SyncLimit"].asString();
	if(!dataNode["ConfigAuthEnabled"].isNull())
		data_.configAuthEnabled = dataNode["ConfigAuthEnabled"].asString() == "true";
	if(!dataNode["ClusterName"].isNull())
		data_.clusterName = dataNode["ClusterName"].asString();
	if(!dataNode["MCPSupported"].isNull())
		data_.mCPSupported = dataNode["MCPSupported"].asString() == "true";
	if(!dataNode["JuteMaxbuffer"].isNull())
		data_.juteMaxbuffer = dataNode["JuteMaxbuffer"].asString();
	if(!dataNode["TickTime"].isNull())
		data_.tickTime = dataNode["TickTime"].asString();
	if(!dataNode["PassWord"].isNull())
		data_.passWord = dataNode["PassWord"].asString();
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["ConfigSecretSupported"].isNull())
		data_.configSecretSupported = dataNode["ConfigSecretSupported"].asString() == "true";
	if(!dataNode["ConfigSecretEnabled"].isNull())
		data_.configSecretEnabled = dataNode["ConfigSecretEnabled"].asString() == "true";
	if(!dataNode["NamingAuthEnabled"].isNull())
		data_.namingAuthEnabled = dataNode["NamingAuthEnabled"].asString() == "true";
	if(!dataNode["NamingAuthSupported"].isNull())
		data_.namingAuthSupported = dataNode["NamingAuthSupported"].asString() == "true";
	if(!dataNode["NamingCreateServiceSupported"].isNull())
		data_.namingCreateServiceSupported = dataNode["NamingCreateServiceSupported"].asString() == "true";
	if(!dataNode["MinSessionTimeout"].isNull())
		data_.minSessionTimeout = dataNode["MinSessionTimeout"].asString();
	if(!dataNode["MaxSessionTimeout"].isNull())
		data_.maxSessionTimeout = dataNode["MaxSessionTimeout"].asString();
	if(!dataNode["SnapshotCount"].isNull())
		data_.snapshotCount = dataNode["SnapshotCount"].asString();
	if(!dataNode["ConfigContentLimit"].isNull())
		data_.configContentLimit = std::stol(dataNode["ConfigContentLimit"].asString());
	if(!dataNode["ExtendedTypesEnable"].isNull())
		data_.extendedTypesEnable = dataNode["ExtendedTypesEnable"].asString() == "true";
	if(!dataNode["EurekaSupported"].isNull())
		data_.eurekaSupported = dataNode["EurekaSupported"].asString() == "true";
	if(!dataNode["TLSEnabled"].isNull())
		data_.tLSEnabled = dataNode["TLSEnabled"].asString() == "true";
	auto nacosRunningEnvNode = dataNode["NacosRunningEnv"];
	if(!nacosRunningEnvNode["emptyProtect"].isNull())
		data_.nacosRunningEnv.emptyProtect = nacosRunningEnvNode["emptyProtect"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string QueryConfigResult::getMessage()const
{
	return message_;
}

int QueryConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

QueryConfigResult::Data QueryConfigResult::getData()const
{
	return data_;
}

int QueryConfigResult::getCode()const
{
	return code_;
}

bool QueryConfigResult::getSuccess()const
{
	return success_;
}

