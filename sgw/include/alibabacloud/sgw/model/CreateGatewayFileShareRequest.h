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

#ifndef ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYFILESHAREREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYFILESHAREREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT CreateGatewayFileShareRequest : public RpcServiceRequest
			{

			public:
				CreateGatewayFileShareRequest();
				~CreateGatewayFileShareRequest();

				bool getInPlace()const;
				void setInPlace(bool inPlace);
				std::string getOssEndpoint()const;
				void setOssEndpoint(const std::string& ossEndpoint);
				std::string getReadWriteClientList()const;
				void setReadWriteClientList(const std::string& readWriteClientList);
				bool getBypassCacheRead()const;
				void setBypassCacheRead(bool bypassCacheRead);
				int getBackendLimit()const;
				void setBackendLimit(int backendLimit);
				std::string getSquash()const;
				void setSquash(const std::string& squash);
				std::string getReadOnlyClientList()const;
				void setReadOnlyClientList(const std::string& readOnlyClientList);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				long getKmsRotatePeriod()const;
				void setKmsRotatePeriod(long kmsRotatePeriod);
				bool getRemoteSyncDownload()const;
				void setRemoteSyncDownload(bool remoteSyncDownload);
				std::string getShareProtocol()const;
				void setShareProtocol(const std::string& shareProtocol);
				bool getNfsV4Optimization()const;
				void setNfsV4Optimization(bool nfsV4Optimization);
				bool getAccessBasedEnumeration()const;
				void setAccessBasedEnumeration(bool accessBasedEnumeration);
				std::string getGatewayId()const;
				void setGatewayId(const std::string& gatewayId);
				bool getSupportArchive()const;
				void setSupportArchive(bool supportArchive);
				std::string getCacheMode()const;
				void setCacheMode(const std::string& cacheMode);
				std::string getLocalFilePath()const;
				void setLocalFilePath(const std::string& localFilePath);
				std::string getPartialSyncPaths()const;
				void setPartialSyncPaths(const std::string& partialSyncPaths);
				int getDownloadLimit()const;
				void setDownloadLimit(int downloadLimit);
				std::string getReadOnlyUserList()const;
				void setReadOnlyUserList(const std::string& readOnlyUserList);
				bool getFastReclaim()const;
				void setFastReclaim(bool fastReclaim);
				bool getWindowsAcl()const;
				void setWindowsAcl(bool windowsAcl);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getOssBucketName()const;
				void setOssBucketName(const std::string& ossBucketName);
				bool getTransferAcceleration()const;
				void setTransferAcceleration(bool transferAcceleration);
				std::string getClientSideCmk()const;
				void setClientSideCmk(const std::string& clientSideCmk);
				std::string getPathPrefix()const;
				void setPathPrefix(const std::string& pathPrefix);
				bool getBrowsable()const;
				void setBrowsable(bool browsable);
				std::string getReadWriteUserList()const;
				void setReadWriteUserList(const std::string& readWriteUserList);
				int getPollingInterval()const;
				void setPollingInterval(int pollingInterval);
				bool getEnabled()const;
				void setEnabled(bool enabled);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getServerSideAlgorithm()const;
				void setServerSideAlgorithm(const std::string& serverSideAlgorithm);
				std::string getServerSideCmk()const;
				void setServerSideCmk(const std::string& serverSideCmk);
				bool getServerSideEncryption()const;
				void setServerSideEncryption(bool serverSideEncryption);
				bool getIgnoreDelete()const;
				void setIgnoreDelete(bool ignoreDelete);
				long getLagPeriod()const;
				void setLagPeriod(long lagPeriod);
				bool getDirectIO()const;
				void setDirectIO(bool directIO);
				bool getClientSideEncryption()const;
				void setClientSideEncryption(bool clientSideEncryption);
				bool getOssBucketSsl()const;
				void setOssBucketSsl(bool ossBucketSsl);
				bool getRemoteSync()const;
				void setRemoteSync(bool remoteSync);
				int getFrontendLimit()const;
				void setFrontendLimit(int frontendLimit);

            private:
				bool inPlace_;
				std::string ossEndpoint_;
				std::string readWriteClientList_;
				bool bypassCacheRead_;
				int backendLimit_;
				std::string squash_;
				std::string readOnlyClientList_;
				std::string securityToken_;
				long kmsRotatePeriod_;
				bool remoteSyncDownload_;
				std::string shareProtocol_;
				bool nfsV4Optimization_;
				bool accessBasedEnumeration_;
				std::string gatewayId_;
				bool supportArchive_;
				std::string cacheMode_;
				std::string localFilePath_;
				std::string partialSyncPaths_;
				int downloadLimit_;
				std::string readOnlyUserList_;
				bool fastReclaim_;
				bool windowsAcl_;
				std::string name_;
				std::string ossBucketName_;
				bool transferAcceleration_;
				std::string clientSideCmk_;
				std::string pathPrefix_;
				bool browsable_;
				std::string readWriteUserList_;
				int pollingInterval_;
				bool enabled_;
				std::string accessKeyId_;
				std::string serverSideAlgorithm_;
				std::string serverSideCmk_;
				bool serverSideEncryption_;
				bool ignoreDelete_;
				long lagPeriod_;
				bool directIO_;
				bool clientSideEncryption_;
				bool ossBucketSsl_;
				bool remoteSync_;
				int frontendLimit_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYFILESHAREREQUEST_H_