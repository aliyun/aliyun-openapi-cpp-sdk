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

#ifndef ALIBABACLOUD_ALB_MODEL_GETLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_ALB_MODEL_GETLISTENERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT GetListenerAttributeResult : public ServiceResult
			{
			public:
				struct AclConfig
				{
					struct AclRelation
					{
						std::string status;
						std::string aclId;
					};
					std::vector<AclRelation> aclRelations;
					std::string aclType;
				};
				struct LogConfig
				{
					struct AccessLogTracingConfig
					{
						std::string tracingType;
						int tracingSample;
						bool tracingEnabled;
					};
					bool accessLogRecordCustomizedHeadersEnabled;
					AccessLogTracingConfig accessLogTracingConfig;
				};
				struct QuicConfig
				{
					std::string quicListenerId;
					bool quicUpgradeEnabled;
				};
				struct XForwardedForConfig
				{
					bool xForwardedForClientSourceIpsEnabled;
					std::string xForwardedForClientCertFingerprintAlias;
					bool xForwardedForClientCertFingerprintEnabled;
					bool xForwardedForHostEnabled;
					std::string xForwardedForClientSourceIpsTrusted;
					std::string xForwardedForClientCertIssuerDNAlias;
					std::string xForwardedForClientCertClientVerifyAlias;
					bool xForwardedForClientCertSubjectDNEnabled;
					bool xForwardedForSLBIdEnabled;
					std::string xForwardedForClientCertSubjectDNAlias;
					bool xForwardedForProtoEnabled;
					bool xForwardedForClientSrcPortEnabled;
					bool xForwardedForEnabled;
					std::string xForwardedForProcessingMode;
					bool xForwardedForSLBPortEnabled;
					bool xForwardedForClientCertIssuerDNEnabled;
					bool xForwardedForClientCertClientVerifyEnabled;
				};
				struct Certificate
				{
					std::string certificateId;
				};
				struct Certificate1
				{
					std::string status;
					bool isDefault;
					std::string certificateId;
				};
				struct DefaultAction
				{
					struct ForwardGroupConfig
					{
						struct ServerGroupTuple
						{
							std::string serverGroupId;
						};
						std::vector<ServerGroupTuple> serverGroupTuples;
					};
					std::string type;
					ForwardGroupConfig forwardGroupConfig;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct AssociatedResource
				{
					std::string status;
					std::string associatedResourceId;
					std::string associatedMode;
					std::string associatedResourceType;
					std::string policyId;
				};


				GetListenerAttributeResult();
				explicit GetListenerAttributeResult(const std::string &payload);
				~GetListenerAttributeResult();
				bool getCaEnabled()const;
				bool getServiceManagedEnabled()const;
				int getListenerPort()const;
				int getRequestTimeout()const;
				bool getHttp2Enabled()const;
				std::vector<AssociatedResource> getAssociatedResources()const;
				std::vector<DefaultAction> getDefaultActions()const;
				std::vector<Certificate> getCertificates()const;
				int getIdleTimeout()const;
				std::string getLoadBalancerId()const;
				QuicConfig getQuicConfig()const;
				std::string getListenerProtocol()const;
				bool getGzipEnabled()const;
				std::string getListenerStatus()const;
				std::string getSecurityPolicyId()const;
				std::string getListenerDescription()const;
				AclConfig getAclConfig()const;
				std::string getServiceManagedMode()const;
				XForwardedForConfig getXForwardedForConfig()const;
				std::vector<Tag> getTags()const;
				LogConfig getLogConfig()const;
				std::vector<Certificate1> getCaCertificates()const;
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool caEnabled_;
				bool serviceManagedEnabled_;
				int listenerPort_;
				int requestTimeout_;
				bool http2Enabled_;
				std::vector<AssociatedResource> associatedResources_;
				std::vector<DefaultAction> defaultActions_;
				std::vector<Certificate> certificates_;
				int idleTimeout_;
				std::string loadBalancerId_;
				QuicConfig quicConfig_;
				std::string listenerProtocol_;
				bool gzipEnabled_;
				std::string listenerStatus_;
				std::string securityPolicyId_;
				std::string listenerDescription_;
				AclConfig aclConfig_;
				std::string serviceManagedMode_;
				XForwardedForConfig xForwardedForConfig_;
				std::vector<Tag> tags_;
				LogConfig logConfig_;
				std::vector<Certificate1> caCertificates_;
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_GETLISTENERATTRIBUTERESULT_H_