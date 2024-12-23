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

#ifndef ALIBABACLOUD_ALB_MODEL_CREATELISTENERREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_CREATELISTENERREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT CreateListenerRequest : public RpcServiceRequest {
public:
	struct QuicConfig {
		bool quicUpgradeEnabled;
		std::string quicListenerId;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct DefaultActions {
		struct ForwardGroupConfig {
			struct ServerGroupTuplesItem {
				std::string serverGroupId;
			};
			ServerGroupTuplesItem serverGroupTuplesItem;
			std::vector<ServerGroupTuplesItem> serverGroupTuples;
		};
		ForwardGroupConfig forwardGroupConfig;
		std::string type;
	};
	struct CaCertificates {
		std::string certificateId;
	};
	struct XForwardedForConfig {
		std::string xForwardedForClientSourceIpsTrusted;
		std::string xForwardedForClientCertSubjectDNAlias;
		bool xForwardedForClientSourceIpsEnabled;
		bool xForwardedForClientCertIssuerDNEnabled;
		bool xForwardedForHostEnabled;
		std::string xForwardedForProcessingMode;
		bool xForwardedForClientCertFingerprintEnabled;
		std::string xForwardedForClientCertIssuerDNAlias;
		bool xForwardedForProtoEnabled;
		std::string xForwardedForClientCertFingerprintAlias;
		bool xForwardedForClientCertClientVerifyEnabled;
		bool xForwardedForSLBPortEnabled;
		bool xForwardedForClientCertSubjectDNEnabled;
		std::string xForwardedForClientCertClientVerifyAlias;
		bool xForwardedForClientSrcPortEnabled;
		bool xForwardedForEnabled;
		bool xForwardedForSLBIdEnabled;
	};
	struct Certificates {
		std::string certificateId;
	};
	CreateListenerRequest();
	~CreateListenerRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getGzipEnabled() const;
	void setGzipEnabled(bool gzipEnabled);
	QuicConfig getQuicConfig() const;
	void setQuicConfig(const QuicConfig &quicConfig);
	bool getHttp2Enabled() const;
	void setHttp2Enabled(bool http2Enabled);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<DefaultActions> getDefaultActions() const;
	void setDefaultActions(const std::vector<DefaultActions> &defaultActions);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	int getRequestTimeout() const;
	void setRequestTimeout(int requestTimeout);
	std::vector<CaCertificates> getCaCertificates() const;
	void setCaCertificates(const std::vector<CaCertificates> &caCertificates);
	XForwardedForConfig getXForwardedForConfig() const;
	void setXForwardedForConfig(const XForwardedForConfig &xForwardedForConfig);
	std::string getListenerProtocol() const;
	void setListenerProtocol(const std::string &listenerProtocol);
	std::string getSecurityPolicyId() const;
	void setSecurityPolicyId(const std::string &securityPolicyId);
	int getIdleTimeout() const;
	void setIdleTimeout(int idleTimeout);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::vector<Certificates> getCertificates() const;
	void setCertificates(const std::vector<Certificates> &certificates);
	std::string getListenerDescription() const;
	void setListenerDescription(const std::string &listenerDescription);
	bool getCaEnabled() const;
	void setCaEnabled(bool caEnabled);

private:
	std::string clientToken_;
	bool gzipEnabled_;
	QuicConfig quicConfig_;
	bool http2Enabled_;
	std::vector<Tag> tag_;
	std::vector<DefaultActions> defaultActions_;
	int listenerPort_;
	bool dryRun_;
	int requestTimeout_;
	std::vector<CaCertificates> caCertificates_;
	XForwardedForConfig xForwardedForConfig_;
	std::string listenerProtocol_;
	std::string securityPolicyId_;
	int idleTimeout_;
	std::string loadBalancerId_;
	std::vector<Certificates> certificates_;
	std::string listenerDescription_;
	bool caEnabled_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_CREATELISTENERREQUEST_H_
