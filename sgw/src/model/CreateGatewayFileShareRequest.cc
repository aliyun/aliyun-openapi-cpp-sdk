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

#include <alibabacloud/sgw/model/CreateGatewayFileShareRequest.h>

using AlibabaCloud::Sgw::Model::CreateGatewayFileShareRequest;

CreateGatewayFileShareRequest::CreateGatewayFileShareRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateGatewayFileShare")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewayFileShareRequest::~CreateGatewayFileShareRequest()
{}

bool CreateGatewayFileShareRequest::getInPlace()const
{
	return inPlace_;
}

void CreateGatewayFileShareRequest::setInPlace(bool inPlace)
{
	inPlace_ = inPlace;
	setParameter("InPlace", inPlace ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void CreateGatewayFileShareRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setParameter("OssEndpoint", ossEndpoint);
}

std::string CreateGatewayFileShareRequest::getReadWriteClientList()const
{
	return readWriteClientList_;
}

void CreateGatewayFileShareRequest::setReadWriteClientList(const std::string& readWriteClientList)
{
	readWriteClientList_ = readWriteClientList;
	setParameter("ReadWriteClientList", readWriteClientList);
}

bool CreateGatewayFileShareRequest::getBypassCacheRead()const
{
	return bypassCacheRead_;
}

void CreateGatewayFileShareRequest::setBypassCacheRead(bool bypassCacheRead)
{
	bypassCacheRead_ = bypassCacheRead;
	setParameter("BypassCacheRead", bypassCacheRead ? "true" : "false");
}

int CreateGatewayFileShareRequest::getBackendLimit()const
{
	return backendLimit_;
}

void CreateGatewayFileShareRequest::setBackendLimit(int backendLimit)
{
	backendLimit_ = backendLimit;
	setParameter("BackendLimit", std::to_string(backendLimit));
}

std::string CreateGatewayFileShareRequest::getSquash()const
{
	return squash_;
}

void CreateGatewayFileShareRequest::setSquash(const std::string& squash)
{
	squash_ = squash;
	setParameter("Squash", squash);
}

std::string CreateGatewayFileShareRequest::getReadOnlyClientList()const
{
	return readOnlyClientList_;
}

void CreateGatewayFileShareRequest::setReadOnlyClientList(const std::string& readOnlyClientList)
{
	readOnlyClientList_ = readOnlyClientList;
	setParameter("ReadOnlyClientList", readOnlyClientList);
}

std::string CreateGatewayFileShareRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGatewayFileShareRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long CreateGatewayFileShareRequest::getKmsRotatePeriod()const
{
	return kmsRotatePeriod_;
}

void CreateGatewayFileShareRequest::setKmsRotatePeriod(long kmsRotatePeriod)
{
	kmsRotatePeriod_ = kmsRotatePeriod;
	setParameter("KmsRotatePeriod", std::to_string(kmsRotatePeriod));
}

bool CreateGatewayFileShareRequest::getRemoteSyncDownload()const
{
	return remoteSyncDownload_;
}

void CreateGatewayFileShareRequest::setRemoteSyncDownload(bool remoteSyncDownload)
{
	remoteSyncDownload_ = remoteSyncDownload;
	setParameter("RemoteSyncDownload", remoteSyncDownload ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getShareProtocol()const
{
	return shareProtocol_;
}

void CreateGatewayFileShareRequest::setShareProtocol(const std::string& shareProtocol)
{
	shareProtocol_ = shareProtocol;
	setParameter("ShareProtocol", shareProtocol);
}

bool CreateGatewayFileShareRequest::getNfsV4Optimization()const
{
	return nfsV4Optimization_;
}

void CreateGatewayFileShareRequest::setNfsV4Optimization(bool nfsV4Optimization)
{
	nfsV4Optimization_ = nfsV4Optimization;
	setParameter("NfsV4Optimization", nfsV4Optimization ? "true" : "false");
}

bool CreateGatewayFileShareRequest::getAccessBasedEnumeration()const
{
	return accessBasedEnumeration_;
}

void CreateGatewayFileShareRequest::setAccessBasedEnumeration(bool accessBasedEnumeration)
{
	accessBasedEnumeration_ = accessBasedEnumeration;
	setParameter("AccessBasedEnumeration", accessBasedEnumeration ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getGatewayId()const
{
	return gatewayId_;
}

void CreateGatewayFileShareRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

bool CreateGatewayFileShareRequest::getSupportArchive()const
{
	return supportArchive_;
}

void CreateGatewayFileShareRequest::setSupportArchive(bool supportArchive)
{
	supportArchive_ = supportArchive;
	setParameter("SupportArchive", supportArchive ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getCacheMode()const
{
	return cacheMode_;
}

void CreateGatewayFileShareRequest::setCacheMode(const std::string& cacheMode)
{
	cacheMode_ = cacheMode;
	setParameter("CacheMode", cacheMode);
}

std::string CreateGatewayFileShareRequest::getLocalFilePath()const
{
	return localFilePath_;
}

void CreateGatewayFileShareRequest::setLocalFilePath(const std::string& localFilePath)
{
	localFilePath_ = localFilePath;
	setParameter("LocalFilePath", localFilePath);
}

std::string CreateGatewayFileShareRequest::getPartialSyncPaths()const
{
	return partialSyncPaths_;
}

void CreateGatewayFileShareRequest::setPartialSyncPaths(const std::string& partialSyncPaths)
{
	partialSyncPaths_ = partialSyncPaths;
	setParameter("PartialSyncPaths", partialSyncPaths);
}

int CreateGatewayFileShareRequest::getDownloadLimit()const
{
	return downloadLimit_;
}

void CreateGatewayFileShareRequest::setDownloadLimit(int downloadLimit)
{
	downloadLimit_ = downloadLimit;
	setParameter("DownloadLimit", std::to_string(downloadLimit));
}

std::string CreateGatewayFileShareRequest::getReadOnlyUserList()const
{
	return readOnlyUserList_;
}

void CreateGatewayFileShareRequest::setReadOnlyUserList(const std::string& readOnlyUserList)
{
	readOnlyUserList_ = readOnlyUserList;
	setParameter("ReadOnlyUserList", readOnlyUserList);
}

bool CreateGatewayFileShareRequest::getFastReclaim()const
{
	return fastReclaim_;
}

void CreateGatewayFileShareRequest::setFastReclaim(bool fastReclaim)
{
	fastReclaim_ = fastReclaim;
	setParameter("FastReclaim", fastReclaim ? "true" : "false");
}

bool CreateGatewayFileShareRequest::getWindowsAcl()const
{
	return windowsAcl_;
}

void CreateGatewayFileShareRequest::setWindowsAcl(bool windowsAcl)
{
	windowsAcl_ = windowsAcl;
	setParameter("WindowsAcl", windowsAcl ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getName()const
{
	return name_;
}

void CreateGatewayFileShareRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateGatewayFileShareRequest::getOssBucketName()const
{
	return ossBucketName_;
}

void CreateGatewayFileShareRequest::setOssBucketName(const std::string& ossBucketName)
{
	ossBucketName_ = ossBucketName;
	setParameter("OssBucketName", ossBucketName);
}

bool CreateGatewayFileShareRequest::getTransferAcceleration()const
{
	return transferAcceleration_;
}

void CreateGatewayFileShareRequest::setTransferAcceleration(bool transferAcceleration)
{
	transferAcceleration_ = transferAcceleration;
	setParameter("TransferAcceleration", transferAcceleration ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getClientSideCmk()const
{
	return clientSideCmk_;
}

void CreateGatewayFileShareRequest::setClientSideCmk(const std::string& clientSideCmk)
{
	clientSideCmk_ = clientSideCmk;
	setParameter("ClientSideCmk", clientSideCmk);
}

std::string CreateGatewayFileShareRequest::getPathPrefix()const
{
	return pathPrefix_;
}

void CreateGatewayFileShareRequest::setPathPrefix(const std::string& pathPrefix)
{
	pathPrefix_ = pathPrefix;
	setParameter("PathPrefix", pathPrefix);
}

bool CreateGatewayFileShareRequest::getBrowsable()const
{
	return browsable_;
}

void CreateGatewayFileShareRequest::setBrowsable(bool browsable)
{
	browsable_ = browsable;
	setParameter("Browsable", browsable ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getReadWriteUserList()const
{
	return readWriteUserList_;
}

void CreateGatewayFileShareRequest::setReadWriteUserList(const std::string& readWriteUserList)
{
	readWriteUserList_ = readWriteUserList;
	setParameter("ReadWriteUserList", readWriteUserList);
}

int CreateGatewayFileShareRequest::getPollingInterval()const
{
	return pollingInterval_;
}

void CreateGatewayFileShareRequest::setPollingInterval(int pollingInterval)
{
	pollingInterval_ = pollingInterval;
	setParameter("PollingInterval", std::to_string(pollingInterval));
}

bool CreateGatewayFileShareRequest::getEnabled()const
{
	return enabled_;
}

void CreateGatewayFileShareRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string CreateGatewayFileShareRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGatewayFileShareRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGatewayFileShareRequest::getServerSideAlgorithm()const
{
	return serverSideAlgorithm_;
}

void CreateGatewayFileShareRequest::setServerSideAlgorithm(const std::string& serverSideAlgorithm)
{
	serverSideAlgorithm_ = serverSideAlgorithm;
	setParameter("ServerSideAlgorithm", serverSideAlgorithm);
}

std::string CreateGatewayFileShareRequest::getServerSideCmk()const
{
	return serverSideCmk_;
}

void CreateGatewayFileShareRequest::setServerSideCmk(const std::string& serverSideCmk)
{
	serverSideCmk_ = serverSideCmk;
	setParameter("ServerSideCmk", serverSideCmk);
}

bool CreateGatewayFileShareRequest::getServerSideEncryption()const
{
	return serverSideEncryption_;
}

void CreateGatewayFileShareRequest::setServerSideEncryption(bool serverSideEncryption)
{
	serverSideEncryption_ = serverSideEncryption;
	setParameter("ServerSideEncryption", serverSideEncryption ? "true" : "false");
}

bool CreateGatewayFileShareRequest::getIgnoreDelete()const
{
	return ignoreDelete_;
}

void CreateGatewayFileShareRequest::setIgnoreDelete(bool ignoreDelete)
{
	ignoreDelete_ = ignoreDelete;
	setParameter("IgnoreDelete", ignoreDelete ? "true" : "false");
}

long CreateGatewayFileShareRequest::getLagPeriod()const
{
	return lagPeriod_;
}

void CreateGatewayFileShareRequest::setLagPeriod(long lagPeriod)
{
	lagPeriod_ = lagPeriod;
	setParameter("LagPeriod", std::to_string(lagPeriod));
}

bool CreateGatewayFileShareRequest::getDirectIO()const
{
	return directIO_;
}

void CreateGatewayFileShareRequest::setDirectIO(bool directIO)
{
	directIO_ = directIO;
	setParameter("DirectIO", directIO ? "true" : "false");
}

bool CreateGatewayFileShareRequest::getClientSideEncryption()const
{
	return clientSideEncryption_;
}

void CreateGatewayFileShareRequest::setClientSideEncryption(bool clientSideEncryption)
{
	clientSideEncryption_ = clientSideEncryption;
	setParameter("ClientSideEncryption", clientSideEncryption ? "true" : "false");
}

bool CreateGatewayFileShareRequest::getOssBucketSsl()const
{
	return ossBucketSsl_;
}

void CreateGatewayFileShareRequest::setOssBucketSsl(bool ossBucketSsl)
{
	ossBucketSsl_ = ossBucketSsl;
	setParameter("OssBucketSsl", ossBucketSsl ? "true" : "false");
}

bool CreateGatewayFileShareRequest::getRemoteSync()const
{
	return remoteSync_;
}

void CreateGatewayFileShareRequest::setRemoteSync(bool remoteSync)
{
	remoteSync_ = remoteSync;
	setParameter("RemoteSync", remoteSync ? "true" : "false");
}

int CreateGatewayFileShareRequest::getFrontendLimit()const
{
	return frontendLimit_;
}

void CreateGatewayFileShareRequest::setFrontendLimit(int frontendLimit)
{
	frontendLimit_ = frontendLimit;
	setParameter("FrontendLimit", std::to_string(frontendLimit));
}

