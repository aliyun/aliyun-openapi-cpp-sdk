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

#include <alibabacloud/emr/model/GetBackInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetBackInfoResult::GetBackInfoResult() :
	ServiceResult()
{}

GetBackInfoResult::GetBackInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBackInfoResult::~GetBackInfoResult()
{}

void GetBackInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto metadataInfoNode = value["MetadataInfo"];
	if(!metadataInfoNode["MetadataType"].isNull())
		metadataInfo_.metadataType = metadataInfoNode["MetadataType"].asString();
	if(!metadataInfoNode["Properties"].isNull())
		metadataInfo_.properties = metadataInfoNode["Properties"].asString();
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["BackupPlanId"].isNull())
		backupPlanId_ = value["BackupPlanId"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Md5"].isNull())
		md5_ = value["Md5"].asString();
	if(!value["TarFileName"].isNull())
		tarFileName_ = value["TarFileName"].asString();
	if(!value["StorePath"].isNull())
		storePath_ = value["StorePath"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string GetBackInfoResult::getStatus()const
{
	return status_;
}

GetBackInfoResult::MetadataInfo GetBackInfoResult::getMetadataInfo()const
{
	return metadataInfo_;
}

std::string GetBackInfoResult::getTarFileName()const
{
	return tarFileName_;
}

std::string GetBackInfoResult::getClusterId()const
{
	return clusterId_;
}

bool GetBackInfoResult::getPaging()const
{
	return paging_;
}

long GetBackInfoResult::getCreateTime()const
{
	return createTime_;
}

std::string GetBackInfoResult::getBackupPlanId()const
{
	return backupPlanId_;
}

std::string GetBackInfoResult::getId()const
{
	return id_;
}

std::string GetBackInfoResult::getMd5()const
{
	return md5_;
}

std::string GetBackInfoResult::getStorePath()const
{
	return storePath_;
}

