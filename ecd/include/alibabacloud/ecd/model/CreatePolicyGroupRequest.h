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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEPOLICYGROUPREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEPOLICYGROUPREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreatePolicyGroupRequest : public RpcServiceRequest {
public:
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
	struct AuthorizeSecurityPolicyRule {
		std::string portRange;
		std::string ipProtocol;
		std::string description;
		std::string type;
		std::string priority;
		std::string cidrIp;
		std::string policy;
	};
	struct AuthorizeAccessPolicyRule {
		std::string description;
		std::string cidrIp;
	};
	CreatePolicyGroupRequest();
	~CreatePolicyGroupRequest();
	std::string getWatermarkCustomText() const;
	void setWatermarkCustomText(const std::string &watermarkCustomText);
	std::string getPreemptLogin() const;
	void setPreemptLogin(const std::string &preemptLogin);
	long getRecordingExpires() const;
	void setRecordingExpires(long recordingExpires);
	std::vector<ClientType> getClientType() const;
	void setClientType(const std::vector<ClientType> &clientType);
	std::vector<UsbSupplyRedirectRule> getUsbSupplyRedirectRule() const;
	void setUsbSupplyRedirectRule(const std::vector<UsbSupplyRedirectRule> &usbSupplyRedirectRule);
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
	std::vector<AuthorizeSecurityPolicyRule> getAuthorizeSecurityPolicyRule() const;
	void setAuthorizeSecurityPolicyRule(const std::vector<AuthorizeSecurityPolicyRule> &authorizeSecurityPolicyRule);
	std::string getRecording() const;
	void setRecording(const std::string &recording);
	std::string getClipboard() const;
	void setClipboard(const std::string &clipboard);
	long getRecordingFps() const;
	void setRecordingFps(long recordingFps);
	std::string getUsbRedirect() const;
	void setUsbRedirect(const std::string &usbRedirect);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getWatermarkType() const;
	void setWatermarkType(const std::string &watermarkType);
	std::string getRecordingStartTime() const;
	void setRecordingStartTime(const std::string &recordingStartTime);
	std::string getRecordContent() const;
	void setRecordContent(const std::string &recordContent);
	long getRecordContentExpires() const;
	void setRecordContentExpires(long recordContentExpires);
	std::string getWatermark() const;
	void setWatermark(const std::string &watermark);
	std::string getCameraRedirect() const;
	void setCameraRedirect(const std::string &cameraRedirect);
	std::string getRemoteCoordinate() const;
	void setRemoteCoordinate(const std::string &remoteCoordinate);
	std::string getHtml5Access() const;
	void setHtml5Access(const std::string &html5Access);
	std::string getGpuAcceleration() const;
	void setGpuAcceleration(const std::string &gpuAcceleration);
	std::string getHtml5FileTransfer() const;
	void setHtml5FileTransfer(const std::string &html5FileTransfer);
	std::string getAppContentProtection() const;
	void setAppContentProtection(const std::string &appContentProtection);
	std::vector<AuthorizeAccessPolicyRule> getAuthorizeAccessPolicyRule() const;
	void setAuthorizeAccessPolicyRule(const std::vector<AuthorizeAccessPolicyRule> &authorizeAccessPolicyRule);
	std::string getVisualQuality() const;
	void setVisualQuality(const std::string &visualQuality);
	std::string getWatermarkTransparency() const;
	void setWatermarkTransparency(const std::string &watermarkTransparency);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getRecordingEndTime() const;
	void setRecordingEndTime(const std::string &recordingEndTime);

private:
	std::string watermarkCustomText_;
	std::string preemptLogin_;
	long recordingExpires_;
	std::vector<ClientType> clientType_;
	std::vector<UsbSupplyRedirectRule> usbSupplyRedirectRule_;
	std::string printerRedirection_;
	std::vector<std::string> preemptLoginUser_;
	std::string domainList_;
	std::string netRedirect_;
	std::string localDrive_;
	std::vector<AuthorizeSecurityPolicyRule> authorizeSecurityPolicyRule_;
	std::string recording_;
	std::string clipboard_;
	long recordingFps_;
	std::string usbRedirect_;
	std::string regionId_;
	std::string watermarkType_;
	std::string recordingStartTime_;
	std::string recordContent_;
	long recordContentExpires_;
	std::string watermark_;
	std::string cameraRedirect_;
	std::string remoteCoordinate_;
	std::string html5Access_;
	std::string gpuAcceleration_;
	std::string html5FileTransfer_;
	std::string appContentProtection_;
	std::vector<AuthorizeAccessPolicyRule> authorizeAccessPolicyRule_;
	std::string visualQuality_;
	std::string watermarkTransparency_;
	std::string name_;
	std::string recordingEndTime_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEPOLICYGROUPREQUEST_H_
