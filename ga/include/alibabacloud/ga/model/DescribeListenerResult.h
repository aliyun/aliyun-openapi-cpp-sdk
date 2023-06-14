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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBELISTENERRESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBELISTENERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeListenerResult : public ServiceResult
			{
			public:
				struct XForwardedForConfig
				{
					bool xForwardedForGaApEnabled;
					bool xForwardedForProtoEnabled;
					bool xForwardedForPortEnabled;
					bool xRealIpEnabled;
					bool xForwardedForGaIdEnabled;
				};
				struct PortRangesItem
				{
					int fromPort;
					int toPort;
				};
				struct BackendPort
				{
					std::string fromPort;
					std::string toPort;
				};
				struct Certificate
				{
					std::string type;
					std::string id;
				};
				struct RelatedAclsItem
				{
					std::string status;
					std::string aclId;
				};


				DescribeListenerResult();
				explicit DescribeListenerResult(const std::string &payload);
				~DescribeListenerResult();
				std::string getDescription()const;
				std::vector<PortRangesItem> getPortRanges()const;
				std::vector<BackendPort> getBackendPorts()const;
				std::string getCreateTime()const;
				bool getProxyProtocol()const;
				std::vector<Certificate> getCertificates()const;
				std::vector<RelatedAclsItem> getRelatedAcls()const;
				std::string getName()const;
				std::string getSecurityPolicyId()const;
				std::string getType()const;
				std::string getState()const;
				XForwardedForConfig getXForwardedForConfig()const;
				std::string getAclType()const;
				std::string getProtocol()const;
				std::string getAcceleratorId()const;
				std::string getListenerId()const;
				std::string getClientAffinity()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::vector<PortRangesItem> portRanges_;
				std::vector<BackendPort> backendPorts_;
				std::string createTime_;
				bool proxyProtocol_;
				std::vector<Certificate> certificates_;
				std::vector<RelatedAclsItem> relatedAcls_;
				std::string name_;
				std::string securityPolicyId_;
				std::string type_;
				std::string state_;
				XForwardedForConfig xForwardedForConfig_;
				std::string aclType_;
				std::string protocol_;
				std::string acceleratorId_;
				std::string listenerId_;
				std::string clientAffinity_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBELISTENERRESULT_H_