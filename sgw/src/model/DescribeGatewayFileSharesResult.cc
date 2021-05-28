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

#include <alibabacloud/sgw/model/DescribeGatewayFileSharesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayFileSharesResult::DescribeGatewayFileSharesResult() :
	ServiceResult()
{}

DescribeGatewayFileSharesResult::DescribeGatewayFileSharesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayFileSharesResult::~DescribeGatewayFileSharesResult()
{}

void DescribeGatewayFileSharesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSharesNode = value["FileShares"]["FileShare"];
	for (auto valueFileSharesFileShare : allFileSharesNode)
	{
		FileShare fileSharesObject;
		if(!valueFileSharesFileShare["SerialNumber"].isNull())
			fileSharesObject.serialNumber = valueFileSharesFileShare["SerialNumber"].asString();
		if(!valueFileSharesFileShare["ClientSideCmk"].isNull())
			fileSharesObject.clientSideCmk = valueFileSharesFileShare["ClientSideCmk"].asString();
		if(!valueFileSharesFileShare["PartialSyncPaths"].isNull())
			fileSharesObject.partialSyncPaths = valueFileSharesFileShare["PartialSyncPaths"].asString();
		if(!valueFileSharesFileShare["PathPrefix"].isNull())
			fileSharesObject.pathPrefix = valueFileSharesFileShare["PathPrefix"].asString();
		if(!valueFileSharesFileShare["BucketsStub"].isNull())
			fileSharesObject.bucketsStub = valueFileSharesFileShare["BucketsStub"].asString() == "true";
		if(!valueFileSharesFileShare["UploadQueue"].isNull())
			fileSharesObject.uploadQueue = std::stol(valueFileSharesFileShare["UploadQueue"].asString());
		if(!valueFileSharesFileShare["DiskId"].isNull())
			fileSharesObject.diskId = valueFileSharesFileShare["DiskId"].asString();
		if(!valueFileSharesFileShare["OssUsed"].isNull())
			fileSharesObject.ossUsed = std::stol(valueFileSharesFileShare["OssUsed"].asString());
		if(!valueFileSharesFileShare["DownloadQueue"].isNull())
			fileSharesObject.downloadQueue = std::stol(valueFileSharesFileShare["DownloadQueue"].asString());
		if(!valueFileSharesFileShare["ActiveMessages"].isNull())
			fileSharesObject.activeMessages = std::stol(valueFileSharesFileShare["ActiveMessages"].asString());
		if(!valueFileSharesFileShare["IndexId"].isNull())
			fileSharesObject.indexId = valueFileSharesFileShare["IndexId"].asString();
		if(!valueFileSharesFileShare["MnsHealth"].isNull())
			fileSharesObject.mnsHealth = valueFileSharesFileShare["MnsHealth"].asString();
		if(!valueFileSharesFileShare["AccessBasedEnumeration"].isNull())
			fileSharesObject.accessBasedEnumeration = valueFileSharesFileShare["AccessBasedEnumeration"].asString() == "true";
		if(!valueFileSharesFileShare["DownloadRate"].isNull())
			fileSharesObject.downloadRate = std::stol(valueFileSharesFileShare["DownloadRate"].asString());
		if(!valueFileSharesFileShare["FeLimit"].isNull())
			fileSharesObject.feLimit = std::stoi(valueFileSharesFileShare["FeLimit"].asString());
		if(!valueFileSharesFileShare["SupportArchive"].isNull())
			fileSharesObject.supportArchive = valueFileSharesFileShare["SupportArchive"].asString() == "true";
		if(!valueFileSharesFileShare["OssEndpoint"].isNull())
			fileSharesObject.ossEndpoint = valueFileSharesFileShare["OssEndpoint"].asString();
		if(!valueFileSharesFileShare["OssHealth"].isNull())
			fileSharesObject.ossHealth = valueFileSharesFileShare["OssHealth"].asString();
		if(!valueFileSharesFileShare["OutRate"].isNull())
			fileSharesObject.outRate = std::stol(valueFileSharesFileShare["OutRate"].asString());
		if(!valueFileSharesFileShare["ServerSideCmk"].isNull())
			fileSharesObject.serverSideCmk = valueFileSharesFileShare["ServerSideCmk"].asString();
		if(!valueFileSharesFileShare["RwClientList"].isNull())
			fileSharesObject.rwClientList = valueFileSharesFileShare["RwClientList"].asString();
		if(!valueFileSharesFileShare["State"].isNull())
			fileSharesObject.state = valueFileSharesFileShare["State"].asString();
		if(!valueFileSharesFileShare["Protocol"].isNull())
			fileSharesObject.protocol = valueFileSharesFileShare["Protocol"].asString();
		if(!valueFileSharesFileShare["OssBucketSsl"].isNull())
			fileSharesObject.ossBucketSsl = valueFileSharesFileShare["OssBucketSsl"].asString() == "true";
		if(!valueFileSharesFileShare["DownloadLimit"].isNull())
			fileSharesObject.downloadLimit = std::stoi(valueFileSharesFileShare["DownloadLimit"].asString());
		if(!valueFileSharesFileShare["InPlace"].isNull())
			fileSharesObject.inPlace = valueFileSharesFileShare["InPlace"].asString() == "true";
		if(!valueFileSharesFileShare["RemoteSync"].isNull())
			fileSharesObject.remoteSync = valueFileSharesFileShare["RemoteSync"].asString() == "true";
		if(!valueFileSharesFileShare["FileNumLimit"].isNull())
			fileSharesObject.fileNumLimit = std::stol(valueFileSharesFileShare["FileNumLimit"].asString());
		if(!valueFileSharesFileShare["Squash"].isNull())
			fileSharesObject.squash = valueFileSharesFileShare["Squash"].asString();
		if(!valueFileSharesFileShare["NfsFullPath"].isNull())
			fileSharesObject.nfsFullPath = valueFileSharesFileShare["NfsFullPath"].asString();
		if(!valueFileSharesFileShare["RemainingMetaSpace"].isNull())
			fileSharesObject.remainingMetaSpace = std::stol(valueFileSharesFileShare["RemainingMetaSpace"].asString());
		if(!valueFileSharesFileShare["TransferAcceleration"].isNull())
			fileSharesObject.transferAcceleration = valueFileSharesFileShare["TransferAcceleration"].asString() == "true";
		if(!valueFileSharesFileShare["Size"].isNull())
			fileSharesObject.size = std::stol(valueFileSharesFileShare["Size"].asString());
		if(!valueFileSharesFileShare["ServerSideEncryption"].isNull())
			fileSharesObject.serverSideEncryption = valueFileSharesFileShare["ServerSideEncryption"].asString() == "true";
		if(!valueFileSharesFileShare["WindowsAcl"].isNull())
			fileSharesObject.windowsAcl = valueFileSharesFileShare["WindowsAcl"].asString() == "true";
		if(!valueFileSharesFileShare["RemoteSyncDownload"].isNull())
			fileSharesObject.remoteSyncDownload = valueFileSharesFileShare["RemoteSyncDownload"].asString() == "true";
		if(!valueFileSharesFileShare["ClientSideEncryption"].isNull())
			fileSharesObject.clientSideEncryption = valueFileSharesFileShare["ClientSideEncryption"].asString() == "true";
		if(!valueFileSharesFileShare["BucketInfos"].isNull())
			fileSharesObject.bucketInfos = valueFileSharesFileShare["BucketInfos"].asString();
		if(!valueFileSharesFileShare["NfsV4Optimization"].isNull())
			fileSharesObject.nfsV4Optimization = valueFileSharesFileShare["NfsV4Optimization"].asString() == "true";
		if(!valueFileSharesFileShare["TotalUpload"].isNull())
			fileSharesObject.totalUpload = std::stol(valueFileSharesFileShare["TotalUpload"].asString());
		if(!valueFileSharesFileShare["DiskType"].isNull())
			fileSharesObject.diskType = valueFileSharesFileShare["DiskType"].asString();
		if(!valueFileSharesFileShare["Used"].isNull())
			fileSharesObject.used = std::stol(valueFileSharesFileShare["Used"].asString());
		if(!valueFileSharesFileShare["IgnoreDelete"].isNull())
			fileSharesObject.ignoreDelete = valueFileSharesFileShare["IgnoreDelete"].asString() == "true";
		if(!valueFileSharesFileShare["RoUserList"].isNull())
			fileSharesObject.roUserList = valueFileSharesFileShare["RoUserList"].asString();
		if(!valueFileSharesFileShare["FsSizeLimit"].isNull())
			fileSharesObject.fsSizeLimit = std::stol(valueFileSharesFileShare["FsSizeLimit"].asString());
		if(!valueFileSharesFileShare["TotalDownload"].isNull())
			fileSharesObject.totalDownload = std::stol(valueFileSharesFileShare["TotalDownload"].asString());
		if(!valueFileSharesFileShare["Enabled"].isNull())
			fileSharesObject.enabled = valueFileSharesFileShare["Enabled"].asString() == "true";
		if(!valueFileSharesFileShare["HighWatermark"].isNull())
			fileSharesObject.highWatermark = std::stoi(valueFileSharesFileShare["HighWatermark"].asString());
		if(!valueFileSharesFileShare["KmsRotatePeriod"].isNull())
			fileSharesObject.kmsRotatePeriod = valueFileSharesFileShare["KmsRotatePeriod"].asString();
		if(!valueFileSharesFileShare["Address"].isNull())
			fileSharesObject.address = valueFileSharesFileShare["Address"].asString();
		if(!valueFileSharesFileShare["PollingInterval"].isNull())
			fileSharesObject.pollingInterval = std::stoi(valueFileSharesFileShare["PollingInterval"].asString());
		if(!valueFileSharesFileShare["Name"].isNull())
			fileSharesObject.name = valueFileSharesFileShare["Name"].asString();
		if(!valueFileSharesFileShare["OssBucketName"].isNull())
			fileSharesObject.ossBucketName = valueFileSharesFileShare["OssBucketName"].asString();
		if(!valueFileSharesFileShare["ExpressSyncId"].isNull())
			fileSharesObject.expressSyncId = valueFileSharesFileShare["ExpressSyncId"].asString();
		if(!valueFileSharesFileShare["LagPeriod"].isNull())
			fileSharesObject.lagPeriod = std::stol(valueFileSharesFileShare["LagPeriod"].asString());
		if(!valueFileSharesFileShare["DirectIO"].isNull())
			fileSharesObject.directIO = valueFileSharesFileShare["DirectIO"].asString() == "true";
		if(!valueFileSharesFileShare["CacheMode"].isNull())
			fileSharesObject.cacheMode = valueFileSharesFileShare["CacheMode"].asString();
		if(!valueFileSharesFileShare["InRate"].isNull())
			fileSharesObject.inRate = std::stol(valueFileSharesFileShare["InRate"].asString());
		if(!valueFileSharesFileShare["LowWatermark"].isNull())
			fileSharesObject.lowWatermark = std::stoi(valueFileSharesFileShare["LowWatermark"].asString());
		if(!valueFileSharesFileShare["SyncProgress"].isNull())
			fileSharesObject.syncProgress = std::stoi(valueFileSharesFileShare["SyncProgress"].asString());
		if(!valueFileSharesFileShare["ServerSideAlgorithm"].isNull())
			fileSharesObject.serverSideAlgorithm = valueFileSharesFileShare["ServerSideAlgorithm"].asString();
		if(!valueFileSharesFileShare["ObsoleteBuckets"].isNull())
			fileSharesObject.obsoleteBuckets = valueFileSharesFileShare["ObsoleteBuckets"].asString();
		if(!valueFileSharesFileShare["BeLimit"].isNull())
			fileSharesObject.beLimit = std::stoi(valueFileSharesFileShare["BeLimit"].asString());
		if(!valueFileSharesFileShare["LocalPath"].isNull())
			fileSharesObject.localPath = valueFileSharesFileShare["LocalPath"].asString();
		if(!valueFileSharesFileShare["RoClientList"].isNull())
			fileSharesObject.roClientList = valueFileSharesFileShare["RoClientList"].asString();
		if(!valueFileSharesFileShare["RwUserList"].isNull())
			fileSharesObject.rwUserList = valueFileSharesFileShare["RwUserList"].asString();
		if(!valueFileSharesFileShare["FastReclaim"].isNull())
			fileSharesObject.fastReclaim = valueFileSharesFileShare["FastReclaim"].asString() == "true";
		if(!valueFileSharesFileShare["Browsable"].isNull())
			fileSharesObject.browsable = valueFileSharesFileShare["Browsable"].asString() == "true";
		if(!valueFileSharesFileShare["Throttling"].isNull())
			fileSharesObject.throttling = valueFileSharesFileShare["Throttling"].asString() == "true";
		if(!valueFileSharesFileShare["BypassCacheRead"].isNull())
			fileSharesObject.bypassCacheRead = valueFileSharesFileShare["BypassCacheRead"].asString() == "true";
		fileShares_.push_back(fileSharesObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeGatewayFileSharesResult::FileShare> DescribeGatewayFileSharesResult::getFileShares()const
{
	return fileShares_;
}

std::string DescribeGatewayFileSharesResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayFileSharesResult::getCode()const
{
	return code_;
}

bool DescribeGatewayFileSharesResult::getSuccess()const
{
	return success_;
}

