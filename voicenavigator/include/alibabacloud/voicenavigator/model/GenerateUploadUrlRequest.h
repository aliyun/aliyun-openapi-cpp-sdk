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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_GENERATEUPLOADURLREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_GENERATEUPLOADURLREQUEST_H_

#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace VoiceNavigator {
namespace Model {
class ALIBABACLOUD_VOICENAVIGATOR_EXPORT GenerateUploadUrlRequest : public RpcServiceRequest {
public:
	GenerateUploadUrlRequest();
	~GenerateUploadUrlRequest();
	long getCallerParentId() const;
	void setCallerParentId(long callerParentId);
	bool getSecurityTransport() const;
	void setSecurityTransport(bool securityTransport);
	bool getProxyOriginalSecurityTransport() const;
	void setProxyOriginalSecurityTransport(bool proxyOriginalSecurityTransport);
	long getUserId() const;
	void setUserId(long userId);
	std::string getCallerType() const;
	void setCallerType(const std::string &callerType);
	std::string getCallerIp() const;
	void setCallerIp(const std::string &callerIp);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	long getInstanceOwnerId() const;
	void setInstanceOwnerId(long instanceOwnerId);
	std::string getClientIp() const;
	void setClientIp(const std::string &clientIp);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getProxyOriginalSourceIp() const;
	void setProxyOriginalSourceIp(const std::string &proxyOriginalSourceIp);
	std::string getKey() const;
	void setKey(const std::string &key);
	long getCallerUid() const;
	void setCallerUid(long callerUid);
	std::string getCallerBid() const;
	void setCallerBid(const std::string &callerBid);
	long getXspaceTenantBuId() const;
	void setXspaceTenantBuId(long xspaceTenantBuId);
	bool getMfaPresent() const;
	void setMfaPresent(bool mfaPresent);
	int getEnvironment() const;
	void setEnvironment(int environment);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);
	long getXspaceServicerId() const;
	void setXspaceServicerId(long xspaceServicerId);
	std::string getTenantName() const;
	void setTenantName(const std::string &tenantName);
	bool getProxyTrustTransportInfo() const;
	void setProxyTrustTransportInfo(bool proxyTrustTransportInfo);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	long callerParentId_;
	bool securityTransport_;
	bool proxyOriginalSecurityTransport_;
	long userId_;
	std::string callerType_;
	std::string callerIp_;
	std::string accessKeyId_;
	std::string securityToken_;
	long instanceOwnerId_;
	std::string clientIp_;
	long tenantId_;
	std::string proxyOriginalSourceIp_;
	std::string key_;
	long callerUid_;
	std::string callerBid_;
	long xspaceTenantBuId_;
	bool mfaPresent_;
	int environment_;
	std::string fileName_;
	std::string instanceId_;
	std::string requestId_;
	long xspaceServicerId_;
	std::string tenantName_;
	bool proxyTrustTransportInfo_;
	std::string userName_;
};
} // namespace Model
} // namespace VoiceNavigator
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_GENERATEUPLOADURLREQUEST_H_
