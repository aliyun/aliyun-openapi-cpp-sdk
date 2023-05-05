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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYPOLICYGROUPREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYPOLICYGROUPREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyPolicyGroupRequest : public RpcServiceRequest {
public:
	struct RevokeSecurityPolicyRule {
		std::string portRange;
		std::string ipProtocol;
		std::string description;
		std::string type;
		std::string priority;
		std::string cidrIp;
		std::string policy;
	};
	struct AuthorizeSecurityPolicyRule {
		std::string portRange;
		std::string ipProtocol;
		std::string description;
		std::string type;
		std::string priority;
		std::string cidrIp;
		std::string policy;
	};
	struct NetRedirectRule {
		std::string ruleType;
		std::string domain;
		std::string policy;
	};
	struct RevokeAccessPolicyRule {
		std::string description;
		std::string cidrIp;
	};
	struct DomainResolveRule {
		std::string domain;
		std::string description;
		std::string policy;
	};
	struct AuthorizeAccessPolicyRule {
		std::string description;
		std::string cidrIp;
	};
	struct ClientType {
		std::string clientType;
		std::string status;
	};
	struct UsbSupplyRedirectRule {
		std::string productId;
		std::string deviceSubclass;
		long usbRedirectType;
		std::string vendorId;
		std::string description;
		std::string deviceClass;
		long usbRuleType;
	};
	ModifyPolicyGroupRequest();
	~ModifyPolicyGroupRequest();
	long getRecordingExpires() const;
	void setRecordingExpires(long recordingExpires);
	std::vector<RevokeSecurityPolicyRule> getRevokeSecurityPolicyRule() const;
	void setRevokeSecurityPolicyRule(const std::vector<RevokeSecurityPolicyRule> &revokeSecurityPolicyRule);
	std::string getPrinterRedirection() const;
	void setPrinterRedirection(const std::string &printerRedirection);
	std::vector<std::string> getPreemptLoginUser() const;
	void setPreemptLoginUser(const std::vector<std::string> &preemptLoginUser);
	std::string getDomainList() const;
	void setDomainList(const std::string &domainList);
	std::string getNetRedirect() const;
	void setNetRedirect(const std::string &netRedirect);
	std::string getLocalDrive() const;
	void setLocalDrive(const std::string &localDrive);
	int getWatermarkTransparencyValue() const;
	void setWatermarkTransparencyValue(int watermarkTransparencyValue);
	std::vector<AuthorizeSecurityPolicyRule> getAuthorizeSecurityPolicyRule() const;
	void setAuthorizeSecurityPolicyRule(const std::vector<AuthorizeSecurityPolicyRule> &authorizeSecurityPolicyRule);
	std::string getClipboard() const;
	void setClipboard(const std::string &clipboard);
	std::string getEndUserApplyAdminCoordinate() const;
	void setEndUserApplyAdminCoordinate(const std::string &endUserApplyAdminCoordinate);
	std::string getUsbRedirect() const;
	void setUsbRedirect(const std::string &usbRedirect);
	std::string getWatermarkType() const;
	void setWatermarkType(const std::string &watermarkType);
	std::string getRecordingStartTime() const;
	void setRecordingStartTime(const std::string &recordingStartTime);
	std::vector<NetRedirectRule> getNetRedirectRule() const;
	void setNetRedirectRule(const std::vector<NetRedirectRule> &netRedirectRule);
	int getRecordingDuration() const;
	void setRecordingDuration(int recordingDuration);
	int getWatermarkColor() const;
	void setWatermarkColor(int watermarkColor);
	int getMemoryRateLimit() const;
	void setMemoryRateLimit(int memoryRateLimit);
	std::vector<RevokeAccessPolicyRule> getRevokeAccessPolicyRule() const;
	void setRevokeAccessPolicyRule(const std::vector<RevokeAccessPolicyRule> &revokeAccessPolicyRule);
	std::string getWatermark() const;
	void setWatermark(const std::string &watermark);
	std::string getCameraRedirect() const;
	void setCameraRedirect(const std::string &cameraRedirect);
	std::vector<std::string> getMemoryProcessors() const;
	void setMemoryProcessors(const std::vector<std::string> &memoryProcessors);
	std::string getVideoRedirect() const;
	void setVideoRedirect(const std::string &videoRedirect);
	int getCpuSingleRateLimit() const;
	void setCpuSingleRateLimit(int cpuSingleRateLimit);
	std::string getAppContentProtection() const;
	void setAppContentProtection(const std::string &appContentProtection);
	std::string getCpuProtectedMode() const;
	void setCpuProtectedMode(const std::string &cpuProtectedMode);
	std::vector<DomainResolveRule> getDomainResolveRule() const;
	void setDomainResolveRule(const std::vector<DomainResolveRule> &domainResolveRule);
	std::vector<AuthorizeAccessPolicyRule> getAuthorizeAccessPolicyRule() const;
	void setAuthorizeAccessPolicyRule(const std::vector<AuthorizeAccessPolicyRule> &authorizeAccessPolicyRule);
	std::string getWatermarkTransparency() const;
	void setWatermarkTransparency(const std::string &watermarkTransparency);
	std::string getName() const;
	void setName(const std::string &name);
	int getMemorySampleDuration() const;
	void setMemorySampleDuration(int memorySampleDuration);
	std::string getPolicyGroupId() const;
	void setPolicyGroupId(const std::string &policyGroupId);
	std::string getWatermarkCustomText() const;
	void setWatermarkCustomText(const std::string &watermarkCustomText);
	int getCpuDownGradeDuration() const;
	void setCpuDownGradeDuration(int cpuDownGradeDuration);
	std::string getPreemptLogin() const;
	void setPreemptLogin(const std::string &preemptLogin);
	std::vector<ClientType> getClientType() const;
	void setClientType(const std::vector<ClientType> &clientType);
	std::vector<UsbSupplyRedirectRule> getUsbSupplyRedirectRule() const;
	void setUsbSupplyRedirectRule(const std::vector<UsbSupplyRedirectRule> &usbSupplyRedirectRule);
	int getWatermarkFontSize() const;
	void setWatermarkFontSize(int watermarkFontSize);
	std::string getRecording() const;
	void setRecording(const std::string &recording);
	std::vector<std::string> getScopeValue() const;
	void setScopeValue(const std::vector<std::string> &scopeValue);
	std::string getDomainResolveRuleType() const;
	void setDomainResolveRuleType(const std::string &domainResolveRuleType);
	int getMemorySingleRateLimit() const;
	void setMemorySingleRateLimit(int memorySingleRateLimit);
	long getRecordingFps() const;
	void setRecordingFps(long recordingFps);
	std::string getWatermarkFontStyle() const;
	void setWatermarkFontStyle(const std::string &watermarkFontStyle);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRecordContent() const;
	void setRecordContent(const std::string &recordContent);
	std::string getScope() const;
	void setScope(const std::string &scope);
	int getWatermarkRowAmount() const;
	void setWatermarkRowAmount(int watermarkRowAmount);
	std::vector<std::string> getCpuProcessors() const;
	void setCpuProcessors(const std::vector<std::string> &cpuProcessors);
	std::string getEndUserGroupCoordinate() const;
	void setEndUserGroupCoordinate(const std::string &endUserGroupCoordinate);
	double getWatermarkDegree() const;
	void setWatermarkDegree(double watermarkDegree);
	long getRecordContentExpires() const;
	void setRecordContentExpires(long recordContentExpires);
	std::string getRecordingAudio() const;
	void setRecordingAudio(const std::string &recordingAudio);
	int getCpuRateLimit() const;
	void setCpuRateLimit(int cpuRateLimit);
	std::string getRemoteCoordinate() const;
	void setRemoteCoordinate(const std::string &remoteCoordinate);
	int getCpuSampleDuration() const;
	void setCpuSampleDuration(int cpuSampleDuration);
	std::string getHtml5Access() const;
	void setHtml5Access(const std::string &html5Access);
	std::string getGpuAcceleration() const;
	void setGpuAcceleration(const std::string &gpuAcceleration);
	std::string getHtml5FileTransfer() const;
	void setHtml5FileTransfer(const std::string &html5FileTransfer);
	std::string getVisualQuality() const;
	void setVisualQuality(const std::string &visualQuality);
	std::string getRecordingEndTime() const;
	void setRecordingEndTime(const std::string &recordingEndTime);
	std::string getMemoryProtectedMode() const;
	void setMemoryProtectedMode(const std::string &memoryProtectedMode);
	int getMemoryDownGradeDuration() const;
	void setMemoryDownGradeDuration(int memoryDownGradeDuration);
	std::string getInternetCommunicationProtocol() const;
	void setInternetCommunicationProtocol(const std::string &internetCommunicationProtocol);

private:
	long recordingExpires_;
	std::vector<RevokeSecurityPolicyRule> revokeSecurityPolicyRule_;
	std::string printerRedirection_;
	std::vector<std::string> preemptLoginUser_;
	std::string domainList_;
	std::string netRedirect_;
	std::string localDrive_;
	int watermarkTransparencyValue_;
	std::vector<AuthorizeSecurityPolicyRule> authorizeSecurityPolicyRule_;
	std::string clipboard_;
	std::string endUserApplyAdminCoordinate_;
	std::string usbRedirect_;
	std::string watermarkType_;
	std::string recordingStartTime_;
	std::vector<NetRedirectRule> netRedirectRule_;
	int recordingDuration_;
	int watermarkColor_;
	int memoryRateLimit_;
	std::vector<RevokeAccessPolicyRule> revokeAccessPolicyRule_;
	std::string watermark_;
	std::string cameraRedirect_;
	std::vector<std::string> memoryProcessors_;
	std::string videoRedirect_;
	int cpuSingleRateLimit_;
	std::string appContentProtection_;
	std::string cpuProtectedMode_;
	std::vector<DomainResolveRule> domainResolveRule_;
	std::vector<AuthorizeAccessPolicyRule> authorizeAccessPolicyRule_;
	std::string watermarkTransparency_;
	std::string name_;
	int memorySampleDuration_;
	std::string policyGroupId_;
	std::string watermarkCustomText_;
	int cpuDownGradeDuration_;
	std::string preemptLogin_;
	std::vector<ClientType> clientType_;
	std::vector<UsbSupplyRedirectRule> usbSupplyRedirectRule_;
	int watermarkFontSize_;
	std::string recording_;
	std::vector<std::string> scopeValue_;
	std::string domainResolveRuleType_;
	int memorySingleRateLimit_;
	long recordingFps_;
	std::string watermarkFontStyle_;
	std::string regionId_;
	std::string recordContent_;
	std::string scope_;
	int watermarkRowAmount_;
	std::vector<std::string> cpuProcessors_;
	std::string endUserGroupCoordinate_;
	double watermarkDegree_;
	long recordContentExpires_;
	std::string recordingAudio_;
	int cpuRateLimit_;
	std::string remoteCoordinate_;
	int cpuSampleDuration_;
	std::string html5Access_;
	std::string gpuAcceleration_;
	std::string html5FileTransfer_;
	std::string visualQuality_;
	std::string recordingEndTime_;
	std::string memoryProtectedMode_;
	int memoryDownGradeDuration_;
	std::string internetCommunicationProtocol_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYPOLICYGROUPREQUEST_H_
