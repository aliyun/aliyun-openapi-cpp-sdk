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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYFILESHARESRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYFILESHARESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeGatewayFileSharesResult : public ServiceResult
			{
			public:
				struct FileShare
				{
					long fileNumLimit;
					std::string bucketInfos;
					bool throttling;
					long totalDownload;
					long inRate;
					std::string address;
					long totalUpload;
					long size;
					int downloadLimit;
					int highWatermark;
					long downloadQueue;
					std::string clientSideCmk;
					long ossUsed;
					std::string localPath;
					std::string serverSideCmk;
					int beLimit;
					std::string name;
					std::string diskType;
					long outRate;
					std::string mnsHealth;
					bool remoteSyncDownload;
					bool clientSideEncryption;
					bool supportArchive;
					std::string roUserList;
					bool browsable;
					bool bypassCacheRead;
					std::string obsoleteBuckets;
					bool bucketsStub;
					bool fastReclaim;
					long remainingMetaSpace;
					int feLimit;
					std::string kmsRotatePeriod;
					std::string serialNumber;
					std::string state;
					bool inPlace;
					std::string ossBucketName;
					int pollingInterval;
					std::string serverSideAlgorithm;
					std::string diskId;
					bool accessBasedEnumeration;
					bool remoteSync;
					bool windowsAcl;
					std::string rwUserList;
					long fsSizeLimit;
					std::string cacheMode;
					bool transferAcceleration;
					long downloadRate;
					std::string squash;
					std::string nfsFullPath;
					std::string roClientList;
					int lowWatermark;
					std::string ossEndpoint;
					bool nfsV4Optimization;
					bool serverSideEncryption;
					std::string pathPrefix;
					std::string protocol;
					std::string partialSyncPaths;
					long lagPeriod;
					std::string ossHealth;
					std::string indexId;
					long activeMessages;
					bool enabled;
					bool directIO;
					bool ossBucketSsl;
					std::string expressSyncId;
					int syncProgress;
					long uploadQueue;
					bool ignoreDelete;
					std::string rwClientList;
					long used;
				};


				DescribeGatewayFileSharesResult();
				explicit DescribeGatewayFileSharesResult(const std::string &payload);
				~DescribeGatewayFileSharesResult();
				std::vector<FileShare> getFileShares()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FileShare> fileShares_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYFILESHARESRESULT_H_