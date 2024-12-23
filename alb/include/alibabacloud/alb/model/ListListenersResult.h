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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTLISTENERSRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTLISTENERSRESULT_H_

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
			class ALIBABACLOUD_ALB_EXPORT ListListenersResult : public ServiceResult
			{
			public:
				struct Listener
				{
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
					int listenerPort;
					bool serviceManagedEnabled;
					int requestTimeout;
					bool http2Enabled;
					std::vector<Listener::AssociatedResource> associatedResources;
					std::vector<Listener::DefaultAction> defaultActions;
					int idleTimeout;
					std::string loadBalancerId;
					QuicConfig quicConfig;
					std::string listenerProtocol;
					bool gzipEnabled;
					std::string listenerStatus;
					std::string securityPolicyId;
					std::string listenerDescription;
					std::string serviceManagedMode;
					XForwardedForConfig xForwardedForConfig;
					std::vector<Listener::Tag> tags;
					LogConfig logConfig;
					std::string listenerId;
				};


				ListListenersResult();
				explicit ListListenersResult(const std::string &payload);
				~ListListenersResult();
				std::vector<Listener> getListeners()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Listener> listeners_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTLISTENERSRESULT_H_