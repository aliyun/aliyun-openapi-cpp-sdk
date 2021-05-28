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

#include <alibabacloud/sgw/model/UpdateGatewayFileShareRequest.h>

using AlibabaCloud::Sgw::Model::UpdateGatewayFileShareRequest;

UpdateGatewayFileShareRequest::UpdateGatewayFileShareRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "UpdateGatewayFileShare")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateGatewayFileShareRequest::~UpdateGatewayFileShareRequest()
{}

std::string UpdateGatewayFileShareRequest::getClientSideCmk()const
{
	return clientSideCmk_;
}

void UpdateGatewayFileShareRequest::setClientSideCmk(const std::string& clientSideCmk)
{
	clientSideCmk_ = clientSideCmk;
	setParameter("ClientSideCmk", clientSideCmk);
}

bool UpdateGatewayFileShareRequest::getInPlace()const
{
	return inPlace_;
}

void UpdateGatewayFileShareRequest::setInPlace(bool inPlace)
{
	inPlace_ = inPlace;
	setParameter("InPlace", inPlace ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getBrowsable()const
{
	return browsable_;
}

void UpdateGatewayFileShareRequest::setBrowsable(bool browsable)
{
	browsable_ = browsable;
	setParameter("Browsable", browsable ? "true" : "false");
}

std::string UpdateGatewayFileShareRequest::getReadWriteUserList()const
{
	return readWriteUserList_;
}

void UpdateGatewayFileShareRequest::setReadWriteUserList(const std::string& readWriteUserList)
{
	readWriteUserList_ = readWriteUserList;
	setParameter("ReadWriteUserList", readWriteUserList);
}

int UpdateGatewayFileShareRequest::getPollingInterval()const
{
	return pollingInterval_;
}

void UpdateGatewayFileShareRequest::setPollingInterval(int pollingInterval)
{
	pollingInterval_ = pollingInterval;
	setParameter("PollingInterval", std::to_string(pollingInterval));
}

std::string UpdateGatewayFileShareRequest::getReadWriteClientList()const
{
	return readWriteClientList_;
}

void UpdateGatewayFileShareRequest::setReadWriteClientList(const std::string& readWriteClientList)
{
	readWriteClientList_ = readWriteClientList;
	setParameter("ReadWriteClientList", readWriteClientList);
}

bool UpdateGatewayFileShareRequest::getBypassCacheRead()const
{
	return bypassCacheRead_;
}

void UpdateGatewayFileShareRequest::setBypassCacheRead(bool bypassCacheRead)
{
	bypassCacheRead_ = bypassCacheRead;
	setParameter("BypassCacheRead", bypassCacheRead ? "true" : "false");
}

std::string UpdateGatewayFileShareRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateGatewayFileShareRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int UpdateGatewayFileShareRequest::getBackendLimit()const
{
	return backendLimit_;
}

void UpdateGatewayFileShareRequest::setBackendLimit(int backendLimit)
{
	backendLimit_ = backendLimit;
	setParameter("BackendLimit", std::to_string(backendLimit));
}

std::string UpdateGatewayFileShareRequest::getSquash()const
{
	return squash_;
}

void UpdateGatewayFileShareRequest::setSquash(const std::string& squash)
{
	squash_ = squash;
	setParameter("Squash", squash);
}

std::string UpdateGatewayFileShareRequest::getReadOnlyClientList()const
{
	return readOnlyClientList_;
}

void UpdateGatewayFileShareRequest::setReadOnlyClientList(const std::string& readOnlyClientList)
{
	readOnlyClientList_ = readOnlyClientList;
	setParameter("ReadOnlyClientList", readOnlyClientList);
}

std::string UpdateGatewayFileShareRequest::getServerSideCmk()const
{
	return serverSideCmk_;
}

void UpdateGatewayFileShareRequest::setServerSideCmk(const std::string& serverSideCmk)
{
	serverSideCmk_ = serverSideCmk;
	setParameter("ServerSideCmk", serverSideCmk);
}

std::string UpdateGatewayFileShareRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateGatewayFileShareRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long UpdateGatewayFileShareRequest::getKmsRotatePeriod()const
{
	return kmsRotatePeriod_;
}

void UpdateGatewayFileShareRequest::setKmsRotatePeriod(long kmsRotatePeriod)
{
	kmsRotatePeriod_ = kmsRotatePeriod;
	setParameter("KmsRotatePeriod", std::to_string(kmsRotatePeriod));
}

bool UpdateGatewayFileShareRequest::getRemoteSyncDownload()const
{
	return remoteSyncDownload_;
}

void UpdateGatewayFileShareRequest::setRemoteSyncDownload(bool remoteSyncDownload)
{
	remoteSyncDownload_ = remoteSyncDownload;
	setParameter("RemoteSyncDownload", remoteSyncDownload ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getServerSideEncryption()const
{
	return serverSideEncryption_;
}

void UpdateGatewayFileShareRequest::setServerSideEncryption(bool serverSideEncryption)
{
	serverSideEncryption_ = serverSideEncryption;
	setParameter("ServerSideEncryption", serverSideEncryption ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getNfsV4Optimization()const
{
	return nfsV4Optimization_;
}

void UpdateGatewayFileShareRequest::setNfsV4Optimization(bool nfsV4Optimization)
{
	nfsV4Optimization_ = nfsV4Optimization;
	setParameter("NfsV4Optimization", nfsV4Optimization ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getAccessBasedEnumeration()const
{
	return accessBasedEnumeration_;
}

void UpdateGatewayFileShareRequest::setAccessBasedEnumeration(bool accessBasedEnumeration)
{
	accessBasedEnumeration_ = accessBasedEnumeration;
	setParameter("AccessBasedEnumeration", accessBasedEnumeration ? "true" : "false");
}

std::string UpdateGatewayFileShareRequest::getGatewayId()const
{
	return gatewayId_;
}

void UpdateGatewayFileShareRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

bool UpdateGatewayFileShareRequest::getIgnoreDelete()const
{
	return ignoreDelete_;
}

void UpdateGatewayFileShareRequest::setIgnoreDelete(bool ignoreDelete)
{
	ignoreDelete_ = ignoreDelete;
	setParameter("IgnoreDelete", ignoreDelete ? "true" : "false");
}

long UpdateGatewayFileShareRequest::getLagPeriod()const
{
	return lagPeriod_;
}

void UpdateGatewayFileShareRequest::setLagPeriod(long lagPeriod)
{
	lagPeriod_ = lagPeriod;
	setParameter("LagPeriod", std::to_string(lagPeriod));
}

bool UpdateGatewayFileShareRequest::getDirectIO()const
{
	return directIO_;
}

void UpdateGatewayFileShareRequest::setDirectIO(bool directIO)
{
	directIO_ = directIO;
	setParameter("DirectIO", directIO ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getClientSideEncryption()const
{
	return clientSideEncryption_;
}

void UpdateGatewayFileShareRequest::setClientSideEncryption(bool clientSideEncryption)
{
	clientSideEncryption_ = clientSideEncryption;
	setParameter("ClientSideEncryption", clientSideEncryption ? "true" : "false");
}

std::string UpdateGatewayFileShareRequest::getCacheMode()const
{
	return cacheMode_;
}

void UpdateGatewayFileShareRequest::setCacheMode(const std::string& cacheMode)
{
	cacheMode_ = cacheMode;
	setParameter("CacheMode", cacheMode);
}

int UpdateGatewayFileShareRequest::getDownloadLimit()const
{
	return downloadLimit_;
}

void UpdateGatewayFileShareRequest::setDownloadLimit(int downloadLimit)
{
	downloadLimit_ = downloadLimit;
	setParameter("DownloadLimit", std::to_string(downloadLimit));
}

std::string UpdateGatewayFileShareRequest::getReadOnlyUserList()const
{
	return readOnlyUserList_;
}

void UpdateGatewayFileShareRequest::setReadOnlyUserList(const std::string& readOnlyUserList)
{
	readOnlyUserList_ = readOnlyUserList;
	setParameter("ReadOnlyUserList", readOnlyUserList);
}

bool UpdateGatewayFileShareRequest::getFastReclaim()const
{
	return fastReclaim_;
}

void UpdateGatewayFileShareRequest::setFastReclaim(bool fastReclaim)
{
	fastReclaim_ = fastReclaim;
	setParameter("FastReclaim", fastReclaim ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getWindowsAcl()const
{
	return windowsAcl_;
}

void UpdateGatewayFileShareRequest::setWindowsAcl(bool windowsAcl)
{
	windowsAcl_ = windowsAcl;
	setParameter("WindowsAcl", windowsAcl ? "true" : "false");
}

std::string UpdateGatewayFileShareRequest::getName()const
{
	return name_;
}

void UpdateGatewayFileShareRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateGatewayFileShareRequest::getIndexId()const
{
	return indexId_;
}

void UpdateGatewayFileShareRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

bool UpdateGatewayFileShareRequest::getTransferAcceleration()const
{
	return transferAcceleration_;
}

void UpdateGatewayFileShareRequest::setTransferAcceleration(bool transferAcceleration)
{
	transferAcceleration_ = transferAcceleration;
	setParameter("TransferAcceleration", transferAcceleration ? "true" : "false");
}

bool UpdateGatewayFileShareRequest::getRemoteSync()const
{
	return remoteSync_;
}

void UpdateGatewayFileShareRequest::setRemoteSync(bool remoteSync)
{
	remoteSync_ = remoteSync;
	setParameter("RemoteSync", remoteSync ? "true" : "false");
}

int UpdateGatewayFileShareRequest::getFrontendLimit()const
{
	return frontendLimit_;
}

void UpdateGatewayFileShareRequest::setFrontendLimit(int frontendLimit)
{
	frontendLimit_ = frontendLimit;
	setParameter("FrontendLimit", std::to_string(frontendLimit));
}

