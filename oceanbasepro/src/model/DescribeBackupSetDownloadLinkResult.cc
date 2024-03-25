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

#include <alibabacloud/oceanbasepro/model/DescribeBackupSetDownloadLinkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeBackupSetDownloadLinkResult::DescribeBackupSetDownloadLinkResult() :
	ServiceResult()
{}

DescribeBackupSetDownloadLinkResult::DescribeBackupSetDownloadLinkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSetDownloadLinkResult::~DescribeBackupSetDownloadLinkResult()
{}

void DescribeBackupSetDownloadLinkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DownloadTaskId"].isNull())
		data_.downloadTaskId = std::stol(dataNode["DownloadTaskId"].asString());
	if(!dataNode["DownloadTaskStatus"].isNull())
		data_.downloadTaskStatus = dataNode["DownloadTaskStatus"].asString();
	if(!dataNode["DownloadTaskCreateTime"].isNull())
		data_.downloadTaskCreateTime = dataNode["DownloadTaskCreateTime"].asString();
	if(!dataNode["BackupRestorableTime"].isNull())
		data_.backupRestorableTime = dataNode["BackupRestorableTime"].asString();
	if(!dataNode["BackupSetId"].isNull())
		data_.backupSetId = dataNode["BackupSetId"].asString();
	if(!dataNode["InternalUrl"].isNull())
		data_.internalUrl = dataNode["InternalUrl"].asString();
	if(!dataNode["UrlExpiredTime"].isNull())
		data_.urlExpiredTime = dataNode["UrlExpiredTime"].asString();
	if(!dataNode["UrlAliveTime"].isNull())
		data_.urlAliveTime = std::stol(dataNode["UrlAliveTime"].asString());

}

DescribeBackupSetDownloadLinkResult::Data DescribeBackupSetDownloadLinkResult::getData()const
{
	return data_;
}

