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

#ifndef ALIBABACLOUD_NLB_MODEL_GETLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_NLB_MODEL_GETLISTENERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT GetListenerAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};


				GetListenerAttributeResult();
				explicit GetListenerAttributeResult(const std::string &payload);
				~GetListenerAttributeResult();
				std::string getMessage()const;
				int getCps()const;
				int getIdleTimeout()const;
				std::string getLoadBalancerId()const;
				std::string getDynamicMessage()const;
				std::string getListenerProtocol()const;
				bool getSuccess()const;
				std::string getSecurityPolicyId()const;
				std::string getListenerStatus()const;
				std::string getListenerDescription()const;
				std::string getAlpnPolicy()const;
				std::vector<std::string> getCaCertificateIds()const;
				std::vector<std::string> getCertificateIds()const;
				int getHttpStatusCode()const;
				bool getSecSensorEnabled()const;
				std::string getDynamicCode()const;
				std::vector<Tag> getTags()const;
				bool getCaEnabled()const;
				int getListenerPort()const;
				std::string getStartPort()const;
				std::string getServerGroupId()const;
				int getMss()const;
				std::string getCode()const;
				std::string getEndPort()const;
				bool getProxyProtocolEnabled()const;
				std::string getRegionId()const;
				std::string getListenerId()const;
				bool getAlpnEnabled()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int cps_;
				int idleTimeout_;
				std::string loadBalancerId_;
				std::string dynamicMessage_;
				std::string listenerProtocol_;
				bool success_;
				std::string securityPolicyId_;
				std::string listenerStatus_;
				std::string listenerDescription_;
				std::string alpnPolicy_;
				std::vector<std::string> caCertificateIds_;
				std::vector<std::string> certificateIds_;
				int httpStatusCode_;
				bool secSensorEnabled_;
				std::string dynamicCode_;
				std::vector<Tag> tags_;
				bool caEnabled_;
				int listenerPort_;
				std::string startPort_;
				std::string serverGroupId_;
				int mss_;
				std::string code_;
				std::string endPort_;
				bool proxyProtocolEnabled_;
				std::string regionId_;
				std::string listenerId_;
				bool alpnEnabled_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_GETLISTENERATTRIBUTERESULT_H_